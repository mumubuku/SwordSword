//
//  main.cpp
//  连续子数组的最大和
//
//  Created by ZHAO on 2019/11/5.
//  Copyright © 2019 123. All rights reserved.
//

/* 算法时间复杂度O（n） 用total记录累计值，maxSum记录和最大 基于思想：对于一个数A，若是A的左边累计数非负，那么加上A能使得值不小于A，认为累计值对 整体和是有贡献的。如果前几项累计值负数，则认为有害于总和，total记录当前值。 此时 若和大于maxSum 则用maxSum记录下来 */



#include <iostream>
#include <vector>

using namespace std;

int findGreatestSumOfSubArray(vector<int> array){
    int currentSum = array[0];
    int maxSum = array[0];
    for(int i=1;i<array.size();i++){
        currentSum = currentSum + array[i];
        if(currentSum < array[i]){
            currentSum = array[i];
        }
        if(maxSum < currentSum){
            maxSum = currentSum;
        }
    }
    return maxSum;
}


int main(int argc, const char * argv[]) {
    vector<int> vec;
    for (int i = 0; i< 10; i++) {
        vec.push_back(i);
    }
    int result = findGreatestSumOfSubArray(vec);
    return 0;
}
