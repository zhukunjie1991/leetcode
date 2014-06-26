//
//  main.cpp
//  Longest Common Prefix
//
//  Created by zhukunjie on 14-6-25.
//  Copyright (c) 2014年 zhukunjie. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &strs){
    if (strs.size() == 0)
        return "";
    
    string prefix = strs[0];
    for (int i = 1; i < strs.size(); ++i)
    {
        if (prefix.length() == 0 || strs[i].length() == 0)
            return "";
        
        int len = prefix.length() < strs[i].length() ? prefix.length() : strs[i].length();
        
        int j;
        
        for (j = 0; j < len; ++j)
        {
            if (prefix[j] != strs[i][j])
                break;
        }
        
        prefix = prefix.substr(0,j);
        
    }
    
    return prefix;
}
int main(int argc, const char * argv[])
{
    char a[20];
    vector<string>str;
    for(int i=0;i<3;i++)
    {
        scanf("%s",a);
             str.push_back(a);
    }
    string s=longestCommonPrefix(str);
    cout<<s<<endl;
    return 0;
}

