#include "Parcial.cpp"
#include <iostream>

using namespace std;
main(){
	string codigo,nombres,apellidos;
	int telefono, nota1, nota2, nota3, nota4;
	cout<<"Ingrese el codiggo del alumno: ";
	cin>>codigo;
	cout<<"Ingrese el nombre: ";
	cin>>nombres;
	cout<<"Ingrese el apellido: ";
	cin>>apellidos;
	cout<<"Ingrese la Primer nota: ";
	cin>>nota1;
	cout<<"Ingrese la segunda nota: ";
	cin>>nota2;
	cout<<"Ingrese la tercera nota: ";
	cin>>nota3;
	cout<<"Ingrese la cuarta nota: ";
	cin>>nota4;
	alumno obj = alumno(nombres,apellidos,codigo, nota1, nota2, nota3, nota4);
	obj.mostrar();
	cout<<"ingrese el codigo: ";
	cin>>codigo;
	obj.setCodigo(codigo);
	obj.mostrar();
	
}