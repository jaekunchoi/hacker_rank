#include <iostream>
#include <algorithm>
#include "maximizing_xor.h"

using namespace std;

int maxXor(int _l, int _r)
{
    cout << _l << _r << endl;
    return 0;
}

maximizing_xor::maximizing_xor()
{
    unsigned int L, R, A, B, res;
    cin >> A >> B;
    res = maxXor(A, B);

    cout << res << endl;
}

maximizing_xor::~maximizing_xor()
{
    //dtor
}
