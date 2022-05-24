#pragma once

#include "struct.hpp"

//untuk hapus data
void deleteQueue(Queue& Q, pointer &pHapus){      //delete first singly linked list
    if(Q.Head == nullptr && Q.Tail == nullptr){                //Queue kosong
        pHapus = nullptr;
        std::cout << "Antrian (Queue) kosong! Tidak ada yang dihapus" << std::endl;
    }
    else if(Q.Head->next == nullptr){      //isi 1 elemen
        Q.Head = nullptr;
        Q.Tail = nullptr;
        std::cout << std::endl << "Data dihapus!" << std::endl;
    }
    else{                           //lebih dari 1 elemen
        pHapus = Q.Head;
        Q.Head = Q.Head->next;
        pHapus->next = nullptr;
        std::cout << std::endl << "Data dihapus!" << std::endl;
    }
}
//untuk undo
void pop(Queue& Q, pointer &pHapus){      //delete last singly linked list
    pointer last, precLast;
    if(Q.Head == nullptr && Q.Tail == nullptr){       //kosong
        pHapus = nullptr;
        std::cout << "List kosong, tidak ada yang dihapus" << std::endl;
    }
    else if(Q.Head->next == nullptr && Q.Tail->next == nullptr){      //isi 1 elemen
        pHapus = Q.Head;
        Q.Head = nullptr;
        std::cout << "Data dihapus!" << std::endl;
    }
    else{
        precLast = Q.Head;
        while(precLast->next != Q.Tail){
            precLast = precLast->next;
        }
        pHapus = Q.Tail;
        precLast->next = nullptr;
        Q.Tail = precLast;
        std::cout << "Data dihapus!" << std::endl;
    }
}

void deleteSearch(Queue& Q, pointer& pCari, pointer& pHapus){
    pointer precSearch;
    if(pCari == Q.Head){
        deleteQueue(Q, pCari);
    }
    else if(pCari == Q.Tail){
        pop(Q, pCari);
    }
    else{
        precSearch = Q.Head;
        while(precSearch->next != pCari){
            precSearch = precSearch->next;
        }
        pHapus = pCari;
        precSearch->next = pCari->next;
        pHapus->next = nullptr;
    }
}