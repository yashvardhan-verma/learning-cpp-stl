#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> myvector;
	for(int i=1; i<=10; i++) myvector.push_back(i);
	
	// erase 6 elements
	myvector.erase(myvector.begin() + 5);
	
	// erase the first 3 elements
	myvector.erase(myvector.begin(), myvector.begin() + 3);
	cout<< "myvector contains : ";
	for(unsigned i=0; i<myvector.size(); ++i)
		cout<< ' '<< myvector[i];
	cout<< '\n';
	
	return 0;
}
