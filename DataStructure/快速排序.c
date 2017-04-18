//
//  快速排序.c
//  DataStructure
//
//  Created by lyl on 2017/3/25.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>

int* quickSort(int* A, int n) {
    // write code here]
    if (A == NULL || n < 2)
        return A;
    quickSort_ab(A, 0, n - 1);
    return A;
}
void quickSort_ab(int *A, int left, int right) {
    if (left < right) {
        int mid = partition(A, left, right);
        quickSort_ab(A, left, mid);
        quickSort_ab(A, mid + 1, right);
    }
}
int partition(int *A, int left, int right) {
    int target = A[left];
    int l = left, r = right;
    while (l < r) {
        while (l < r && A[r] >= target) r--;
        if (l < r) A[l++] = A[r];
        while (l < r && A[l] <= target) l++;
        if (l < r) A[r--] = A[l];
    }
    A[l] = target;
    return l;
}
