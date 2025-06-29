#include <iostream>

using namespace std;

int main(){
	int c1, c2;
	cin >> c1 >> c2;

	if(c2 > c1){
		int temp = c2;
		c2 = c1;
		c1 = temp;
	}

	int diff = c1-c2;

	for(int i = c1+1-diff; i <= c1+1; ++i) cout << i << endl;
}
