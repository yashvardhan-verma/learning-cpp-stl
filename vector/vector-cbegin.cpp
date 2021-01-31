#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> myvector = {1, 2, 3, 4, 5};
	cout<< " myvector contais : ";
	
	for(auto it = myvector.cbegin(); it != myvector.cend(); ++it)
		cout<< ' ' << *it;
	cout << '\n';
	
	return 0;
}
