//write a program to ask the user to enter Month.
//then print the name of Month.
//Example : 11.             Output : November.
#include<iostream>
using namespace std;
int main(){
  int month;
  cout << "\nEnter Month of The Year : \n";
  cin >> month;
  if(month >=1 && month <= 12){
    if(month == 1)cout << "January!!";
    if(month == 2)cout << "February!!";
    if(month == 3)cout << "March!!";
    if(month == 4)cout << "April!!";
    if(month == 5)cout << "May!!";
    if(month == 6)cout << "June!!";
    if(month == 7)cout << "July!!";
    if(month == 8)cout << "August!!";
    if(month == 9)cout << "September!!";
    if(month == 10)cout << "October!!";
    if(month == 11)cout << "November!!";
    if(month == 12)cout << "December!!";
  }else{
    cout << "Wrong Month!!! u should enter between 1 and 12\nTry again.";
  }
}