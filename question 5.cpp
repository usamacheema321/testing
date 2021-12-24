#include<iostream>
using namespace std;
int main()
{
	int number=0,
	high,
	low,
	sum=0;
	int counter=0;
	
	while(number!=-99)
	{
		cout<< " enter number you want to add " << endl;
		cin>>number;
		if (number==-99)
		{
			break;
		}
		if(counter==0)
		{
			high=number;
			low=number;
		}
		else
		{
		
		if(number>high)
		high=number;
		else if ( number<low)
		low=number;
	}
		
		
		sum=sum+number;
        counter++;
	}
		cout<< " your sum is " << sum << endl;
		cout<< " your highest number is " << high <<  endl;
		cout<< " your lowest number is " << low << endl;

}