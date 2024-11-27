#include <iostream>
#include<math.h>
using namespace std;
void print(int temp[],int size);
int main(int argc,char* argv[])
{
    int dNumber=0;
    cout << "Enter the decimal num: ";
    cin >> dNumber;
    int system=0;
    cout << "Enter the system: ";
    cin >> system;
    int ndigits=1;
    while(dNumber>pow(system,ndigits))
        ndigits++;
    int SIZE=0;
    int newNumber[ndigits]={0};
    int inputNum=dNumber;

    while(SIZE<ndigits){
        int temp=inputNum%system;
        newNumber[SIZE]=temp;
        inputNum=inputNum/system;
        SIZE++;
    }
    cout<<"("<<dNumber<<")_(10)=(";
    print(newNumber,SIZE);
    cout<<")_("<<system<<")"<<endl;
    return 0;
}
void print(int temp[],int size){
    for(int i=size-1;i>=0;i--){
        cout<< temp[i];
    }
}
