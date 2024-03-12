#include "schiff.h"
int schiff::id=0;

schiff:: schiff(const std::string& name):name(name),kapazität(50){}
    int schiff::getkapazität()const{
    return kapazität;

}
    schiff::schiff(const std::string& name , int kapazität):name(name),kapazität(kapazität){
id++;
}
    int schiff::getid()const {
        return id;
    }
