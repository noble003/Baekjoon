#include <iostream>
#define max 10036
using namespace std;

int DigitSum(int num);
int SelfNum(int num);

int main()
{	
	int selfarray[max] = { 0, };
	
	int i;
	for (i = 0; i < 10000; i++)
	{
		selfarray[SelfNum(i)] = 1;
	}

	for (i = 0; i < 10000; i++)
	{
		if(selfarray[i]==0)
		cout << i <<"\n";
	}
	return 0;
}

int DigitSum(int num)
{
	if (num == 0)
		return 0;
	else return num % 10 + DigitSum(num / 10);
}
int SelfNum(int num)
{	
	return num + DigitSum(num);
}