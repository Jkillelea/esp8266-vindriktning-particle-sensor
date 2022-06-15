#pragma once
#include <stdint.h>
#include <stdbool.h>

struct particleSensorState_t {
    uint16_t avgPM25 = 0;
    uint16_t measurements[5] = {0, 0, 0, 0, 0};
    uint8_t measurementIdx = 0;
    boolean valid = false;

    uint16_t dhtMeasurementIdx = 0;
    float avgDegC = 0;
    float avgHumid = 0;
    float degCMeasurements[5] = {0, 0, 0, 0, 0};
    float relHumidMeasurements[5] = {0, 0, 0, 0, 0};
};
