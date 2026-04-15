#include <iostream>
#include <map>
#include <string>
#include <cmath>

using namespace std;

// Nếu compiler cũ không hỗ trợ log2
#ifndef __cplusplus
#define log2(x) (log(x) / log(2))
#endif

// Hàm tính Entropy
double calculate_entropy(const string &text) {
    if (text.empty()) {
        return 0.0;
    }

    map<char, int> freq;

    // Đếm tần suất
    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    int n = text.size();

    // Tính entropy
    for (const auto &p : freq) {
        double prob = (double)p.second / n;
        entropy -= prob * log2(prob);
    }

    return entropy;
}

// Hàm tính Redundancy
double calculate_redundancy(const string &text, int alphabet_size = 256) {
    if (text.empty()) {
        return 0.0;
    }

    double entropy = calculate_entropy(text);
    double max_entropy = log2(alphabet_size);

    return max_entropy - entropy;
}

int main() {
    string input;

    cout << "Enter a string of characters: ";
    getline(cin, input);

    double entropy = calculate_entropy(input);
    double redundancy = calculate_redundancy(input);

    cout << "Entropy: " << entropy << endl;
    cout << "Redundancy: " << redundancy << endl;

    return 0;
}