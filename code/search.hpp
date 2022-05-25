#pragma once

#include "struct.hpp"

//untuk searching kode
void search(Queue &Q, int& kode, char& character, int& found, pointer& pCari){
    found = 0;
    pCari = Q.Head;
    while(found == 0 && pCari != nullptr){ 
        if(pCari->info.kode == kode){
            found = 1;
        }
        else if(pCari->info.status == character || pCari->info.kategori == character){
            found = 1;
        }
        else{
            pCari = pCari->next;
        }
    }
}