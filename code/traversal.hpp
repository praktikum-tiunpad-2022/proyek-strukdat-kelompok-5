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
        std::cout << "------------------------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << std::setw(5) << "Kode" << std::setw(20)<< "Judul"<< std::setw(25) << "Kategori" << std::setw(20) << "Tahun Rilis" << std::setw(17) << "Negara" << std::setw(22) << "Status" << std::endl;
        std::cout << "------------------------------------------------------------------------------------------------------------------------" << std::endl;
        do{
            std::cout << std::setw(3) << pBantu->info.kode << std::setw(29) << pBantu->info.judul << std::setw(20) << kategoriData(pBantu->info.kategori) << std::setw(14) << pBantu->info.tahun << std::setw(22) << pBantu->info.negara << std::setw(30) << statusData(pBantu->info.status) << std::setw(10) << std::endl;
            pBantu = pBantu->next;
        }
        while (pBantu != nullptr);
        std::cout << "------------------------------------------------------------------------------------------------------------------------" << std::endl;
    }
    std::cout << std::endl;
}

void traversalSearch(Queue& Q, char& character, pointer& pBantu){
    std::cout << std::endl;
    int i = 1;
    if(Q.Head == nullptr){            //Queue kosong
        std::cout << "Antrian (Queue) kosong! Tidak ada yang ditampilkan!" << std::endl;
    }
    else{                       //Queue ada isi
        pBantu = Q.Head;
        std::cout << "------------------------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << std::setw(5) << "Kode" << std::setw(20)<< "Judul"<< std::setw(25) << "Kategori" << std::setw(20) << "Tahun Rilis" << std::setw(17) << "Negara" << std::setw(22) << "Status" << std::endl;
        std::cout << "------------------------------------------------------------------------------------------------------------------------" << std::endl;
        
        do{
            if((char)std::toupper(pBantu->info.status) == (char)std::toupper(character)){
                std::cout << std::setw(3) << pBantu->info.kode << std::setw(29) << pBantu->info.judul << std::setw(20) << kategoriData(pBantu->info.kategori) << std::setw(14) << pBantu->info.tahun << std::setw(22) << pBantu->info.negara << std::setw(30) << statusData(pBantu->info.status) << std::setw(10) << std::endl;
            }
            else if((char)std::toupper(pBantu->info.kategori) == (char)std::toupper(character)){
                std::cout << std::setw(3) << pBantu->info.kode << std::setw(29) << pBantu->info.judul << std::setw(20) << kategoriData(pBantu->info.kategori) << std::setw(14) << pBantu->info.tahun << std::setw(22) << pBantu->info.negara << std::setw(30) << statusData(pBantu->info.status) << std::setw(10) << std::endl;
            }
            pBantu = pBantu->next;
        }
        while (pBantu != nullptr);
        std::cout << "------------------------------------------------------------------------------------------------------------------------" << std::endl;
    }
    std::cout << std::endl;
}