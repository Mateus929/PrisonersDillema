#ifndef PRISONETSDILLEMA_RANDOMPLAY_H
#define PRISONETSDILLEMA_RANDOMPLAY_H

#include <cstdlib>
#include <random>
#include <chrono>

std :: mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());

class RandomPlay {
private:
public:
    bool answer(bool *you, bool *opponent, int n) {
        return rng() % 2;
    };
};


#endif //PRISONETSDILLEMA_RANDOMPLAY_H
