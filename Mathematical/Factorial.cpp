#include<bits/stdc++.h>
using namespace std;

int Fact(int a){
	int d=1;
	if (a == 0){
		return 1;
	}
	return a*Fact(a-1);
}

int main(){
	int a;
	cin >> a;
	int b =Fact(a);
	cout<<b;
	return 0;
}