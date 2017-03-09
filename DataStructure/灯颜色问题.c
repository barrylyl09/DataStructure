//
//  灯颜色问题.c
//  DataStructure
//
//  Created by lyl on 2017/3/9.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>

/**
 有i栈灯，编号1-i, 按一下红，按两下绿，按三下关，只有这三种状态。第一次所有开关。第二下按下倍数是2的开关，第三次按倍数为3.第n次按倍数为n的开关。问第n次按有几个红灯？
 param i:灯数， n:按的次数
 return redNUM：红灯数
 */
int red(int n, int i)
{
    int Count = 0;
    for (int idx = 1; idx <= n; idx++) {
        if (i%idx == 0) Count++;
    }
    
    if (Count%3 == 1) return 1;
    
    return 0;
}
//n: 按的次数， i 灯总数
int getRedNum(int n, int i)
{
    int redNum = 0;
    for ( int idx = 1; idx <= i; idx++) {
        if(red(n, idx)) redNum++;
    }
    
    return redNum;
}
