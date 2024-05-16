
#include <iostream>
#include <string>

class Player {
private:
    std::string oyuncuismi;
    int puan;
    
public:
    // Kurucu fonksiyon
    Player(std::string a, int b) : oyuncuismi(a), puan(b) {
        std::cout << "Player object created for " << oyuncuismi << std::endl;
    }

    // Yıkıcı fonksiyon
    ~Player() {
        std::cout << "Player object destroyed for " << oyuncuismi << std::endl;
    }

    // Oyuncu özelliklerini ekrana yazdırmak için bir fonksiyon
    void printoyuncu() {
        std::cout << "Isim: " << oyuncuismi << ", Oyuncu Puani: " << puan << std::endl;
    }
};

int main() {
    Player oyuncu1("Dogukan", 250);
    Player oyuncu2("Gece", 500);
    Player oyuncu3("Aleyna", 300);

    oyuncu1.printoyuncu();
    oyuncu2.printoyuncu();
    oyuncu3.printoyuncu();

    return 0;
}

#pragma 