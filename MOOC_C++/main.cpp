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
    double d=0.15;
    TextRank graph;
    graph.add_edge(1, 3, 1);
    graph.add_edge(2, 3, 1);
    graph.add_edge(2, 4, 1);
    graph.add_edge(3, 1, 1);
    graph.add_edge(3, 2, 1);
    graph.add_edge(4, 2, 1);
    graph = graph.init_rank();
    for (int i = 0; i <= 10; ++i){
        const vector<double> &r = graph.graph_rank(d);
        cout << "第" << i+1 << "次迭代后Rank值:\n";
        cout << r[0];
        //for (auto it = graph.rank.begin(); it != graph.rank.end(); ++it){
        //    cout << (*it) << "\t";
        //};
        cout << "\n";
    };
    return 0;
};
