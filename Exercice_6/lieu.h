#ifndef LIEU_H
#define LIEU_H

#include <string>
#include <vector>
#include lieu.cpp

class Lieu {
    protected:
        string nom;
        string description;
        int difficulter;
        bool campement;
    
    public:
        lieux();
        lieux(string nom,string description);

        string getName();
        string getDescription();

        int getDifficulty();
        int setDifficulty(int nDifficulter);

        bool setCampement();


};

#endif