#include <iostream>
#include "biblioteca.hpp"
using namespace std;
int main(int argc, char** argv) {
	int num1, num2;
	cout<<"SUMA"<<endl;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	int ResulS=suma(num1, num2);
	cout<<"El resultado de la suma es: "<< ResulS<<endl;
	cout<<"DIVISION"<<endl;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	int ResulD=div(num1, num2);
	cout<<"El resultado de la division es: "<< ResulD<<endl;
	cout<<"FACTORIAL"<<endl;
	cout<<"Ingrese el numero que se desea sacar factorial"<<endl;
	cin>>num1;
	int ResulFac=fact(num1);
	cout<<"El factorial de número "<<num1<<" es: "<<ResulFac<<endl;
	system ("pause");
}
