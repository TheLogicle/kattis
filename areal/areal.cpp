#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double area;
	cin >> area;

	double side = sqrt(area);

	printf("%.10f\n", side*4);

}
