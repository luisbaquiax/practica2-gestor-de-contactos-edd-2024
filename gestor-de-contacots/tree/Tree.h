//
// Created by Luis on 22/03/2024.
//

#ifndef GESTOR_DE_CONTACOTS_TREE_H
#define GESTOR_DE_CONTACOTS_TREE_H

#include "../atributo/Atributo.h"
#include "../funcionHash/FuncionHash.h"

class Tree {
public:
    Atributo *raiz;
    FuncionHash f;
    int id;
    int altura;
    int idNodo;
};

#endif //GESTOR_DE_CONTACOTS_TREE_H
