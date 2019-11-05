//
//  main.cpp
//  和为s的连续正数序列
//
//  Created by ZHAO on 2019/11/5.
//  Copyright © 2019 123. All rights reserved.
//
//左神的思路，双指针问题
//当总和小于sum，大指针继续+
//否则小指针+
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> findContinuousSequence(int sum) {
    vector<vector<int>> allResult;
    int high = 2;
    int low = 1;
    while (high>low) {
        int tempSum = (high+low)*(high-low+1)/2;
        if(tempSum<sum){
            high++;
        }
        if(sum==tempSum){
            vector<int> res;
            for (int i=low; i<=high; i++) {
                res.push_back(i);
            }
            allResult.push_back(res);
            low++;
        }
        if (tempSum>sum) {
            low++;
        }
    }
    return allResult;
}


int main(int argc, const char * argv[]) {
   vector<int> vec;
   for (int i = 0; i< 10; i++) {
       vec.push_back(i);
   }
    vector<vector<int>> result;
    result = findContinuousSequence(9);
      
    return 0;
}
