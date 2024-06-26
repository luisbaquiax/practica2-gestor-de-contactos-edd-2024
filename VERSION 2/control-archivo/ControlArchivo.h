//
// Created by Luis on 24/03/2024.
//

#ifndef GESTOR_DE_CONTACOTS_CONTROLARCHIVO_H
#define GESTOR_DE_CONTACOTS_CONTROLARCHIVO_H

#include "string"

class ControlArchivo {
public:
    void generarImagen(std::string &ruta, std::string &content);

    void generarCarpeta(std::string ruta);

    void generarArchivos(std::string carpeta, std::string nombreArchivo, std::string &content);
};


#endif //GESTOR_DE_CONTACOTS_CONTROLARCHIVO_H
