#pragma once

#include "struct.hpp"
#include "create.hpp"
#include "insert.hpp"
#include "delete.hpp"
#include "search.hpp"
#include "replace.hpp"
#include "traversal.hpp"
#include "info.hpp"
#include "listdata.hpp"

int pilihMenu(int pilihan){
    Queue daftarfilm;
    pointer pBaru, pHapus, pCari, pBantu;
    int ketemu, code, kategori, opsi, konfirmasi, exit = 0;
    char character;
    std::string word;

    createQueue(daftarfilm);

    while (true){
        system("cls");
        std::cout << " ======================================" << std::endl;
        std::cout << "|       Program List Film/Series       |"<< std::endl;
        std::cout << " ======================================" << std::endl;
        std::cout << "| 1. Tambahkan judul dan info          |" << std::endl;
        std::cout << "| 2. Tampilkan info film/series        |" << std::endl;
        std::cout << "| 3. Update info film/series           |" << std::endl;
        std::cout << "| 4. Tampilkan daftar film/series      |" << std::endl;
        std::cout << "| 5. Hapus judul film/series           |" << std::endl;
        std::cout << "| 6. Keluar                            |" << std::endl;
        std::cout << " ======================================" << std::endl;
        std::cout << "  Masukkan Pilihan(No 1-6): ";
        std::cin >> pilihan;
        system("cls");
        switch (pilihan){
            case 1: //push : insert first
                createElmt(pBaru);
                insertQueue(daftarfilm, pBaru);
                std::cout << " ===================================== " << std::endl;            
                std::cout << "|     Konfirmasi Penambahan Data      |" << std::endl;
                std::cout << " ===================================== " << std::endl;
                std::cout << "| 1. Cukup (Lanjut)                   |" << std::endl;
                std::cout << "| 2. Urungkan (Undo)                  |" << std::endl;
                std::cout << " ------------------------------------- " << std::endl;
                std::cout << " >> ";
                std::cin >> konfirmasi;
                std::cout << std::endl;
                switch(konfirmasi){
                    case 1:
                        break;
                    case 2:
                        pop(daftarfilm, pHapus);
                        break;
                    default:
                        std::cout << " ===================================== " << std::endl;
                        std::cout << "|      Terjadi Kesalahan Input!       |" << std::endl;
                        std::cout << " ===================================== " << std::endl << std::endl;
                }
                system("pause");
                break;
            case 2:
                std::cout << " ------------------------------------- " << std::endl;
                std::cout << "  Kode Film/Series:                    " << std::endl;
                std::cout << "  >> ";
                std::cin >> code;
                search(daftarfilm, code, character, ketemu, pCari);
                if(ketemu){
                    infoData(pCari);
                }
                else{
                    std::cout << "Kode tidak ditemukan!";
                }
                system("pause");
                break;
            case 3: //update
                std::cout << " ------------------------------------- " << std::endl;
                std::cout << "  Kode Film/Series:                    " << std::endl;
                std::cout << "  >> ";
                std::cin >> code;
                search(daftarfilm, code, character, ketemu, pCari);
                if(ketemu){
                    std::cout << " ===================================== " << std::endl;            
                    std::cout << "|           Kode Ditemukan!           |" << std::endl;
                    std::cout << " ===================================== " << std::endl;
                    std::cout << "| 1. Update Judul                     |" << std::endl;
                    std::cout << "| 2. Update Kategori                  |" << std::endl;
                    std::cout << "| 3. Update Tahun Rilis               |" << std::endl;
                    std::cout << "| 4. Update Asal Negara               |" << std::endl;
                    std::cout << "| 5. Update Status                    |" << std::endl;
                    std::cout << " ------------------------------------- " << std::endl;
                    std::cout << "  Masukan Pilihan: ";
                    std::cin >> opsi; 
                    std::cout << std::endl;
                    updateInfo(daftarfilm, pCari, opsi);
                }
                else{
                    std::cout << "Kode tidak ditemukan!";
                }
                break;
            case 4: //traversal
                std::cout << " ===================================== " << std::endl;            
                std::cout << "|     Tampilkan List Film/Series      |" << std::endl;
                std::cout << " ===================================== " << std::endl;
                std::cout << "| 1. Semua                            |" << std::endl;
                std::cout << "| 2. Berdasarkan Status               |" << std::endl;
                std::cout << "| 3. Berdasarkan Kategori             |" << std::endl;
                std::cout << " ------------------------------------- " << std::endl;
                std::cout << "  Masukan Pilihan: ";
                std::cin >> kategori;
                listData(daftarfilm, kategori);
                system("pause");
                break;
            case 5:
                std::cout << " ------------------------------------- " << std::endl;
                std::cout << "  Kode Film/Series:                    " << std::endl;
                std::cout << "  ";
                std::cin >> code;
                search(daftarfilm, code, character, ketemu, pCari);
                if(ketemu){
                    std::cout << "Kode ditemukan" << std::endl;
                    deleteSearch(daftarfilm, pCari, pHapus);
                    std::cout << "Data berhasil dihapus!" << std::endl;
                }
                else{
                    std::cout << "Kode tidak ditemukan!";
                }
                system("pause");
                break;
            case 6:
                std::cout << "=== Program telah selesai ===" << std::endl;
                return 0;
                break;
            default:
                std::cout << "Input tidak diketahui" << std::endl;
                break;
        }
    }
}