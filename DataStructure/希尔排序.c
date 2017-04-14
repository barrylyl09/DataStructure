//
//  希尔排序.c
//  DataStructure
//
//  Created by lyl on 2017/4/14.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>

int* shellSort(int* A, int n) {
    if (A == NULL || n < 2)
        return A;
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; ++i) {
            for (int j = i; j >= gap && A[j - gap] > A[j]; j -= gap)
                swap(A[j - gap], A[j]);
        }
    }
    return A;
}
