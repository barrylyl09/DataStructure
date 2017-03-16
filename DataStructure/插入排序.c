//
//  插入排序.c
//  DataStructure
//
//  Created by lyl on 2017/3/14.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>
int* insertionSort(int* A, int n) {
    for(int i=0; i<n; i++) {
        for(int j=i; j>0; j--) {
            if(A[j]<A[j-1]) swap(A[j],A[j-1]);
        }
    }
    
    return A;
}
