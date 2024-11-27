#include <iostream>
#include <cmath>
using namespace std;
double iterative (double x, double n){
    double sum = 0.0;
    for(int i=1; i<=n; i++){
        sum = sum+(pow(-1,i+1)*pow(x-1,i))/i;
    }
    return sum;
}
double recursive(double x, int n){
    static double sum = 0.0;
    int i=1;
    if (n>=1){
        sum = sum + (pow(-1,n+1)*pow(x-1,n))/n;
        recursive(x,n-1);
    }
    else {
        return sum;
    }
}
int main()
{
    double x,y;
    int n;
    cout<< "Enter a value for x (0,2): ";
    cin >> x;
    cout<<"Enter the number of terms: ";
    cin>>n;
    if(x>0 && x<2){
        y = iterative (x,n);
        cout<<"the iterative answer is: "<< y << endl;}
    else {
        cout<<"x should be between (0,2): ";
    }
    if(x>0 && x<2){
        y = recursive(x,n);
        cout<<"the recursive answer is: "<< y <<endl;}
    else {
        cout<<"x should be between (0,2): ";
    }
    return 0;
}