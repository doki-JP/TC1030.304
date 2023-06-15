#ifndef VIDEO_H
#define VIDEO_H
#include "Episodio.h"
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
    virtual void MostrarVideos() = 0;
    string getTitulo() { return titulo; }  
};
Video::Video(string Tit, string gnro, float drcnmin, float estrellas, string identi) {
    titulo = Tit;
    genero = gnro;
    ID = identi;
    rating = estrellas;
    duracion_minutos = drcnmin;
}
string Video::BuscarContenido(string name){
    if (name==titulo){
        cout<<"Se encontro el titulo\n";
        cout << "Titulo: " << titulo << "\n";
        cout << "Genero: " << genero << "\n";
        cout << "Rating: " << rating << "\n";
        cout << "Duracion en minutos: " << duracion_minutos << "\n";
        cout<<"Tiene el ID: "<<ID<<"\n\n";
    }
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
    cout<<"Tiene el ID: "<<ID<<"\n\n";
    
}
class Serie : public Video {
protected:
    Episodio cap[100];
    int numC;

public:
    Serie(string, string, float, float, string, int, int);
    void MostrarVideos() override;
    void MostrarCapSerie();
    void setCap(int,string,int,float);
    int getNumCap(){return numC;};

};

void Serie::setCap(int epi,string tit,int temp, float rat){
    Episodio capi(epi,tit,temp,rat);
    cap[epi]=capi;
}
Serie::Serie(string Tit, string gnro, float drcnmin, float estrellas, string identi, int temp, int capi)
    : Video(Tit, gnro, drcnmin, estrellas, identi) {
    numC = capi;
}

void Serie::MostrarVideos() {
    cout << "Titulo: " << titulo << "\n";
    cout << "Genero: " << genero << "\n";
    cout << "Rating: " << rating << " estrellas\n";
    cout << "Duracion en minutos: " << duracion_minutos << "\n";
    cout<<"Tiene el ID: "<<ID<<"\n\n";
}

void Serie::MostrarCapSerie() {
    cout << "Los capitulos de la serie son:\n";
    for (int i = 1; i <= numC; i++) {
        cap[i].MostrarDatosCap();
        cout << "\n";
    }
}

#endif
