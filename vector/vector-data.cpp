#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> myvector (5);
	int *p = myvector.data();
	
	*p = 18;
	++p;
	*p = 20;
	p[2] = 100;
	
	cout<< "myvector contains : ";
	for(unsigned i = 0; i < myvector.size(); ++i)
		cout<< ' ' << myvector[i];
	cout<< '\n';
	
	return 0;
}
