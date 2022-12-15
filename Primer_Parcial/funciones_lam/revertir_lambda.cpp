#include <iostream>
#include <stdlib.h>
#include <functional>
using namespace std;
int main(int argc, char** argv){
	/*
	int n=1234;
	int inv=0;
	auto revertir=[&](auto revertir, int &inv){
		if(n==0)
		return 0;
		else{
			inv=(n%10)+(inv*10);
			n/=10;
			return revertir(revertir , inv);
		}
	};
	revertir(revertir, inv);
	cout<<inv<<"\n"<<n;*/
/*	int a=0;
	int b=0;
	[&,b](int)mutable{a=++b+a;}(4);
	cout<<a<<"\n"<<b;*/
	const std::function<int(int)>factorial=[&factorial](int n){
		return n>1?n*factorial(n-1):1;
	};
	cout<<factorial(5);

}
