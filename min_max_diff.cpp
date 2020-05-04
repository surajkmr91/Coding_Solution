#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int num;
	int max_val = -1e9;
	int min_val = 1e9;
	for (int i = 0; i<n; i++){
		cin>>num;
		if (num%2==0) {
			max_val = max(num, max_val);
		}
		if (num%2==0){
			min_val = min(num, min_val);
		}
	}
	if (min_val == 1e9 && max_val== -1e9) cout<< "even number not exist";
	else cout<<(max_val - min_val);
	return 0;
}