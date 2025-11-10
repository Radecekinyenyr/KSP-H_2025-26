#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <float.h>
#include <map>
#include <random>
#include <unordered_set>

using namespace std;


long large, small;
void WriteOutDemo(vector<vector<long>> input, int x, vector<long> demonstration, int K, int N, long h_large = 0, long h_small = 0) {
    cout << "input: " << x << endl;

    int left = N / 4, right = 3 * N / 4, mid = (N%2 == 0) ? N / 2-1 : N / 2;
    long smallest = LONG_MAX, biggest = LONG_MIN;
    for (int i = 0; i < input.size(); ++i) {
        for (int j = 0; j < input[i].size(); ++j) {
            if (j == mid) {
                cout << " |" << input[i][j] << "| ";
            }
            else if (j == right) {
                cout << " |" << input[i][j] << "| ";
                if (biggest < input[i][j]) {
                    biggest = input[i][j];
                }
            }
            else if (j == left) {
                cout << " |" << input[i][j] << "| ";
                if (smallest > input[i][j]) {
                    smallest = input[i][j];
                }
            }
            else {
                cout << input[i][j] << " ";
            }
        }
        cout << endl;
    }

    if (h_small == 0 && h_large == 0) {
        // Výpis číselné řady pro přehled
        cout << "Demonstration:" << endl;
        for (int i = 0; i < demonstration.size(); ++i) {
            if (K*N % 2 == 0) {
                if (i == demonstration.size()/2 - 1) {
                    cout << i+1 << ":|" << demonstration[i] << "| ";
                }
                else if (i == demonstration.size()/2) {
                    cout << i+1 << ":|" << demonstration[i] << "| ";
                }
                else {
                    if (demonstration[i] == biggest) {
                        cout << i+1 << ":{" << demonstration[i] << "} ";
                    }
                    else if (demonstration[i] == smallest) {
                        cout << i+1 << ":{" << demonstration[i] << "} ";
                    }
                    else {
                        cout << i+1 << ":" << demonstration[i] << " ";
                    }
                }
            }
            else {

                if (i == demonstration.size()/2) {
                    cout << i+1 << ":|" << demonstration[i] << "| ";
                }
                else {
                    if (demonstration[i] == biggest) {
                        cout << i+1 << ":{" << demonstration[i] << "} ";
                    }
                    else if (demonstration[i] == smallest) {
                        cout << i+1 << ":{" << demonstration[i] << "} ";
                    }else {
                        cout << i+1 << ":" << demonstration[i] << " ";
                    }
                }
            }

        }
        cout << endl;
        cout << endl;
    }
    else {
        cout << "Demonstration:" << endl;
        for (int i = 0; i < demonstration.size(); ++i) {
            if (K*N % 2 == 0) {
                if (i == demonstration.size()/2 - 1) {
                    cout << i+1 << ":|" << demonstration[i] << "| ";
                }
                else if (i == demonstration.size()/2) {
                    cout << i+1 << ":|" << demonstration[i] << "| ";
                }
                else if (demonstration[i] == h_large || demonstration[i] == h_small) {
                    cout << i+1 << ":{" << demonstration[i] << "} ";
                }
                else {
                    cout << i+1 << ":" << demonstration[i] << " ";
                }
            }
            else {
                if (i == demonstration.size()/2) {
                    cout << i+1 << ":|" << demonstration[i] << "| ";
                }
                else if (demonstration[i] == large || demonstration[i] == small) {
                    cout << i+1 << ":{" << demonstration[i] << "} ";
                }
                else {
                    cout << i+1 << ":" << demonstration[i] << " ";
                }
            }
        }
        cout << endl;
        cout << endl;
        cout << "###################" << endl;
    }



}
void WriteDemo(vector<vector<long>> input, vector<long> &demonstration, long &compare_median_1, long &compare_median_2, int K, int N) {
    for (int i = 0; i < input.size(); ++i) {
        for (int j = 0; j < input[i].size(); ++j) {
            demonstration.push_back(input[i][j]);
        }
    }

    // Výpis číselné řady pro přehled
    sort(demonstration.begin(), demonstration.end());
    for (int i = 0; i < demonstration.size(); ++i) {
        if (K*N % 2 == 0) {
            if (i == demonstration.size()/2 - 1) {
                compare_median_1 = demonstration[i];
            }
            else if (i == demonstration.size()/2) {
                compare_median_2 = demonstration[i];
            }
        }
        else {

            if (i == demonstration.size()/2) {
                compare_median_1 = demonstration[i];
            }
        }
    }

}

