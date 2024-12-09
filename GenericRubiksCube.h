//
// Created by Sumit on 09-12-2024.
//

#ifndef GENERICRUBIKSCUBE_H
#define GENERICRUBIKSCUBE_H

#include<bits/stdc++.h>
using namespace std;


class RubiksCube {
public:

    enum class FACE {
        UP,
        DOWN,
        LEFT,
        RIGHT,
        FRONT,
        BACK,
    };

    enum class COLOR {
        WHITE,
        YELLOW,
        GREEN,
        BLUE,
        RED,
        ORANGE
    };

    enum class MOVE {
        U, UPRIME, U2,
        D, DPRIME, D2,
        L, LPRIME, L2,
        R, RPRIME, R2,
        F, FPRIME, F2,
        B, BPRIME, B2,
    };

    virtual RubiksCube &u() = 0;

    virtual RubiksCube &uPrime() = 0;

    virtual RubiksCube &u2() = 0;

    virtual RubiksCube &d() = 0;

    virtual RubiksCube &dPrime() = 0;

    virtual RubiksCube &d2() = 0;

    virtual RubiksCube &l() = 0;

    virtual RubiksCube &lPrime() = 0;

    virtual RubiksCube &l2() = 0;

    virtual RubiksCube &r() = 0;

    virtual RubiksCube &rPrime() = 0;

    virtual RubiksCube &r2() = 0;

    virtual RubiksCube &f() = 0;

    virtual RubiksCube &fPrime() = 0;

    virtual RubiksCube &f2() = 0;

    virtual RubiksCube &b() = 0;

    virtual RubiksCube &bPrime() = 0;

    virtual RubiksCube &b2() = 0;



    void printRubiksCube() const;


    static string getMove(MOVE ind);


    virtual bool isSolved() const = 0;


    virtual COLOR getColor(FACE face, unsigned row, unsigned col) const = 0;

    static char getColorLetter(COLOR color);


    vector<MOVE> randomShuffleRubiksCube(unsigned int times);

    RubiksCube &move(MOVE ind);

    RubiksCube &invert(MOVE ind);


    string getCornerColorString(uint8_t ind) const;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation() const;


};



#endif //GENERICRUBIKSCUBE_H
