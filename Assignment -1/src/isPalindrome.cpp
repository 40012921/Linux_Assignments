#include<cstring>
#include<iostream>
using namespace std;
#include "/home/genesis49/Documents/lin/Linux/include/myutils.h"
int isPalindrome(int num){
	
int n,digit, rev = 0;
n = num;

do
    {
        digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
    } while (num != 0);

if (n == rev){
    return 1;
}
else{
    return 0;
}
   
}
