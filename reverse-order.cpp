/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 3D
This code writes a program which asks the user to input two dates (earlier date then later date). 
The program should report the West basin elevation for all days in the interval in the reverse chronological order 
(from the later date to the earlier).
*/

#include<iostream>
#include <sstream>
using namespace std;

void date1Sperator(string str);
void date2Sperator(string str);

int d,m,y,d2,m2,y2;
int main()
{
string date1,date2;
cout<<"Enter starting date: ";
cin>>date1; 
date1=date1.substr(0,3)+" "+date1.substr(3,3)+" "+date1.substr(6,date1.size());
cout<<"Enter ending date: ";
cin>>date2; 
date2=date2.substr(0,3)+" "+date2.substr(3,3)+" "+date2.substr(6,date2.size());
date1Sperator(date1); 
date2Sperator(date2);
  if(d2>d)
{
for(int i=d2;i>=d;i--)
cout<<endl<<m<<"/"<<i<<"/"<<y<<" East";
}
  else if(d>d2)
{
for(int i=d;i>=d2;i--)
cout<<endl<<m<<"/"<<i<<"/"<<y<<" West";
}
  else
{
cout<<endl<<m<<"/"<<d<<"/"<<y<<" Equal";
}

  return 0;
}

void date2Sperator(string str)
{
stringstream ss;
ss << str;
string temp;
ss >> temp;
if (stringstream(temp) >> m2)
temp = "";
ss >> temp;
if (stringstream(temp) >> d2)
temp = "";
ss >> temp;
if (stringstream(temp) >> y2)
temp = "";
}

void date1Sperator(string str)
{
stringstream ss;
ss << str;
string temp;
ss >> temp;
if (stringstream(temp) >> m)
temp = "";
ss >> temp;
if (stringstream(temp) >> d)
temp = "";
ss >> temp;
if (stringstream(temp) >> y)
temp = ""; 
}
