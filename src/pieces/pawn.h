#ifndef PAWN_H
#define PAWN_H

#include "piece.h"

class Pawn: public Piece
{
public:
    Pawn(PieceColor piece_color, PieceType piece_type);

    // bool canMove() const override;
};

#endif // !PAWN_H
