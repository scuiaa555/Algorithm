//
// Created by CUI Shidong on 14/9/2016.
//

#ifndef ALGORITHM_FIBONACCI_H
#define ALGORITHM_FIBONACCI_H

#include <list>
#include <vector>
#include <memory> // std::shared_ptr

class FibonacciNode {
public:
    FibonacciNode() : val_(0.0), isMarked_(false) { }

    FibonacciNode(double x) : val_(x), isMarked_(false) { }

    double val_;
    bool isMarked_;
    std::list<FibonacciNode> children_;

    friend bool operator<(const FibonacciNode &lhs, const FibonacciNode &rhs);
};

class FibonacciHeap {
public:
    typedef std::list<FibonacciNode> listType;
    typedef std::list<FibonacciNode>::iterator iterType;

    FibonacciHeap() : root_(), minimum_(root_.end()), size_(0) { }

    bool empty() const;

    void insert(double x);

    double extract_min();

    unsigned long size() const { return size_; }

private:
    listType root_;
    iterType minimum_;
    unsigned long size_;

    void consolidate();


};


#endif //ALGORITHM_FIBONACCI_H
