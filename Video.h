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
        int rating;
    public:
        string BuscarContenido(string){};
        string ObtenerRating(){};
        string MostrarVideos(){};
        void AñadirRating(int){};
};


#endif