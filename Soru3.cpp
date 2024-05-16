#include <iostream>
#include <string>
#include <cstdlib> // rand ve srand fonksiyonları için
#include <ctime>   // time fonksiyonu için


int main (){
   int Dizi[10];

   std::srand(static_cast<unsigned int>(std::time(0)));

   for(int i=0; i<10; i++){
    Dizi[i]= std::rand()%100;
   }

   int* ptr=Dizi;
   for(int i=0; i<10;i++){
    std::cout << "Dizi[" << i <<"] = " << *(ptr + i) << std::endl;
   }




    return 0;
}