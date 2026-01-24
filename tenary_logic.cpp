#include<bits/stdc++.h>
using namespace std;
int a,b,c,p=1;
int main(){
	cin>>a>>c;
	while(a||c){
		b+=(c%3-a%3+3)%3*p;
		a/=3;c/=3;p*=3;
	}
	cout<<b;
	return 0;
}