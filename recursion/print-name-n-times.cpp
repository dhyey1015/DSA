#include <bits/stdc++.h>
using namespace std;


void print(string name, int n){
    if(n == 0){
        return;
    }
    cout << name << endl;
    print(name, n - 1);
}

// void anotherPrint(int n, int i){
//     if(i > n){
//         return;
//     }
//     cout << "dhyey" << endl;
//     anotherPrint(n, i + 1);
// }

int main(){
    string name;
    int n;
    cin >> name;
    cin >> n;

    print(name, n);
    // anotherPrint(n, 1);

    return 0;
}