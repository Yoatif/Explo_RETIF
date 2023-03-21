#ifndef LIEUX_CPP
#define LIEUX_CPP


#include <string>
#include <iostream>
#include <vector>
#include "lieux.h"

using namespace std;

    Lieux::Lieux: nom("Madrid"),description("capital de l'Espagne"),difficulter(0);
    lieux::lieux(string nom,string description):

        nom(nom),description(description){

        }
    string lieux::getName(){
        return nom;
    }
    string lieux::getDescription(){
        return description;
    }

    int lieux::getDifficulty(){
        return difficulter;
    }
    int lieux::setDifficulty(int nDifficulter){
        difficulter = nDifficulter;
        return difficulter;
    }
    



#endif