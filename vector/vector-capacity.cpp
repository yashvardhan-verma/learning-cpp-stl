#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> myvector;
	
	for(int i = 0; i < 100; i++) myvector.push_back(i);
	
	cout<<"Size : " << (int) myvector.size() << '\n';
	cout<<"Capacity : " << (int) myvector.capacity() << '\n';
	cout<<"max_size : " << (int) myvector.max_size() << '\n';
	
	return 0;
}
