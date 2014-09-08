#include "halloween_party.h"

#include <iostream>

using namespace std;

halloween_party::halloween_party()
{
  int T;
  long long int K;

  cin >> T;
  for(int i=0; i<T; ++i) {
      cin >> K;
      long int num_chocs;

      if(K % 2 == 0) {
          num_chocs = K/2 * K/2;
      }else{
          num_chocs = K/2 * (K/2 + 1);
      }
      cout << num_chocs << endl;
  }
}

halloween_party::~halloween_party()
{
  //dtor
}
