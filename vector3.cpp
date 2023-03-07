
#include<iostream>
#include<vector>

using namespace std;

int main(){

int i,n,value;

// vector<dataType> VectorName;
// vector<int> myVector(5,0);
vector<int> myVector;

cout<<"Enter the number of value you wnats to input: ";
cin>>n;


for (i =0;i<=n;i++){
    cout<<"Enter the value: ";
    cin>>value;
    myVector.push_back(value);
    cout<<"Capacity: " <<myVector.capacity()<<endl;
}



for(i=0;i<myVector.size(); i++){
    cout<<myVector.at(i)<<" ";
}

return 0;
}
