#include "Frances.h"

void Frances::consultarConocimientos(){
    cout << nombrePais << endl;
    cout << "Su cultura es " << tipoCultura << "\n"
         << contactoVisual << "\n"
         << "Sus gestos mas notables son " << gestos << "\n"
         << "En cuanto al tacto, " << tacto << "\n"
         << "Su perspectiva frente al respeto es " << respeto << "\n"
         << "Gestionan el tiempo de tal manera que " << gestionTiempo << "\n"
         << "Para hablar " << estiloComunicacion << endl;
    if (tieneSiesta) {
        cout << "Su cultura tiene siestas." << "\n";
    } else {
        cout << "Su cultura no tiene siestas." << "\n";
    }
    cout << "Algunas festividades son: " << festividades << "\n";
}

Frances::~Frances() {

}