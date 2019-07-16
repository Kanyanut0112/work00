#include<iostream>
using namespace std;
int main()
{
	int line;
	char character;
	
	cout<<"Input number line : ";
	cin>> line;
	cout<<"Input character : ";
	cin>>character;

	for(int n=0 ; n<line ; n++){
		for(int j=0 ; j<=n ; j++){
			cout<<character;
		}

		cout<<endl;
	}


	return 0;











}