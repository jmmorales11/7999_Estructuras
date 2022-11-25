#include <iostream>
int mcm(int num, int num2);
int MaxCDiv(int, int);
int mcm(int num, int num2){
	int mayor;
	int n;
	if(num>num2){
		mayor =num;
	}else{
		mayor =num2;
	}
	n=mayor;
	while ((n%num!=0)||(n%num2 !=0)){
		n=n+1;
	}
	return n;
}

int MaxCDiv(int a, int b){
	if (a==0){
		return b;
	}
	return MaxCDiv(b % a, a);
}

