
#include<bits/stdc++.h>
using namespace std;

//Function to convert the decimal number into octal number
void decimal_to_octal(int n)
{
    stack<int> st; // Stack declaration
    while(n)
    {
        int t=n%7;
        st.push(t); // pushing remainder in each iteration.
        n=n/7;
    }
    cout<<"Octal value = ";
//printing the octal value by pop stack element one by one until stack becomes empty
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}

int main()
{
    int n;
    cout<<"Enter a decimal value (Base-ten): ";
    cin>>n; // User input decimal number
    cout<<"Decimal value = "<<n<<endl;

// Calling Function to convert decimal into octal.
    decimal_to_octal(n);
    return 0;
}