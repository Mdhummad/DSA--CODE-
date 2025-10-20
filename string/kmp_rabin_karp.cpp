// KMP

#include <bits/stdc++.h>
using namespace std;

// LPS array using i and j pointers
vector<int> computeLPS(string pattern) {
    int n = pattern.size();
    vector<int> lps(n, 0);
    int i = 0; // prefix pointer
    int j = 1; // suffix pointer

    while (j < n) {
        if (pattern[i] == pattern[j]) {
            i++;
            lps[j] = i;
            j++;
        } else {
            if (i != 0) {
                i = lps[i - 1]; // fall back to previous longest prefix
            } else {
                lps[j] = 0;
                j++;
            }
        }
    }
    return lps;
}

void KMPsearch(string text, string pattern) {
    int n = text.size();
    int m = pattern.size();

    vector<int> lps = computeLPS(pattern);
    int i = 0, j = 0;

    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }

        if (j == m) {
            cout << "Pattern found at index " << (i - j) << endl;
            j = lps[j - 1];
        } else if (i < n && text[i] != pattern[j]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
}

int main() {
    string text = "ababcababcabc";
    string pattern = "ababc";
    KMPsearch(text, pattern);
    return 0;
}


// =================================================================