//
// Created by jean- on 23/01/2020.
//

#ifndef MORPINO_PION_H
#define MORPINO_PION_H


class Pion {

public:
    Pion(char newType);

    Pion();

    char getType();

    void setType(char newType);

private:
    char type;
};


#endif //MORPINO_PION_H
