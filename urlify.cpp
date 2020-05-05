#include <iostream>
#include<string>
#include <vector>

using namespace std;

int main() {
	// int n;
	// cin>>n;
	// vector<string> A;
	// vector<int> B;
	int i = 0;
	string s;
	//int val;
  string t; 
  getline(cin, t);
  int tt = stoi(t);
  while(tt--){
    string s;
    getline(cin, s);
    string trash;
    getline(cin, trash);
    // s ={};
    string ans;
    bool flag = false;
    for (auto a : s){
        if (flag && a==' '){
            ans+= "%20";
            flag = false;
        }
        else if (a!= ' '){
            ans+= a;  
            flag = true;
        }
    }
    cout<<ans<<endl;
  }
	return 0;
}