//
// Created by Yi Chen on 11/28/2020.
//

#ifndef M09_ALICECHESS_NINJA_H
#define M09_ALICECHESS_NINJA_H
#include "Piece.h"

class Ninja: public Piece{
public:
    Ninja();
    virtual ~Ninja();
    bool goTo(int, int);
};

#endif //M09_ALICECHESS_NINJA_H
