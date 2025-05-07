#include "BitConverter.hpp"
#define _USE_MATH_DEFINES
#include <cmath>

namespace kmuheartbeat {

BitConverter::BitConverter(const BitInput& input) : input_(input) {}

double BitConverter::toDegree() const {
    return (static_cast<double>(input_.bitValue) / input_.resolution) * 360.0;
}

double BitConverter::toRadian() const {
    return toDegree() * M_PI / 180.0;
}

}

