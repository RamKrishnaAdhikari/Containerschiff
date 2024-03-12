#include "fahrtenbuch.h"
#include<iostream>
using namespace std;

fahrtenbuch::fahrtenbuch() {}
bool  fahrtenbuch:: fahrtanlegen(const std::string& abfahrt ,const  std::string& ankunft, const std::string& startort, const std::string& zielort, int ladung, int frachtpreis,schiff* s){
    for(const auto& f : fahrten){
        if(f->getschiff()==s){
        if((f->getabfahrt()>=abfahrt)&&(f->getankunft()<=ankunft)){
                cout<<"Bereits abgebucht"<<endl;
            return false;
        }
        if((f->getabfahrt()<=abfahrt)&&(f->getankunft()>=ankunft)){
            cout<<"Bereits abgebucht"<<endl;
                return false;
            }
        if((f->getabfahrt()>=abfahrt)&&(f->getabfahrt()<=ankunft)){
                cout<<"Bereits abgebucht"<<endl;
                return false;
            }
        if((f->getankunft()>=abfahrt)&&(f->getankunft()<=ankunft)){
                cout<<"Bereits abgebucht"<<endl;
                return false;
            }
        }
    }

    if(ladung>s->getkapazität()){
        cout<<"more than capacity"<<endl;
        return false;
}

    fahrten.push_back(new fahrt(abfahrt,ankunft,startort,zielort,ladung,frachtpreis,s));
cout<<"Fahrt wurde angelegt"<<endl;
    return true;
}

void fahrtenbuch::fahrtenausgeben(){
    for(const auto& f : fahrten){
        cout<<"Fahrt"<<f->getid()<<":"<<f->getschiff()->getid()<<"von"<<f->getstartort()<<","<<f->getabfahrt()<<"  nach"<<f->getzielort()<<","<<f->getankunft()<<endl;
    }
}

