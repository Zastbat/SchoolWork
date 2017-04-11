#include <iostream>

using namespace std;

int main(){
int inputGuess = 0;
int inputAnswer = 0;
int count = 0;
int maxattempt = 3;
bool correct = false;

cin>>inputAnswer;
if (inputAnswer>10){
 count = 3;
 cout<<"Error hidden value out of bounds"<<endl;
 return 0;
}
cout<<"I am thinking of a number between 1 and 10."<<endl;
cout<<"Can you guess it within 3 guesses?"<<endl;

while (count< maxattempt && correct != true){
cout<<"Enter guess #"<<count+1<<": ";
cin>>inputGuess;
cout<<inputGuess<<endl;

if (inputGuess == inputAnswer){
cout<<"You Win!"<<endl;
correct = true;
}
else if (inputGuess>10){
cout<<"Please try again"<<endl;
}
else if(count == maxattempt - 1)
{
cout<<"You lose! The number was "<<inputAnswer<<endl;
count++;
}
else if (inputGuess!=inputAnswer && count < maxattempt){
count++;
}
}
}

