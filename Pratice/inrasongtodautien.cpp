#include <bits/stdc++.h>

using namespace std;

int kiemtrangto(int n){
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

void insonguyentodautien(int n){
	int dem = 0;
	int i = 2;
	while(dem < n){
		if(kiemtrangto(i)){
			cout << i << " ";
			dem ++;
		}
		i++;
	}
}
int main(){
	int n;
	cin >> n;
	insonguyentodautien(n);
}
