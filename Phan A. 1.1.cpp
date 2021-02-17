#include <iostream>
using namespace std;
int main()
{
	int n;
	int i = 1;
	cout << "nhap vao n khong qua 100: ";
	cin >> n;
	while ( i <= n && n <= 100 )
	{
		if ( i > 0 && i % 2 == 0)
		{
			cout << i << " ";
		}
	i++;
	}
}
	
