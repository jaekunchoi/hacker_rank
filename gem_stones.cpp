#include "gem_stones.h"
#include <iostream>

using namespace std;

int letters[26]; // Total count of alphabet letters

gem_stones::gem_stones()
{
  int N, results;
  string composition;

  cin >> N;
  for(int i=0; i<N; ++i) {
    cin >> composition;
    for(int j=0; j<composition.size(); ++j) {
      if(i==0) {
        letters[composition[j]] = 2;
      }else if(letters[composition[j]] == i+1) {
        letters[composition[j]]++;
        if(i== (N-1)) results++;
      }
    }
  }

  cout << results << endl;
}

gem_stones::~gem_stones()
{
  //dtor
}
