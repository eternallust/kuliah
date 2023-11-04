#include <iostream>
#include <string>

int main() {
    std::string nama;
    int umur;
    std::string tempatLahir;
    int beratBadan;

    std::cout << "Masukkan Nama: ";
    std::cin >> nama;
    std::cout << "Masukkan Umur: ";
    std::cin >> umur;
    std::cout << "Masukkan Tempat Lahir: ";
    std::cin >> tempatLahir;
    std::cout << "Masukkan Berat Badan: ";
    std::cin >> beratBadan;

    std::cout << "======OUTPUT=========="<< std::endl;
    std::cout << "Nama anda " << nama << std::endl;
    std::cout << "Umur anda " << umur << std::endl;
    std::cout << "Tempat Lahir " << tempatLahir << std::endl;
    std::cout << "Berat Badan " << beratBadan << std::endl;

    return 0;
}