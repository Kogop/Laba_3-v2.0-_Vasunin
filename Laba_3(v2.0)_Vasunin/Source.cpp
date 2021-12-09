#include <iostream>
#include <cstring>


using namespace std;
string x = "1221";


bool IsPolindrom(string x) {
	//int c = 0;

	//if (x.length()%2 !=0)
	//{
	//	c = (x.length() / 2);
		
	//}
	//else
	//{
	//int	c = x.length() / 2;
	//}

	for (int i = 0; i < (x.length() / 2); i++)
	{
		if (x[i] == x[x.length() - i - 1])
		{
			
			//c++;
			//cout << c << endl;
		}
		else
		{
			return false;
		}
	}
	//if (c == sizeof(x)%2)
	//{
		return true;
	//}
	//else
	//{
	//	return 0;
	//}

}



int main() {

	cout << "vvedite 4islo" << endl;
	cin >> x ;
	cout << endl;
	//IsPolindrom(x);
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