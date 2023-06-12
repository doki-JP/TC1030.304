#include "Video.h"
int main() {
    Serie *prtS = new Serie("Neon Genesis Evangelion", "Accion y Mecha", 169, 4.25, "S01", 1, 26);
    Pelicula *ptrP = new Pelicula("End of Evangelion", "Accion", 90, 4, "P01");
    ptrP->MostrarVideos();
    prtS->MostrarCapSerie("Neon Genesis Evangelion");
    delete prtS;
    delete ptrP;
}
