#include<iostream>
using namespace std;
 
double factorial(int n){
   //Enter your code here
   if (n == 0)
      return 1;
   else
      return n * factorial(n-1);
}

//Driver Code
int main()
{   
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
