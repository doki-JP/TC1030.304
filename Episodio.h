/*
    Proyecto Situación problema
    Juan Pablo Chávez Leal
    a01705408
    14/06/23
    Esta clase tiene una relación de polimorfismo hacia Serie, ya que si no existiera la clase serie, no debería existir la clase Episodio, esta clase
    hace mucho más sencilla la parte de mostrar cada capitulo, ya que podemos asignar un objeto por capítulo, es por eso que me planteé usar una lista 
    para la clase Serie. 
*/
#ifndef EPISODIO_H
#define EPISODIO_H
#include <iostream>
using namespace std;

class Episodio {
private:
    int NumTemporada;
    int numCapi;
    string Titulo;
    int rating;

public:
    Episodio();
    Episodio(int, string, int, float);
    void MostrarDatosCap();
};
Episodio::Episodio() {
    Titulo = "NA";
    NumTemporada = 1;
    rating = 0;
}

Episodio::Episodio(int numcap,string tit, int temp, float rat) {
    numCapi=numcap;
    Titulo = tit;
    NumTemporada = temp;
    rating = rat;
}
void Episodio::MostrarDatosCap() {
    cout << "El episodio "<<numCapi<<" titulado: " << Titulo << "\n";
    cout << "Tiene un rating de: " << rating << " estrellas\n";
    cout << "Y pertenece a la temporada: " << NumTemporada << "\n";
}
#endif
