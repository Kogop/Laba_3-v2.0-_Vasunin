#include <iostream>
#include <cstring>


using namespace std;
string x = "1221";


bool IsPolindrom(string x) {

	for (int i = 0; i < (x.length() / 2); i++)
	{
		if (x[i] == x[x.length() - i - 1])
		{
			
			
		}
		else
		{
			return false;
		}
	}
	
		return true;
}



int main() {

	cout << "vvedite 4islo" << endl;
	cin >> x ;
	cout << endl;

	if (IsPolindrom(x))
	{
		cout << "Polindrom" << endl;
	}
	else
	{
		cout << "Ne Polindrom" << endl;
	}

	return 1;
}