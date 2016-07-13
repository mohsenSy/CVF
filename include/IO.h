#ifndef __IO_H
#define __IO_H

#include <fstream>

class IOMode{
public:
    static const int IOREAD 0x0;
    static const int IOWRITE 0x1;
};

class IO{
    int descriptor;
    int mode;
    ifstream input;
    ofstream output;
public:
    IO(int, int);
    int IORead(string, int);
    int IOWrite(string, int);
    int IOSeek(int);
};

#endif
