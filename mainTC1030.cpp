#include "Video.h"
#include <iostream>
int main(){
    Video *prtS =new Serie("Neon Genesis Evangelion","Accion y Mecha",169,4.25,"S1669",1,26);
    Video *ptrP = new Pelicula();
    ptrP->MostrarVideos();
    delete(prtS);
    delete(ptrP);
}
