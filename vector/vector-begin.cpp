#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> first;
	vector<int> second;
	vector<int> third;
	
	first.assign(7, 100); //7 ints with a value of 100
	
	vector<int>::iterator it;
	it = first.begin() + 1;
	
	second.assign(it, first.end() -1);
	
	int myints[] = {1, 2, 3,4};
	third.assign(myints, myints+4);
	
	cout<<"Size of First : " << int(first.size()) << '\n';
	cout<<"Size of Second : " << int(second.size()) << '\n';
	cout<<"Size of Third : " << int(third.size()) << '\n';
}