vector<vector<long>> randomInputGenerator(int K, int N, long Pmax) {
    long long D = (long long)K * N;
    if (D > Pmax) throw invalid_argument("musí platit: K*N < Pmax");

    random_device rd;
    mt19937_64 gen(rd());
    uniform_int_distribution<int> dist(1, Pmax);

    vector<unsigned long long> mark((Pmax + 64) / 64, 0);
    auto already_used = [&](long x){ return (mark[x >> 6] >> (x & 63)) & 1; };
    auto set_val = [&](long x){ mark[x >> 6] |= (1 << (x & 63)); };

    vector<int> vals; vals.reserve((size_t)D);
    while ((long long)vals.size() < D) {
        long x = dist(gen);
        if (!already_used(x)) { set_val(x); vals.push_back(x); }
    }

    shuffle(vals.begin(), vals.end(), gen);

    vector<vector<long>> out; out.reserve(K);
    auto it = vals.begin();
    for (int i = 0; i < K; ++i) {
        vector<long> row(it, it + N);
        it += N;
        sort(row.begin(), row.end());
        out.push_back(move(row));
    }
    return out;
}

struct Range {long left_val = 0; long middle_val; long left_mid_count; long mid_right_count; long right_val;};

long double medianEstimateUsingWECDF(vector<Range> ranges, double steps_to_median, double range_size) {
    const long double single_step = 1 / range_size;
    long double median_probability_pos = steps_to_median / range_size;
    long double weights_sum = 0;

    unordered_map<long, long double> start_density_sum;
    unordered_map<long, long double> end_density_sum;
    vector<long> points;

    for (int i = 0; i < ranges.size(); ++i) {

        if (ranges[i].left_val == 0) continue;
        long smallest_point = ranges[i].left_val;
        long middle_point = ranges[i].middle_val;
        long largest_point = ranges[i].right_val;
        long numbers_count = 1;

        points.push_back(smallest_point);
        if (middle_point != 0) {
            points.push_back(middle_point);
            numbers_count += 1;
        }
        if (largest_point != 0) {
            points.push_back(largest_point);
            numbers_count += 1;
        }

        if (middle_point != 0 && ranges[i].left_mid_count > 0 && middle_point > smallest_point) {
            long double density = ranges[i].left_mid_count / range_size / (middle_point - smallest_point);
            start_density_sum[smallest_point] += density;
            end_density_sum[middle_point] += density;
            numbers_count += ranges[i].left_mid_count;
        }
        if (middle_point != 0 && largest_point != 0 && ranges[i].mid_right_count > 0 && largest_point > middle_point) {
            long double density = ranges[i].mid_right_count / range_size / (largest_point - middle_point);
            start_density_sum[middle_point] += density;
            end_density_sum[largest_point] += density;
            numbers_count += ranges[i].mid_right_count;
        }
        long double weight = numbers_count / range_size;
        weights_sum += weight;
    }
    sort(points.begin(), points.end());
    if (points.empty()) {
        cout << "Velikost rozsahů je 0!" << endl;
        return 0;
    }

    const long double round_diff = 1e-18L;
    if (median_probability_pos <= round_diff) return (long double) points.front();
    if (median_probability_pos >= 1.0L - round_diff) return (long double) points.back();

    long double norm_value = 1 / weights_sum;
    for (auto& it : start_density_sum) it.second *= norm_value;
    for (auto& it : end_density_sum) it.second *= norm_value;

    long double active_interval_densities_sum = 0;
    long double cumulative_sum = 0;

        for (int i = 0; i < points.size() - 1; ++i) {
            if (end_density_sum.find(points[i]) != end_density_sum.end()) active_interval_densities_sum -= end_density_sum[points[i]];
            if (start_density_sum.find(points[i]) != start_density_sum.end()) active_interval_densities_sum += start_density_sum[points[i]];
            long double value_incerease = (long double)(points[i + 1] - points[i]) * active_interval_densities_sum;

            if (value_incerease + cumulative_sum >= median_probability_pos && active_interval_densities_sum > 0) {
                long double diference = median_probability_pos - cumulative_sum;
                long double median =  diference / active_interval_densities_sum + points[i];
                return median;
            }
            cumulative_sum += value_incerease;

            if (cumulative_sum < median_probability_pos && cumulative_sum + single_step >= median_probability_pos) return (long double)points[i + 1];
            cumulative_sum += single_step;
        }


        return points.back();

}

