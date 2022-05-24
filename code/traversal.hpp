#pragma once

#include "struct.hpp"
#include "create.hpp"

void traversal(Queue& Q, pointer& pBantu){
    std::cout << std::endl;
    int i = 1;
    if(Q.Head == nullptr){            //Queue kosong
        std::cout << "Antrian (Queue) kosong! Tidak ada yang ditampilkan!" << std::endl;
    }
    else{                       //Queue ada isi
        pBantu = Q.Head;
        std::cout << "---------------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << std::setw(5) << "Kode" << std::setw(30)<< "Judul"<< std::setw(15) << "Kategori" << std::setw(15) << "Tahun Rilis" << std::setw(15) << "Negara" << std::setw(30) << "Status" << std::endl;
        std::cout << "---------------------------------------------------------------------------------------------------------------" << std::endl;
        do{
            std::cout << std::setw(5) << pBantu->info.kode << std::setw(30) << pBantu->info.judul << std::setw(15) << kategoriData(pBantu->info.kategori) << std::setw(15) << pBantu->info.tahun << std::setw(15) << pBantu->info.negara << std::setw(30) << statusData(pBantu->info.status) << std::setw(10) << std::endl;
            pBantu = pBantu->next;
        }
        while (pBantu != nullptr);
        std::cout << "---------------------------------------------------------------------------------------------------------------" << std::endl;
    }
    std::cout << std::endl;
}