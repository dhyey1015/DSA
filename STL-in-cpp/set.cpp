#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> st;
    st.insert(1);
    st.insert(2);
    st.emplace(2);
    st.insert(3);
    st.insert(4);

    auto it = st.find(2);

    auto it2 =st.find(6); // will point ot st.end();

    st.erase(5);


    //{1,2,3,4,5}
    auto it3 = st.find(2);
    auto it4 = st.find(4);
    st.erase(it3, it4); // after {1,4,5}

    auto it5 = st.lower_bound(2);
    auto it6 = st.upper_bound(3);

    return 0;
}