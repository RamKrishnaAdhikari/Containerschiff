#include "fahrt.h"


int fahrt::id=0;
fahrt::fahrt(const std::string& abfahrt ,const  std::string& ankunft, const std::string& startort, const std::string& zielort, int ladung, int frachtpreis ,class::schiff* s)
    :abfahrt(abfahrt),ankunft(ankunft),startort(startort),zielort(zielort),ladung(ladung),frachtpreis(frachtpreis),schiff(s){
    id++;
}
std::string fahrt::getstartort()const{
    return startort;
}
std::string fahrt:: getzielort()const{
    return zielort;
}
std::string  fahrt::getabfahrt()const{
    return abfahrt;
}
std::string fahrt:: getankunft()const{
    return ankunft;
}
schiff* fahrt:: getschiff()const{
    return schiff;
}
int fahrt::getid()const{
    return id;
}
