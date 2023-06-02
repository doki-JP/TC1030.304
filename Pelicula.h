#ifndef Pelicula_
#define Pelicula_
#include "Video.h"


#include <iostream>
using namespace std;
class Pelicula : public Video{
    private:
    string Peliculas[];
    public:
    void AgregaContenido(string);
};
void Pelicula::AgregaContenido(string){
    
}
#endif