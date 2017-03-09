//
//  main.c
//  DataStructure
//
//  Created by lyl on 2017/3/9.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#define max 10000
double CLK_TCK;
clock_t start, stop;
/* clock_t 是 clock() 函数返回的变量类型 */

double duration;
/* 记录被测函数运行时间，以秒为单位 */

//2.
double f2(int n, double a[], double x)
{
    int i;
    double p = a[n];
    for (i=n; i>0; i--)
        p = a[i-1] + x*p;
    return p;
}

int main ()
{
    int i;
    double a[max];
    for (i = 0; i<max; i++) a[i] = (double)i;
    
    /* 不在测试范围内的准备工作写在 clock() 调用前 */
    start = clock();    //开始计时
    f2(max -1, a, 1.1);       //测试函数
    stop = clock();     //停止时间
    duration = ((double)(stop - start))/CLK_TCK;    //计算时间，单位为秒
    
    printf("----%f",duration);
    
    /* 其他不在测试范围的处理写在后面，例如输出 duration 的值 */
    return 0;
}
