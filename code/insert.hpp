#pragma once

#include "struct.hpp"

//untuk insert data
void insertQueue(Queue& Q, pointer& pBaru){      //insert last singly linked list
    if(Q.Head == NULL && Q.Tail == NULL){        //Queue kosong
        Q.Head = pBaru;
        Q.Tail = pBaru;
    }
    else{                   //ada isi
        Q.Tail->next = pBaru;       //sambung tail ke pBaru
        Q.Tail = pBaru;             //tail nunjuk pBaru
    }
    std::cout << std::endl;
    std::cout << " ======================================" << std::endl;
    std::cout << "|           Data Ditambahkan           |"<< std::endl;
    std::cout << " ======================================" << std::endl;
    std::cout << std::endl;
}