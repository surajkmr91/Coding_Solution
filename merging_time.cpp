

#include <bits/stdc++.h>

using namespace std;
// #define ll long long 

long long solution (vector<long long int> arr){
    long long n = arr.size();
    priority_queue <long long, vector<long long>, greater<long long> > pq;
    for (int i = 0; i<n; i++){
        pq.push(arr[i]);
    }
    long long res = 0;
    long long temp1 =0;
    long long temp2 = 0;
    long long temp3 = 0;
    while (pq.size() != 1) {
        temp1 = pq.top();
        pq.pop();
        temp2 = pq.top();
        pq.pop();
        temp3 =  temp1 + temp2;
        pq.push(temp3);
        res += temp3;
    }
    return res;
}

int main()
{
    //int k;
    vector<long long > V{100,250,1000};
    long long res = solution(V);
    cout<<res;

    return 0;
}
