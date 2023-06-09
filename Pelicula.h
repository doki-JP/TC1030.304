#ifndef Pelicula_
#define Pelicula_
#include "Video.h"


#include <iostream>
using namespace std;
class Pelicula : public Video{
    public:
    Pelicula(string tit,string gen,float drcn,float rating, string id):Video(tit,gen,drcn,rating,id){};
    void MostrarVideos();
};
void Pelicula::MostrarVideos(){
    cout<<"Titulo: "<<titulo<<"\n";
    cout<<"Genero: "<<genero<<"\n";
    cout<<"Rating: "<<rating<<"\n";
    cout<<"Duración en minutos: "<<duracion_minutos<<"\n";
}
#endif
