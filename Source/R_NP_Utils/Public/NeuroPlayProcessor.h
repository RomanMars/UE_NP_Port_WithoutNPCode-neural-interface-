#ifndef NEUROPLAYPROCESSOR_H
#define NEUROPLAYPROCESSOR_H

#include "Filters/abstractfilter.h"
#include "DataGrabber.h"
#include "Data/SpectrumAnalyzer.h"

class NeuroPlayProcessor
{

public:
    NeuroPlayProcessor(); ///remove code - cause its NeuroPlay code
    bool addData(std::vector<char> data);
    int channels() const;
    float frequency() const;

    std::vector<std::vector<float>> lastFilteredData();
    std::vector<std::vector<float>> lastRhythms();
    std::vector<std::vector<float>> lastSpectrums();


    ///remove code - cause its NeuroPlay code
};

#endif
