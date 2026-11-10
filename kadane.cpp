#include <iostream>
#include<climits>
using namespace std;

int main(){
    int nums[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < 9; i++){
        currSum += nums[i];
        maxSum = max(currSum , maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << maxSum;
}