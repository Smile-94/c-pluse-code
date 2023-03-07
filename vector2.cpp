#include<iostream>
#include<vector>

using namespace std;

int main(){

int i;

// vector<dataType> VectorName;
// vector<int> myVector(5,0);
vector<int> myVector {1,2,3,4,5};

myVector.push_back(8);
myVector.pop_back();
myVector.insert(myVector.begin()+3,20);
//myVector.erase(myVector.begin()+3);

//myVector.resize(20,1);
int capa = myVector.capacity();
cout<<"Capacity: "<<capa<<endl;

int mySize = myVector.size();

cout<<"Size of vector: "<<mySize<<endl;

for(i=0;i<myVector.size(); i++){
    cout<<myVector.at(i)<<" ";
}

return 0;
}


