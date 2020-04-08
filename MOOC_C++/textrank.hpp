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

using std::vector;

class TextRank{
private:
    int d;
    unsigned long N;
    int size;
    vector<double> rank;
    vector<double> weight;
    vector<vector<double>> graph;
public:
    TextRank();
    TextRank(vector<vector<double>> A, int b);
    //void _rank();
};

#endif /* textrank_hpp */
