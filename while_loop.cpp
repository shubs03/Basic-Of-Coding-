#include<iostream>
using namespace std; 
int main(){
	int a = 25;
	int rev_a=0;
	
	while(a!=0){
	    
        rev_a = 10 * rev_a + a % 10;
        a = a / 10;
    }
	cout<<"Reversed Number is: "<<rev_a;
	
}
/* output 
  Reversed Number is: 52
                         */
