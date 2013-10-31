#include<iostream>
#include<time.h>
#include<math.h>
using namespace std;
int checkPrime(int);
int main(int argc, const char *argv[])
{
	clock_t t1,t2;
	t1 = clock();
	long i,m;
	bool a[2000002] = { false };
	long limit = 2000000, crosslimit = floor(sqrt(limit));
	for(i=4;i<10;i=i+2) {
		a[i]=1;
	}
	for(i=3;i<1414;i=i+2) {
		if(!a[i]) {
			for( m=i*i; m<100;m= 2*i) {
				a[m] = 1;
			}
		}
	}
	long sum = 0;
	for(i=2;i<10;i++) {
		if(!a[i]) {
			sum+=i;
		}
	}

	cout<<sum<<endl;
	t2 = clock();
	cout<<((float)t2-(float)t1)/CLOCKS_PER_SEC<<endl;
	return 0;
}
