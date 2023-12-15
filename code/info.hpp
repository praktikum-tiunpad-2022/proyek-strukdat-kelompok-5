#pragma once

#include "struct.hpp"
#include "create.hpp"

//menampilkan info film/series berdasarkan kode
void infoData(pointer &pCari){
    std::cout << std::endl;
    std::cout << " ======================================" << std::endl;
    std::cout << "|           Info Film/Series           |"<< std::endl;
    std::cout << " ======================================" << std::endl;
    std::cout << "  Judul       : ";
    std::cout << "  " << pCari->info.judul << std::endl;
    std::cout << "  Kategori    : ";
    std::cout << "  " << kategoriData(pCari->info.kategori) << std::endl;
    std::cout << "  Tahun Rilis : ";
    std::cout << "  " << pCari->info.tahun << std::endl;
    std::cout << "  Asal Negara : ";
    std::cout << "  " << pCari->info.negara << std::endl;
    std::cout << "  Status      : ";
    std::cout << "  " << statusData(pCari->info.status) << std::endl;
    std::cout << " --------------------------------------" << std::endl;
}