#include <iostream>
using namespace std;
int payoff(double loan, double payment, double interest){
  int month = 0;
  double interestf;
  double interestmoney;
  interestf = interest / 12;
  cout<<"Interest rate per month is "<<interestf<<endl;
   while (month <= 359) {
	if (month==360&&loan>0){
 	cout<<"Report was stopped, does not seem to end."<<endl;  
       	month = -1;
 	return month;
	}
	else if ((loan + interestmoney - payment)<=0){
  	cout<<"Last payment: "<<loan<<endl;
  	month++;
  	return month;
	}
	else{
   	month++;
  	interestmoney = (interestf/100)*loan;
  	cout<<"Mon: "<<month<<" Bal: "<<loan<<" + Int: "<<interestmoney<<" - Pay: "<<payment<<endl;
 	loan = loan + interestmoney - payment;
	}
   }
}
int main() {
double loan, payment, interest;
cout.setf(ios::fixed, ios::floatfield);
cout.precision(2);
cout << "Please enter loan amount: ";
cin >> loan;
cout << loan << endl;
cout << "Please enter monthly payment: ";
cin >> payment;
cout << payment << endl;
cout << "Please enter annual interest: ";
cin >> interest;
cout << interest << endl;
int numMonths = payoff(loan, payment, interest);
if (numMonths !=
-
1) {
cout << "It will take " << numMonths;
cout << " months to pay off the loan." << endl;
}
return 0;
}
