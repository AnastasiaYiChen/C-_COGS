//
// Created by Yi Chen on 11/28/2020.
//

#include "Board.h"
#include <iostream>
#include <iomanip>

/* Constructor */
Board::Board() :board_{} {
}

/* Destructor */
Board::~Board() {
    for (auto row: board_)
        for (auto p: row)
            delete p;
}

/*place pieces in 2d array*/
bool Board::place(Piece * p, int x, int y) {

    if (notOnBoard(x,y) or board_[x][y]) return false;

    board_[x][y]=p;
    p->setPos(this, x, y);  // My Piece has this functionality...
    return true;
}

/**/
Piece * Board::getPiece(int x,int y) {
    if (notOnBoard(x,y)) return nullptr;
    return board_[x][y];
}

/*print board*/
void Board::print() {

    short i{0};
    short w{3}; // Cell width: 2 char for the contents, 1 for boarder ("|")

    std::cout << "  ";
    for (short i=0; i<w_; i++)
        std::cout << std::setw(w) << static_cast<char>(i+'A');
    std::cout << std::endl;;

    for (auto& row: board_) {
        std::cout << std::setw(w) << i++ << " ";
        for (auto& c: row )
            if (c)
                std::cout << c->getColour() << c ->getType() << "|" ;   // My Pieces can tell that
            else
                std::cout << "__" << "|";
        std::cout<< std::endl;
    }
    std::cout<< std::endl;
}