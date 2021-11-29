#ifndef RECRUITMENT_JPC_EC_DG_ENTREVISTA_H
#define RECRUITMENT_JPC_EC_DG_ENTREVISTA_H

#include "Candidato.h"
#include "Reclutador.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <fstream>
#include <map>

class Entrevista{
private:
    Candidato candidato;
public:
    string intAString(int codigo);
    string nombreMayus( string name );
    void generarGuia(int pasaporte);
};


#endif //RECRUITMENT_JPC_EC_DG_ENTREVISTA_H
