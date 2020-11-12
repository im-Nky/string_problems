#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s = "Nitin Kumar yadav";
	string temp="";
	vector <string> si;
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			//cout << temp<<endl;
			si.push_back(temp);
			temp="";
		}
		else {
			temp=temp+s[i];
		}
	}
	si.push_back(temp);
	cout << si.size()<<endl;
	return 0;
}
