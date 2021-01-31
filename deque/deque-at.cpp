#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<unsigned> mydeque (10);
	
	for (unsigned i = 0; i < mydeque.size(); i++)
		mydeque.at(i) = i;
	
	cout<<"deque contains : ";
	for (unsigned i = 0; i < mydeque.size(); i++)
		cout<< ' ' << mydeque.at(i);
	
	cout<< '\n';
	
	return 0;
}
