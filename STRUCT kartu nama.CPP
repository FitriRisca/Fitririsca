#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct KTM
{
    long int nim;
    string nama;
    string ttl;
    string jenis_kelamin;
    string prodi;
    string agama;
    string status_perkawinan;
    string pekerjaan;
    string kewarganegaraan;
    string berlaku;
};




int main()
{
    cout<<"\t\n\tProgram C++ Pointer Pada Struct (Kartu Tanda Mahasiswa)\n\n\n";
    cout<<"\t\n\tNama: FITRI RISCA AMRIZAL AMELYA";
    cout<<"\t\n\tNIM : 12171843\n\n\n";

    //Isi data Kartu Tanda Mahasiswa
    struct KTM *identitas, kartu;
    kartu.nim = 12171843;
    kartu.nama = "FITRI RISCA AMRIZAL AMELYA";
    kartu.ttl = "TANGERANG,24-JANUARI-1999";
    kartu.jenis_kelamin = "PREMPUAN";
    kartu.prodi = "MANAJEMEN INFORMATIKA";
    kartu.agama = "ISLAM";
    kartu.status_perkawinan = "BELUM KAWIN";
    kartu.pekerjaan = "MAHASISWA";
    kartu.kewarganegaraan = "WNI";
    kartu.berlaku = "24 - 01 - 2020";


    //Variabel pointer identitas
    //Diatur menunjuk ke variabel kartu
    identitas = &kartu;

    //Mengakses data melalui variabel pointer identitas
    cout<<" Nomor Induk Mahasiswa\t: " <<identitas->nim <<endl;
    cout<<" Nama\t\t\t\t: " <<identitas->nama <<endl;
    cout<<" Tempat / Tanggal Lahir\t\t: " <<identitas->ttl <<endl;
    cout<<" Jenis Kelamin\t\t\t: " <<identitas->jenis_kelamin <<endl;
    cout<<" Prodi\t\t\t\t: " <<identitas->prodi <<endl;
    cout<<" Agama\t\t\t\t: " <<identitas->agama <<endl;
    cout<<" Status Perkawinan\t\t: " <<identitas->status_perkawinan <<endl;
    cout<<" Pekerjaan\t\t\t: " <<identitas->pekerjaan <<endl;
    cout<<" Kewarganegaraan\t\t: " <<identitas->kewarganegaraan <<endl;
    cout<<" Berlaku Hingga\t\t\t: " <<identitas->berlaku <<endl;

    getch();
}