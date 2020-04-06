//
//  main.cpp
//  MOOC_C++
//
//  Created by ephe on 2020/4/4.
//  Copyright © 2020年 xiaoqiang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int **p1, *p2;
    int v = 42, &r = v;
       p1 = &p2;
    p2 = &v;
    std::cout << p1 << "\n" << *p1 << "\n";
    std::cout << p2 << "\n" << *p2 << "\n";
    std::cout << r << "\n" << &r << "\n";
    v = 45;
    std::cout << p1 << "\n" << *p1 << "\n";
    std::cout << p2 << "\n" << *p2 << "\n";
    std::cout << r << "\n" << &r << "\n";
    r = 48;
    std::cout << p1 << "\n" << *p1 << "\n";
    std::cout << p2 << "\n" << *p2 << "\n";
    std::cout << r << "\n" << &r << "\n";
    std::cout << "Hello, World!\n";
    std::cout << v;
    return 0;
}
