#include <iostream>
using namespace std;

int main(){
    int arr[] = {18,43,34,16};
    int n = 4;
   
    for(int i = 0; i < n;i++){
        int num = arr[i];
        int count = 0;
        while(num > 0){
            count = count + num % 10;
            num = num / 10;
        }
        arr[i] = count;
    }
    int swaps = 0;
    for(int i = 0; i < n; i++){
        
        for(int j = i+1
            ; j < n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]); 
                swaps++;  
            }    
        }
            
    }
    cout << swaps << endl;
    for(int i = 0; i <n ; i++){
        cout << arr[i];
    }
    
}