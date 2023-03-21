#include <string>
#include <iostream>
#include <vector>
#include "lieu.h"
using namespace std;

int main(){
    Lieu * monLieu = new Lieu();
    string choixDestination;
    Lieu * lieu1 = new Lieu("Madrid", "Capital de l'espagne", 9);
    Lieu * lieu2 = new Lieu("Londres", "Capitale de l'angeleterre", 3);
    Lieu * lieu3 = new Lieu("Honolulu", "Capitale d'Hawai", 17);
    vector<Lieu> listeLieu = {lieu1,lieu2,lieu3};
    string lieuActuel = lieu1->getName();
    
    

    bool gameOver = false;

    while(!gameOver){
        cout<<"veuillez choisir la destination de votre choix entre 1 : Madrid, 2 : Londres et 3 : Honolulu";
        cin>> choixDestination;
        if(choixDestination != lieuActuel){
            
            cout<<"vous arrivez a";
            if(choixDestination == 1){
                cout<< listeLieu[0]->getName();
                cout<< listeLieu[0]->getDescription();
                
            }
            if(choixDestination == 2){
                cout<<listeLieu[1]->getName();
                cout<<listeLieu[1]->getDescription();
               
            }
            else{
                cout<<listeLieu[2]->getName();
                cout<<listeLieu[2]->getDescription();
               
            }

        }
        else{
            gameOver = true;
            return gameOver;
        }
    }
    
}


