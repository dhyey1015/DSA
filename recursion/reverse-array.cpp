#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr, int left, int right){
    if(left >= right){
        return;
    }
    swap(arr[left], arr[right]);
    reverseArray(arr, left + 1, right - 1);
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 2};
    reverseArray(arr, 0,  arr.size() - 1);
    for(int num : arr){
        cout << num <<" ";
    }
    cout << endl;
    return 0;
}