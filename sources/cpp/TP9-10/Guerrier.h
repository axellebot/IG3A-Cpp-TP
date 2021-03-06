//
// Created by Axel LE BOT on 20/12/17.
//

#ifndef TP_CPP_GUERRIER_H
#define TP_CPP_GUERRIER_H

#include "Personne.h"

using namespace std;

class Guerrier : public virtual Personne {
protected:
    int pointsAttaque;
public :
    Guerrier() = delete;

    Guerrier(string nom, int pointsVie, int pointsDefense, int pointAttaque);

    ~Guerrier();

    int attaque() override;
};

#endif //TP_CPP_GUERRIER_H
