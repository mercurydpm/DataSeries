#pragma once
#include <vector>

class DataSeries
{
public:
    explicit DataSeries(const std::vector<double>& data);
    double mean() const;

private:
    std::vector<double> data_;
};
