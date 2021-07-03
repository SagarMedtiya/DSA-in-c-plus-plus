#include<bits/stdc++.h>
using namespace std;

int countDigit(long a){
	return floor(log10(a) +1);
}

int main(){
	int a;
	cin>>a;
	cout << "Number of digits : " << countDigit(a);
	return 0;
}
