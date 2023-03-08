#include <iostream>
#include <vector>

using namespace std;

int main() {
    // create two boolean vectors
    vector<bool> A = {true, false, true, false};
    vector<bool> B = {false, true, false, true};


    // apply De Morgan's law for negation of conjunction
    vector<bool> C1(A.size());
    for (int i = 0; i < A.size(); i++) {
        C1[i] = !(A[i] && B[i]);
    }
    vector<bool> C2(A.size());
    for (int i = 0; i < A.size(); i++) {
        C2[i] = !A[i] || !B[i];
    }
    // check if C1 and C2 are equal
    bool is_equal_1 = true;
    for (int i = 0; i < C1.size(); i++) {
        if (C1[i] != C2[i]) {
            is_equal_1 = false;
            break;
        }
    }
    if (is_equal_1) {
        cout << "De Morgan's law for negation of conjunction is true." << endl;
    } else {
        cout << "De Morgan's law for negation of conjunction is false." << endl;
    }

    // apply De Morgan's law for negation of disjunction
    vector<bool> D1(A.size());
    for (int i = 0; i < A.size(); i++) {
        D1[i] = !(A[i] || B[i]);
    }
    vector<bool> D2(A.size());
    for (int i = 0; i < A.size(); i++) {
        D2[i] = !A[i] && !B[i];
    }
    // check if D1 and D2 are equal
    bool is_equal_2 = true;
    for (int i = 0; i < D1.size(); i++) {
        if (D1[i] != D2[i]) {
            is_equal_2 = false;
            break;
        }
    }
    if (is_equal_2) {
        cout << "De Morgan's law for negation of disjunction is true." << endl;
    } else {
        cout << "De Morgan's law for negation of disjunction is false." << endl;
    }

    cout<<"C1 Value: ";
    for (int i=0;i<C1.size();i++){
        cout<<C1.at(i)<<" ";
    }
    cout<<endl;
    cout<<"C2 Value: ";
    for (int i=0;i<C2.size();i++){
        cout<<C2.at(i)<<" ";
    }

    return 0;



    //(A+B)'=A'.B'
    // (A.B)' = A'+B'

}
