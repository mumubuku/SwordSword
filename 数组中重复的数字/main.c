//
//  main.c
//  数组中重复的数字
//
//  Created by ZHAO on 2019/11/5.
//  Copyright © 2019 123. All rights reserved.
//

/*
 在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2

 思路：比较好的思路的分析为，数组中的数字为0到n-1的范围内。如果这个数组中没有重复的数字，则对应的i位置的数据也为i。可以重排此数组，
 */


#include <stdio.h>
#include <stdbool.h>

bool duplicate(int numbers[],int length, int duplicates[]){
     //首先判断数组是否为空。
       // if(numbers )
    if(length == 0){
        duplicates[0]=-1;
        return false;
    }
    for (int i=0; i<length; i++) {
        if(numbers[i] < 0 || numbers[i] > length - 1) {
            duplicates[0] = -1;
            return false;
        }
    }
    for (int i = 0; i<length; i++) {
        while (numbers[i] != i) {
            if((numbers[i] = numbers[numbers[i]])){
                duplicates[0]=numbers[i];
                return true;
            } else {
                int temp = numbers[i];
                numbers[i] = numbers[temp];
                numbers[temp] = temp;
            }
        }
    }
    return false;
}
  

int main(int argc, const char * argv[]) {
    
    int number[6] = {0,1,2,3,4,4};
    int duplicates[1] = {};
    bool isDuplicate = duplicate(number, 6, duplicates);

    
    
}



   
