#pragma once

#include "BitInput.hpp"

namespace converter {

class BitConverter {
public:
    explicit BitConverter(const BitInput& input);

    double toDegree() const;
    double toRadian() const;

private:
    BitInput input_;  // Composition 구조
};

}  // namespace converter

