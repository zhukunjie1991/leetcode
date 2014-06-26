//
//  main.cpp
//  Longest Substring Without Repeating Characters
//
//  Created by zhukunjie on 14-6-17.
//  Copyright (c) 2014年 zhukunjie. All rights reserved.
//

#include <iostream>
#include <iostream>
using namespace std;
int lengthofLongestSubstring(std::string s)
{
    const int Max=277;
    int last[Max];
    int first = -1;
    int max=0;
    memset(last, -1, sizeof(last));
    for(int i=0;i<s.size();i++)
    {
        if (last[s[i]-'a']>first) {
            first=last[s[i]-'a'];
        }
        if(i-first>max)
        {
            max=i-first;
        }
        last[s[i]-'a']=i;
    }
    return max;
}
int main(int argc, const char * argv[])
{
    string s;
    while (cin>>s) {
        cout<<lengthofLongestSubstring(s);
    }
    return 0;
}

