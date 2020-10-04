#include<cstring>
#include<iostream>
using namespace std;
#include "/home/genesis49/Documents/lin/Linux/include/bitmask.h"


int setBit(int n, int k) 
{ 
    return (n | (1 << (k - 1))); 
} 
/*
int main() 
{ 
    int n = 5, k = 1,x;
    x=setBit(n, k);
  
   cout<<n<<" "<<k<<" "<<x;

return 0;
}
*/