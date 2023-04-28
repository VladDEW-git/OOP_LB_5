#pragma once
#include "Signal.h"
#include "ProcessedData.h"

class SignalProcessedData: public Signal
{
protected:
    ProcessedData data;
public:
    SignalProcessedData();
    SignalProcessedData(double _amplitude, double _frequency, const ProcessedData& _data);
    SignalProcessedData(const SignalProcessedData& other);
    virtual ~SignalProcessedData();

    void print() const;

    friend std::ostream& operator<<(std::ostream& os, const SignalProcessedData& s);
    friend std::istream& operator>>(std::istream& is, SignalProcessedData& s);
};

