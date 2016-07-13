#include <IO.h>
#include <fstream>

IO::IO(int descriptor, int mode){
    this->descriptor = descriptor;
    this->mode = mode;

    if(mode && IOMode::IOWRITE){
        output = 
    }
}

int IO::IORead(){
    if(mode && IOMode::IOREAD){

    }
    return -1;
}
