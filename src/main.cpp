#include <iostream>
#include "BitConverter.hpp"

int main() {
    kmuheartbeat::BitInput input{512, 1024};
    kmuheartbeat::BitConverter converter(input);

    std::cout << "Degree: " << converter.toDegree() << std::endl;
    std::cout << "Radian: " << converter.toRadian() << std::endl;

    return 0;
}

