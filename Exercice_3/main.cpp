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
    vector<Lieu> listeLieu ={lieu1,lieu2,lieu3};
    string lieuActuel = lieu1->getName();
    

    bool gameOver = false;
    while(!gameOver){
        cout<<"veuillez choisir la destination de votre choix entre 1 : Madrid, 2 : Londres et 3 : Honolulu";
        cin>> choixDestination;
        if(choixDestination != lieuActuel){
            if (duree <= 0){
                cout<<"vous arrivez a";
                if(choixDestination == 1){
                    cout<< lieu1->getName();
                    cout<< lieu1->getDescription();
                    duree -= 9;
                }
                if(choixDestination == 2){
                    cout<<lieu2->getName();
                    cout<<lieu2->getDescription();
                    duree -= 3;
                }
                else{
                    cout<<lieu3->getName();
                    cout<<lieu3->getDescription();
                    duree -= 17;
                }

            }
            else{
                gameOver = true;
                return gameOver;
            }
        }
        
    }
    
        
    

}
