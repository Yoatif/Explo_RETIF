#ifndef LIEUX_CPP
#define LIEUX_CPP


#include <string>
#include <iostream>
#include <vector>
#include "lieux.h"

using namespace std;

    Lieux::Lieux: nom("Madrid"),description("capital de l'Espagne"),difficulter(0),setCampement(false);
    lieux::lieux(string nom,string description, bool campement):

        nom(nom),description(description)setCampement(campement){

        }
    string Lieux::getName(){
        return nom;
    }
    string Lieux::getDescription(){
        return description;
    }

    int Lieux::getDifficulty(){
        return difficulter;
    }
    int Lieux::setDifficulty(int nDifficulter){
        difficulter = nDifficulter;
        return difficulter;
    }

    bool Lieu::setCampement(bool campement){
        campement = true;
        return campement;
    }
    



#endif