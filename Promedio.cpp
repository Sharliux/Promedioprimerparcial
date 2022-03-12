#include "Estudiante.cpp"
#include <iostream>
using namespace std;

class Promedio : Estudiante {
	private : 
				float primera;
				float segunda;
				float tercera;
				float cuarta;
	public :
		Promedio(string nom, string ape, int cod,float n1,float n2,float n3,float n4) : Estudiante (nom,ape,cod){
			primera= n1;
			segunda= n2;
			tercera= n3;
			cuarta= n4;
		}
		//metodos
		//set (modificar)
		void setCodigo(int cod){codigo = cod;}
		void setNombres(string nom){nombres = nom;}
		void setApellidos(string ape){apellidos = ape;}
		void setPrimera(float n1){primera= n1;}
		void setSegunda(float n2){segunda= n2;}
		void setTercera(float n3){tercera= n3;}
		void setCuarta(float n4){cuarta= n4;}
			
		//get (mostrar)
		int getCodigo(){return codigo;}
		string getNombres(){return nombres;}
		string getApellidos(){return apellidos;}
		float getPrimera(){return primera;}
		float getSegunda(){return segunda;}
		float getTercera(){return tercera;}
		float getCuarta(){return cuarta;}
		void mostrar(){
			cout<<"______________________"<<endl;
			cout<<codigo<<","<<nombres<<","<<apellidos<<","<<","<<primera<<","<<segunda<<","<<tercera<<","<<cuarta<<endl;
		}
};

