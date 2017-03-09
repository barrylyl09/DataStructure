//
//  Clock_tick.c
//  DataStructure
//
//  Created by lyl on 2017/3/9.
//  Copyright © 2017年 lyl. All rights reserved.
//

/*
 clock(): 捕捉从程序开始运行到 clock() 被调用时所耗费的时间。时间单位：clock tick,即：时钟打点。
 CLK_TCK: 常数，机器时钟每秒所走的时钟打点数
 */

#include <stdio.h>
#include <time.h>

double CLK_TCK;
clock_t start, stop;
/* clock_t 是 clock() 函数返回的变量类型 */

double duration;
/* 记录被测函数运行时间，以秒为单位 */

void Myfunction()
{
    
}

int main ()
{
    /* 不在测试范围内的准备工作写在 clock() 调用前 */
    start = clock();    //开始计时
    Myfunction();       //测试函数
    stop = clock();     //停止时间
    duration = ((double)(stop - start))/CLK_TCK;    //计算时间，单位为秒
    
    /* 其他不在测试范围的处理写在后面，例如输出 duration 的值 */
    return 0;
}
