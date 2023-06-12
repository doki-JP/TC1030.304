#include "Video.h"
int main(){
    string nom;
    float rati;
    Serie *prtS =new Serie("Neon Genesis Evangelion","Accion y Mecha",169,4.25,"S01",1,26);
    //Añadir capitulos, puedo hacerlo funcion
    for (int i=1;i<=prtS->getNumCap();i++){
        
        cout<<"Aniade el titulo del capitulo "<<i<<": ";
        getline(cin,nom);
        cout<<"Aniade el rating del capitulo: ";
        cin>>rati;
        prtS->setCap(i,nom,1,rati);
    }
    prtS->MostrarCapSerie("Neon Genesis Evangelion");
    Pelicula *ptrP = new Pelicula("End of Evangelion","Accion",90,4,"P01");
    ptrP->MostrarVideos();
    prtS->MostrarVideos();
    delete(prtS);
    delete(ptrP);
}
