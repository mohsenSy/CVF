#include <hello.h>
#include <iostream>
#include <string>

using namespace std;

Hello::Hello(string name){
    this->name = name;
}

void Hello::sayHello(){
    cout << "Hello " << this->name << endl;
}
