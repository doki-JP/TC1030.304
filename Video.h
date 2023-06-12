#ifndef VIDEO_H
#define VIDEO_H
#include "Episodio.h"
#include <iostream>

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

class Pelicula : public Video {
public:
    Pelicula(string, string, float, float, string);
    void MostrarVideos() override;
};
Pelicula::Pelicula(string tit, string gen, float drcn, float estrellas, string id)
    : Video(tit, gen, drcn, estrellas, id) {}

void Pelicula::MostrarVideos() {
    cout << "Titulo: " << titulo << "\n";
    cout << "Genero: " << genero << "\n";
    cout << "Rating: " << rating << "\n";
    cout << "Duracion en minutos: " << duracion_minutos << "\n";
}
class Serie : public Video {
protected:
    Episodio cap[100];
    int numC;

public:
    Serie(string, string, float, float, string, int, int);
    void MostrarVideos() override;
    void MostrarCapSerie(string);
};
Serie::Serie(string Tit, string gnro, float drcnmin, float estrellas, string identi, int temp, int capi)
    : Video(Tit, gnro, drcnmin, estrellas, identi) {
    numC = capi;
}

void Serie::MostrarVideos() {
    cout << "Titulo: " << titulo << "\n";
    cout << "Genero: " << genero << "\n";
    cout << "Rating: " << rating << "\n";
    cout << "Duracion en minutos: " << duracion_minutos << "\n";
}

void Serie::MostrarCapSerie(string nom) {
    cout << "Los capitulos de la serie son:\n";
    for (int i = 0; i < numC; i++) {
        cap[i].MostrarDatosCap();
        cout << "\n";
    }
}
#endif
