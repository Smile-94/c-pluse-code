#include<iostream>

using namespace std;

int main(){

string weather;

cout<<"Enter your weather report: ";
cin>>weather;

if (weather=="Raining" || weather == "raining" || weather == "R" || weather== "r"){
    cout<<"I am not going to school";
}else{
    cout<<"I am going to school";
}

return 0;
}
