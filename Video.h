#ifndef Videos
#define videos
#include <iostream>
#include "Pelicula.h"
#include "Serie.h"
using namespace std;

class Video{
    protected:
        string genero;
        string titulo;
        string ID;
        float duracion_minutos;
        float rating;
    public:
        Video(string,string,float,float,string,int,int);
        Video(string, string,float, float, string);
        string BuscarContenido(string ID);
        float ObtenerRating(){return rating;};
        virtual void MostrarVideos()=0;
        void AñadirRating(float estrellas){};
        string getGenero(){return genero;};
        string getTitulo(){return titulo;};
        void setTitulo(string tit){titulo=tit;};
        void setGenero(string gnro){genero=gnro;};
};
Video::Video(string Tit, string gnro,float drcnmin, float estrellas, string identi,int temp,int capi){
    titulo =Tit;
    genero=gnro;
    ID=identi;
    rating=estrellas;
    duracion_minutos=drcnmin;
}
Video::Video(string Tit, string gnro,float drcnmin, float estrellas, string identi){
    titulo =Tit;
    genero=gnro;
    ID=identi;
    rating=estrellas;
    duracion_minutos=drcnmin;
}

#endif
