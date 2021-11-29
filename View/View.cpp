#include "View.h"

View::View(){
}

void View::elegirNacion(){
    try {
        int idNacion;
        cout << "Elija la nacion: " << endl;
        cout << "1. Colombiano" << endl;
        cout << "2. Coreano" << endl;
        cout << "3. Frances" << endl;
        cout << "4. Sudafricano" << endl;
        cout << "Opcion: ";
        cin >> idNacion;
        reclutador.consultarConocimientos(idNacion);
    }catch (std::domain_error ex){
        cout << ex.what();
    }
}

void View::mostrarMenu(){
    int opcion, pasaporte;
    do{
        cout << "Menu Reclutador\n";
        cout << "1. Consultar los conocimientos culturales\n";
        cout << "2. Crear candidatos\n";
        cout << "3. Programar entrevistas\n";
        cout << "4. Generar guía de entrevistas\n";
        cout << "5. Aprobar Candidato\n";
        cout << "6. Generar la carta de bienvenida\n";
        cout << "0. Salir \n";
        cout << "Digita el numero: ";
        cin >> opcion;
        switch (opcion){
            case 1:
                elegirNacion();
                break;
            case 2:
                reclutador.crearCandidato();
                break;
            case 3:
                cout << "Ingrese el pasaporte del candidato: " << endl;
                cin >> pasaporte;
                reclutador.agendarEntrevistas(pasaporte);
                break;
            case 4:
                cout << "Ingrese el pasaporte del candidato: " << endl;
                cin >> pasaporte;
                reclutador.generarGuia(pasaporte);
                break;
            case 5:
                cout << "Ingrese el pasaporte del candidato: " << endl;
                cin >> pasaporte;
                reclutador.aprobarCandidato(pasaporte);
                break;
            case 6:
                cout << "Ingrese el pasaporte del candidato: " << endl;
                cin >> pasaporte;
                reclutador.generarCarta(pasaporte);
                break;
        }
    } while (opcion != 0);
}