pair<long, long> medianInTheKingdom(vector<vector<long>> input, const int K, const int N) {
    long expeditionsCount = 0, smallest = LONG_MAX, largest = LONG_MIN, median_guess = 0;
    bool dataLoaded = false, countsLoaded = false;
    while (true) {

        long between_medians_count = 0, from_start_to_smallest = 0;
        long count_of_smaller = 0, count_of_larger = 0;
        long existing_smaller = 1, existing_larger = LONG_MAX, correct_median = 0;

        vector<Range> ranges(K);
        for (int i = 0; i < K; ++i) {
            vector<long> values;
            if (!dataLoaded) {
                int left = N / 4, right = 3 * N / 4, mid = (N%2 == 0) ? N / 2-1 : N / 2, mid2 = N / 2;
                ranges[i].left_val = input[i][left];
                ranges[i].middle_val = input[i][mid];
                ranges[i].right_val = input[i][right];
                ranges[i].left_mid_count = max(0, mid - left - 1);
                ranges[i].mid_right_count = max(0, right - mid - 1);
                between_medians_count += ranges[i].left_mid_count + ranges[i].mid_right_count + 3;

                if (smallest > input[i][mid]) smallest = input[i][mid];

                if (largest < input[i][mid2] && N%2 == 0) {
                    largest = input[i][mid2];
                } else if (largest < input[i][mid] && N%2 != 0) {
                    largest = input[i][mid];
                }
                if (i == K - 1) {
                    median_guess = medianEstimateUsingWECDF(ranges,(long double)(between_medians_count)/2 ,(long double)between_medians_count);
                    dataLoaded = true;
                }
                expeditionsCount++;

            }
            else {
                    for (int j = 0; j < N; ++j) {
                        if (input[i][j] < median_guess) {
                            count_of_smaller++;
                            if (existing_smaller < input[i][j]) existing_smaller = input[i][j];
                        }
                        else if (input[i][j] > median_guess) {
                            count_of_larger++;
                            if (existing_larger > input[i][j]) existing_larger = input[i][j];
                        }
                        else correct_median = input[i][j];

                        if (input[i][j] >= smallest && input[i][j] <= largest) {
                            if (ranges[i].left_val == 0) ranges[i].left_val = input[i][j];
                            else {
                                ranges[i].right_val = input[i][j];
                                values.push_back(input[i][j]);
                            }
                            between_medians_count++;
                        }
                        else if (input[i][j] < smallest) from_start_to_smallest++;


                        if (j == N-1) {
                            if (values.size() > 1) {
                                if (values.size() <= 3) {
                                    values.pop_back();
                                    ranges[i].middle_val = values[0];
                                    ranges[i].left_mid_count = 0;
                                    ranges[i].mid_right_count = (values.size() == 2) ? 1 : 0;
                                }
                                else {
                                    values.pop_back();
                                    ranges[i].middle_val = (values.size()%2 == 0) ? values[values.size()/2-1] : values[values.size() / 2];
                                    ranges[i].left_mid_count = (values.size()%2 == 0) ? values.size() / 2 - 1 : values.size() / 2;
                                    ranges[i].mid_right_count = values.size() / 2;
                                }
                            }
                            if (i == K-1) {
                                countsLoaded = true;
                            }
                        }
                    }

                expeditionsCount++;
            }
        }
        if (countsLoaded) {
            if ((K*N % 2 == 0 && abs(count_of_smaller - count_of_larger) > 3) ||
                (K*N % 2 != 0 && abs(count_of_smaller - count_of_larger) > 2)) {
                long middle = (K*N % 2 == 0) ? (K*N / 2) : (K*N / 2 + 1);
                long steps_forward_needed = middle - from_start_to_smallest;
                double median_estimate = medianEstimateUsingWECDF(ranges, steps_forward_needed, between_medians_count);
                if (median_estimate == 0) {
                    if (count_of_smaller > count_of_larger) {
                        median_guess = existing_smaller;
                    }
                    else if (count_of_larger > count_of_smaller) {
                        median_guess = existing_larger;
                    }
                }
                else {
                    if (existing_larger != INT_MAX && count_of_smaller < count_of_larger) smallest = existing_larger;
                    else if (existing_smaller != 0 && count_of_smaller > count_of_larger) largest = existing_smaller;
                    median_guess = static_cast<long>(median_estimate + 0.5);
                }

            }
            else {

                if (count_of_smaller > count_of_larger || (count_of_smaller == count_of_larger && K*N%2 == 0)) return make_pair(existing_smaller, expeditionsCount);
                if (count_of_smaller < count_of_larger) return make_pair(existing_larger, expeditionsCount);
                return make_pair(correct_median, expeditionsCount);
            }
        }
    }
}


