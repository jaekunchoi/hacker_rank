#include <iostream>
#include <algorithm>
#include <vector>
#include "maximizing_xor.h"

using namespace std;

int maxXor(int _l, int _r) {
    int results = _l ^_r;
    return results;
}

maximizing_xor::maximizing_xor() {
    int L, R, A, B, res;
    vector<int> xor_results;

    cin >> A >> B;

    for (; A <= B; ++A) {
        for (int C=A; C <= B; ++C) {
            res = maxXor(A, C);
            xor_results.push_back(res);
        }
    }

    int maximum_val = *max_element(xor_results.begin(), xor_results.end());
    cout << maximum_val << endl;
}

maximizing_xor::~maximizing_xor() {
    //dtor
}
