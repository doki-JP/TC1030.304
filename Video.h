#ifndef Vide
#define vide
#include <iostream>
#include "Pelicula.h"
#include "Serie.h"

class Video {
protected:
    string genero;
    string titulo;
    string ID;
    float duracion_minutos;
    float rating;

public:
    Video(string, string, float, float, string);
    string BuscarContenido(string);
    float ObtenerRating() { return rating; }
    virtual void MostrarVideos() = 0;
    void setRating(float estrellas) { rating = estrellas; }
    string getGenero() { return genero; }
    string getTitulo() { return titulo; }
    void setTitulo(string tit) { titulo = tit; }
    void setGenero(string gnro) { genero = gnro; }
};
Video::Video(string Tit, string gnro, float drcnmin, float estrellas, string identi) {
    titulo = Tit;
    genero = gnro;
    ID = identi;
    rating = estrellas;
    duracion_minutos = drcnmin;
}

#endif
