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
    
    public:
        lieux();
        lieux(string nom,string description);

        string getName();
        string getDescription();

        int getDifficulty();
        int setDifficulty(int nDifficulter);


};

#endif