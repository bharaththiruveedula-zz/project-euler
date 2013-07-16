#include<iostream>
using namespace std;

int main(int argc, const char *argv[])
{
	int a=0, b=1,c,sum=0;
	do{
		c = a+b;
		a=b;
		b=c;
		if(c%2 == 0)
			sum += c;
		cout<<sum<<endl;
	}while(c<=4000000);
	cout<<"The answer is: "<<sum<<endl;
	return 0;
}
