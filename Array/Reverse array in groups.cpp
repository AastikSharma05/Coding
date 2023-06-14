Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

Note: If at any instance, there are no more subarrays of size greater than or equal to K, then reverse the last subarray (irrespective of its size). You shouldn't return any array, modify the given array in-place.

Example 1:

Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.

  
  
 void reverse(vector<long long>& arr, int l, int h)
    {
        while(l<=h)
        {
            swap(arr[l],arr[h]);
            l++;
            h--;
        }
    }
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        if(k == 1)
            return;
        if(k>=n)
            reverse(arr,0,n-1);
        else{
            for(int i=0;i<n;i+=k)
            {
                if(i+k-1>=n)
                        reverse(arr,i,n-1);
                else
                    reverse(arr,i,i+k-1);
            }
        }
        
    }
