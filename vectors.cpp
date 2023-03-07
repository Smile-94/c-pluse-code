#include<iostream>
#include<vector>

using namespace std;

int main(){

    int i=0;

    vector<int> myVecotr {1,2,3,4,5,6};
    myVecotr.push_back(7); //adding new element in vector
    myVecotr.pop_back(); // removing element form end of the vecotr

    int capacity = myVecotr.capacity();
    cout<<capacity<<endl;

    //resize the capacity of the vector
    myVecotr.resize(16, 1);
    myVecotr.push_back(10);

    //erase a from vecotr
    //myVecotr.erase(myVecotr.begin() + 3);
     //myVector.insert(myVector.begin() + 3, 10);


    for(i=0; i<myVecotr.size();i++){
        cout<<myVecotr.at(i)<<endl;
    }

    

    return 0;
}