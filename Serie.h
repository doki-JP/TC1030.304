#ifndef Serie_
#define Serie_
#include "Video.h"
#include "Episodio.h"
#include <iostream>

using namespace std;

class Serie: public Video{
    protected:
    Episodio cap;
    public:
    Serie(string Tit, string gnro,float drcnmin, float estrellas, string identi):Video(Tit, gnro,0,0,identi){}
    Serie(string Tit, string gnro,float drcnmin, float estrellas, string identi,int temp,int capi): Video(Tit, gnro,drcnmin,estrellas,identi){cap.AñadirTemp(temp);cap.AñadirCap(capi);};
    void MostrarVideos();
};
void Serie::MostrarVideos(){
    cout<<"Titulo: "<<titulo<<"\n";
    cout<<"Genero: "<<genero<<"\n";
    cout<<"Rating: "<<rating<<"\n";
    cout<<"Duración en minutos: "<<duracion_minutos<<"\n";
}

#endif
