#include "biblioteca.hpp"
int suma(int a, int b){
	return a+b;
}
int div(int a, int b){
	if(a>=b){
		return a/b;
	}
	else{
		return b/a;
	}
}
int fact(int a){
	int RFacto=1;
	for(int n=1; n<=a; n++){
		RFacto=RFacto*n;
	}
	a=RFacto;
	return a;
}

