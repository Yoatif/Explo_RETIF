#include <string>
#include <iostream>
#include <vector>
#include "lieu.h"
using namespace std;

int main(){
    Lieu * monLieu = new Lieu();
    string choixDestination;
    int choixCampement;
    Lieu * lieu1 = new Lieu("Madrid", "Capital de l'espagne", 9);
    Lieu * lieu2 = new Lieu("Londres", "Capitale de l'angeleterre", 3);
    Lieu * lieu3 = new Lieu("Honolulu", "Capitale d'Hawai", 17);
    string lieuActuel = lieu1->getName();
    vector<Lieu> listeLieu = {lieu1,lieu2,lieu3};
    int duree = 100;
    

    bool gameOver = false;

    while(!gameOver){
        cout<<"veuillez choisir la destination de votre choix entre 1 : Madrid, 2 : Londres et 3 : Honolulu";
        cin>> choixDestination;
        if(choixDestination != lieuActuel){
            if (duree <= 0){
                    cout<<"vous arrivez a";
                    if(choixDestination == 1){
                    cout<< listeLieu[0]->getName();
                    cout<< listeLieu[0]->getDescription();
                    lieuActuel = listeLieu[0];
                    cout<<"voulez vous créer un campement ? 1 : oui 2 : non";
                    cin >> choixCampement;
                    if(choixCampement == 1){
                        listeLieu[0]->setCampement(true);
                        cout<<"un campement a été créer.";
                    }
                    
                }
                if(choixDestination == 2){
                    cout<<listeLieu[1]->getName();
                    cout<<listeLieu[1]->getDescription();
                    lieuActuel = listeLieu[1];
                    cout<<"voulez vous créer un campement ? 1 : oui 2 : non";
                    cin >> choixCampement;
                    if(choixCampement == 1){
                        listeLieu[1]->setCampement(true);
                        cout<<"un campement a été créer.";
                    }
                    
                }
                else{
                    cout<<listeLieu[2]->getName();
                    cout<<listeLieu[2]->getDescription();
                    lieuActuel = listeLieu[2];
                    cout<<"voulez vous créer un campement ? 1 : oui 2 : non";
                    cin >> choixCampement;
                    if(choixCampement == 1){
                        listeLieu[2]->setCampement(true);
                        cout<<"un campement a été créer.";
                    }
                    
                }
            }
        
        }

    }
}
