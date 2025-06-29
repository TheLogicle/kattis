#include <iostream>
#include <vector>

using namespace std;

string eval(int n);
int simplify(vector<int> op);
int o(int a, int b, int op);
char numOp[]{'+', '-', '*', '/'};

int main(){
	int count;
	cin >> count;

	vector<int> n;
	for(int i = 0; i < count; ++i){
		int n1;
		cin >> n1;
		n.push_back(n1);
	}

	for(int i = 0; i < count; ++i){
		cout << eval(n[i]) << endl;
	}
}

string eval(int n){
	if(n > 256 || n < -256) return "no solution";

	vector<int> op;
	for(int i = 0; i < 3; ++i) op.push_back(0);

	//triple nested loop
	for(int i = 0; i < 4; ++i) for(int j = 0; j < 4; ++j) for(int k = 0; k < 4; ++k){
		op[0] = i;
		op[1] = j;
		op[2] = k;

		if(simplify(op) == n) return string{"4 "} + numOp[i] + " 4 " + numOp[j] + " 4 " + numOp[k] + " 4 = " + to_string(n);
	}
	
	return "no solution";
}

int simplify(vector<int> op){
	vector<int> v4;
	for(int i = 0; i < 4; ++i) v4.push_back(4);

	//mult/div
	for(int i = 0; i < op.size(); ++i){
		if(op[i] >= 2){
			v4[i] = o(v4[i], v4[i+1], op[i]);
			v4.erase(v4.begin() + i + 1);
			op.erase(op.begin() + i);
			--i;
		}
	}

	//add/sub
	for(int i = 0; i < op.size(); ++i){
		if(op[i] <= 1){
			v4[i] = o(v4[i], v4[i+1], op[i]);
			v4.erase(v4.begin() + i + 1);
			op.erase(op.begin() + i);
			--i;
		}
	}

	return v4[0];
}

int o(int a, int b, int op){
	switch(op){
		case 0: return a + b;
		case 1: return a - b;
		case 2: return a * b;
		case 3: return a / b;
		default: return 0;
	}
}
