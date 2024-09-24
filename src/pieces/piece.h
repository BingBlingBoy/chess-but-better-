#include "../definition.h"
#include <string>
#include <string_view>

#ifndef PIECE_H
#define PIECE_H


class Piece
{
protected:
    PieceColor m_piece_color {};
    PieceType m_piece_type {};

public:
    Piece(PieceColor piece_color, PieceType piece_type);

    const std::string_view getPieceColor() const;
    const std::string_view getPieceType() const;

    // virtual bool canMove() const = 0;
    virtual ~Piece() = default;
};

#endif
