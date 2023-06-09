#ifndef Episodio_
#define Episodio_
#include <iostream>
using namespace std;

class Episodio{
    private:
    string NumCapitulos;
    string NumTemporadas;
    string Titulo;

    public:
    void AñadirCap(int cap);
    void AñadirTemp(int temp);
    void AñadirTitulo(string titu);
    string ObtenerTempCap(){return NumTemporadas,NumCapitulos;}
    string ObtenerTitulo(){return Titulo;}
};
void Episodio::AñadirCap(int cap){
    NumCapitulos=cap;
}
void Episodio::AñadirTemp(int temp){
    NumTemporadas=temp;
}
void Episodio::AñadirTitulo(string titu){
    Titulo=titu;
}
#endif
