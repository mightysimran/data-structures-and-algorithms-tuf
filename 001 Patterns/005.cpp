// Pattern - 5
#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}

// * * * * * 
// * * * * 
// * * * 
// * * 
// * 