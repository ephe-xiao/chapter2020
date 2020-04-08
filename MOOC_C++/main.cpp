//
//  main.cpp
//  MOOC_C++
//
//  Created by ephe on 2020/4/4.
//  Copyright © 2020年 xiaoqiang. All rights reserved.
//


#include "textrank.hpp"

using std::vector;


int main(int argc, const char * argv[]) {
    // insert code here...
    double d=0.2;
    vector<vector<double>> graph;
    graph.push_back({1, 2, 3});
    graph.push_back({2, 4, 5});
    graph.push_back({3, 5, 7});
    std::cout << "Hello world!" << "\n";
    TextRank c1(graph, d);
    return 0;
};
