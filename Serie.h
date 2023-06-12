#ifndef Serie_
#define Serie_
#include "Video.h"
#include "Episodio.h"

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
    cout << "Título: " << titulo << "\n";
    cout << "Género: " << genero << "\n";
    cout << "Rating: " << rating << "\n";
    cout << "Duración en minutos: " << duracion_minutos << "\n";
}

void Serie::MostrarCapSerie(string nom) {
    cout << "Los capítulos de la serie son:\n";
    for (int i = 0; i < numC; i++) {
        cap[i].MostrarDatosCap();
        cout << "\n";
    }
}
#endif
