#include <iostream>
#include <iterator>
using namespace std;

int main(){
    int nums[] = {1,7,3,6,5,6};
    int n = size(nums);
    int leftSum = 0;
    int rightSum = 0;
    for(int i = 0; i < n;i++){
        leftSum = 0;
        rightSum = 0;
        for(int j = 0;j <= i-1; j++){
            leftSum = leftSum + nums[j];
        }
        
        for(int j = i+1; j <= n-1;j++){
            rightSum = rightSum + nums[j];
        }

        if(leftSum == rightSum){
            cout << i;
            break;
        }
    }
    
}