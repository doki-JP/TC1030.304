#include "Video.h"
int main(){
    string nom;
    float rati;
    Serie *prtS =new Serie("Neon Genesis Evangelion","Accion y Mecha",169,4.25,"S01",1,26);
    //Adicion de capitulos de evangelion
    prtS->setCap(1,"El ataque del angel",1,3.85);
    prtS->setCap(2,"Un techo desconocido",1,4);
    prtS->setCap(3,"El telefono que nunca suena",1,3.85);
    prtS->setCap(4, "Lluvia, despues de la huida",1,3.8);
    prtS->setCap(5,"Rei, al otro lado de su corazon",1,3.85);
    prtS->setCap(6,"La batalla decisiva / Distrito 3 de Nuevo Tokio - Rei II",1,4.15);
    prtS->setCap(7,"Construido por los hombres",1,3.75);
    prtS->setCap(8,"Asuka llega a Japon",1,3.9);
    prtS->setCap(9,"Un instante, una mente al unisono",1,4.05);
    prtS->setCap(10,"Sumergida en el magma",1,3.7);
    prtS->setCap(11,"En las tinieblas inmoviles / Mas alla de la oscuridad",1,3.95);
    prtS->setCap(12,"El valor de un milagro",1,3.95);
    prtS->setCap(13,"La invasion del angel",1,3.8);
    prtS->setCap(14,"Seele, el lugar de los espiritus / Tejiendo una historia",1,3.5);
    prtS->setCap(15,"Mentiras y silencio / Ansia de besos",1,4.05);
    prtS->setCap(16,"Al borde de la muerte y despues, enfermedad mortal",1,4.4);
    prtS->setCap(17,"Apto para ser el cuarto elegido",1,3.8);
    prtS->setCap(18,"Elegir un destino / El juicio de la vida",1,4.45);
    prtS->setCap(19,"El combate de un muchacho / La lucha de un muchacho",1,4.6);
    prtS->setCap(20,"El espejo del alma / La forma de la mente",1,4.3);
    prtS->setCap(21,"El nacimiento de NERV",1,4.3);
    prtS->setCap(22,"Al menos actua como ser humano",1,4.3);
    prtS->setCap(23,"Rei III - Lagrimas",1,4.3);
    prtS->setCap(24,"El ultimo enviado",1,4.3);
    prtS->setCap(25,"Un mundo que se acaba",1,3.9);
    prtS->setCap(26,"La bestia que pedia amor a gritos desde el centro del mundo",1,4);
    //Añadir capitulos, puedo hacerlo funcion
    /*for (int i=1;i<=prtS->getNumCap();i++){
        
        cout<<"Aniade el titulo del capitulo "<<i<<": ";
        getline(cin,nom);
        cout<<"Aniade el rating del capitulo: ";
        cin>>rati;
        cin.ignore();
        prtS->setCap(i,nom,1,rati);
    }*/
    prtS->MostrarCapSerie("Neon Genesis Evangelion");
    Pelicula *ptrP = new Pelicula("End of Evangelion","Accion",90,4,"P01");
    ptrP->MostrarVideos();
    prtS->MostrarVideos();
    delete(prtS);
    delete(ptrP);
}
