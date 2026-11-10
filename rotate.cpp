#include <iostream>
using namespace std;

int main(){
    int n = 7;
    int nums[n] = {1,2,3,4,5,6,7};
    int k = 3;
    int i = 0;
    int j = n-1;
    k = k % n;
    while(i < j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    i = 0;
    j = k-1;
    while(i < j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    i = k;
    j = n-1;
    while( < j){
        swap(nums[i],nums[j]);
        i++;
        j--;

    }
    for(int i = 0; i < n; i++){
        cout << nums[i];
    }
}
    