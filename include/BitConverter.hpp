#ifndef KMUHEARTBEAT_BIT_CONVERTER_HPP
#define KMUHEARTBEAT_BIT_CONVERTER_HPP

#include "BitInput.hpp"

namespace kmuheartbeat {
class BitConverter {
public:
    explicit BitConverter(const BitInput& input);

    double toDegree() const;
    double toRadian() const;

private:
    BitInput input_;
};
}  // namespace kmuheartbeat

#endif

