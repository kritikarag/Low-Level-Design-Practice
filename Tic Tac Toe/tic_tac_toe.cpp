#include<bits/stdc++.h>
#include<Tic Tac Toe/tic_tac_toe.h>
class PlayingPiece{
    PieceType pieceType;
    public:
    // Constructor to initialize pieceType
    //PlayingPiece(PieceType pieceType) : pieceType(pieceType) {} ->1st way to assign
    PlayingPiece(PieceType pieceType){
        this->pieceType = pieceType; //2nd way to assign
    }
};

class PlayingPieceX : public PlayingPiece{
    public:
    PlayingPieceX(): PlayingPiece(PieceType::X){}
};

class PlayingPieceO : public PlayingPiece{
    public:
    PlayingPieceO(): PlayingPiece(PieceType::O){}
};
