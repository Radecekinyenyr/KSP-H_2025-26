#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <float.h>
#include <map>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;        // 2,3
    if (n % 2 == 0 || n % 3 == 0) return false;
    // testuju 6k±1
    for (int i = 5; 1*i*i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int countOccurrences(const string& text, const string& word) {
    int count = 0;
    size_t pos = 0;
    while ((pos = text.find(word, pos)) != string::npos) {
        count++;
        pos += word.size();
    }
    return count;
}

int main() {

    ifstream inputFile("/Users/radekzach/CLionProjects/KSP_H_38_1_4/04.in");
    ofstream outputFile("output.txt");
    int N;
    vector<string> input;
    string line;
    string word = "";
    int i1 = 0, j = 1, biggest = 0, k = 0;
    inputFile >> N;
    const double shiftByRuler = 3.27777778;
    const int SIZE = 59;
    char letters[SIZE];

    for (int i = 0; i < SIZE; i++) {
        letters[i] = 'A' + (i % 26);  // cyklické opakování A–Z
    }
    for (int i = 0; i < SIZE; i++) {
        cout << letters[i];
        if ((i + 1) % 26 == 0) cout << " ";  // vizuální oddělení
    }
    cout << endl;
    while (getline(inputFile,line)) {
        //cout << j << "  " << line << endl;
        input.push_back(line);

    }

/*
          // zkus všech 26 Caesar posunů
        int count = 0;
        float median = 0.0;

        for (int l = 0; l < input.size(); l++) {
            if (input[l] == "KSP") {
                count++;
            }

            if (input[l] == "KSPKSP" || l == input.size() - 1) {
                // 1. posun pravítka

                double newCount = count % 26 * 19.0 / 26.0 * shiftByRuler;
                //double newCount = count % 26;
                cout << "median: " << newCount << "přetypovaný na int: " << (int)round(newCount)<< endl;
                word += letters[(int)round(newCount)];

                // 2. Hledání petternů v písmenech

                char letter = 26.0 * count / 412.0 + 'A';
                //int letterK = (int)round(412 / count) % 26;
                //char letter = 'A' + letterK;
                cout << letter << endl;
                word += letter;

                // 3. Binární kódování

                if (count % 2 == 0) {
                    word = word + char((count) % 26);
                }
                else {
                    //word = word + "1";
                }


                if (isPrime(count) == true) {
                    char cc = 'A' + (count) % 26;
                    word = word + cc;
                    cout << "Prime number" << endl;
                    k++;
                }
                else {
                }

                cout<< count<<endl;
                cout << "KSPKSP"<<endl;
                i1 += count;
                if (count>biggest) {
                    biggest = count;

                }
                count = 0;

            }
        }

    for (int x = 0; x < 25; x++) {
        string newWord = "";
        for (int y = 0; y < word.size(); y++) {
            newWord += (word[y] + x) % 26 + 'A';
            //cout << int(word[y])<< endl;
        }
        cout << newWord << endl;

    }
    cout << "Slovo: " << word << endl;
    cout << "Biggest: " << biggest << endl;
    cout<< "Celkový počet: " << i1 <<endl;
    cout << k << endl;
    outputFile << word << endl;
    */
    /* Třetí výstup
for (int shift = 0; shift < 15; shift++) {
    for (int i = 0; i < input.size(); i++) {
        if (input[i].size() == 96) {
            word = word + ' ';
        } else {
            word = word + char((input[i].size() / 3 + shift) % 26 + 'a');
        }
    }

    cout << word << endl;
    word = "";
}
*/
    /* Sifra c.5 nedodelaná
    int numberForLetter = 0;
    for (int shift = 0; shift < 26; shift++) {
        numberForLetter = 0;
        for (int i = 0; i < input.size(); i++) {
            if (input[i].size() == 24) {
                word = word + char((numberForLetter + shift)% 26 + 'a');
                //word = word + '';
                numberForLetter = 0;
            }
            else if (input[i].size() == 27) {
                word = word + char((numberForLetter + shift) % 26 + 'a') + ' ';
                numberForLetter = 0;
            }
            else {
                if (input[i] == "KSP") {
                    //numberForLetter = numberForLetter + input[i].size()/3;
                    numberForLetter++;
                }
                //cout << "Num: " << numberForLetter << " In.size: " << input[i].size() << endl;
            }
            //cout << input[i] << endl;
        }

        cout << word << endl;
        word = "";
    }
    */

    int numberForLetter = 0;
    for (int shift = 0; shift < 26; shift++) {
        numberForLetter = 0;
        for (int i = 0; i < input.size(); i++) {
            if (input[i].empty() == true) {
                //word = word + char((numberForLetter + shift)% 26 + 'a');
                word = word + ' ';
                numberForLetter = 0;
            }
            else {
                numberForLetter = countOccurrences(input[i], "KSPKSP");
                word = word + char((numberForLetter + shift) % 26 + 'a');

                //cout << "Num: " << numberForLetter << " In.size: " << input[i].size() << endl;
                numberForLetter = 0;
            }
            //cout << input[i] << endl;
        }

        cout << word << endl;
        word = "";
    }

    inputFile.close();
    outputFile.close();
    return 0;
}