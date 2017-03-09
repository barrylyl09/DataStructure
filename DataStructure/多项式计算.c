//
//  多项式计算.c
//  DataStructure
//
//  Created by lyl on 2017/3/9.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>
#include <math.h>
/*
 f(x) = a0 + a1x + an-1*x^n-1 + an*x^n
 两种方式，第二种为优解
 */

//1.
double f1(int n, double a[], double x)
{
    int i;
    double p = a[0];
    for (i = 1; i <= n; i++)
        p += (a[i] * pow(x,i)); //pow -> 阶乘 阶数：i
    return p;
}

//2.
double f2(int n, double a[], double x)
{
    int i;
    double p = a[n];
    for (i=n; i>0; i--)
        p = a[i-1] + x*p;
    return p;
}
