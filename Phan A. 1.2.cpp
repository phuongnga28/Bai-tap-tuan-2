#include <iostream>
using namespace std;
int main()
{
	int n;
	int i = 1;
	cout << "nhap vao n khong qua 100: ";
	cin >> n;
	do {
		if ( i > 0 && i % 2 == 0)
		{
			cout << i << " ";
		}
		i++;
	} while ( i <= n && n <= 100);
}
// Cach b la tot nhat
