//
// Created by CUI Shidong on 14/9/2016.
//

#include "Fibonacci.h"

bool FibonacciHeap::empty() const {
    return minimum_ != root_.end();
}

void FibonacciHeap::insert(double x) {
    iterType newNode = root_.insert(root_.begin(), FibonacciNode(x));
    if (minimum_ != root_.end()) {
        if (x < (minimum_->val_)) {
            minimum_ = newNode;
        }
    }
    else minimum_ = newNode;
    size_++;
}

double FibonacciHeap::extract_min() {
    if (minimum_ == root_.end()) throw ('no element in the heap so far');
    double a = minimum_->val_;
    if (!(minimum_->children_.empty())) {
        root_.merge(minimum_->children_);
    }
    root_.erase(minimum_);
    minimum_ = std::min_element(root_.begin(), root_.end());
    size_--;
    consolidate();
    return a;
}

/* implemented with iterators (better way is through pointers) */
void FibonacciHeap::consolidate() {
    std::vector<iterType> deTable;
    deTable.resize(size_,
                   root_.end()); /* the maximum degree in this F heap is size_ (this upper bound could be improved) */
    if (root_.empty()) return;
    iterType iter = root_.begin();
    while (iter != root_.end()) {
        bool incremented = false;
        unsigned long degree = iter->children_.size();
        iterType current = iter;
        while (deTable[degree] != root_.end()) {
            if (deTable[degree]->val_ < current->val_) {
                iter++;
                incremented = true;
                deTable[degree]->children_.splice(deTable[degree]->children_.begin(), root_, current);
                current = deTable[degree];
                deTable[degree] = root_.end();
                degree++;
            }
            else {
                iter++;
                incremented = true;
                current->children_.splice(current->children_.begin(), root_, deTable[degree]);
                deTable[degree] = root_.end();
                degree++;
            }
        }
        if (!incremented) { iter++; }
//        unsigned long b = root_.begin()->children_.size();
//        double c = root_.begin()->children_.begin()->val_;
        deTable[degree] = current;
    }
}


bool operator<(const FibonacciNode &lhs, const FibonacciNode &rhs) {
    return (lhs.val_ < rhs.val_);
}









