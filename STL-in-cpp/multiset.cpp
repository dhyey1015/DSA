#include <bits/stdc++.h>
using namespace std;

int main(){

    multiset<int> ms;

    //everything is same as set only it store the dublicate values
    //sorted by default

    ms.insert(1);
    ms.insert(1);
    ms.emplace(1);
    
    ms.erase(1); //will remover all 1's

    ms.erase(ms.find(1)); // will remover the first found 1

    // i guess this not allowed anymore
    // ms.erase(ms.find(1), ms.find(1)+2);


    return 0;
}