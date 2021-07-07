//
// Created by Yi Chen on 11/28/2020.
//
#include "Board.h"
#include "Piece.h"


Piece::Piece(char c) :type_{c}, color_{}     /*initialization*/
{}

Piece::~Piece() {}

/*set position*//*a Piece needs to know the Board, so a ref of a pointer to Board*/
void Piece::setPos(Board * b, int x, int y) {
    myBoard_=b;
    xPos_=x;
    yPos_=y;
}

void Piece::doMove(int x, int y) {
    myBoard_->board_[x][y]= nullptr;
    std::swap(myBoard_->board_[xPos_][yPos_],myBoard_->board_[x][y]);   /*swap position*/
    xPos_=x;
    yPos_=y;
}