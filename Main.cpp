#include "Estudiante.cpp"
#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
main(){
	setlocale(LC_ALL, "");
	string nombres,apellidos;
	int cod;
	float primera;
	float segunda;
	float tercera;
	float cuarta;
	float CalifAprobatoria;
	char continuar;
	do{
	
	cout<<"ingrese el codigo del estudiante:";
	cin>>cod;
	cout<<"Ingresar Nombres:";
	cin>>nombres;
	cout<<"Ingresar Apellidos:";
	cin>>apellidos;
		cout << "\n\tEscribe las cuatro calificaciones obtenidas según por unidad: "<< endl;
	cout << "\nIngrese nota 1: ";
	cin >> primera;
	cout << "\nIngrese nota 2: ";
	cin >> segunda; 
	cout << "\nIngrese nota 3: ";
	cin >> tercera; 
	cout << "\nIngrese nota 4: ";
	cin >> cuarta;
		CalifAprobatoria = (primera+segunda+tercera+cuarta)/4;
	if (CalifAprobatoria>=60) 
	{
		cout << "\n\tSu promedio es: " << CalifAprobatoria << " aprobó el curso" << endl;
	} else {
		cout << "\n\tSu promedio es: " << CalifAprobatoria << " no aprobó el curso" << endl;
	}
	cout<<"Desea ingresar otro estudiante? (s/n):";
		cin>>continuar;
	}while(continuar=='s' || continuar=='s');
	return 0;
	
}
