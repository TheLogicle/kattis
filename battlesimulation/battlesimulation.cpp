#include <iostream>
#include <vector>
#include <cstdint>

// THIS IS AN UNFINISHED SOLUTION
// THIS IS AN UNFINISHED SOLUTION
// THIS IS AN UNFINISHED SOLUTION
// THIS IS AN UNFINISHED SOLUTION
// THIS IS AN UNFINISHED SOLUTION
// THIS IS AN UNFINISHED SOLUTION
// THIS IS AN UNFINISHED SOLUTION


using namespace std;

char repl(char c){
	switch(c){
		case 'R': return 'S';
		case 'B': return 'K';
		case 'L': return 'H';
	}
}

int main(){
	string inp;
	cin >> inp;

	string out;

	if(inp.size() < 3){
		cout << inp << endl;
		return 0;
	}

	for(int i = 0; i < inp.size()-2; ++i){
		if(inp[i] + inp[i+1] + inp[i+2] == 'R'+'B'+'L'){
			out += 'C';
			i += 2;
		}
		else{
			out += 
		}
	}

	cout << out << endl;
}
