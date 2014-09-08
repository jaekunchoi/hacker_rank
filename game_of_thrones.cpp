#include "game_of_thrones.h"
#include<iostream>

using namespace std;

int cnt[30];

game_of_thrones::game_of_thrones()
{
  string str;
	cin >> str;
	for (int i = 0; i < (int)str.size(); i++) {
		cnt[str[i] - 'a']++;
	}

	int even = 0, odd = 0;
	for (int i = 0; i < 30; i++)
	{
		if (cnt[i] % 2 == 0) even++;
		else odd++;
	}

	if (odd <= 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}

game_of_thrones::~game_of_thrones()
{
  //dtor
}
