#ifndef RECRUITMENT_JPC_EC_DG_RECLUTADOR_H
#define RECRUITMENT_JPC_EC_DG_RECLUTADOR_H

#include "Candidato.h"
#include "Entrevista.h"
#include "Nacionalidad.h"
#include "PatronFactory.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>

using std::map;
using std::vector;

class Reclutador {
private:
    map<int, Candidato*> candidatos;
    vector<Nacionalidad*> nacionalidades;
    PatronFactory fabrica;
public:
    void crearCandidato();
    void aprobarCandidato(int pasaporte);
    void agendarEntrevistas(int pasaporte);
    void generarGuia(int pasaporte);
    void generarCarta(int pasaporte);
    void consultarConocimientos(int idNacion);
    bool verExisteCandidato(int pasaporte);
};


#endif //RECRUITMENT_JPC_EC_DG_RECLUTADOR_H
