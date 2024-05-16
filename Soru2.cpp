#include <iostream>
#include <string>

void swap(int &x, int &y){
    int hold = x ;
    x = y;
    y= hold;
}

int main(){
    int sayi1= 48;
    int sayi2= 35;

    std::cout <<" Fonksiyondan Once:" << std::endl;
    std::cout << "sayi1: " << sayi1 << ", sayi2: " << sayi2 << std::endl;

    swap(sayi1,sayi2);
    std::cout <<" Fonksiyondan Sonra:" << std::endl;
    std::cout << "sayi1: " << sayi1 << ", sayi2: " << sayi2 << std::endl;

    return 0;
}
