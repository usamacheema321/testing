#include<iostream>
using namespace std;
int main()
{
	int PhyMarks,MathMarks,ChemMarks,totalMarks,Math_Phy;
	cout<< " enter math marks " << endl;
	cin>>MathMarks;
	cout<< " enter phy marks " << endl;
	cin>>PhyMarks;
	cout<< " enter Chemistry marks " << endl;
	cin>>ChemMarks;
	cout<< "  sum of math phy and chemistry "<< endl;
	totalMarks=MathMarks+PhyMarks+ChemMarks;
	cout<<totalMarks<<endl;
	cout<< " sum of math and phy " << endl;
	Math_Phy=MathMarks+PhyMarks;
	cout<<Math_Phy<< endl;
	if(totalMarks>=190 || Math_Phy>=140)
	{
		if(MathMarks<65)
		{
			cout<< " you are lagging in Math " << endl;
			cout<< " you are not elligible for admission " << endl;
		}
		else if( PhyMarks<55)
		{
			cout<< " you are fail in physics so you are not elligible for admission " << endl;
		}
		else if(ChemMarks<50)
		{
			cout<< " you are fail in chemistry and not elligible for admission " << endl;
		}
		else {
			cout<< " you are eligible " << endl;
		}
	}
	else
	{
		cout<< " you are not eligible for admission " << endl;
		
	}

	
	}



	
