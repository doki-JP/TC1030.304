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
