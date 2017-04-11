#include <iostream>
using namespace std;
int main(){
   int numberone;
   int numbertwo;
   int count = 2;
   bool found = false;
   cout<<"Enter a number: ";
   cin>>numberone;
   cout<<numberone<<endl;
   cout<<"Enter another number: ";
   cin>>numbertwo;
   cout<<numbertwo<<endl;
   while (found == false && count <= 100){
    cout<<count<<"? ";
    if (count % numberone == 0 && count % numbertwo == 0){
     cout<<"yes! ";  
     found = true;
    }
    else {cout<<"no. ";}
    count++;  
   }
   if (found == false){
	cout<<"Gave up!"<<endl;
   }
}