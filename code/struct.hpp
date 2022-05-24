#pragma once

#include <iostream>     //std::cout
#include <string>       //std::string
#include <iomanip>      //std::setw

//struct
struct film{
    std::string judul, negara;
    char kategori, status;
    int tahun, kode;
};

struct elemenQueue{
    film info;
    elemenQueue* next;
};

typedef elemenQueue* pointer;
typedef pointer Stack;

struct Queue{
    Stack Head;
    Stack Tail;
};

Queue Q;