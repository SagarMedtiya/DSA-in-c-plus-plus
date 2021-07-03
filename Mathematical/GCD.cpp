#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	int mini = min(a,b);
	int i;
	while(mini>0){
		if(a%mini ==0 && b%mini ==0){
			break;
		}
		mini--;
	}
	return mini;
}

int main(){
	int a =0, b= 0;
	cin>>a>>b;
	int c =gcd(a,b);
	cout<<c;
	return 0;
}
