#include <iostream>
#include <vector>

using namespace std;

int main(){
	int C;
	cin >> C;

	for(int i = 0; i < C; ++i){
		int N;
		cin >> N;

		vector<int> grs;

		float total = 0;
		for(int j = 0; j < N; ++j){
			int g;
			cin >> g;

			grs.push_back(g);
			total += g;
		}

		float avg = total / N;

		int ctGreater = 0;

		for(int j = 0; j < grs.size(); ++j){
			if(grs[j] > avg) ++ctGreater;
		}

		float avgGr = (float) ctGreater / grs.size();

		printf("%.3f%%\n", 100*avgGr);
	}
}
