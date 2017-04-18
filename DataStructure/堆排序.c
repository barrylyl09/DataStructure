//
//  堆排序.c
//  DataStructure
//
//  Created by lyl on 2017/4/6.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>

void adjust(int A[],int i,int n){//对A中得前N个元素从第1个元素开始向下调整
    int child,j;
    for(j=A[i];(2*i+1)<n;i=child){
        child=2*i+1;
        if(child!=n-1&&A[child+1]>A[child])
            child++;
        if(j<A[child])
            A[i]=A[child];
        else break;
    }
    A[i]=j;
}
void Heapsort(int A[],int n){
    //建立最大堆 ---
    for(int i=(n-1)/2;i>=0;i--){//从有儿子得最后一个节点开始
        adjust(A,i,n);
    }
    for(int i=n-1;i>0;i--){//将堆顶元素A[0]与当前堆得最后一个元素A[i]换位
        int t=A[0];
        A[0]=A[i];
        A[i]=t;
        adjust(A,0,i);//将有i个节点得新堆从根节点向下调整
    }
}
int* heapSort(int* A, int n) {
    Heapsort(A,n);
    return A;
    // write code here
}

/*

 int* heapSort(int* A, int n) {
 // write code here
 for (int i = n - 1; i > 0; i--) {
 buildheap(A, i);
 swap(A[0], A[i]);
 }
 return A;
 }
 
 
 void buildheap(int* A, int n) {
 for (int i = (n - 1) / 2; i >= 0; i--) {
 int left = i * 2 + 1;
 int right = i * 2 + 2;
 int larger = 0;
 if (right <= n)
 larger = (A[left] > A[right]) ? left : right;
 else if (left <= n)
 larger = left;
 else
 continue;
 if (A[i] < A[larger])
 swap(A[i], A[larger]);
 }
 }
 
*/
