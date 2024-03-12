
#include"fahrtenbuch.h"
#include<iostream>

using namespace std;

int main()

{
    schiff l("lorey");
    fahrtenbuch f;


        cout<<"1. fahrt anlegen "<<endl;
        cout<<"2. Fahrten ausgeben"<<endl;
        cout<<"0. programm beenden"<<endl;
        cout<<"3.Neues Schiff erfassen"<<endl;
        int choice;
        do{
            cout<<"Geben Sie choice ein"<<endl;
            cin>>choice;
            switch(choice){
            case 1:{
                cout<<"whelches Schiff?"<<std::endl;
                int id;
                cin>>id;
                std:: cout<<"Abfahrt?"<<std::endl;
                std::string abfahrt;
                std:: cin>>abfahrt;
                std::cout<<"Ankunft?"<<std::endl;
                std::string ankunft;
                cin>>ankunft;
                cout<<"Fahrt von? "<<std::endl;
                std::string startort;
                cin>>startort;
                cout<<"fahrt nach?"<<std::endl;
                std::string zielort;
                cin>>zielort;
                cout<<"Menge?"<<std::endl;
                int ladung;
                cin>>ladung;
                cout<<"Frachtpres?"<<std::endl;
                int frachtpreis;
                cin>>frachtpreis;
                f.fahrtanlegen(abfahrt,ankunft,startort,zielort,ladung,frachtpreis,&l);
                break;
            }

            case 2:
                f.fahrtenausgeben();
                break;

            case 0 : cout<<"Programm wird beendet"<<endl;
                break;
            case 3 :{
                cout<<"Name des Schiffes?"<<endl;
                std::string name;
                cin>>name;
                cout<<"Kapazität?"<<endl;
                    int kapazität;
                        cin>>kapazität;
              schiff newschiff(name,kapazität);
                        cout<<"schiff no"<<newschiff.getid()<<"wurde angelegt"<<endl;
              break;
            }
            default: cout<<"Ungültige eingabe"<<endl;
            }
        }
        while(choice!=0);

    return 0;
}
