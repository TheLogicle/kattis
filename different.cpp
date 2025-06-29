#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

int main(){
	vector<uint64_t> v;
	
	while(true){
		uint64_t n;
		cin >> n;

		if(cin.eof()) break;
		else v.push_back(n);
	}

	for(int i = 0; i < v.size()/2; ++i){
		uint64_t n1 = v[i*2];
		uint64_t n2 = v[i*2+1];
		if(n1 > n2){
			uint64_t t = n1;
			n1 = n2;
			n2 = t;
		}


		uint64_t d = n2-n1;
		cout << d << endl;
	}
}
