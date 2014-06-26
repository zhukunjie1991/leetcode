//
//  main.cpp
//  String to Integer
//
//  Created by zhukunjie on 14-6-24.
//  Copyright (c) 2014年 zhukunjie. All rights reserved.
//

#include <iostream>
using namespace std;
int atoi(const char *str) {
    // IMPORTANT: Please reset any member data you declared, as
    // the same Solution instance will be reused for each test case.
    
    if (str == NULL)   //空字串
        return 0;
    
    //忽略前缀空格
    int i = 0;
    while (str[i] != '\0' && str[i] == ' ')
        ++i;
    
    if (str[i] == '\0')
        return 0;
    
    int max = 0x7fffffff;
    int min = 0x80000000;
    int signal = 1;
    
    //处理+、-号
    if (str[i] == '+')
    {
        signal = 1;
        ++i;
    }
    else if (str[i] == '-')
    {
        signal = -1;
        ++i;
    }
    
    //转换整数
    long long sum = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            sum = sum * 10 + signal * (str[i] - '0');
        else
            return sum;
        if (sum > max || sum < min)   //溢出处理
            return sum > 0 ? max : min;
        ++i;
    }
    return sum;
}
int main(int argc, const char * argv[])
{
    char  a[100];
    while (scanf("%s",a)) {
        printf("%d",atoi(a));
    }
    return 0;
}

