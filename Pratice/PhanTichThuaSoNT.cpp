#include<bits/stdc++.h>

using namespace std;

void insongto(int n){
	int i = 2;
	while(n > 1){
		if(n % i == 0){
			cout << i;
			if( n != i){
				cout << "x";
			}
			n = n/i;
		}
		else{
			i++;
		}	
	}
}
int main(){
	int n;
	cin >> n;
	insongto(n);
}
