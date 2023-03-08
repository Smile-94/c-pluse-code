#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector<int> myVectro
    // define a 2D vector
    vector<vector<int>> vec_2d;

    // define the number of rows and columns
    int rows;
    int cols;

    cout<<"How many rows: ";
    cin>>rows;
    cout<<"How many cols: ";
    cin>>cols;

    // take input using push_back function
    for (int i = 0; i < rows; i++) {
        vector<int> row;
        for (int j = 0; j < cols; j++) {
            int value;
            cout << "Enter value for row " << i << ", column " << j << ": ";
            cin >> value;
            row.push_back(value);
        }
        vec_2d.push_back(row);
    }

    // print the 2D vector
    for (int i = 0; i < vec_2d.size(); i++) {
        for (int j = 0; j < vec_2d[i].size(); j++) {
            cout << vec_2d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

