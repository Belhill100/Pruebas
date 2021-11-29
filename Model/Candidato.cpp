#include "Candidato.h"

Candidato::Candidato() {
}

Candidato::Candidato(string nombre, string correo, string linkedIn, string github, int pasaporte, bool genero, bool aprobado, bool agendado, Nacionalidad *nacionalidad) {
    this->nombre = nombre;
    this->correo = correo;
    this->linkedIn = linkedIn;
    this->pasaporte = pasaporte;
    this->genero = genero;
    this->aprobado = aprobado;
    this->agendado = agendado;
    this->nacionalidad = nacionalidad;
}

string Candidato::getNombre(){
    return this->nombre;
}

string Candidato::getCorreo(){
    return this->correo;
}

string Candidato::getLinkedIn(){
    return this->linkedIn;
}

string Candidato::getGithub(){
    return this->github;
}

int Candidato::getPasaporte(){
    return this->pasaporte;
}

bool Candidato::getGenero(){
    return this->genero;
}

bool Candidato::getEstado() {
    return this->aprobado;
}

void Candidato::setNombre(const string &nombre) {
    Candidato::nombre = nombre;
}

void Candidato::setCorreo(const string &correo) {
    Candidato::correo = correo;
}

void Candidato::setLinkedIn(const string &linkedIn) {
    Candidato::linkedIn = linkedIn;
}

void Candidato::setGithub(const string &github) {
    Candidato::github = github;
}

void Candidato::setPasaporte(int pasaporte) {
    Candidato::pasaporte = pasaporte;
}

void Candidato::setGenero(bool genero) {
    Candidato::genero = genero;
}

void Candidato::setAprobado(bool aprobado) {
    Candidato::aprobado = aprobado;
}

bool Candidato::getAgendado(){
    return agendado;
}

void Candidato::setAgendado(bool agendado) {
    Candidato::agendado = agendado;
}
