#ifndef __HELLO_H
#define __HELLO_H

#include <string>

using namespace std;

class Hello{
    string name;
public:
    Hello(string);
    void sayHello();
};

#endif
