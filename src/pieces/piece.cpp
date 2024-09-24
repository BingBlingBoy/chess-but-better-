#include "piece.h"
#include <string_view>


Piece::Piece(PieceColor piece_color, PieceType piece_type)
    : m_piece_color(piece_color), m_piece_type(piece_type)
{
}


const std::string_view Piece::getPieceColor() const
{
    switch (m_piece_color)
    {
        case PieceColor::b: return "black";
        case PieceColor::w: return "white";
        default: return "???";
    }
}

const std::string_view Piece::getPieceType() const
{
    switch (m_piece_type)
    {
        case PieceType::K: return "king";
        case PieceType::P: return "pawn";
        case PieceType::Q: return "queen";
        case PieceType::KN: return "knight";
        case PieceType::R: return "rook";
        case PieceType::B: return "rook";
        default: return "???";
    }
}