int main() {
    int K = 800, N = 10000, Pmax = 100000000;

    int reps = 100;
    cout << "K = " << K << " N = " << N << " Pmax = " << Pmax << endl;

   
    vector<vector<vector<long>>> incorrect_output_input;
    vector<tuple<long, long, long, int, long, long>> right_wrong_median;

    vector<vector<long>> hardest_input;
    long avrage_median_count = 0, smallest = LONG_MAX, largest = LONG_MIN, h_large = 0, h_small = 0, in_small = LONG_MAX, in_larg = LONG_MIN;
    for (int x = 0; x < reps; x++) {
        long compare_median_1, compare_median_2 = -2;
        vector<vector<long>> input = randomInputGenerator(K, N, Pmax);
        vector<long> demonstration;
        WriteDemo(input,demonstration, compare_median_1, compare_median_2, K, N);
        //WriteOutDemo(input, x, demonstration, K, N);
        pair<long, long> median = medianInTheKingdom(input, K, N);
        cout << "CALCULATED MEDIAN = " << median.first << " MEDIAN_CORRECT_1: " << compare_median_1 << " MEDIAN_CORRECT_2: " << compare_median_2 << endl;
        cout << "Expeditions count: " << median.second << endl;
        cout << "###################" << endl;
        if (median.second < smallest) {
            smallest = median.second;
        }
        if (median.second > largest) {
            largest = median.second;
            hardest_input = input;
            h_large = large;
            h_small = small;
        }
        avrage_median_count = avrage_median_count + median.second;
        if (compare_median_1 != median.first && compare_median_2 != median.first) {
            incorrect_output_input.push_back(input);
            cout << "comparing median: " << compare_median_1 << " " << compare_median_2 << " median: " << median.first << endl;
            right_wrong_median.push_back(make_tuple(compare_median_1, compare_median_2, median.first, x, small, large));
        }

    }

    cout << "avrage_median_count = " << avrage_median_count / reps << " largest_count = " << largest << " smallest_count = " << smallest << endl;
    cout << "number of wrong outputs: " << right_wrong_median.size() << endl;
    cout << "Hardest input: " << endl;
    vector<long> demonstration;
    long c,k;
    WriteDemo(hardest_input, demonstration, c, k, K, N);
   //WriteOutDemo(hardest_input,  0, demonstration, K, N, h_large, h_small);

    if (incorrect_output_input.size() > 0) {
        for (int i = 0; i < incorrect_output_input.size(); ++i) {
            cout << "input: " << get<2>(right_wrong_median[i]) << endl;
            cout << "correct median_1: " << get<0>(right_wrong_median[i]) << " correct median_2: " << get<1>(right_wrong_median[i]) << " calculated median: " << get<1>(right_wrong_median[i]) << endl;
            vector<long> demonstration_in;
            WriteDemo(incorrect_output_input[i], demonstration_in, get<0>(right_wrong_median[i]), get<1>(right_wrong_median[i]), K, N);
            WriteOutDemo(incorrect_output_input[i], 0, demonstration_in, K, N, get<4>(right_wrong_median[i]), get<3>(right_wrong_median[i]));

        }
    }


    return 0;
}