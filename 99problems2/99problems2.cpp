#include <iostream>
#include <cstdint>
#include <vector>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;

	vector<uint64_t> diffs;
	for(int i = 0; i < n; ++i){
		uint64_t d;
		cin >> d;
		diffs.push_back(d);
	}

	for(int ct = 0; ct < q; ++ct){
		int type;
		uint64_t thresh;
		cin >> type;
		cin >> thresh;

		if(type == 1){


			uint64_t min = 0xFFFF'FFFF'FFFF'FFFF;
			uint64_t minInd = -1;
			for(uint64_t i = 0; i < diffs.size(); ++i){
				if(diffs[i] > thresh && diffs[i] < min){
					min = diffs[i];
					minInd = i;
				}
			}

			if(minInd == -1) cout << "-1" << endl;
			else{
				cout << diffs[minInd] << endl;
				diffs.erase(diffs.begin() + minInd);
			}


		}
		else if(type == 2){


			uint64_t max = 0;
			uint64_t maxInd = -1;
			for(uint64_t i = 0; i < diffs.size(); ++i){
				if(diffs[i] <= thresh && diffs[i] > max){
					max = diffs[i];
					maxInd = i;
				}
			}

			if(maxInd == -1) cout << "-1" << endl;
			else{
				cout << diffs[maxInd] << endl;
				diffs.erase(diffs.begin() + maxInd);
			}

		}
	}
}
