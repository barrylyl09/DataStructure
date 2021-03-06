//
//  找出最快赛车.c
//  DataStructure
//
//  Created by lyl on 2017/4/7.
//  Copyright © 2017年 lyl. All rights reserved.
//

#include <stdio.h>

/*
 题目：有36辆自动赛车和6条跑道，没有计时器的前提下，最少用几次比赛可以筛选出最快的三辆赛车？
 
 */


/*
 思路：
 
  首先分为6组跑一次，6次
 
 A1  A2  A3  A4  A5  A6
 B1  B2  B3  B4  B5  B6
 .........
 
 每组的第一都跑一次， 一共为7次，取前三名，暂定为（A1 B1
 C1），此时第一名已经定了 为A1
 
 
 
 
 
 
 D组 E组 F组肯定直接被淘汰，他们的第一名都跑不进前三
 
 
 
 
 
 
 接着ABC组缩小范围
 
 A组 A2  A3 参加比赛，因为只有A1作为参照物，而A1是冠军 所有它俩都机会,A1>A2>A3
 B组 B1  B2 参加比赛，B3跑输 B1 B2 ，B1跑输A1,因此B2之后的拿不到前三，A1>B1>B2
 C组 C1 参加比赛，同理，A1>B1>C1
 
 
 
 最后 A2 A3 B1 B2 C1 可以决出前三  A1陪跑哈，总共为8次
 
 */
