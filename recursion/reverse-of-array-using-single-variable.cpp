#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int>& arr, int i){
    int n = arr.size();
    if(i > n/2){
        return;
    } 
    swap(arr[i], arr[n-i-1]);
    reverseArray(arr, i + 1);
}
int main(){

    vector<int> arr = {1, 2, 3, 4, 2};
    reverseArray(arr, 0);
    for(int num : arr){
        cout << num <<" ";
    }
    cout << endl;
    return 0;

    return 0;
}