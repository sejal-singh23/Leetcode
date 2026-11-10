#include <iostream>
using namespace std;

int main(){
    int arr1[3] = {2,1,5};
    int capacity = 4;
    int arr2[3] = {3,3,4};

    for(int i = 0; i < 3; i++){
        if(arr1[i+2] > arr2[i+1]){
            if(arr1[0] > capacity || arr2[0] > capacity){
                cout << "no";
            } else {
                cout << "true";
                break;
            }
        } else{
            cout << "no";
            break;
        }
    }
}