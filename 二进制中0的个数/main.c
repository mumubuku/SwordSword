//
//  main.c
//  二进制中0的个数
//
//  Created by ZHAO on 2019/10/31.
//  Copyright © 2019 123. All rights reserved.
//

#include <stdio.h>

//一般的判断一个二进制中1的个数。
int numberOf0(int num){
    int number = 0;
    while(num!=0){
        if((num & 1) != 1){
            number++;
        }
        num = num>>1;
    }
    return number;
}


int main(int argc, const char * argv[]) {
    int number = numberOf0(10);
    printf("%d",number);
    return 0;
}
