#include <string>
#include <iostream>

using namespace std;

main(){

    //création variable de choix et réponse choix
    string choixDestination = "";
    string destination1 = "vous avez choisis des places pour Madrid, la crashtest airlines vous remercie de votre achat.";
    string destination2 = "vous avez choisis des places pour Londres, la crashtest airlines vous remercie de votre achat.";

    //demande choix
    cout << "les destinations offertes par la crashtest airlines sont :Madrid et Londres."<<endl;
    cout << "veuillez écrire en toutes lettres la destination de votre choix."<<endl;
    cin >> choixDestination;

    // réponse au chix.
    if(choixDestination =="Madrid"){
        
        cout<< destination1;
    }
    else{
        
        cout<< destination2;
    }
}