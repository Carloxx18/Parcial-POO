#include "nino.cpp"
#include <iostream>
using namespace std;
class alumno : nino{

private : string codigo, int nota1, int nota2, int nota3, int nota4, int promedio;; 
		
public :

alumno(string nom,string ape,string n, int n1, int n2, int n3, int n4) : nino(nom,ape){ 
  codigo = n;
  nota1 = n1;
  nota2 = n2;
  nota3 = n3;
  nota4 = n4;
  }

  void setCodigo(string n){codigo = n;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setNota1(int n1){nota1 = n1;}
  void setNota2(int n2){nota2 = n2;}
  void setNota3(int n3){nota3 = n3;}
  void setNota4(int n4){nota4 = n5;}

  string getCodigo(){	return codigo;}
  string getNombres(){	return nombres;}
  string getApellidos(){	return apellidos;}
  string getNota1(){return nota1;}
  string getNota2(){return nota2;}
  string getNota3(){return nota3;}
  string getNota4(){return nota4;}
  
 void mostrar(){
 	promedio = (nota1+no2+nota3+nota4)/4;
 	cout<<nit<<","<<nombres<<","<<apellidos<<","<<promedio<<endl;

 	if (promedio >= 60)
 	{
 		cout<<"El estudiante aprobo"<<endl;
 	}else{
 		cout<<"El estudiante reprobo"<<endl;
 	}
 }
};
