//
// Created by jean- on 23/01/2020.
//

#ifndef MORPINO_PION_H
#define MORPINO_PION_H


class Pion {

public:
    /**
     * Créer un pion avec un type dés sa création
     * @param newType
     */
    Pion(char newType);

    /**
     * Créer un pion avec le type null par default ('\0')
     */
    Pion();

    /**
     * @return le charactere qui definit le type du pion
     */
    char getType();

    /**
     * @param newType nouveau type du pion
     */
    void setType(char newType);

private:
    char type; /** caractere qui definit le type du pion */
};


#endif //MORPINO_PION_H
