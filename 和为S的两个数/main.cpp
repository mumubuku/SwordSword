//
//  main.cpp
//  和为S的两个数
//
//  Created by ZHAO on 2019/11/5.
//  Copyright © 2019 123. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int>  findNumbersWithSum(vector<int> array,int sum){
    vector<int> result;
    long length = array.size();
    if(length <=1 ){
        return result;
    }
    int i = 0;
    int j = length - 1;
    int Sum;
    while (i<j) {
        Sum = array[i] + array[j];
        if (Sum > sum){
            j--;
        } else if(sum > Sum){
            i++;
        } else {
            result.push_back(array[i]);
            result.push_back(array[j]);
            break;
        }
    }
    
    return result;
}


int main(int argc, const char * argv[]) {

    vector<int> vec;
    for (int i = 0; i< 5; i++) {
        vec.push_back(i);
    }
    vector<int> result;
    result = findNumbersWithSum(vec, 5);
    
    return 0;
}
