#include <iostream>
#include <map>
#include <random>
#include <time.h>
using namespace std;
template<typename T>
T RandomProbability(T min, T max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(min, max);
    return dis(gen);
}
int PerfectCoinFlip() {
    double flip = RandomProbability<double>(0, 1);
    if (flip > 0.5) {
        return 1;
    }
    return 0;
}

int GeneralCoinFlip(double p_1) {
    auto flip = RandomProbability<double>(0.0, 1.0);
    if (flip <= p_1) {
        return 1;
    }
    return 0;
}

int CubeKSimulation(int k) {
    if (k < 2) { cout << "K < 2!!!" << endl; return 0; }
    double b = log2(k);
    double b_2 = (floor(b) != b) ? floor(b) + 1 : b;
    int val = k;

    while (val >= k) {
        string str_bin;
        for (int i = 0; i < b_2; i++) str_bin += to_string(PerfectCoinFlip());
        val = stoi(str_bin, nullptr, 2);
    }
    return val;
}

int CubeLSimulationUsingCubeKBinnaryApproach(int l, int k) {
    if (l < 2 || k < 2) { cout << "K < 2 nebo l < 2!!!" << endl; return 0; }
    double b = log2(l);
    double b_2 = (floor(b) != b) ? floor(b) + 1 : b;
    int val = l;

    while (val >= l) {
        string str_bin;
        for (int i = 0; i < b_2; i++) {
            int roll = CubeKSimulation(k);
            if (roll < k/2) str_bin += "0";
            else if ((roll >= k/2 && k % 2 == 0) || (roll > k/2 && k % 2 != 0)) str_bin += "1";
            else i--;
        }
        val = stoi(str_bin, nullptr, 2);
    }
    return val;
}

int PerfectCoinFlipSimulation() {
    pair flips {GeneralCoinFlip(0.3), GeneralCoinFlip(0.3)};
    if (flips.first != flips.second) return flips.first;
    else return PerfectCoinFlipSimulation();
}

int GeneralCoinFlipSimulation(double p) {
    double lower_streak = 0.0;
    double upper_streak = 1.0;
    double streak = (lower_streak + upper_streak) / 2;

    while (true) {
        int flip = PerfectCoinFlip();
        if (flip == 0) {
            lower_streak = streak;
            streak = (upper_streak + streak) / 2;
            if (lower_streak > p && streak > p) return flip;
        }
        else {
            upper_streak = streak;
            streak = (lower_streak + streak) / 2;
            if (streak <= p && upper_streak <= p) return flip;
        }
    }
}

int main() {

    int Pc = 0;
    int Gc = 0;
    for (int i = 1; i <= 3; i++) {
        int p = PerfectCoinFlip();
        int g = GeneralCoinFlip(0.2);
        Pc += (p == 1) ? 1 : 0;
        Gc += (g == 1) ? 1 : 0;
        cout << "Perfect: " << p << std::endl;
        cout << "Gen: " << g << std::endl;

    }
    cout << " Cube: " << CubeKSimulation(8) << endl;

    cout << "Perfect count 1: " << Pc << std::endl;
    cout << "General count 1: " << Gc << std::endl;
    int p = 0;
    clock_t begin = clock();
        for (int i = 0; i < 10000; i++) {
            int c = PerfectCoinFlipSimulation();
            if (c == 1) p++;
        }
        cout << "1 p: " << p << std::endl;
        clock_t end = clock();
        double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
        cout << "Runtime: " << time_spent << endl;

    int p1 = 0;
    cout<< std::endl;






    for (int i = 1; i <= 10000; i++) {
        int flip = GeneralCoinFlipSimulation(0.0005);
        if (flip == 1) {p1++;}
        cout << "Flip: " << flip << endl;
    }

    cout << "P 1 = " << p1 << endl;

    return 0;
}