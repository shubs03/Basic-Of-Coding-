
#include <iostream>

using namespace std;

int main()
{
    int marks ;
    cout<<"Enter your Marks: ";
    cin>>marks;
    
    if(marks>85){
        
        cout<<"congrats you are passed and get a A grade";
    }
    else if(marks>70){
        
        cout<<"congrats you are passed and get a B grade";
    }
     else    if(marks>45){
             
             cout<<"congrats you are passed and get a C grade";
             }
             else{
                 
                 cout<<"you are failed";
             }

    return 0;
}

/*  Output 
   Enter your Marks: 75
   congrats you are passed and get a B grade
                                               */
