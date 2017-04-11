#include <iostream>
using namespace std;
int main(){
   int userInp = 0;
   int average;
   int total;
   int max;
   int min;
   int count;
   cout<<"Enter a number: ";
   cin>>userInp;
   cout<<userInp<<endl;
   total = total + userInp;
   if (userInp < min){
    min = userInp;  
   }
   if (userInp > max){
    max = userInp;  
   }
   count = 1;
   if (userInp == 0){
    cout<<"No data, so no answers!"<<endl;  
   }
   else {
      while (userInp > 0){
      cout<<"Enter a number: ";
      cin>>userInp;
      cout<<userInp<<endl;
      total = total + userInp;
   if (userInp < min && userInp != 0){
    min = userInp;  
   }
   if (userInp > max && userInp != 0){
    max = userInp;  
   }
   if (userInp != 0){
      count++;
   }
      }
      average = total/count;
      cout<<"Average: "<<average<<endl;
      cout<<"Max: "<<max<<endl;
      cout<<"Min: "<<min<<endl;
   }
}