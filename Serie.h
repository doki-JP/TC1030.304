#ifndef Serie_
#define Serie_
#include "Episodio.h"
#include "Video.h"
#include <iostream>

using namespace std;

class Serie: public Video{
    private:
    Episodio capitulo;

    public:
    string series[100];
    Serie(string Tit, string gnro, string identi, float estrellas):Video(Tit, gnro,identi){

    }
    Serie(string Tit,string gnro,string identi,float estrellas,float drcnmin): Video(Tit, gnro,identi,estrellas,drcnmin){
        
    }
};


#endif
