#include "Reclutador.h"

bool Reclutador::verExisteCandidato(int pasaporte) {
    for(map<int, Candidato*>::iterator it = candidatos.begin(); it != candidatos.end(); it++){
        if(it->first == pasaporte){
            return true;
        }
    }
    return false;
}


void Reclutador::aprobarCandidato(int pasaporte){
    if (verExisteCandidato(pasaporte)) {
        throw std::domain_error("El candidato con este pasaporte no existe.\n");
    }
    for (int i = 1; i < candidatos.size() + 1; i++) {
        if (verExisteCandidato(pasaporte)) {
            for(map<int, Candidato*>::iterator it = candidatos.begin(); it != candidatos.end(); it++){
                if(it->first == pasaporte && candidatos[i]->getAgendado()){
                    candidatos[i]->setAprobado(true);
                }
            }
        }
    }
}


void Reclutador::agendarEntrevistas(int pasaporte) {
    int hora, i;
    if (!verExisteCandidato(pasaporte)) {
        throw std::domain_error("El candidato no existe, crealo en el sistema\n");
    }
    cout << "Digite la hora de la entrevista (No antes de las 10 a.m, en hora militar): ";
    cin >> hora;
    for (i = 1; i < candidatos.size() + 1; i++){
        if (this->candidatos[i]->getPasaporte() == pasaporte) {
            candidatos[i]->setAgendado(true);
        }
    }
}

void Reclutador::generarCarta(int pasaporte) {

    if (verExisteCandidato(pasaporte) == false ) {
        throw std::domain_error("El candidato con este pasaporte no existe.\n");
    }

    for (int i = 1; i < candidatos.size() + 1; i++) {
        if (this->candidatos[i]->getPasaporte() == pasaporte) {

            if (this->candidatos[i]->getEstado() != true ) {
                throw std::domain_error("El candidato no ha sido aceptado.\n");
            }

            std::string carta = "CartaBienvenida_" + (this->candidatos[i]->getNombre()) + ".txt";
            ofstream write (carta.c_str());
            write << "            CARTA DE BIENVENIDA        " << "\n\n";

            if (this->candidatos[i]->getGenero() == true){
                write << "Estimada" << this->candidatos[i]->getNombre() << ", \n\n";
                write << "Es de nuestro agrado hacer de su conocimiento que ha sido ACEPTADA " ;
            } else {
                write << "Estimado" << this->candidatos[i]->getNombre() << ", \n";
                write << "Es de nuestro agrado hacer de su conocimiento que ha sido ACEPTADO " ;
            }


            write << "\n\nVALORES DE LA COMPA????A:";
            write << "\n\nTransparencia y responsabilidad:\n";
            write << "\nEn la compa????a, es de suma importancia la responsabilidad en el trabajo,"
                  << "ya que de esto depende no solo su desempe??o individualmente, sino de todo el equipo de trabajo y de la empresa en s??."
                  << "Junto con esto, se le suma la transparencia, ya que ayud??ndonos de esta podemos lograr tambi??n una responsabilidad mayor"
                  << "para con la empresa, e incluso para su vida personal.";
            write << "\n\nEficiencia y resultados:\n";
            write << "\nSin dejar de lado la importancia del respeto, la responsabilidad y la transparencia,"
                  << "otro aspecto importante en los valores de la compa????a es el deber de mostrar resultados."
                  << "La compa????a est?? enfocada en seguir desarrollando cada aspecto de nuestros sistemas y servicios para darle la mejor de las experiencias a nuestros clientes,"
                  << "y para cumplir este objetivo se necesita de la cooperaci??n y del compromiso de todos los miembros de la compa????a, cada uno aportando su parte mostrando sus resultados.";
            write << "\n\nInclusi??n y diversidad:\n";
            write << "Al ser una empresa que recluta gente a nivel internacional, es de suma importancia entender la diversidad"
                  << "que hay en todos los equipos de trabajo, y entender que est?? sumamente prohibido cualquier discriminaci??n por:"
                  << "g??nero, raza, religi??n, cultura, orientaci??n sexual, etc."
                  << "La compa????a siempre velar?? por que todos sus empleados se sientan c??modos y a gusto en su trabajo.";

            write << "\n\n??LO ESPERAMOS CON MUCHO ENTUSIASMO!";

            write.close();
            cout << "La carta ha sido generada con exito.";
        }
    }
}

void Reclutador::consultarConocimientos(int idNacion) {
    int posNacion;
    if (idNacion > nacionalidades.size()) {
        throw std::domain_error("Esa nacionalidad no esta disponible en nuestra base de datos");
    }
    posNacion = idNacion - 1;
    Nacionalidad *pNacionEscogida = nacionalidades.at(idNacion - 1);
    pNacionEscogida->consultarConocimientos();

}

void Reclutador::generarGuia(int pasaporte) {

}

void Reclutador::crearCandidato() {
    string nombre, correo, linkedIn, github;
    int pasaporte, idNacion;
    bool genero, aprobado = false, agendado = false;
    Nacionalidad nacionalidad;

    cout << "Digite el nombre del candidato: ";
    cin >> nombre;

    cout << "Digite el correo del candidato: ";
    cin >> correo;

    cout << "Digite el usuario linkedIn del candidato: ";
    cin >> linkedIn;

    cout << "Digite el usuario GitHub del candidato: ";
    cin >> github;

    cout << "Digite el pasaporte del candidato: ";
    cin >> pasaporte;

    cout << "Genero del candidato (1 mujer, 0 hombre): ";
    cin >> genero;

    cout << "Elija la nacion: " << endl;
    cout << "1. Colombiano" << endl;
    cout << "2. Coreano" << endl;
    cout << "3. Frances" << endl;
    cout << "4. Sudafricano" << endl;
    cout << "Opcion: ";
    cin >> idNacion;
    if (idNacion > nacionalidades.size()) {
        throw std::domain_error("Esa nacionalidad no esta disponible en nuestra base de datos");
    }
    Nacionalidad *pNacionEscogida = nacionalidades.at(idNacion - 1);
    Candidato * x = new Candidato(nombre, correo, linkedIn, github, pasaporte, genero, aprobado, agendado, *pNacionEscogida);
    this->candidatos.insert({pasaporte, x});
}

