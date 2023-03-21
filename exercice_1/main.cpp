#include <string>
#include <iostream>

using namespace std;

int main(){

    //création varriable pour définir la destination et les variables de destination a appeler
    int choixDestination;
    string destination1 = "Madrid";
    string destination2 = "Londres";

    //choix destination
    cout << "Veuillez choisir un numéro entre 1 et 2 pour choisir votre destination entre Madrid et Londres.";
    cin >> choixDestination;

    //réponse au choix
    if(choixDestination ==1){
        cout<<"vous avez choisis de partir pour :";
        cout<< destination1;
    }
    else{
        cout<<"vous avez choisis de partir pour :";
        cout<< destination2;
    }


}