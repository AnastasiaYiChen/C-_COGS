//
// Created by Yi Chen on 11/28/2020.
//

#include "Rook.h"
/*An abstract class Piece & derived concrete pieces: Rook*/
Rook::Rook()
:Piece{'R'}
{}

Rook::~Rook(){}

bool Rook::goTo(int i, int j) {
    if (i!=xPos_ and j!=yPos_) return false;

    doMove(i, j);

    return true;
}


