#include <iostream>
using namespace std;
	class Estudiante {

		protected : string nombres, apellidos;
				int codigo;

		protected :	
			Estudiante (string nom, string ape, int cod){
				nombres = nom;
				apellidos = ape;
				codigo = cod;
				
				
			}	
			
	//metodo
	void mostrar();
};
