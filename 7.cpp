#include<iostream>
#include<time.h>
#include<math.h>
using namespace std;
int checkPrime(int);
int main(int argc, const char *argv[])
{
	clock_t t1,t2;
	t1 = clock();
	int count = 1,i;
	for(i=3;count<10001;i=i+2) {
		int a = checkPrime(i);
		if(a) count++;
	}
	cout<<i-2<<endl;
	t2 = clock();
	cout<<((float)t2-(float)t1)/CLOCKS_PER_SEC<<endl;
	return 0;
}
int checkPrime(int num) {
	int i;
	for(i=2;i<=floor(sqrt(num));i++) {
		if(num%i == 0)
			return 0;
	}
	return 1;
}
