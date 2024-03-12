#ifndef FAHRTENBUCH_H
#define FAHRTENBUCH_H
#include"fahrt.h"
#include<vector>

class fahrtenbuch
{
public:
    fahrtenbuch();
    bool fahrtanlegen(const std::string& abfahrt ,const  std::string& ankunft, const std::string& startort, const std::string& zielort, int ladung, int frachtpreis,schiff* s) ;
    void fahrtenausgeben();

    void dialog();
private:
    std::vector<fahrt*>fahrten;

};

#endif // FAHRTENBUCH_H
