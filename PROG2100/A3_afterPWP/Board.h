//
// Created by Yi Chen on 11/28/2020.
//

#ifndef M09_ALICECHESS_BOARD_H
#define M09_ALICECHESS_BOARD_H
#include <array>
#include "Piece.h"



class Board {
public:
    Board();
    virtual ~Board();
    bool notOnBoard(int x, int y) {
        return x<0 or x>=h_ or y<0 or y>=w_;
    }
    bool place(Piece *, int, int);
    Piece * getPiece(int,int);
    void print();
    friend class Piece;
private:
    static const int w_{12};
    static const int h_{10};
    std::array<std::array<Piece*, w_>, h_> board_;
};

#endif //M09_ALICECHESS_BOARD_H
