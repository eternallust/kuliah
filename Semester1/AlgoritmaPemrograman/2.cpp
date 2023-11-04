// Tugas Algoritma Pemrograman Rizky
#include <iostream>
#include <string>

class MahasiswaClass {
public:
    std::string nama;
    std::string nim;
    int rata2;
    std::string grade;
};

MahasiswaClass prosesNilai(std::string nama, std::string nim, int nilai1, int nilai2, int nilai3) {
    
    MahasiswaClass mahasiswa;
    mahasiswa.nama = nama;
    mahasiswa.nim = nim;
    mahasiswa.rata2 = (nilai1 + nilai2 + nilai3)/3;
    
    if(mahasiswa.rata2 >= 80) {
        mahasiswa.grade = "A";
    } else if(mahasiswa.rata2 >= 70 && mahasiswa.rata2 < 80) {
        mahasiswa.grade = "B";
    } else if(mahasiswa.rata2 >= 60 && mahasiswa.rata2 < 70) {
        mahasiswa.grade = "C";
    } else if(mahasiswa.rata2 >= 50 && mahasiswa.rata2 < 60) {
        mahasiswa.grade = "D";
    } else {
        mahasiswa.grade = "E";
    }
    
    return mahasiswa;
}

int main() {
    
    MahasiswaClass hasil;
    std::string nama;
    std::string nim;
    int nilai1;
    int nilai2;
    int nilai3;

    std::cout << "Masukkan Nama: ";
    std::cin >> nama;
    std::cout << "Masukkan NIM: ";
    std::cin >> nim;
    std::cout << "Masukkan Nilai 1: ";
    std::cin >> nilai1;
    std::cout << "Masukkan Nilai 2: ";
    std::cin >> nilai2;
    std::cout << "Masukkan Nilai 3: ";
    std::cin >> nilai3;
    
    hasil = prosesNilai(nama, nim, nilai1, nilai2, nilai3);

    std::cout << "======OUTPUT=========="<< std::endl;
    std::cout << "Nama : " << hasil.nama << std::endl;
    std::cout << "NIM : " << hasil.nim << std::endl;
    std::cout << "Rata2 adalah :  " << hasil.rata2 << std::endl;
    std::cout << "Grade : " << hasil.grade << std::endl;

    return 0;
}