//
//  main.cpp
//  Two Sum
//
//  Created by zhukunjie on 14-6-19.
//  Copyright (c) 2014年 zhukunjie. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iostream>
#include <assert.h>
using namespace std;
typedef struct node {
    int idx;
    int val;
}Node;
bool compare(const Node& a,Node& b)
{
    return a.val>b.val;
}
vector<int> twoSum(vector<int> &numbers, int target) {
    int len=numbers.size();
    assert(len>2);
    vector<int>(2,0);
    vector<Node> nums(len);
    sort()
    for(int i=0;i<len;i++)
         nums[i]
        
    return numbers;
}
int main(int argc, const char * argv[])
{
    vector<int>a;
    int b[4];
    for (int i=0;i<4;i++)
        scanf("%d",&b[i]);
    for (int i=0;i<4;i++)
        a.push_back(b[i]);
    twoSum(a, 9);
        return 0;
}

