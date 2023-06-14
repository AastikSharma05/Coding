```
Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 


Example 1:

Input:
N = 5, D = 2
arr[] = {1,2,3,4,5}
Output: 3 4 5 1 2
Explanation: 1 2 3 4 5  when rotated
by 2 elements, it becomes 3 4 5 1 2.
```

Code:

void reverse(int arr[],int l, int h)
    {
        while(l<=h)
        {
            swap(arr[l],arr[h]);
            l++;
            h--;
        }
    }
    void rotateArr(int arr[], int d, int n){
        // code here
        if(d%n==0)
            return;
        else 
            d=d%n;
            
         reverse(arr,0,d-1);
         reverse(arr,d,n-1);
         reverse(arr,0,n-1);
     
    }
