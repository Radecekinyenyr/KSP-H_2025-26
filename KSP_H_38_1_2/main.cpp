#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <map>
#include <random>

using namespace std;

int N = 100;

vector<char> output(N, '.');
pair<int, int> left_interval = {0, N-1}, right_interval = {0, N-1};
vector<int> members_to_be_used = {1,2,3};
bool all_groups_are_declared = false, middle_members_are_used = false;
int first_member = 0, middle_member = 0, last_member = 0;

// Funkce pro generování náhodných vstupů (pro test algoritmu)
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

int optimalPosition(int member) {
    if (all_groups_are_declared == false) {
                if (first_member == 0) {
                    first_member = member;
                    left_interval.first++;
                    right_interval.first++;
                    members_to_be_used.erase(remove(members_to_be_used.begin(), members_to_be_used.end(), member), members_to_be_used.end());
                    return 0;
                }
                else if (last_member == 0 && first_member != member) {
                    if (left_interval.first < left_interval.second - 1) {
                        last_member = member;
                        left_interval.second--;
                        right_interval.second--;
                        members_to_be_used.erase(remove(members_to_be_used.begin(), members_to_be_used.end(), member), members_to_be_used.end());
                        middle_member = members_to_be_used[0];
                        all_groups_are_declared = true;
                        return N-1;
                    }
                    else {
                        return INT_MIN;
                    }
                }
                else {
                    left_interval.first++;
                    right_interval.first++;
                    return left_interval.first - 1;
                }

            }
            else {
                if (member == first_member) {
                    if (left_interval.first < left_interval.second) {
                        left_interval.first++;
                        if (middle_members_are_used == false) {
                            right_interval.first++;
                        }
                        return left_interval.first - 1;
                    }
                    else {
                        if (right_interval.first < right_interval.second - 1) {
                            int new_pos = (right_interval.second - right_interval.first) / 2 + right_interval.first;
                            left_interval.first = right_interval.first;
                            left_interval.second = new_pos-1;
                            right_interval.first = new_pos + 1;
                            int mid = first_member;
                            first_member = middle_member;
                            middle_member = mid;
                            return new_pos;
                        }
                        else {
                            return INT_MIN;
                        }
                    }

                }
                else if (member == middle_member) {
                    if (middle_members_are_used == false) {
                        if (right_interval.first < right_interval.second - 1) {
                            int new_pos = (right_interval.second - right_interval.first) / 2 + right_interval.first;
                            right_interval.first = new_pos + 1;
                            left_interval.second = new_pos - 1;
                            middle_members_are_used = true;
                            return new_pos;
                        }
                        else {
                            return INT_MIN;
                        }
                    }
                    else {
                        if (left_interval.second - left_interval.first >= right_interval.second - right_interval.first && left_interval.second - left_interval.first >= 1) {
                            left_interval.second--;
                            return left_interval.second + 1;
                        }
                        else if (left_interval.second - left_interval.first < right_interval.second - right_interval.first && right_interval.second - right_interval.first >= 1) {
                            right_interval.first++;
                            return right_interval.first - 1;
                        }
                        else {
                            return INT_MIN;
                        }
                    }
                }
                else {
                    if (right_interval.first < right_interval.second) {
                        right_interval.second--;
                        if (middle_members_are_used == false) {
                            left_interval.second--;
                        }
                        return right_interval.second + 1;
                    }
                    else {
                        if (left_interval.first < left_interval.second - 1) {
                            int new_pos = (left_interval.second - left_interval.first) / 2 + left_interval.first;
                            right_interval.second = left_interval.second;
                            left_interval.second = new_pos-1;
                            right_interval.first = new_pos + 1;
                            int mid = last_member;
                            last_member = middle_member;
                            middle_member = mid;
                            return new_pos;
                        }
                        else {
                            return INT_MIN;
                        }
                    }
                }
            }
}

int main() {

    int member;
    int K = 100;
    /*
    vector<vector<int>> inputs (1, vector<int>(N, 7)); inputs[0][0] = 1, inputs[0][1] = 2, inputs[0][2] = 3;
    int number = 1, Left = N / 2 - 2, Count = N / 2 - 2;
    for (int i = 2; i < N; ++i) {
        if (Left != 0 && i > 2) {
            inputs[0][i] = number;
            Left = Left - 1;
        }
        else if (i > 2) {
            Count /= 2;

            if (Count != 0) {
                number == 1 ? number = 3 : number = 1;
                Left = Count - 1;
            }

            inputs[0][i] = number;

        }
    }
*/
    vector<vector<int>> inputs = generateRandomInputs(N, K);
    cout << "Inputs: ";
    for (int i = 0; i < N; ++i) {
        cout << inputs[0][i] << " ";
    }



    for (int i = 0; i < K; i++) {
        cout << "inputs[" << i << "]: ";
        for (int x = 0; x < inputs[i].size(); ++x) {
            cout << inputs[i][x] << " ";
        }
        cout << endl;

        for (int j = 0; j < N; j++) {
            member = inputs[i][j];
            int pos = optimalPosition(member);
            if (pos == INT_MIN) {
                cout << "No space left!" << endl;
                break;
            }
            else {
                output[pos] = '0' + member;
                //cout << pos << endl;
            }

            for (int x = 0; x < output.size(); ++x) {
                cout << output[x] << " ";
            }
            cout << endl;

        }

        cout << "Output[" << i << "]: ";
        for (int x = 0; x < output.size(); ++x) {
            cout << output[x] << " ";
        }
        cout << endl << endl;

        left_interval = {0, N-1}, right_interval = {0, N-1};
        members_to_be_used = {1,2,3};
        all_groups_are_declared = false, middle_members_are_used = false;
        first_member = 0, middle_member = 0, last_member = 0;
        output.assign(N, 0);
    }



    return 0;
}