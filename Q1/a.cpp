#include <iostream>
using namespace std;
int main() {
    int arr[20]= {1, 1, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 2, 0, 9, 8, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int a=1;
    int num=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]==num){
            a++;
        }
        else{
            cout<<a<<num;
            num=arr[i];
            a=1;
        }
    }
    cout<<a<<num;
    return 0;
}