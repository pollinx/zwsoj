/* @JUDGE_ID: 13160EW 357 C++ */
// Q357: Let Me Count The Ways

//@BEGIN_OF_SOURCE_CODE
#include <iostream>

using namespace std;

const int max = 5;
long ct;
int coins[max] = { 1,5,10,25,50 };
long ways[100] = { 0 };

int main()
{
	int n;
	int i,j;
	int coin;
	ways[0] = 1;
	for(i=0;i<5;i++) {
		coin = coins[i];
		for(j = coin ;j<100;j++)
			ways[j] += ways[j-coin];
	}
	while(cin >> n) {
		if( ways[n]!=1 )  {
			cout << "There are " << ways[n] << " ways to produce "
			<< n << " cents change." << endl;
		}
		else  {
			cout << "There is only 1 way to produce "<< n << " cents change." << endl;
		}
	}

	return 0;
}
//@END_OF_SOURCE_CODE
