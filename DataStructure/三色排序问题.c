//
//  三色排序问题.c
//  DataStructure
//
//  Created by lyl on 2017/5/16.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>
#include <vector>
/*
 问题：有一个只由0，1，2三种元素构成的整数数组，请使用交换、原地排序而不是使用计数进行排序。
 
 给定一个只含0，1，2的整数数组A及它的大小，请返回排序后的数组。保证数组大小小于等于500。
 
 
 测试样例：
        parameters: [0,1,1,0,2,2]
        return:     [0,0,1,1,2,2]
 
 */

vector<int> sortThreeColor(vector<int> A, int n) {
    // write code here
    int i = 0;
    int l = 0;
    int r = n - 1;
    while(i <= r){
        if      (A[i] == 1) i++;
        else if (A[i] == 0) swap(A[i++], A[l++]);
        else if (A[i] == 2) swap(A[i], A[r--]);
    }
    return A;
}
