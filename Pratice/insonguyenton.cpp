#include <bits/stdc++.h>

using namespace std;

int kiemtrasnt(int n){
	if(n < 2){
		return 0;
	}
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i == 0){
				return 0;
			}
		}
		return 1;
	}
}

void insongto(int n){
	for(int i=0; i<n; i++){
		if(kiemtrasnt(i)){
			cout << i << " ";
		}
	}
}
int main(){
	int n;
	cin >> n;
	insongto(n);
	
}
