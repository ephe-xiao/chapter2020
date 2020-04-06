//
//  part01.cpp
//  In26years
//
//  Created by ephe on 2020/3/16.
//  Copyright © 2020年 xiaoqiang. All rights reserved.
//

#include "part01.hpp"

int page_5() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
    << " is " << v1 + v2 << std::endl;
    return 0;
}

int page_10(int x) {
    int sum = 0;
    while (x <= 10) {
        sum += x;
        ++x;
    }
    std::cout << " Sum of 1 to 10 inclusive is "
    << sum << std::endl;
    return 0;
}
