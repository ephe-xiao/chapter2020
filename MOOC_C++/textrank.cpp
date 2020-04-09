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

Node Node::add_edge(int x, double b){
    pair<int, double> c(x, b);
    this->sides.push_back(c);
    return *this;
};

TextRank TextRank::add_edge(int a, int b, double c){
    auto it = graph.begin();
    if ((*it).name == (a - 1)){
        (*it).add_edge(b, c);
    }
    else {
        Node n(a);
        graph.push_back(n);
        ++it;
        (*it).add_edge(b, c);
    };
    std::cout << "无向有环图初始化完成\n";
    std::cout << "顶点数:" << graph.size() << "\n";
    return *this;
};

 TextRank TextRank::graph_rank(double d){
     double r;
     for (auto it = graph.begin(); it != graph.end(); ++it){
         r = 0;
         for (auto jt = (*it).sides.begin(); jt != (*it).sides.end(); ++jt){
             r += rank[(*jt).first] * (*jt).second / weight[(*jt).first];
         }
         this->rank[it - graph.begin()] = (1 - d) * r + d;
     };
     return *this;
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
    std::cout << "Hello world!" << "\n";
    std::cout << "Hello world!" << "\n";
};
