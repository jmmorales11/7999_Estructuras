
#include <iostream>
#include <string>
#include <bitset>

using namespace std;
string octalToHexadecimal(const string& octal) {
    int decimal = 0;
    int aux = 1;
    for (int i = octal.length() - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * aux;
        aux *= 8;
    }
    string hexa = "";
    char hexadecimal[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    while (decimal > 0) {
        hexa = hexadecimal[decimal % 16] + hexa;
        decimal /= 16;
    }
    return hexa;
}

int main() {
    std::string octal = "752";
    std::cout << octalToHexadecimal(octal) << std::endl;
    return 0;
}









/*#include <iostream>
#include <string>
#include <bitset>
#include <stdio.h>
#include <math.h>

std::string octalToBinary(const std::string& octal) {
    int decimal = 0;
    int power = 1;
    for (int i = octal.length() - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * power;
        power *= 8;
    }
    return std::bitset<32>(decimal).to_string().substr(32 - (int)(std::ceil(std::log2(decimal + 1))));
}

int main() {
    std::string octal = "752";
    std::cout << octalToBinary(octal) << std::endl;
    return 0;
}

*/
/*#include <iostream>
#include <string>

std::string decimalToHexadecimal(int decimal) {
    if (decimal == 0) {
        return "";
    }
    char hexValues[] = "0123456789ABCDEF";
    int remainder = decimal % 16;
    return decimalToHexadecimal(decimal / 16) + hexValues[remainder];
}

int main() {
    int decimal = 500;
    std::cout << decimalToHexadecimal(decimal) << std::endl;
    return 0;
}

*/