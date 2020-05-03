/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    vector<vector<int>>A = { { 0, 1, -1 }, { 0, 2, 4 }, { 1, 2, 3 }, { 1, 3, 2 },  { 1, 4, 2 }, { 3, 2, 5 },  { 3, 1, 1 }, { 4, 3, -3 } }; 
    // mp[0][0] = 0;
    // mp[0][1] = INT_MAX;
    // mp[0][2] = INT_MAX;
    // mp[0][3] = INT_MAX;
    // mp[0][4] = INT_MAX;
    int n = 5;
    vector<int> V(n,INT_MAX);
    V[0] = 0;
    int i;
    int k = A.size();
    while (--n){
        for (i = 0; i<k; i++){
            if (V[A[i][0]] + A[i][2] < V[A[i][1]]){
                
                V[A[i][1]] = V[A[i][0]] + A[i][2];
                //cout<<" "<<i<<" "<<n<<" "<<V[A[i][1]]<<" ";
            }
        }
    }
    //to check negative cycle
    for (int i = 0; i<k; i++){
    	if (V[A[i][1]] != INT_MAX && V[A[i][0]] + A[i][2] < V[A[i][1]]){
    		cout<<"negative cycle";
    		break;
    	}

    }
    n = 5;
    for (int i = 0; i<n; i++){
        cout<<V[i]<<" ";
    }
    return 0;
}
