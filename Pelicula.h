#ifndef Pelicula_
#define Pelicula_
#include "Video.h"

class Pelicula : public Video {
public:
    Pelicula(string, string, float, float, string);
    void MostrarVideos() override;
};
Pelicula::Pelicula(string tit, string gen, float drcn, float estrellas, string id)
    : Video(tit, gen, drcn, estrellas, id) {}

void Pelicula::MostrarVideos() {
    cout << "Título: " << titulo << "\n";
    cout << "Género: " << genero << "\n";
    cout << "Rating: " << rating << "\n";
    cout << "Duración en minutos: " << duracion_minutos << "\n";
}
#endif
