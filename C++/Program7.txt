#include <iostream>
#include <string>


using namespace std;

int main(){
int input1 = 0;
string input2;
string check1 = "classroom";
string check2 = "grab";
string check3 = "disaster";
string check5 = "labor";
string check6 = "origin";
int counter = 0;
cout<<"Enter input 1: ";
cin>>input1;
cout<<input1<<endl;
cout<<"Enter input 2: ";
cin>>input2;
cout<<input2<<endl;
if (((input1 > 27) || (input2 == check1)) && (counter < 2))
{
cout<<"cold"<<endl;
counter++;
}
if (((input1 <= 69) && (input2 < check2)) && (counter < 2))
{
cout<<"majority"<<endl;
counter++;
}
if (((input1 == 44) && (input2 != check3)) && (counter < 2))
{
cout<<"greet"<<endl;
counter++;
}
if (((input1 == 295) && (input2 == check6)) && (counter < 2))
{
cout<<"bang"<<endl;
counter++;
}
if (((input1 > 15) || (input2.at(0) == 'r')) && (counter < 2))
{
cout<<"equal"<<endl;
counter++;
}
if (((input1 % 7 == 0) || (input2 >= check5)) && (counter < 2))
{
cout<<"cereal"<<endl;
counter++;
}
else if (counter = 0)
{
cout<<"leave"<<endl;
}

}

