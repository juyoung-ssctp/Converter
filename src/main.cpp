#include <iostream>
#include "converter/BitConverter.hpp"
#include "converter/Constants.hpp"

int main() {
    converter::BitInput input{180, 360};  // 원래 Magic Number

    // 개선: 의미 있는 이름으로 상수 활용
    converter::BitInput inputDeg{
        180,
        static_cast<int>(converter::AngleConstants::FULL_CIRCLE_DEGREE)  // 360
    };

    converter::BitConverter converter(inputDeg);
    std::cout << "Degree: " << converter.toDegree() << '\n';
    std::cout << "Radian: " << converter.toRadian() << '\n';

    return 0;
}

