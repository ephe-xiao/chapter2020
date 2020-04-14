//
//  textrank.cpp
//  MOOC_C++
//
//  Created by ephe on 2020/4/8.
//  Copyright © 2020年 xiaoqiang. All rights reserved.
//

#include "textrank.hpp"

Node::Node(int a){
    this->name = a;
};

void Node::add_edge(int x, double b){
    pair<int, double> c(x, b);
    this->sides.push_back(c);
};

TextRank TextRank::add_edge(int a, int b, double c){ // a,b should be >= 1;
    int i = __len__;
    if (i < a){
        while (i < a){
            ++i;
            Node n(i + 1);
            graph.push_back(n);
        };
        assert(i == a);
        graph[i - 1].add_edge(b - 1, c);
    }
    else {
        graph[a - 1].add_edge(b - 1, c);
    };
    __len__ = graph.size();
    std::cout << "无向有环图插入完成\n";
    std::cout << "当前顶点数:" << __len__ << "\n";
    return *this;
};

const vector<double> & TextRank::graph_rank(double d){
     double r0;
     for (auto it = graph.begin(); it != graph.end(); ++it){
         r0 = 0;
         for (auto jt = (*it).sides.begin(); jt != (*it).sides.end(); ++jt){
             r0 += rank[(*jt).first] * (*jt).second / weight[(*jt).first];
         }
         this->rank[it - graph.begin()] = (1 - d) * r0 + d;
     };
     const vector<double> &ra = rank;
     return ra;
 };

TextRank TextRank::init_rank(){
    double w;
    for (auto it = graph.begin(); it != graph.end(); ++it){
        w = 0;
        for (auto jt = (*it).sides.begin(); jt != (*it).sides.end(); ++jt){
            w += (*jt).second;
        }
        this->weight.push_back(w);
        this->rank.push_back(1);
    };
    return *this;
};

TextRank::TextRank(){
    Node n(1);
    graph.push_back(n);
    __len__ = graph.size();
    std::cout << "Hello world!" << "\n";
    std::cout << "Hello world!" << "\n";
};
