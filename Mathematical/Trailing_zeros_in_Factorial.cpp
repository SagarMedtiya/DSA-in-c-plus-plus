#include<bits/stdc++.h>
using namespace std;

int trailing(long long a){
	long long count = 0;
	long long b = 1;
	if(a==0){
		count = 0;
	}
	for(int i = 2; i<=a;i++){
		b = b*i;
	}
	while(b%10==0)
	{
		count++;
		b = b/10;
	}
	return b;
}

int main(){
	int a;
	cin>>a;
	int b = trailing(a);
	cout<<b;
	return 0;
}