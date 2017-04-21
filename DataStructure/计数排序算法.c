//
//  计数排序算法.c
//  DataStructure
//
//  Created by lyl on 2017/4/21.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>

/*
 
 对于一个int数组，请编写一个计数排序算法，对数组元素排序。
 
 给定一个int数组A及数组的大小n，请返回排序后的数组。
 
 测试样例：
 [1,2,3,5,2,3],6
 
 -> [1,2,2,3,3,5]
 
 */

int* countingSort(int* A, int n) {
    int arr[1000];
    for (int i = 0; i < 1000; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        arr[A[i]]++;;
    }
    int k = 0;
    for (int i = 0; i < 1000; i++) {
        while (arr[i]-- != 0) {
            A[k++] = i;
        }
    }
    return A;
}
