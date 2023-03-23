#include<iostream>
using namespace std;

// with return type with parameter
int volume(int a, int b, int c){
        int value = (a*b*c);
        return value;
}
// with return type without parameter
int Sum(){
        return 10+15;
}

// without return type with parameter
void Calculation(float a, float b){
    float div= a/b;
    cout<<"Division: "<<div<<endl;
}
//without return type without parameter
void Display(){
    int a = Sum();
    cout<<"This sum print from Display: "<<a<<endl;
}

// Default parameter
float Mul(float a, float pi = 3.1416){
    float result = (a*pi);
    return result;
}

int main(){

    int num1, num2, num3;

    //cout<<"Enter number first: ";
    //cin>>num1;
    //cout<<"Enter number 2nd: ";
   //cin>>num2;
   // cout<<"Enter number 3rd: ";
    //cin>>num3;

    int a = volume(num1, num2, num3);
    int b = volume (2,3,5);

    //cout<<"Volume is: "<<a<<endl;
    //cout<<"Volume is b: "<<b<<endl;

    //cout<<"Sum function: "<<Sum()<<endl;

    //Calculation(12.5,2.5);
    Display();
    cout<<"Mul: "<<Mul(5);


    return 0;
}
