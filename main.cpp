#include <iostream>
#include <random>
#include <chrono>
#include "RandomPlay.h"
#include "yourStrategy.h"

int main() {
    std :: mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());
    RandomPlay rd;
    yourStrategy a;
    const int n = rng() % 1000 + 1000;
    bool *rd_arr = new bool[0], *a_arr = new bool[0];
    int pt_rd = 0, pt_a = 0;
    for(int i = 0; i < n; i++) {
        bool ans_rd = rd.answer(rd_arr, a_arr, i);
        bool ans_a = a.answer(a_arr, rd_arr, i);
        if(ans_rd && ans_a) {
            pt_rd += 3;
            pt_a += 3;
        }
        if(ans_rd && !ans_a) {
            pt_a += 5;
        }
        if(!ans_rd && ans_a) {
            pt_rd += 5;
        }
        if(!ans_rd && !ans_a) {
            pt_a++;
            pt_rd++;
        }
        rd_arr = (bool *)realloc(rd_arr, i + 1);
        a_arr = (bool *)realloc(a_arr, i + 1);
        rd_arr[i] = ans_rd;
        a_arr[i] = ans_a;
    }
    std :: cout << "The game lasted " << n << " rounds\n";
    std :: cout << "You got " << pt_a << " points while your opponent got " << pt_rd << " points\n";
    std :: cout << "You got " << (double)pt_a / n << " points per round\n";
    delete []rd_arr;
    delete []a_arr;
    return 0;
}
