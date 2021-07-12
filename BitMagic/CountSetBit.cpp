#include<bits/stdc++.h>
using namespace std;

void coutsetbit(int a){
	int count =0;
	while(a>0){
		if((a&1) == 1){
			count++;
		}
		a=a>>1;
	}
	cout<<count;
}
int main(){
	int a;
	cin>>a;
	coutsetbit(a);
	return 0;
}