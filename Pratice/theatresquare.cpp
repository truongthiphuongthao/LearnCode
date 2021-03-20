#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a; 
	cin >> a;
	int dt = n * m;
	int dtg = a * a;
	int sovien = dt / dtg;
	if(sovien % 2 == 0){
		sovien = sovien + 2;
	}
	else {
		sovien = sovien = 3;
	}
	cout << sovien;
}
