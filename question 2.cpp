#include<iostream>
using namespace std;
int main()
{
	float amount,expense,total_expense,total_budget;
	total_expense=0;
	int number_expense=0;
	cout<< " enter the amount of budget  " << endl;
	cin>>amount;
	cout<< " number of expense ? " << endl;
	cin>>number_expense;
	for(int i=0; i<number_expense;i++)
	{
		cout<< " enter your expense " << i+1 << endl;
		cin>>expense;
		total_expense=total_expense+expense;
	}
		cout<< " your total expense is " << total_expense << endl;
	total_budget=amount - total_expense;
	cout<< " your total budget is " << total_budget << endl;
	if( total_expense > amount)
	{
		cout << " you are over budget " << endl;
	}
	else if ( total_expense < amount)
	{
		cout<< " you are under budget " << endl;
	}
	
	

}
	
	
	
		
	
	
	
	
	
	
