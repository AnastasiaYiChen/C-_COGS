//
// Created by Yi Chen on 11/28/2020.
//

#include "Ninja.h"
/*An abstract class Piece & derived concrete pieces: Ninja*/
Ninja::Ninja()
:Piece{'N'}
{
}

Ninja::~Ninja(){}

bool Ninja::goTo(int i, int j){
    doMove(i, j);
    return true;
}

