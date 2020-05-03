#include<bits/stdc++.h>
#include<vector>

using namespace std;
bool traverse(int x1, int x2, int y1,int y2){
	if (x1== x2 and y1==y2) return true;
	if (x1+y1 <=x2 and y1<=y2){
		traverse(x1+y1, x2, y1, y2);
	}
	if (x1+y1 <= y2 and x1<= x2){
		traverse(x1, x2, x1+y1, y2);
	}
	return false;	
}


int main (int x1, int x2, int y1,int y2){
	cin>>x1;
	cin>>x2;
	cin>>y1;
	cin>>y2;
	return traverse(x1, x2, y1, y2);
}