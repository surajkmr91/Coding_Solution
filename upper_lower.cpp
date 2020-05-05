

#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int> &A){
    for (int i = 0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
}
void print(set<int> &st){
    for (auto a : st){
        cout<<a<<" ";
    }
}

int main()
{
    vector<int> A = {2,3,4};
    sort(A.begin(),A.end(), greater<int>());
    reverse(A.begin(),A.end());
    bool present = binary_search(A.begin(),A.end(),3); //can be implemented using algorithm.
    cout<<"Is 3 present "<<present<<endl;
    present = binary_search(A.begin(),A.end(),5);
    cout<<"Is 5 present "<<present<<endl;
    A.push_back(25);
    A.push_back(10);
    A.push_back(10);
    A.push_back(10);
    A.push_back(20);
    A.push_back(20);
    
    sort(A.begin(),A.end());
    auto it1 = lower_bound(A.begin(),A.end(),25);
    auto it2 = upper_bound(A.begin(),A.end(),24);
    cout<<*it1<<" "<<*it2<<" "<<it2-it1<<" "<<it1-A.begin()<<" "<<it2-A.begin()<<endl;
    print(A);
    cout<<endl;
    set<int> st;
    st.insert(12);
    st.insert(18);
    st.insert(9);
    st.insert(6);
    st.insert(6);
    print(st);
    
    auto it = st.find(12);
    if (it==st.end()){
        cout<<"not_found";
    }
    else cout<<endl<<*it<<endl;
    auto it3 = st.upper_bound(9);
    auto it4 = st.lower_bound(9);
    cout<<*it3<<" "<<*it4<<" ";//<<it4-it3<<endl;
    
    map<int,int> mp;
    mp.insert({40,1});
    mp.insert({20,2});
    mp.insert({30,4});
    auto it5 = mp.upper_bound(20);
    cout<<(*it5).first;//<<" "<<it5-mp.begin();
    
    return 0;
}
