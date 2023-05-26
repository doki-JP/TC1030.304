#ifndef Serie_
#define Serie_
#include "Episodio.h"
#include <iostream>

using namespace std;

class Serie:public Video{
    private:
    Episodio capitulo;

    public:
    string series[100];
};

#endif