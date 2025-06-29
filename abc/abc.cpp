#include <iostream>
#include <cstdint>

using namespace std;

int main(){
	uint16_t nums[3];
	for(int i = 0; i < 3; ++i) cin >> nums[i];

	uint16_t temp;
	if(nums[0] > nums[1]){
		temp = nums[0];
		nums[0] = nums[1];
		nums[1] = temp;
	}
	if(nums[1] > nums[2]){
		temp = nums[1];
		nums[1] = nums[2];
		nums[2] = temp;
	}
	if(nums[0] > nums[1]){
		temp = nums[0];
		nums[0] = nums[1];
		nums[1] = temp;
	}

	string order;
	cin >> order;

	string output;
	for(int i = 0; i < 3; ++i){
		output += to_string(nums[order[i] - 'A']) + " ";
	}

	cout << output << endl;
}
