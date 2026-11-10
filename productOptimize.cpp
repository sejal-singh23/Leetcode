#include <iostream>
using namespace std;

int main(){
    int nums[4] = {1,2,3,4};

    int n = 4;

    int prefix[4];
    prefix[0] = 1;

    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    for(int i = 0; i < n;i++){
        //cout << prefix[i] << "\n";
    }

    int suffix[4];
    suffix[n-1] = 1;

    for(int i = n-2; i >= 0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];  
    }
    for(int i = 0; i < n;i++){
        //cout << suffix[i] << "\n";
    }
    
    int result[4];
    
    for(int i = 0; i < 4; i++){
        result[i] = prefix[i] * suffix[i];
    }
    for(int i = 0; i < 4; i++){
        cout << result[i] << "\n";
    }
}