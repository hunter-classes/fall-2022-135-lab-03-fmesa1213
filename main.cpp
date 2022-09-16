
#include<iostream>
#include<fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main()
{

string date;
double eastSt,eastEl,westSt,westEl;

string userdate;  
cout<<"Enter date: ";
cin>>userdate;

ifstream fin("Current_Reservoir_Levels.tsv");

if (fin.fail()) 
{
cerr << "File cannot be opened for reading." << endl;
exit(1); 
}

string junk; 
getline(fin, junk);
while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
{
fin.ignore(INT_MAX, '\n'); 

if(date==userdate)
{
cout<<"East basin storage: "<<eastSt<<" gallons"<<endl;
break;
}
}

fin.close();
return 0;

}
