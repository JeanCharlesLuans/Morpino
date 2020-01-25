//
// Created by jean- on 25/01/2020.
//

#ifndef MORPINO_ERRTERRAIN_H
#define MORPINO_ERRTERRAIN_H

#include <exception>
#include <string>
using namespace std;

class errTerrain : public exception {

    public:
        errTerrain(int numero=0, string const& phrase="", int niveau=0) throw()
                :m_numero(numero), m_phrase(phrase), m_niveau(niveau)
        {}

        virtual const char* what() const throw() {
            return m_phrase.c_str();
        }

        int getNiveau() const throw() {
            return m_niveau;
        }

        virtual ~errTerrain() throw() {}

private:
    int m_numero;
    int m_niveau;
    string m_phrase;
};

#endif //MORPINO_ERRTERRAIN_H
