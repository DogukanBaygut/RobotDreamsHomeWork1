#include <iostream>
#include <string>
#include <vector>

int main(){

    int size;
    
    std::cout << "Size :";
    std::cin >> size;

    int* dArray = new int[size];

    for(int i=0; i < size; i++){
        dArray[i]=i+1; // 0 yerine 1 den başlamasını istedim
    }
    
    std::cout << "Dizi Elemanlari:";
    for (int i=0; i < size; i++){
        std::cout << dArray[i] << " "; 
    }
    std::cout << std::endl;

    delete[] dArray;



    return 0;
}