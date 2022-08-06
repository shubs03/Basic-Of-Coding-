

#include <iostream>

using namespace std;

int main()
{
   
   int n;
   
   cout<<"Enter value of N: ";
   cin>>n;
   int sum=0; 
    int i=1;
     while(i<=n){
         
         sum=sum+i;
         i=i+1;
         
     }
    cout<<"Sum of "<<n<< " number is: "<< sum;
    return 0;
}
