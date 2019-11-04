//
//  main.c
//  SwordSword
//
//  Created by ZHAO on 2019/10/31.
//  Copyright © 2019 123. All rights reserved.
//
/*
 二进制中1的个数
 */


#include <stdio.h>
//一般的判断一个二进制中1的个数。
int numberOf1(int num){
    int number = 0;
    while(num!=0){
        if((num & 1) == 1){
            number++;
        }
        num = num>>1;
    }
    return number;
}

//n&(n-1)相当于把最后的一个1变成0
int swordNumber0f1(int num){
    int number = 0;
    while (num != 0) {
        num = num &(num -1);
        number++;
    }
    return number;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //int number = numberOf1(5);
    int number = swordNumber0f1(5);
    printf("%d", number);
    
    return 0;
}



