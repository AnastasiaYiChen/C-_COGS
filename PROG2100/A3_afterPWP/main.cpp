/*Alice's Chess
somewhat inspired by Lewis Carroll's Through the Looking Glass
This kind game of chess is played on a chessboard, at least 8x8 in size, but sizes like 8x10, or 20x10
are OK too. At least two players are needed, each one controlling her/his "army" of chess pieces -
where such antagonistic "armies" are build of pieces of the same colour.
Using a subset of standard chess pieces (excluding pawns!) is possible and suggested; but you may
come up with your own pieces, obeying their own set of movement rules.
The game starts by secretly arranging pieces by each player within their designated parts of the board.
No more than 2 pieces of a given kind can be used, and the total number of pieces used by each player
might be limited too (sensibly).
Players execute moves in an interleaving fashion, requesting a move by specifying the start and the end
position on the board. The following may happen as a result of a move request:
• absolutely nothing, iff:
◦ the start position was empty
◦ the piece at the start position is not yours (i.e. it is an enemy piece)
◦ the piece at the start position would not be able to reach the target (end) position following
its movement rules, even on an empty board
◦ a friendly piece is blocking the move
◦ the start and the end positions specified are the same
• the piece position changes, yet the target/end position is not reached, iff:
◦ an enemy piece on the path to target was blocking the access; that enemy piece is taken out,
and its position becomes the new position of the piece on the move
◦ a friendly piece was blocking the access; then the moving piece stops right before reaching
the blocking piece (hence, no "friendly fire" allowed)
• the target (end) position is reached, possibly taking out an enemy piece that occupied that target
position
The goal is to take out all enemy pieces.
Alternate versions to consider.
• allowing for more than 2 players
• allowing for multiple move requests at each turn
• allowing for concurrent placing move requests */


#include <iostream>
using namespace std;
using namespace std;
#include <array>
#include "Board.h"
#include "Ninja.h"
#include "Rook.h"


/*implemented Rook and Ninja not do Queen and King stc. */

int   main()
{
    cout << "Alice Chess"<< endl;

    Board board;
    Piece * R{new Rook};   /*new a Rook*/
    board.place(R, 1, 3);  /*move rook to x, y position in the 2d array*/

    board.print();

    R->goTo(7,6);
    board.print();

    Piece * N{new Ninja};
    board.place(N, 2, 2);
    board.print();


    return 0;
}
