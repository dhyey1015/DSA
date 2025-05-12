#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;
    int val = nums[left];
    int repeated = 0;
    while(left < right){
        if(val == nums[right]){
            repeated = nums[right];
            break;
        }
        right--;
        if(right == left){
            left++;
            right =  nums.size() - 1;
            val = nums[left];
        }
        
    }
    return repeated;
}