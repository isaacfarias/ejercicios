//libreria para utilizar cout y endl
#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;

int main ()
{
	int const TAM = 1000000000;
	const int CARAS = 6;
	int dado[CARAS] = {};
	srand(time(0));
	for (int i=0 ; i<TAM ; i++)
	{
		dado[rand()%6]++;
	}
	for (int i = 0;i<CARAS;i++)
	{
		cout<<setw(4)<<i+1<<setw(13)<<dado[i]<<endl;
	}
}