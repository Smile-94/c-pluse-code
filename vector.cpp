
#include<iostream>
#include<vector>

using namespace std;

int main(){

//define a vector vector<DataType> vectorName;
vector<int> myVector;

// define a vector with value ector<DataType> vectorName (numElements, initialValue);
vector<int> myVector(5,10)
vector<int> myVector(5); // creates a vector of size 5, with default values of 0
vector<int> myVector {1, 2, 3, 4, 5}; // creates a vector with the values 1, 2, 3, 4, 5
//Accessing elements: Elements in a vector can be accessed using the [] operator or the at() function. For example:
int firstElement = myVector[0]; // gets the first element, which is 1
int thirdElement = myVector.at(2); // gets the third element, which is 3

//Adding elements: Elements can be added to the end of a vector using the push_back() function. For example:
vector<int> myVector {1, 2, 3};
myVector.push_back(4); //// adds the value 4 to the end of the vector

//Removing elements: Elements can be removed from a vector using the pop_back() function, which removes the last element from the vector.
vector<int> myVector {1, 2, 3, 4};
myVector.pop_back(); // removes the last element (4) from the vector

//Size: The size of a vector can be obtained using the size() function. For example:
vector<int> myVector {1, 2, 3};
int vectorSize = myVector.size(); // returns 3

dis

return 0;
}
