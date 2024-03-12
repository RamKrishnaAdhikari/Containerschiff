#ifndef FAHRT_H
#define FAHRT_H
#include<string>
#include"schiff.h"


class fahrt
{
public:

    fahrt(const std::string& abfahrt ,const  std::string& ankunft, const std::string& startort, const std::string& zielort, int ladung, int frachtpreis,class::schiff* s );
    std::string getstartort()const;
    std::string getzielort()const;
    std::string getabfahrt()const;
    std::string getankunft()const;
    schiff* getschiff()const;
    int getid()const;

private:
    std::string startort;
    std::string zielort;
    std:: string abfahrt;
    std::string ankunft;
    int ladung;
    int frachtpreis;
    schiff* schiff;
   static  int id;

};

#endif // FAHRT_H
