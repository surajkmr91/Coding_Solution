

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class max_heap {
    private :
        vector<int> A;
    public :
        void insert(int x){
            A.push_back(x);
            int n = A.size();
            check_parent(n);
        }
        void check_parent(int n){
            if (n>1 && A[n-1] > A[n/2 -1]){
                swap(A[n-1], A[n/2-1]);
                check_parent(n/2);
            }
            return;
        }
        void pop(){
            int temp = A.size();
            if (temp==0) {
                cout<<"EMPTY";
                return ;
            }
            if (temp == 1) {
                A.pop_back();
                return;
            }
            A[0] = A[temp-1];
            A.pop_back();
            heapify(1, A.size());
        }
        void heapify(int st, int temp){
            //if (2*st +1 > temp-1) return;
            int p = st;
            if (2*st <= temp && A[2*st-1] > A[p-1]){
                p = 2*st;    
            }
            if (2*st+1 <= temp && A[2*st] > A[p-1]){
                p = 2*st+1 ;
            }
            if (p!=st){
                swap(A[p-1],A[st-1]);
                heapify(p,temp);
            }
            else return;
        }
        void top(){
           cout<<A[0]<<endl; 
        }
        void print(){
            for (int i = 0; i<A.size(); i++){
                cout<<A[i]<<" ";
            }
            cout<<endl;
        }
};

int main()
{
    cout<<"Hello World";
    max_heap hp;
    hp.insert(100);
    hp.insert(120);
    hp.insert(20);
    hp.insert(240);
    hp.insert(10);
    hp.print();
    hp.pop();
    hp.print();
    hp.top();
    hp.pop();
    hp.print();
    hp.top();
    hp.pop();
    hp.print();
    hp.top();
    hp.pop();
    hp.print();
    hp.top();
    hp.pop();
    hp.print();
    hp.top();
    hp.pop();
    hp.print();
    hp.top();
    hp.print();
    return 0;
}
