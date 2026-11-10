#include <iostream>
using namespace std;

int main(){
        
    int nums[n] = {4,3,2,7,8,2,3,1};
    int hashh[n] = {0};

    for(int i = 0; i < n; i++){
        hashh[nums[i]] += 1;

    }
    for(int i = 1; i < n;i++){
        if(hashh[i] == 0){
            cout << i;
        }
    }
}