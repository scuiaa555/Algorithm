//
//  main.cpp
//  Algorithm
//
//  Created by CUI Shidong on 23/4/2016.
//  Copyright © 2016 Shidong CUI. All rights reserved.
//

#include <vector>
#include <numeric>
//#include <armadillo>

//#include "sorting.h"
#include "Fibonacci.h"


//using std::vector;
//using namespace boost;
//using namespace arma;
using namespace std;

int main() {
    /* Test Fibonacci heap */

//    FibonacciHeap heap;
//    heap.insert(3);
//    heap.insert(2);
//    heap.insert(4);
//    heap.insert(1);
//    double min = heap.extract_min();
//    min = heap.extract_min();
//    min = heap.extract_min();


    /* Test armadillo package */
//
//    mat A(5,3,fill::randu);
//    //mat B;
//    //A.zeros();
//
//    cout << A << endl;
//
//    return 0;

    /* Test boost's Graph library */
//    // create a typedef for the Graph type
//    typedef adjacency_list<vecS, vecS, bidirectionalS> Graph;
//
//    // Make convenient labels for the vertices
//    enum {
//        A, B, C, D, E, N
//    };
//    const int num_vertices = N;
//    const char *name = "ABCDE";
//
//    // writing out the edges in the graph
//    typedef std::pair<int, int> Edge;
//    Edge edge_array[] =
//            {Edge(A, B), Edge(A, D), Edge(C, A), Edge(D, C),
//             Edge(C, E), Edge(B, D), Edge(D, E)};
//    const int num_edges = sizeof(edge_array) / sizeof(edge_array[0]);
//
//    // declare a graph object
//    Graph g(num_vertices);
//
//    // add the edges to the graph object
//    for (int i = 0; i < num_edges; ++i)
//        add_edge(edge_array[i].first, edge_array[i].second, g);


    /* Testing "sorting.h" */
//    vector<double> a(5);
//    a[0]=5;a[1]=3;a[2]=1;a[3]=2;a[4]=4;
//    QuickSort(a);

    return 0;
}


