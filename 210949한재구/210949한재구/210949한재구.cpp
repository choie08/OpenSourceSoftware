#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= 100; i++) {
		if (i % N == 0)
			cout << i << " ";
	}

	return 0;
}

