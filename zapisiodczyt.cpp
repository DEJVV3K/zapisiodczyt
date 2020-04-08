#include <iostream>
#include <fstream>

using namespace std;

int a;
int main()
{
	ifstream wejscie;
	ofstream wyjscie;
	
	wyjscie.open("wyj.txt");
	wejscie.open("wej.txt",ios::out);
	if(wejscie.good())
		while(!wejscie.eof())
			{
				wejscie >> a;
					if(a%2==0)
				wyjscie << a <<", ";
			}
	wejscie.close();
	wyjscie.close();	
	return 0;
}
