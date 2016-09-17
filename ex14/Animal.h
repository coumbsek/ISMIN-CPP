#ifndef Animal_h
#define Animal_h
#include <cstring>
#include <string>
#include <iostream>

class Animal {

 public:

    virtual void dispName();

    virtual void dispCarac();


 protected:
    string name;
    string carac;
};

#endif // Animal_h
