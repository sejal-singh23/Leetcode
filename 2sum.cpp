#include <iostream>
using namespace std;

int main(){
    int target = 16;
    int arr[] = {2,3,5,11,15};
    int right = 4;
    int left = 0;
    while(left < right){
        if(arr[left] + arr[right] == target ){
            cout << left << right;
            break;
        } else if(arr[left] + arr[right] > target){
            right--;
        } else {
            left++;
        }
    }
}