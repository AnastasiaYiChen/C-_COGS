//
// Created by Yi Chen on 11/28/2020.
//

#ifndef M09_ALICECHESS_PIECE_H
#define M09_ALICECHESS_PIECE_H
//#include "Board.h"

/*declaring the other class in the header (that's enough for pointers)*/
class Board;


class Piece{
public:
    Piece(char='!');
    virtual ~Piece();
    virtual char getType(){return type_;}       /*virtual can help child value though point */
    virtual char getColour(){return color_;}
    virtual void setPos(Board *, int, int);
    virtual bool goTo(int, int)=0;    /*pure virtual that base class would not have object*/

protected:
    Board * myBoard_{nullptr};
    int xPos_{-1};
    int yPos_{-1};
    void doMove(int, int);

private:
    char type_;
    char color_;
};


#endif //M09_ALICECHESS_PIECE_H
