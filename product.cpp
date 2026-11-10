#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 3, 4, 5};
    int n = 4;
    
    for(int i = 0; i < n; i++){
        int mul = 1;
        for(int j = 0; j <n; j++){
            if(i != j){
            mul = mul * arr[j];
            }
        }
        cout << mul;
    }
    
}