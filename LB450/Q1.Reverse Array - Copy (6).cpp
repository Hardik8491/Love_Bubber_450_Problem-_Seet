
    #include <bits/stdc++.h>
    #include <cstdio>
    #include <cstring>
    #include <cmath>
    #include <cstring>
    #include <chrono>
    #include <complex>
    #define endl "\n"
    #define ll long long int
    #define vi vector<int>
    #define vll vector<ll>
    #define vvi vector < vi >
    #define pii pair<int,int>
    #define pll pair<long long, long long>
    #define mod 1000000007
    #define inf 1000000000000000001;
    #define all(c) c.begin(),c.end()
    #define mp(x,y) make_pair(x,y)
    #define mem(a,val) memset(a,val,sizeof(a))
    #define eb emplace_back
    #define f first
    #define s second
    
    using namespace std;


void reverse(int arr[], int n)
{
    // create an empty stack of integers
    stack<int> stack;
 
    // push each array element into a stack
    for (int i = 0; i < n; i++) {
        stack.push(arr[i]);
    }
 
    // start from index 0
    int index = 0;
 
    // pop values from the stack until it becomes empty
    while (!stack.empty())
    {
        // assign each popped item back to the original array
        arr[index++] = stack.top();
        stack.pop();
    }}


        Print(int arr[],int n){

            for (int i = 0; i < n; ++i)
            {
              cout<<arr[i]<<" ";
            }
        }
           

    int main()
    {
        
        
    
          int n =5;
            int arr[5]={1,2,3,4,5};
        

            reverse(arr,n);

            Print(arr,n);
        
        return 0;
    }
