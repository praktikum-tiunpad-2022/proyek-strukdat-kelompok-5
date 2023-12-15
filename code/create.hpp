#pragma once

#include "struct.hpp"

//create queue
void createQueue(Queue& Q){
    Q.Head = nullptr;
    Q.Tail = nullptr;
}

//create element
void createElmt(pointer& pBaru){
    pBaru = new elemenQueue;
    std::cout << " ------------------------------------- " << std::endl;
    std::cout << "  Masukkan Kode Film/Series:           " << std::endl;
    std::cout << "  >> " ;
    std::cin >> pBaru->info.kode;
    std::cout << std::endl;
    std::cout << "  Masukkan Judul Film/Series:          " << std::endl;
    std::cout << "  >> " ;
    std::cin.ignore();
    std::getline(std::cin, pBaru->info.judul);
    std::cout << std::endl;
    std::cout << "  Masukkan Kategori:                   " << std::endl;
    std::cout << "  F = Film                             " << std::endl;
    std::cout << "  S = Series/Drama                     " << std::endl;
    std::cout << "  >> " ;
    std::cin >> pBaru->info.kategori;
    std::cout << std::endl;
    std::cout << "  Masukkan Tahun Rilis:                " << std::endl;
    std::cout << "  >> " ;
    std::cin  >> pBaru->info.tahun;
    std::cout << std::endl;
    std::cout << "  Masukkan Asal Negara:                " << std::endl;
    std::cout << "  >> " ;
    std::cin  >> pBaru->info.negara;
    std::cout << std::endl;
    std::cout << "  Masukkan Status:                     " << std::endl;
    std::cout << "  W = Wishlist (ingin ditonton)        " << std::endl;
    std::cout << "  O = Ongoing (sedang ditonton)        " << std::endl;
    std::cout << "  D = Done (sudah selesai ditonton)    " << std::endl;
    std::cout << "  >> " ;
    std::cin  >> pBaru->info.status;
    std::cout << std::endl;
    pBaru->next = nullptr;
}

//menampilkan status dalam bentuk string
std::string statusData(char status){
    std::string message;
    if(status == 'W' || status == 'w'){
        message = "Wishlist (akan ditonton)";
    }
    else if(status == 'O' || status == 'o'){
        message = "Ongoing (sedang ditonton)";
    }
    else if(status == 'D' || status == 'd'){
        message = "Done (selesai ditonton)";
    }
    else{
        message = "Unknown Status";
    }
    return message;
}

//menampilkan kategori dalam bentuk string
std::string kategoriData(char kategori){
    std::string message;
    if(kategori == 'F' || kategori == 'f'){
        message = "Film";
    }
    else if(kategori == 'S' || kategori == 's'){
        message = "Series/Drama";
    }
    else{
        message = "Unknown Category";
    }
    return message;
}