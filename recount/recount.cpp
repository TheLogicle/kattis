#include <iostream>
#include <unordered_map>
#include <cstdint>
#include <unordered_map>

using namespace std;

int main(){
	string name;

	std::unordered_map<string, uint32_t> names;
	do{
		getline(cin, name);
		if(name.size() == 0 || name == "***") break;
		if(names.count(name) == 0){
			names[name] = 1;
		}
		else{
			names[name] += 1;
		}
	} while(!cin.eof());

	uint32_t greatest = 0;
	string greatestKey;
	bool runoff = false;
	for(auto i = names.begin(); i != names.end(); ++i){
		string key = i->first;
		if(names[key] > greatest){
			runoff = false;
			greatest = names[key];
			greatestKey = key;
		}
		else if(names[key] == greatest){
			runoff = true;
		}
	}

	if(runoff) cout << "Runoff!" << endl;
	else cout << greatestKey << endl;
}
