//
// Created by CUI Shidong on 7/6/2016.
//

#ifndef ALGORITHM_SORTING_H
#define ALGORITHM_SORTING_H

#include <vector>

using std::vector;


int QuickSort_Partition(vector<double> &A, int p, int r) {
    double x = A[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            double tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }
    double tmp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = tmp;
    return i + 1;
}

void QuickSort_rec(vector<double> &A, int p, int r) {
    if (p < r) {
        int q = QuickSort_Partition(A, p, r);
        QuickSort_rec(A, p, q - 1);
        QuickSort_rec(A, q + 1, r);
    }
}

void QuickSort(vector<double> &A) {
    int n = A.size();
    QuickSort_rec(A, 0, n);
}


#endif //ALGORITHM_SORTING_H
