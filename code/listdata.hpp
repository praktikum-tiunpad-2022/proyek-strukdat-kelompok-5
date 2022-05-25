#pragma once 

#include "struct.hpp"
#include "create.hpp"
#include "search.hpp"
#include "traversal.hpp"

//menampilkan list data sesuai pilihan
void listData(Queue &Q, int kategori){
    int code, year, exit = 0;
    char category, status;
    int ketemu;
    std::string country;
    pointer pCari, pBantu;
    switch(kategori){
        case 1:     //tampilkan semua
            traversal(Q, pBantu);
            break;
        case 2:     //tampilkan berdasarkan status
            std::cout << std::endl;
            std::cout << "  Status Film/Series (W atau O atau D): " << std::endl;
            std::cout << "  W = Wishlist (ingin ditonton)        " << std::endl;
            std::cout << "  O = Ongoing (sedang ditonton)        " << std::endl;
            std::cout << "  D = Done (sudah selesai ditonton)    " << std::endl;
            std::cout << "  >> ";
            std::cin >> category;
            search(Q, code, category, ketemu, pCari);
            if(ketemu){
                traversalSearch(Q, category, pBantu);
            }
            else{
                std::cout << std::endl << " Data tidak ditemukan!" << std::endl << std::endl;
            }
            break;
        case 3:
            std::cout << std::endl;
            std::cout << "  Kategori Film/Series (F atau S):     " << std::endl;
            std::cout << "  F = Film                             " << std::endl;
            std::cout << "  S = Series/Drama                     " << std::endl;
            std::cout << "  >> ";
            std::cin >> category;
            search(Q, code, category, ketemu, pCari);
            if(ketemu){
                traversalSearch(Q, category, pBantu);
            }
            else{
                std::cout << std::endl << " Data tidak ditemukan!" << std::endl << std::endl;
            }
            break;
        default:
            std::cout << " ===================================== " << std::endl;
            std::cout << "|      Terjadi Kesalahan Input!       |" << std::endl;
            std::cout << " ===================================== " << std::endl << std::endl;
    }
}