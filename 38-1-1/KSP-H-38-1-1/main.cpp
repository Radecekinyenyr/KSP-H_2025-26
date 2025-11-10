#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <float.h>
#include <map>
using namespace std;

struct OPTION {
    pair<int, int> smallest_val;
    pair<int, int> largest_val;
    long long cash_ballance_after_trade;
};

int main() {
    ifstream inputFile("/Users/radekzach/CLionProjects/KSP-H-38-1-1/06.in");
    ofstream outputFile("output.txt");
    int N, K;
    vector<OPTION> options;

    int actual_smallest = INT_MAX;
    int actual_largest = 0;
    int actual = 0;
    int index_of_smallest = 0;
    int index_of_largest = 0;

    inputFile >> N >> K;


    for (int i = 0; i < N; i++) {
        inputFile >> actual;

        if ((i > 0 && actual < actual_smallest && actual_smallest <= K) || i == N - 1) {

            if (i == N - 1 && actual > actual_largest && actual > actual_smallest) {
                actual_largest = actual;
                index_of_largest = i;
            }

            if (index_of_smallest < index_of_largest) {
                cout << "actual value " << actual << endl;
                cout << "actual smallest val. " << actual_smallest << endl;
                cout << "actual largest val. " << actual_largest << endl;
                long long cash_balance_after_closing = (K / actual_smallest) * actual_largest + (K % actual_smallest);

                options.push_back({{actual_smallest, index_of_smallest}, {actual_largest, index_of_largest}, cash_balance_after_closing});
                actual_largest = 0;
            }
        }

        if (actual < actual_smallest && actual <= K) {

            actual_smallest = actual;
            index_of_smallest = i;
        }
        else if (actual > actual_smallest && actual > actual_largest) {
            actual_largest = actual;
            index_of_largest = i;
        }

    }

    if (options.size() == 0) {
        cout << "No possible trades with a profit found!";
        outputFile << -1;
    } else {
        int biggest_profit = 0, index_of_best_trade = 0;
        for (int i = 0; i < options.size(); i++) {
            cout << "Trade num.: " << i << " | Buying day: " << options[i].smallest_val.second << ", Coal bought at price: " << options[i].smallest_val.first << " | Selling day: " << options[i].largest_val.second << ", Selling price of coal: " << options[i].largest_val.first << " | Total cash balance after trade: " << options[i].cash_ballance_after_trade << endl;
            if (options[i].cash_ballance_after_trade > biggest_profit) {
                biggest_profit = options[i].cash_ballance_after_trade;
                index_of_best_trade = i;
            }
        }
        cout << "Best trade: " << index_of_best_trade << endl;
        outputFile << options[index_of_best_trade].smallest_val.second << " " << options[index_of_best_trade].largest_val.second << endl;
    }

    inputFile.close();
    outputFile.close();
    return 0;
}