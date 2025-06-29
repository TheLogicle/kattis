#include <iostream>

using namespace std;

int main(){
	int n, s, m;
	cin >> n >> s >> m;

	int* bd = (int*) malloc(n * sizeof(int));

	for(int i = 0; i < n; ++i){
		int a;
		cin >> a;

		bd[i] = a;
	}

	//magic on turn 0
	if(bd[s-1] == m){
		cout << "magic\n0" << endl;
		free(bd); return 0;
	}

	for(int c = 1;; ++c){
		int move = bd[s-1];
		bd[s-1] = 0;
		s += move;

		if(bd[s-1] == m){
			cout << "magic\n" << c << endl;
			free(bd); return 0;
		}
		else if(s < 1){
			cout << "left\n" << c << endl;
			free(bd); return 0;
		}
		else if(s > n){
			cout << "right\n" << c << endl;
			free(bd); return 0;
		}
		else if(bd[s-1] == 0){
			cout << "cycle\n" << c << endl;
			free(bd); return 0;
		}
	}
}
