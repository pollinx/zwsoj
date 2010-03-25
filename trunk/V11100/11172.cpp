/* @JUDGE_ID: 13160xx 11172 C++ */
// 03/25/10 11:48:35

//@BEGIN_OF_SOURCE_CODE 

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	while(n-->0) {
		int a,b;
		cin >> a >> b;
		if(a<b) cout << "<" << endl;
		else if(a>b) cout << ">" << endl;
		else cout << "=" << endl;
	}


	return 0;
}

