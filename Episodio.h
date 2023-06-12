#ifndef Episodio_
#define Episodio_
#include <iostream>
using namespace std;

class Episodio {
private:
    string NumTemporada;
    string Titulo;
    int rating;

public:
    Episodio();
    Episodio(string, string, int);
    void MostrarDatosCap();
};
Episodio::Episodio() {
    Titulo = "NA";
    NumTemporada = "-1";
    rating = 0;
}

Episodio::Episodio(string tit, string temp, int rat) {
    Titulo = tit;
    NumTemporada = temp;
    rating = rat;
}

void Episodio::MostrarDatosCap() {
    cout << "El episodio titulado: " << Titulo << "\n";
    cout << "Tiene un rating de: " << rating << " estrellas\n";
    cout << "Y pertenece a la temporada: " << NumTemporada << "\n";
}
#endif
