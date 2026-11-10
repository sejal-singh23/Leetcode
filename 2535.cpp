#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,15,6,3};
    int sum = 0;
    for(int i = 0; i < 4; i++){
        sum = sum + arr[i];
    }
    int digitSum = 0;
    for(int i = 0; i < 4; i++){
        int num = arr[i];
        
        while(num > 0){
            digitSum = digitSum + (num % 10);
            num = num / 10;
        }
    }
    cout << sum - digitSum;
}