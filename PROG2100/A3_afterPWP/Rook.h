//
// Created by Yi Chen on 11/28/2020.
//

#ifndef M09_ALICECHESS_ROOK_H
#define M09_ALICECHESS_ROOK_H
#include "Piece.h"

class Rook: public Piece{
public:
    Rook();
    virtual ~Rook();
    bool goTo(int,int) override;
};

#endif //M09_ALICECHESS_ROOK_H
