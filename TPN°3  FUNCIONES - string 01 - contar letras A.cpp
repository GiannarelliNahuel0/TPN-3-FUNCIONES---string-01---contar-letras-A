//Hacer un programa en c++ que se ingrese una frase y con una función int ContarLetraA(string f) cuente la cantidad de vocales que tiene la misma
#include<iostream>
#include<string>
using namespace std;

int ContarLetraA(string f){
	int contador = 0;
	for (char c : f){
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' ){
		contador++;
	}
	
	}
	return contador;
}

int main () {
 string frase;
 int vocal;
 cout<<"ingrese una frase: ";
 getline(cin,frase);
 
 vocal=ContarLetraA(frase);
 
 cout<<"la cantidad de vocales que tiene la frase es de "<<vocal<<endl;

	
	return 0;
}