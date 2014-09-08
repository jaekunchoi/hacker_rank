#include "the_love_letter_mystery.h"
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


int scramble(string str);

the_love_letter_mystery::the_love_letter_mystery()
{
    int T;
    cin >> T;
    for(int i=0; i<T; i++) {
        string love;
        cin >> love;
        cout << scramble(love) << endl;
    }
}

the_love_letter_mystery::~the_love_letter_mystery(void)
{

}

int scramble(string str) {
    int size = str.length();
    int count = 0;
    int j = size-1;
    for(int i = 0; i < j; ++i, --j) {
        if(str[i] != str[j]) {
            count += abs(str[i] - str[j]);
        }
    }
    return count;
}
