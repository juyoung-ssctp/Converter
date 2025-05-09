#pragma once

namespace converter {

struct BitInput {
    int bitValue;       // 센서에서 받은 실제 비트 값
    int resolution;     // 총 비트 수 (ex. 4096 for 12-bit)
};

}  // namespace converter

