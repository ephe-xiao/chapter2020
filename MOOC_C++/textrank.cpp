//
//  textrank.cpp
//  MOOC_C++
//
//  Created by ephe on 2020/4/4.
//  Copyright © 2020年 xiaoqiang. All rights reserved.
//

#include "textrank.hpp"

class Node{
public:
    int N;
    double *weight;
    Node(int num);
};

Node::Node(int num){
    this->N = num;
    this->weight = new double[num];
};

class TextRank{
private:
    int d;
    int N;
    TextRank *weight;
public:
    TextRank();
    TextRank(int a, int b);
    TextRank(int a, int b, Node weig);
    TextRank(int arr[10]);
    ~TextRank();
    double rank();
};

double TextRank::rank(){
    return 0;
};

TextRank::TextRank(int a, int b){
    N = a;  // 节点数量
    d = b;  // 阻尼系数
    node = new double[N];
    weight = new TextRank[N];
};

TextRank::~TextRank(){
    delete [] weight;
}

