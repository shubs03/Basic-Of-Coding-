

#include <bits/stdc++.h>

using namespace std;

int main()
{
   vector<int>v ;
    v.push_back(10);
    
    v.push_back(23);
    
    v.push_back(21);
    
    v[2]=30;
    
    v.insert(v.begin()+3,45);
    
    v.insert(v.begin()+4,34);
    
    cout<<*(v.begin()+1)<<endl;
    
    cout<<*(v.end()-1)<<endl;
    
    v.erase(v.begin()+3);
    
    v.erase(v.end()-1);
    
    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
        
    }
    return 0;
}
