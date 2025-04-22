#include<bits/stdc++.h>
using namespace std;

int counter = 0;

void print(){
    if(counter == 4){
        return;
    }
    cout << counter << endl;
    counter++;
    print();
}


int main(){
    
    print();

    return 0;
}