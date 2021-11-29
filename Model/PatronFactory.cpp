#include "PatronFactory.h"

int PatronFactory::crearCandidato(){
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
    cin >> validaGenero;

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
    Candidato * x = new Candidato(nombre, correo, linkedIn, github, pasaporte, genero, aprobado, agendado, pNacionEscogida*);
    this->candidatos.insert({pasaporte, x});
}