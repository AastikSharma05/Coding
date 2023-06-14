Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 

 

Example 1:

Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.
  
  
vector<int> leaders(int a[], int n){
        // Code here
        vector<int> v;
        
        // cout<<a[n-1]<<endl<<a[n-2];
        v.push_back(a[n-1]);
        
        int curr = a[n-1];
        
         for(int i=n-2;i>=0;i--)
         {
             if(a[i] >= curr)
             {
                v.push_back(a[i]);
                curr = a[i];
             }
         }
        
     reverse(v.begin(),v.end());
     return v;
        
    }
