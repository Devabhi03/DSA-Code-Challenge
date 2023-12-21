/*
Patterns -> Nested Loops
Ex:
 1    
 0 1
 1 0 1   
 0 1 0 1   
 1 0 1 0 1   
1. For the outer loop, count the number of lines.
So here the no. of rows are 4 and columns are 4 too.
2. For the inner loop, focus on the columns 
and connect them somehow to the rows
3. print the 'x' inside the inner for loop
4. Observe symmetry (Exceptional)
*/
#include<bits/stdc++.h>
using namespace std;
void print1(int n) {
    int start;
    for(int i=0;i<n;i++) {
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++) {
            cout<< start<<" ";
            start =1-start;
        }
        cout<< endl;
    }
}
int main() {
    int n;
    cin>>n;
    print1(n);
}
