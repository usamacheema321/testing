#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
	int courses,credithours,sum,x;
	x=1;
	char grades;
	string subject;
	float gpa,sgpa,tgp,tch;
	tgp=0,tch=0;
	const float  grade_A=4.00,
	             grades_B=3.00,
	             grade_C=2.00,
	             grade_D=1.00,
	             grade_F=0.0;
	const char  'grade_B+'=3.75;
	cout<< " enter number of courses " << endl;
	cin>>courses;
	while( x<=courses)	
	{
		cout<< " enter course name " << endl;
		cin>>subject;
		cout<< " enter your grades obtained  " << endl;
		cin>>grades;
		cout<< " enter number of credit hours " << endl;
		cin>>credithours;
		if( grades=='A')
		{
			gpa=grade_A*credithours;
			cout<<gpa<<endl;
			}
			else if( grades=='B')
			{
				gpa=grades_B*credithours;
				cout<<gpa<< endl;
			}
			else if( grades=='C')
			{
				gpa=grade_C*credithours;
				cout<<gpa<<endl;
			}
			else if(grades=='D')
			{
				gpa=grade_D*credithours;
				cout<<gpa<< endl;
			}
			else if( grades=='F')
			{
				gpa=grade_F*credithours;
				cout<< gpa<<endl;
			}
			else
			{
				cout << " enter correct input " << endl;
			}
			tgp= tgp+ gpa;
			tch=tch+credithours;
			x++;
			}
			
			cout << " your total number units " << tgp << endl;
			cout<< " number of creidet hours " << tch << endl;
			sgpa=tgp/tch;
			cout<< "your semester gpa is " << sgpa << endl;        
}
