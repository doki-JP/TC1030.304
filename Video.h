#ifndef Videos
#define videos
#include <iostream>
using namespace std;

class Video{
    private:
        string genero;
        string titulo;
        string ID;
        float duracion_minutos;
        float rating;
    public:
        Video();
        Video(string Tit, string gnro, string identi);
        Video(string Tit, string gnro, string identi, float estrellas,float drcnmin);
        virtual void AgregaContenido(string){};
        string BuscarContenido(string ID){};
        float ObtenerRating(){return rating;};
        string MostrarVideos(){};
        void AñadirRating(float estrellas){};
        string getGenero(){return genero;};
        string getTitulo(){return titulo;};
        void setTitulo(string tit){titulo=tit;};
        void setGenero(string gnro){genero=gnro;};
};
Video::Video(string Tit, string gnro, string identi){
    titulo =Tit;
    genero=gnro;
    ID=identi;
}
Video::Video(string Tit, string gnro, string identi, float estrellas, float duracnmin){
    titulo =Tit;
    genero=gnro;
    ID=identi;
    rating=estrellas;
    duracion_minutos=duracnmin;
}
Video::Video(){
    titulo= "";
    genero="";
    ID="";
}


#endif
