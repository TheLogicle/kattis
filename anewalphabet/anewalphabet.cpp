#include <iostream>

using namespace std;

char const* dict[]{
	"@", //a
	"8", //b
	"(", //c
	"|)", //d
	"3", //e
	"#", //f
	"6", //g
	"[-]", //h
	"|", //i
	"_|", //j
	"|<", //k
	"1", //l
	"[]\\/[]", //m
	"[]\\[]", //n
	"0", //o
	"|D", //p
	"(,)", //q
	"|Z", //r
	"$", //s
	"']['", //t
	"|_|", //u
	"\\/", //v
	"\\/\\/", //w
	"}{", //x
	"`/", //y
	"2" //z
};

int main(){

	string orig;
	getline(cin, orig);

	string tsld;
	for(int i = 0;; ++i){
		char& ch = orig[i];
		if(ch == 0) break;

		if(ch >= 'a' && ch <= 'z') tsld += dict[ch - 'a'];
		else if(ch >= 'A' && ch <= 'Z') tsld += dict[ch - 'A'];
		else tsld += ch;
	}

	cout << tsld << endl;
}
