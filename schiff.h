#ifndef SCHIFF_H
#define SCHIFF_H
#include<string>

class schiff
{
public:

    schiff(const std::string& name);
    int getkapazität()const;
        schiff(const std::string& name , int  kapazität);
        int getid()const;
private:
     std::string name;
    const int kapazität;
         static int id;

};

#endif // SCHIFF_H
