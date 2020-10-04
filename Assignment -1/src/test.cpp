#include <cstring>
#include<iostream>
#include<cmath>
// #include "/home/genesis49/Documents/lin/Linux/include/mystring.h"
#include "/home/genesis49/Documents/lin/Linux/include/myutils.h"
#include "/home/genesis49/Documents/lin/Linux/include/bitmask.h"
using namespace std;
int main (){
/*
char str1[100];
char str2[100];
char c;
bool x;
int y;
//concatenate
/*
cout<<"Enter the first string";
cin>>str1;
cout<<"ENter the second string";
cin>>str2;
*/

// c=cat(str1,str2);
// cout<<c;


// //compare
// x=comp(str1,str2);
// if(x==true){
// 	cout<<"Strings are same";

// }
// else{
// 	cout<<"strings are not same";
// }

// //string copy
// y=copy(str1,str2);
// cout<<x;

// //string length
// y=len(str1);
// cout<<y;


//factorial
int n=5;
int ft;
ft=fact(n);
cout<<ft;


//isplaindrome

int num=101;
int pal;
pal=isPalindrome(num);
if(pal==1){
	cout << " The number is a palindrome.";
}
else{
	cout << " The number is not a palindrome.";

}


//isprime
int nu=17;
bool pri;
pri=isPrime(nu);
if(pri==true){
	cout << " Its prime.";
}
else{
	cout << " Its not prime.";

}

//vsum
int sum;
sum=vsum(3,4,5);
cout<<sum;


//set 
int j=5;
int l=4;
int bi;
bi=setBit(j,l);

//reset bit
cout<<bi;
int re;
re=resetBit(j,l);
cout<<re;

//flip

int lip;
lip=flip(n);
cout<<lip;


//query


int q;
query(j,l);
return 0; }

