

//***THIS SOLUTION IS INCOMPLETE***

//***THIS SOLUTION IS INCOMPLETE***

//***THIS SOLUTION IS INCOMPLETE***


#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

vector<int> calcAggrs(int people, int contests, vector<vector<uint16_t>>& scores);

int main(){
	int contests, people;
	cin >> contests >> people;
	--contests;

	vector<vector<uint16_t>> scores;
	for(int i = 0; i < people; ++i){
		scores.push_back(vector<uint16_t>());

		for(int j = 0; j < contests; ++j){
			int sc;
			cin >> sc;
			scores[i].push_back(sc);
		}
	}

	//TODO

}


vector<int> calcAggrs(int people, int contests, vector<vector<uint16_t>>& scores){
	vector<int> aggrs;
	for(int i = 0; i < people; ++i){
		vector<uint16_t>& cScore = scores[i];

		int inds[4];

		int aggrTotal = 0;

		for(int j = 0; j < 4; ++j){
			int largestInd = 0;
			int largest = 0;

			for(int k = 0; k < cScore.size(); ++k){
				bool skip = false;
				for(int l = 0; l < j; ++l){
					if(inds[l] == k){skip = true; break;}
				}
				if(skip) continue;


				if(cScore[k] > largest){
					largestInd = k;
					largest = cScore[k];
				}
			}

			inds[j] = largestInd;
			aggrTotal += largest;

		}

		aggrs.push_back(aggrTotal);
	}

	return aggrs;
}
