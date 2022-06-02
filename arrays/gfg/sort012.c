/*
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

*/

// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C
//another way to solve it
void sort012_alternate(int a[], int n)
{
    int lo=0, mid=0, hi=n-1;
    

        while(mid <= hi)
        {
            if(a[mid] == 0)
            {
                
                int temp = a[lo];
                a[lo] = a[mid];
                a[mid] = temp;
                lo++;
                mid++;
            }
            else if(a[mid] == 1)
                mid++;
            else if(a[mid] == 2)
            {
                int temp = a[hi];
                a[hi] = a[mid];
                a[mid] = temp;
                hi--;
            }
        }
}


void sort012(int a[], int n)
{
    int czero = 0, cone = 0;
    
    for(int i=0; i<n;i++)
    {
        if(a[i] == 0)
            czero++;
        else if(a[i] == 1)
            cone++;
    }
    int x = czero + cone;
    int ctwo = n - x;
    for(int i=0; i<czero; i++)
        a[i] = 0;
    for(int i=czero; i<x;i++)
        a[i] = 1;
    for(int i = x; i<n ; i++)
        a[i] = 2;
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends