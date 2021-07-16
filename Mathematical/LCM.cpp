#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b){
	int count = 0;
	int c = max(a,b);
	while(true){
		if(c%a==0 && c%b==0){
			break;
		}
		c++;
	}
	return c;
}

int main(){
	int a,b;
	cin>>a>>b;
	int c = lcm(a,b);
	cout<<c;
	return 0;
}