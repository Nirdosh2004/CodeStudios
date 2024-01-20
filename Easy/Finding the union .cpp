#include<bits/stdc++.h>

vector < int > sortedArray(vector < int > a, vector < int > b) {
  //SC= O(n1+n2)
    // Write your code here
    set<int> st;
for(int i=0;i<a.size();i++){ //TC = O(n log n)
    st.insert(a[i]);
}
for(int i=0;i<b.size();i++){ // TC = O( n log n)
    st.insert(b[i]);
}
    vector<int> v;
    for(auto it : st){ //TC = O(n1+n2)
        v.push_back(it);
    }
    return v;


}
