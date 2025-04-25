#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout << "give size of arr: ";
    cin >> n;

    int arr[n];
    cout << "give elements of arr: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // pre calcuation/ computation
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number of number you will ask: ";
    cin >> q;

    while(q--){
        int number;
        cout << "give a number for which you want to find frequency for";
        cin >> number;
        cout <<"frequency of the number "<< number <<" is: " << hash[number] << endl;
        // fetch
    }

    return 0;
}