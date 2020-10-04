#include<cstring>
#include<iostream>
using namespace std;
#include "/home/genesis49/Documents/lin/Linux/include/bitmask.h"

int query(int n, int k) 
{ 
    if(n & (1 << (k - 1))){ 
        cout << "SET"; 
    return 1;
}
    else{
        cout << "NOT SET"; 
    
    return 0;
}
}