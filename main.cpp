#include "src/definition.h"
#include "src/pieces/pawn.h"
#include <iostream>

int main()
{
    Pawn pawn {PieceColor::w, PieceType::P};
    std::cout << pawn.getPieceType() << " " << pawn.getPieceColor() << " " <<  pawn.canMove() << '\n';
}
