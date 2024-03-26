//
// Created by Luis on 24/03/2024.
//

#ifndef GESTOR_DE_CONTACOTS_CONTANCTMANAGER_H
#define GESTOR_DE_CONTACOTS_CONTANCTMANAGER_H

#include "../table-hash-gruoups/TableHashGruoup.h"
#include "../item-hash-table/ItemHsGroup.h"
#include "../tree/ControladorArbol.h"

class ContanctManager {
private:
    TableHashAttributes *getTableAttributes(Atributo **&listAttributes, int tam);

public:
    ContanctManager();

    int cantidadContactos;
    TableHashGruoup hashGruoup;
    ControladorArbol controladorArbol;

    void createGruop(std::string &nameGruop, Atributo **&listAtributos, int tam);


    void insertContact(std::string &nameGruop, Atributo **&listAtributos, int tam);

    void verInfoPorGrupo();
};


#endif //GESTOR_DE_CONTACOTS_CONTANCTMANAGER_H
