#include <iostream>
#include <cassert>
#include <cmath>
#include "converter/BitConverter.hpp"
#include "converter/Constants.hpp"

void testDegreeConversion() {
    converter::BitInput input{180, static_cast<int>(converter::AngleConstants::FULL_CIRCLE_DEGREE)};
    converter::BitConverter converter(input);
    assert(converter.toDegree() == 180.0);
}

void testRadianConversion() {
    converter::BitInput input{180, static_cast<int>(converter::AngleConstants::FULL_CIRCLE_DEGREE)};
    converter::BitConverter converter(input);
    double rad = converter.toRadian();
    double expected = converter::AngleConstants::PI / 2.0;
    assert(std::abs(rad - expected) < 1e-6);
}

int main() {
    testDegreeConversion();
    testRadianConversion();
    std::cout << "✅ All tests passed!\n";
    return 0;
}

