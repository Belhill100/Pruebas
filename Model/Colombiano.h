#ifndef RECRUITMENT_JPC_EC_DG_COLOMBIANO_H
#define RECRUITMENT_JPC_EC_DG_COLOMBIANO_H

#include <iostream>
#include "Nacionalidad.h"

using namespace std;

class Colombiano : public Nacionalidad {
protected:
    string nombrePais = "Colombia";
    string tipoCultura = "expresiva";
    string contactoVisual = "No tienen problema frente al contacto visual prolongado.";
    string gestos = "la expresión 'paila' para decir que se está mal y el señalar con la punta de los labios";
    string tacto = "suelen ser muy abiertos al contacto, sin importar de quién lo reciben.";
    string respeto = "No se respeta mucho el espacio fisico cuando se encuentran personas de confianza.";
    string gestionTiempo = "se obtienen resultados, aunque los metodos de gestion pueden ser ortodoxos";
    string estiloComunicacion = "tienen una gran velocidad y expresiones propias que emplean muchas comparaciones para darse a entender.";
    bool tieneSiesta = false;
    string festividades = "Carnaval de Blancos y Negros, Carnaval de Barranquilla, Feria de Cali";

public:
    virtual ~Colombiano();
    virtual void consultarConocimientos() override;
};


#endif //RECRUITMENT_JPC_EC_DG_COLOMBIANO_H
