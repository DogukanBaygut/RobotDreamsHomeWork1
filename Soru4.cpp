#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string input;
    std::vector<char> cVector;

    std::cout << "Bir kelime girin:";
    std::cin >> input;

    for(char c : input){
        cVector.push_back(c);
    }

    std::cout << "Vektordeki karakterler: ";
    for(char c: cVector){
        std::cout << c << "\t";
    }
    std::cout << std::endl;


    return 0;
}