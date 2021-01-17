#include <iostream>
#include <deque>

using namespace std;

int main()
{
	//unsigned int i;
	deque<int> first;
	deque<int> second (4, 100);
	deque<int> third (second.begin(), second.end());
	deque<int> fourth (third);
	
	int myints[] = {16, 2, 77, 29};
	deque<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
	
	cout<<"The Content of Fifth are : ";
	for(deque<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
	{
		cout<< ' ' << *it;
	}
	cout<< '\n';
	return 0;
}
