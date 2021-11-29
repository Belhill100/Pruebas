#ifndef RECRUITMENT_JPC_EC_DG_FRANCES_H
#define RECRUITMENT_JPC_EC_DG_FRANCES_H

#include "Nacionalidad.h"

class Frances : public Nacionalidad {
protected:
    string nombrePais = "Francia";
    string tipoCultura = "heredar la reputación de ser un país fundador en terminos de protocolo y buenos modales.";
    string contactoVisual = "El contacto visual es perfecto para lograr una primera impresion positiva.";
    string gestos = "cuando se colocan la punta de los cinco dedos juntos y hacia arriba, le da un acento al discurso y significa que lo que se dice es importante. La mano extendida dirigiendo la palma hacia e interlocutor, y haciendo movimientos ligeros de derecha a izquierda y viceversa, quiere decir que rechazas de manera cortes lo que el interlocutor propone.";
    string tacto = "es costumbre saludarse con un apreton de manos firme, pero no en exceso. El saludo habitual entre amigos o familiares es el beso en las mejillas, entre mujeres, o entre hombres y mujeres.";
    string respeto = "liberal, motivando a sus receptores a expresarse con total libertad.";
    string gestionTiempo = "comparten una fuerte segmentación del trabajo, por lo cual tienden a recurrir a sus adyacentes para optimizar el resultado final.";
    string estiloComunicacion = "utilizan muchas expresiones figuradas que pueden resultar desconcertantes. Pide que te las expliquen y disfrutara utilizandolas despues.";
    bool tieneSiesta = true;
    string festividades = "La fiesta de las crepas, la Galette des Rois, Mercados Navidenos.";

public:
    virtual ~Frances();
    virtual void consultarConocimientos() override;
};


#endif //RECRUITMENT_JPC_EC_DG_FRANCES_H
