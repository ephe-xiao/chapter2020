//
//  textrank.hpp
//  MOOC_C++
//
//  Created by ephe on 2020/4/8.
//  Copyright © 2020年 xiaoqiang. All rights reserved.
//

#ifndef textrank_hpp
#define textrank_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <utility>
#include <assert.h>

using namespace std;

class Node{
public:
    int name = 0;
    vector<pair<int, double>> sides;
    Node(int a);
    void add_edge(int x, double c);
};

class TextRank{
private:
    unsigned long __len__;
    vector<double> weight;
    vector<Node> graph;
public:
    vector<double> rank;
    TextRank();
    TextRank add_edge(int a, int b, double c);
    const vector<double> & graph_rank(double d);
    TextRank init_rank();
};

#endif /* textrank_hpp */
