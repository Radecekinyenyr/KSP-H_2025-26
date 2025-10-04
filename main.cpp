#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <float.h>
#include <map>
#include <random>

using namespace std;

vector<vector<int>> generateRandomInputs(int N, int K) {
    vector<vector<int>> allInputs;
    allInputs.reserve(K);

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 3); // čísla 1–3

    for (int i = 0; i < K; ++i) {
        vector<int> input(N);
        for (int j = 0; j < N; ++j) {
            input[j] = dist(gen);
        }
        allInputs.push_back(move(input));
    }

    return allInputs;
}

int main() {
    ifstream inputFile("/Users/radekzach/CLionProjects/KSP_H_38_1_2/01.in");
    ofstream outputFile("output.txt");

    int N = 100;

    //inputFile >> N;

    int member;
    vector<int> output(N, -1);

    pair<int, int> left = {0, N-1}, right = {0, N-1};
    vector<int> members_to_be_used = {1,2,3};
    bool all_groups_are_declared = false, middle_members_are_used = false;
    int first_member, middle_member, last_member;

    vector<vector<int>> inputs = generateRandomInputs(N, 1);

    int biggest_loss = 0, input_index = 0;
    for (int K = 0; K < inputs.size(); ++K) {
        cout << "Inputs: " << K << endl;
        for (int i = 0; i < inputs[K].size(); ++i) {
            cout << inputs[K][i] << " ";
        }
        cout << endl;
        for (int i = 0; i < N; i++) {
            //inputFile >> member;
            member = inputs[K][i];
            //cout << member << endl;
            if (all_groups_are_declared == false) {
                if (output[0] == -1) {
                    output[0] = member;
                    first_member = member;
                    left.first++;
                    right.first++;
                    members_to_be_used.erase(remove(members_to_be_used.begin(), members_to_be_used.end(), member), members_to_be_used.end());
                }
                else if (output[N-1] == -1 && output[0] != member) {
                    output[N-1] = member;
                    last_member = member;
                    left.second--;
                    right.second--;
                    members_to_be_used.erase(remove(members_to_be_used.begin(), members_to_be_used.end(), member), members_to_be_used.end());
                    middle_member = members_to_be_used[0];
                    all_groups_are_declared = true;
                }
                else {
                    output[left.first] = member;
                    left.first++;
                    right.first++;
                }

            }
            else {
                if (member == first_member) {
                    if (left.first < left.second) {
                        output[left.first] = member;
                        left.first++;
                        if (middle_members_are_used == false) {
                            right.first++;
                        }
                    }
                    else {
                        if (right.first < right.second - 1) {
                            int new_pos = (right.second - right.first) / 2 + right.first + 1;
                            output[new_pos] = member;
                            left.first = right.first;
                            left.second = new_pos-1;
                            right.first = new_pos + 1;
                            int mid = first_member;
                            first_member = middle_member;
                            middle_member = mid;
                        }
                        else {
                            cout << "Not enough space for members to be declared" << endl;
                            break;
                        }
                    }

                }
                else if (member == middle_member) {
                    if (middle_members_are_used == false) {
                        int new_pos = (right.second - right.first) / 2 + right.first + 1;
                        output[new_pos] = member;
                        right.first = new_pos + 1;
                        left.second = new_pos - 1;
                        middle_members_are_used = true;
                    }
                    else {
                        if (left.second - left.first >= right.second - right.first && left.second - left.first >= 1) {
                            output[left.second] = member;
                            left.second--;
                        }
                        else if (left.second - left.first < right.second - right.first && right.second - right.first >= 1) {
                            output[right.first] = member;
                            right.first++;
                        }
                        else {
                            cout << "Not enough space for members to be declared" << endl;
                            break;
                        }
                    }
                }
                else {
                    if (right.first < right.second) {
                        output[right.second] = member;
                        right.second--;
                        if (middle_members_are_used == false) {
                            left.second--;
                        }
                    }
                    else {
                        if (left.first < left.second - 1) {
                            int new_pos = (left.second - left.first) / 2 + left.first + 1;
                            output[new_pos] = member;
                            right.second = left.second;
                            left.second = new_pos-1;
                            right.first = new_pos + 1;
                            int mid = last_member;
                            last_member = middle_member;
                            middle_member = mid;
                        }
                        else {
                            cout << "Not enough space for members to be declared" << endl;
                            break;
                        }
                    }
                }
            }
            for (int i = 0; i < N; i++) {
                cout << output[i] << ' ';
            }
            cout << endl;
        }
        cout << "Output: " << K << endl;
        int lossCounter = 0;
        for (int i = 0; i < N; i++) {
            cout << output[i] << ' ';
            if (output[i] == -1) {
                lossCounter++;
            }
        }
        if (lossCounter > biggest_loss) {
            biggest_loss = lossCounter;
            input_index = K;
        }
        cout << endl;
        cout << "Loss: " << lossCounter << endl;
    }

    cout << "biggest_loss: " << biggest_loss << " Input index: " << input_index << endl;

    /*
    for (int i = 0; i < N; i++) {
        cout << output[i] << ' ';
    }
    cout << "Třetí proměná: " << middle_member << endl;
    */
    inputFile.close();
    outputFile.close();

    return 0;
}