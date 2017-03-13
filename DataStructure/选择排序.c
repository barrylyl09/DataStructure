//
//  选择排序.c
//  DataStructure
//
//  Created by lyl on 2017/3/14.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>

int* selectionSort(int* A, int n) {
    for(int i=0; i<n; i++) {
        int min = i;
        for(int j=i; j<n; j++) {
            if(A[j]<A[min]) min=j;
        }
        swap(A[i],A[min]);
    }
    
    return A;
}
