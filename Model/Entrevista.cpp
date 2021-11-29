#include "Entrevista.h"
using namespace std;

string Entrevista::nombreMayus( string name ){
    int n = name.length();
    for(int i = 0 ; i < n ; i++){
        if(name[i]  >= 'a' && name[i]<='z' ){
            char a = name[i] - 32 ;
        }
    }
    return name;
}

string Entrevista::intAString(int codigo){
    std::string text;
    ostringstream outs;
    outs << codigo;
    text = outs.str();
    return text;
}

void Entrevista::generarGuia(int pasaporte){
    if (!verExisteCandidato(pasaporte)) {
        throw std::domain_error("El candidato no existe, crealo en el sistema\n");
    }
    std::string guia = "GuíaDeEntrevista_" + (string)pasaporte + ".txt";
    for (i = 1; i < candidatos.size() + 1; i++) {
        if (this->candidatos[i]->getPasaporte() == pasaporte) {
            ofstream write(guia.c_str());

            write << "            GUÍA DE ENTREVISTA        " << "\n\n";
            write << "Esta guia de entrevista esta creada para el candidato: " << nombreMayus(candidato[i]->getNombre())
                  << "\n";
            write << "Para la fecha " << /*Inserte la fecha*/ << "\n\n";

            if (candidato.getGenero() == 1) {
                write << "El candidato es de " << candidato->nacionalidad.getNombrePais() << "\n\n";
            } else {
                write << "La candidata es de " << candidato->nacionalidad.getNombrePais() << "\n\n";
            }

            write << "Su cultura tiende a " << candidato->nacionalidad.getTipoCultura() << "\n";
            write << "Sus gestos mas notables son " << candidato->nacionalidad.getGestos() << "\n";
            write << "En cuanto al tacto, " << candidato->nacionalidad.getTacto() << "\n";
            write << "Su perspectiva frente al respeto es " << candidato->nacionalidad.getRespeto() << "\n";
            write << "Gestionan el tiempo de tal manera que " << candidato->nacionalidad.getGestionTiempo() << "\n";
            write << "Para hablar " << candidato->nacionalidad.getEstiloComunicacion() << "\n";

            if (candidato->nacionalidad.getTieneSiesta() == True) {
                write << "Su cultura tiene siestas." << "\n";
            } else {
                write << "Su cultura no tiene siestas." << "\n";
            }

            write << "Algunas festividades son: " << candidato->nacionalidad.getFestividades() << "\n\n";

            write << "REDES SOCIALES ";
            write << "Correo: " << candidato.getCorreo() << "\n";
            write << "LinkedIn: " << candidato.getLinkedIn() << "\n";
            write << "Github: " << candidato.getGithub() << "\n\n";

            write.close();
        }
    }
}