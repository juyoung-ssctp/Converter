#include <iostream>
#include <cassert>
#include "BitConverter.hpp"

void testDegreeConversion() {
    kmuheartbeat::BitInput input{180, 360};
    kmuheartbeat::BitConverter converter(input);
    assert(converter.toDegree() == 180.0);
}

void testRadianConversion() {
    kmuheartbeat::BitInput input{180, 360};
    kmuheartbeat::BitConverter converter(input);
    double rad = converter.toRadian();
    double expected = 3.141592653589793;
    assert(std::abs(rad - expected) < 1e-6);
}

int main() {
    testDegreeConversion();
    testRadianConversion();
    std::cout << "All tests passed!\n";
    return 0;
}

