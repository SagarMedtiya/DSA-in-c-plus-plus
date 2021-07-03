#include<bits/stdc++.h>
using namespace std;

bool palindrome(int a){
	int b = a;
	int rev = 0;
	while(a!=0){
		rev = rev*10 +a%10;
		a = a/10;
	} 
	return (rev == b);
}

int main(){
	int a;
	cin >>a;
	bool b = palindrome(a);
	cout << b;
	return 0;
}