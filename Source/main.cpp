#include <iostream>
#include "Pion/Pion.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    cout << "Creation d'un pion ..." << endl;
    Pion aTester = Pion('O');
    cout << "Un pion du type " << aTester.getType() << " a ete creer !" <<endl;
    return 0;
}
