#ifndef Episodio_
#define Episodio_
#include <iostream>
using namespace std;

class Episodio{
    private:
    string NumCapitulo;
    string NumTemporada;
    string Titulo;

    public:
    void AñadirCapTemp(string cap, string temp){}
    void AñadirTitulo(string titu){}
    string ObtenerCapTemp(){return NumCapitulo,NumTemporada;}
    string ObtenerTitulo(){return Titulo;}

};

#endif