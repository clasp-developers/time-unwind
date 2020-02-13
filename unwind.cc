#include <chrono>
#include <iostream>

#include "unwindf.cc"

int main(int argc, const char* argv[])
{
    size_t num = 10000;
    auto fstart = std::chrono::high_resolution_clock::now();
    for (size_t fc=0; fc<num; ++fc) f0();
    auto fend = std::chrono::high_resolution_clock::now();
    auto gstart = fend;
    for (size_t gc=0; gc<num; ++gc) g0();
    auto gend = std::chrono::high_resolution_clock::now();
    auto fdur = std::chrono::duration_cast<std::chrono::milliseconds>(fend-fstart);
    auto gdur = std::chrono::duration_cast<std::chrono::milliseconds>(gend-gstart);
    std::cout << "fdur = " << fdur.count() << " milliseconds" << std::endl;
    std::cout << "gdur = " << gdur.count() << " milliseconds" << std::endl;
}
