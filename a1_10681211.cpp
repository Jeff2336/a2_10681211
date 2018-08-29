#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int n,i,numb = 0;
	
	cout <<"Enter a value : ";
	cin >> n;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			numb=1;
			break;
		}
	}
	if(numb==0)
	cout << n << " Is a prime number" <<endl;
	else
	cout << n << " Is not a prime number" <<endl; 
	
	
	return 0;
}
