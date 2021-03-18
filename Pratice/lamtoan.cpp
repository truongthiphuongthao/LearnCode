#include <bits/stdc++.h>

using namespace std;
int demSoChuSo(int a, int b){
	int nho = 0;
	int asw = 0;
	while( a != 0 || b !=0){
		int x1 = a%10;
		int x2 = b%10;
		if(x1 + x2 + nho > 9){
			nho = 1;
			asw ++;
		}
		else {
			nho = 0;
		}
		a = a/10;
		b = b/10;
	}
	return asw;
}
int main(){
	while(1){
		int a;
		cin >> a;
		int b;
		cin >> b;
		if(a == 0){
			break;
		}
		int kq = demSoChuSo(a, b);
		cout << kq << "\n";
	}

}
