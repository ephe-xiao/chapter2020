//
//  textrank.cpp
//  MOOC_C++
//
//  Created by ephe on 2020/4/8.
//  Copyright © 2020年 xiaoqiang. All rights reserved.
//

#include "textrank.hpp"

TextRank::TextRank(vector<vector<double>> A, int b){
    this->graph = A;
    this->d = b;
    for (auto it = graph.begin(); it != graph.end(); ++it){
        double w = 0;
        for (auto jt = (*it).begin();jt != (*it).end(); ++jt){
            w += *jt;
        };
        this->weight.push_back(w);
    };
    this->N = graph.size();
    std::cout << "无向有环图初始化完成\n";
    std::cout << "顶点数:" << graph.size() << "\n";
    std::cout << "边数:" << size << "\n";
};
/*
 void TextRank::_rank(){
 for (int i = 0; i <= 100; ++i){
 auto it = graph.begin();
 auto jt = rank.begin();
 for (int j = 0; j < N; ++j){
 
 };
 };
 };*/

TextRank::TextRank(){
    std::cout << "Hello world!" << "\n";
    std::cout << "Hello world!" << "\n";
};
