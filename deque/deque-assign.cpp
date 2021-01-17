#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> first;
	deque<int> second;
	deque<int> third;
	
	first.assign (7, 100);
	
	deque<int>::iterator it;
	it 	= first.begin() + 1;
	
	second.assign (it, first.end() - 1);
	
	int myints[] = {1776, 7, 4};
	third.assign (myints, myints + 3);
	
	cout<<"Size of First : " << int (first.size()) << '\n';
	cout<<"Size of Second : " << int (second.size()) << '\n';
	cout<<"Size of Third :  "<< int (third.size()) << '\n';
	
	return 0;
}
