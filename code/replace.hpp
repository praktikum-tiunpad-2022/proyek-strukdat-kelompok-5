#pragma once

#include "struct.hpp"

//untuk replace aka update
void updateInfo(Queue &Q, pointer &pCari, int pilihan){
    switch(pilihan){
        case 1:
            std::cout << " ------------------------------------- " << std::endl;
            std::cout << "  Masukkan Judul Baru:                 " << std::endl;
            std::cout << "  >> ";
            std::cin.ignore();
            std::getline(std::cin, pCari->info.judul);
            std::cout << std::endl;
            break;
        case 2:
            std::cout << " ------------------------------------- " << std::endl;
            std::cout << "  Masukkan Kategori Baru (F atau S):   " << std::endl;
            std::cout << "  F = Film                             " << std::endl;
            std::cout << "  S = Series/Drama                     " << std::endl;
            std::cout << "  >> ";
            std::cin >> pCari->info.kategori;
            std::cout << std::endl;
            break;
        case 3:
            std::cout << " ------------------------------------- " << std::endl;
            std::cout << "  Masukkan Tahun Rilis Baru:           " << std::endl;
            std::cout << "  >> ";
            std::cin >> pCari->info.tahun;
            std::cout << std::endl;
            break;
        case 4:
            std::cout << " ------------------------------------- " << std::endl;
            std::cout << "  Masukkan Asal Negara Baru:           " << std::endl;
            std::cout << "  >> ";
            std::cin >> pCari->info.negara;
            std::cout << std::endl;
            break;
        case 5:
            std::cout << " ------------------------------------- " << std::endl;
            std::cout << "  Masukkan Status Baru (W atau O atau D):" << std::endl;
            std::cout << "  W = Wishlist (ingin ditonton)        " << std::endl;
            std::cout << "  O = Ongoing (sedang ditonton)        " << std::endl;
            std::cout << "  D = Done (sudah selesai ditonton)    " << std::endl;
            std::cout << "  >> ";
            std::cin >> pCari->info.status;
            std::cout << std::endl;
            break;
        default:
            std::cout << " ===================================== " << std::endl;
            std::cout << "|      Terjadi Kesalahan Input!       |" << std::endl;
            std::cout << " ===================================== " << std::endl << std::endl;
            exit(0);
    }
}