#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,4,7,2,5};

    int pA[5] = {};
    pA[0] = arr[0];

    for(int i = 1; i < 5; i++){
        pA[i] = pA[i-1] + arr[i];  //2,6,13,15,20
    }

    for(int i : pA){
        cout << i;
    }
    
}