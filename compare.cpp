/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 3B
This code writes a program that asks the user to input two dates (the beginning and the end of the interval).
The program should check each day in the interval and report which basin had higher elevation on that day by 
printing “East” or “West”, or print “Equal” if both basins are at the same level.
*/

#include<cstdlib>
#include<fstream>
#include<iostream>
using namespace std;

int main() 

{
string startDate;
cout << "Enter starting date: ";
cin >> startDate;

string endDate;
cout << "Enter ending date: ";
cin >> endDate;

ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()){
cerr<<"File cannot be opened for reading."<<endl;
exit(1);
}
string junk;
getline(fin, junk);
int dateRange = 0;

string date;
double eastSt, eastEl, westSt, westEl;
while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) {

if(date == startDate){dateRange = 1;}
if(date == endDate){dateRange = 0;}

if(dateRange == 1){
if (eastEl>westEl) {cout<< date <<" East "<<endl;}
else if(eastEl<westEl){cout << date << " West "<<endl;}
else {cout << date << " Equal "<<endl;}
}
}
fin.close();
  return 0;
}
