//
//  比较版本号问题-OC版.m
//  DataStructure
//
//  Created by lyl on 2017/3/9.
//  Copyright © 2017年 lyl. All rights reserved.
//

#import <Foundation/Foundation.h>


/*
###题目：
Compare two version numbers version1 and version2.
If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.

You may assume that the version strings are non-empty and contain only digits and the . character.
The . character does not represent a decimal point and is used to separate number sequences.
For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.
Here is an example of version numbers ordering:
```
0.1 < 1.1 < 1.2 < 13.37
```
 */


/**
 @return 如果版本号相等返回0，第一个版本号高于第二个，返回1，否则返回 -1.
 自己写的，如果有不完善的地方，欢迎指正。

- (int)compareVersion:(NSString *)version1 andVersion:(NSString *)version2
{
    int res = 0;
    NSArray *arry1 = [version1 componentsSeparatedByString:@"."];
    NSArray *arry2 = [version2 componentsSeparatedByString:@"."];
    NSInteger idx1 = 0;
    NSInteger idx2 = 0;
    
    while (res == 0 && (idx1 < arry1.count || idx2 < arry2.count)) {
        
        id num1 = idx1 < arry1.count ? arry1[idx1] : 0;
        id num2 = idx2 < arry2.count ? arry2[idx2] : 0;
        
        if ([num1 intValue] > [num2 intValue]) {
            res = 1;
        }else if ([num1 intValue] < [num2 intValue]) {
            res = -1;
        }
        
        idx1++;
        idx2++;
        
    }
    return res;
}
*/
