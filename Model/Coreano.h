#ifndef RECRUITMENT_JPC_EC_DG_COREANO_H
#define RECRUITMENT_JPC_EC_DG_COREANO_H

#include "Nacionalidad.h"

class Coreano : public Nacionalidad {
protected:
    string nombrePais = "Corea del Sur";
    string tipoCultura = "ser muy reconocida en los paises del extremo oriente, especialmente en los ámbitos del entretenimiento como el cine, las series de televisión y la música pop.";
    string contactoVisual = "Suelen evitar el contacto visual como forma de respeto a sus superiores.";
    string gestos = "llamar a las personas con la palma de la mano hacia abajo. ";
    string tacto = "no es habitual ni cortes dar la mano ya que existe un gran respeto por el espacio personal (con lo cual tampoco hay que mostrar afecto fisico con personas poco conocidas). Sin embargo, es posible que ellos mismo extiendan la mano o inicien ese contacto al tener experiencia con extranjeros.";
    string respeto = "predominante al tenerse en gran consideración la jerarquia, ya sea por edad o titulo profesional.";
    string gestionTiempo = "tienen muy en cuenta la puntualidad y suelen llegar antes de lo previsto. La tardanza es vista como una falta de respeto.";
    string estiloComunicacion = "no gesticular demasiado ni hablan en voz muy alta ya que aprecian la armonía y tranquilidad.";
    bool tieneSiesta = false;
    string festividades = "Yeonggo, Dongmaeng, Muncheon.";

public:
    virtual ~Coreano();
    virtual void consultarConocimientos() override;
};



#endif //RECRUITMENT_JPC_EC_DG_COREANO_H
