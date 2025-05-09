#include "converter/BitConverter.hpp"
#include "converter/Constants.hpp"
#include <cmath>  // for M_PI

namespace converter {

BitConverter::BitConverter(const BitInput& input) : input_(input) {}

double BitConverter::toDegree() const {
    return static_cast<double>(input_.bitValue) / input_.resolution * static_cast<double>(AngleConstants::FULL_CIRCLE_DEGREE);
}

double BitConverter::toRadian() const {
    return toDegree() * static_cast<double>(AngleConstants::PI) / static_cast<double>(AngleConstants::FULL_CIRCLE_DEGREE);
}

}  // namespace converter

