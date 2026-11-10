#include <iostream>
using namespace std;

int main(){
    int a[6] = {0,0,1,1,2,3};
    int j = 1;
    for(int i = 1; i < 6;i++){
        if(a[i] != a[i-1]){
            a[j] = a[i];
            j++;
        }
    }
    
    for(int i = 0; i < j;i++){
        cout << a[i];
    }
   
}