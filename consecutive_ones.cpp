class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int temp=0;
         int ans=0;   
          for(int i:nums){
               if(i==1){
                   temp++;
                   
               } 
              else{
                  if(temp>ans){
                      
                      ans=temp;
                  } 
                     temp=0;
                  
              }
            
          }    
        ans=temp;
        return ans;    
    }
};
