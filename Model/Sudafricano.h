#ifndef RECRUITMENT_JPC_EC_DG_SUDAFRICANO_H
#define RECRUITMENT_JPC_EC_DG_SUDAFRICANO_H

#include "Nacionalidad.h"

class Sudafricano : public Nacionalidad {
protected:
    string nombrePais = "Sudafrica";
    string tipoCultura = "se destaca por su diversidad étnica y cultural. Por lo tanto, no existe una unica cultura de Sudafrica. Preguntale sobre su propia experiencia.";
    string contactoVisual = "El contacto visual directo es frecuente, aunque mantener la mirada fija por largo tiempo podría ser considerado retador.";
    string gestos = "Se saluda con un apreton de manos, con una sonrisa y mirando a los ojos, y se saluda primero a la persona de mayor jerarquia.";
    string tacto = "el espacio personal es reducido. Al conversar es común que las personas se encuentren físicamente cerca, en ocasiones hombro con hombro.";
    string respeto = "El espacio se respeta dependiendo de quien signifique esa persona para ti. No es lo mismo saludar a tu padre que a tu amigo.";
    string gestionTiempo = "Respetan mucho el tiempo que tiene cada cosa en su dia a dia.";
    string estiloComunicacion = "Su estilo de comunicacion depende muchas veces de su region, por lo que esto hace que varien las lenguas habladas.";
    bool tieneSiesta = true;
    string festividades = "Fin del apartheid, festivales de rock y jazz, dia de la diversidad.";

public:
    virtual ~Sudafricano();
    virtual void consultarConocimientos() override;
};

#endif //RECRUITMENT_JPC_EC_DG_SUDAFRICANO_H
