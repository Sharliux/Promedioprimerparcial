#include<iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "");
	float a;
	float b;
	float c;
	float d;
	float CalifAprobatoria;
	string nombre, apellido;
	int codigo;
	char continuar;
	do{
	cout<< "\nCodigo del estudiante: "<<endl;
	cin>> codigo;
	cout<< "\nNombres del estudiante: "<<endl;
	cin>> nombre;
	cout<< "\nApellidos del estudiante: "<<endl;
	cin>> apellido;
	cout << "\n\tEscribe las cuatro calificaciones obtenidas según por unidad: "<< endl;
	cout << "\nIngrese nota 1: ";
	cin >> a;
	cout << "\nIngrese nota 2: ";
	cin >> b; 
	cout << "\nIngrese nota 3: ";
	cin >> c; 
	cout << "\nIngrese nota 4: ";
	cin >> d;
	CalifAprobatoria = (a+b+c+d)/4;
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
