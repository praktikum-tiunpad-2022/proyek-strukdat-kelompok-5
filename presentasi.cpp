#include <iostream>
using namespace std;

main(){
    int pilihan, tahun;
    string judul;
    while (true){
    cout << " ============================================================" << endl;
    cout << "|                Program List Film/Series                    |"<< endl;
    cout << " ============================================================" << endl;
    cout << "| 1. Tambahkan judul beserta info film/series                |" << endl
         << "| 2. Tampilkan info film/series                              |" << endl
         << "| 3. Update info film/series                                 |" << endl
         << "| 4. Tampilkan seluruh daftar film/series                    |" << endl
         << "| 5. Tampilkan daftar film/series yang belum ditonton        |" << endl
         << "| 6. Tampilkan daftar film/series yang telah selesai ditonton|" << endl
         << "| 7. Hapus judul film/series                                 |" << endl
         << "| 8. Keluar                                                  |" << endl;
    cout << " ============================================================" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihan;
    switch(pilihan){
        case 1:
            cout <<" ------------------------------------------------------- "<<"\n";
            cout <<"| Masukkan Judul Film/Series:                           |"<<"\n";
            cout << "<judul>" << endl;
            cout <<"| Masukkan Kategori Film/Series:                        |"<<"\n";
            cout << "<kategori" << endl;
            cout <<"| Masukkan Tahun Rilis Film/Series:                     |"<<"\n";
            cout << "<tahun>" << endl;
            cout <<"| Masukkan Asal Negara Film/Series:                     |"<<"\n";
            cout << "<negara>" << endl;
            cout <<" ------------------------------------------------------- "<<"\n";
            break;
        case 2:
            cout <<" ------------------------------------------------------- "<<"\n";
            cout<<"| Masukkan Judul Film/Series yang ingin ditampilkan:     |"<<"\n";
            cout << "<judul>" << endl << endl;
            cout<<"| Info Film/Series:                                      |"<<"\n";
            cout<<"| Judul Film/Series: <judul>                             |"<<"\n";
            cout<<"| Kategori Film/Series: <kategori>                       |"<<"\n";
            cout<<"| Tahun Rilis Film/Series: <tahun>                       |"<<"\n";       
            cout<<"| Asal Negara Film/Series: <negara>                      |"<<"\n";
            cout <<" ------------------------------------------------------- "<<"\n";
            break;
        case 3:
            cout <<" ------------------------------------------------------- "<<"\n";
            cout<<"| Masukkan Judul Film/Series yang ingin diupdate:       |"<<"\n";
            cout << "<judul>" << endl;
            cout<<"| Pilih data yang ingin diupdate                        |"<<"\n"
                <<"| 1. Judul                                              |"<<"\n"
                <<"| 2. Kategori                                           |"<<"\n"
                <<"| 3. Tahun Rilis                                        |"<<"\n"
                <<"| 4. Asal Negara                                        |"<<"\n";
            cout <<" ------------------------------------------------------- "<<"\n";
            // switch(choose){
            //     case 1:
            //         cout<<"| Masukkan Judul Film/Series yang Baru:                 |"<<"\n";
            //         getline(cin, judul);
            //         break;
            //     case 2:
            //         cout<<"| Masukkan Kategori Film/Series Baru:                   |"<<"\n";
            //         cin >> kategori;
            //         break;
            //     case 3:
            //         cout<<"| Masukkan Tahun Rilis Film/Series Baru:                |"<<"\n";
            //         cin >> tahun;
            //         break;
            //     case 4:
            //         cout<<"| Masukkan Asal Negara Film/Series Baru:                |"<<"\n";
            //         cin >> negara;
            //         break;
            // }
            break;
        case 4:
            cout <<" ------------------------------------------------------- "<<"\n";
            cout <<"|               List Film/Series Anda:                  |"<<"\n";
            cout <<" ------------------------------------------------------- "<<"\n";
            cout <<"| 1. judul 1                                            |"<<"\n";
            cout <<"| 2. judul 2                                            |"<<"\n";
            cout <<"| 3. judul 3                                            |"<<"\n";
            cout <<"| 4. judul 4                                            |"<<"\n";
            cout <<"| 5. judul 5                                            |"<<"\n";
            cout <<" ------------------------------------------------------- "<<"\n";
            break;
        case 5:
            cout <<" ------------------------------------------------------- "<<"\n";
            cout <<"|  List Film/Series Anda yang belum ditonton:           |"<<"\n";
            cout <<" ------------------------------------------------------- "<<"\n";
            cout <<"| 1. judul 4                                            |"<<"\n";
            cout <<"| 2. judul 5                                            |"<<"\n";
            cout <<" ------------------------------------------------------- "<<"\n";
            break;
        case 6:
            cout <<" ------------------------------------------------------- "<<"\n";
            cout<<"|   List Film/Series Anda yang telah selesai ditonton:   |"<<"\n";
            cout <<" ------------------------------------------------------- "<<"\n";
            cout <<"| 1. judul 1                                            |"<<"\n";
            cout <<"| 2. judul 2                                            |"<<"\n";
            cout <<"| 3. judul 3                                            |"<<"\n";
            cout <<" ------------------------------------------------------- "<<"\n";
            break;
        case 7:
            cout <<" ------------------------------------------------------- "<<"\n";
            cout<<"| Masukkan Judul Film/Series yang ingin dihapus:         |"<<"\n";
            cout << "<judul>" << endl << endl;
            cout <<" ------------------------------------------------------- "<<"\n";
            cout<<"|       Judul Film/Series Berhasil Dihapus!              |"<<"\n";
            cout <<" ------------------------------------------------------- "<<"\n";
            break;
        case 8:
        cout << "Program telah berhenti. Terima kasih!" << endl << endl;
        return 0;
            break;
        default:
        cout << "Pilihan yang dimasukkan salah!" << endl << endl;
            break;
    }
    }
}