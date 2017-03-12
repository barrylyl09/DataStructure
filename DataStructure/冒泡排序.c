//
//  冒泡排序.c
//  DataStructure
//
//  Created by lyl on 2017/3/13.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>


int* bubbleSort(int* A, int n) {
    // write code here
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(A[j]<A[i]){
                swap(A[i],A[j]);
            }
        }
    }
    return A;
}
