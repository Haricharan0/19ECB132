#include<stdio.h>
main()
{
   int a;
   long b; // equivalent to long int b;
   long long c; //  equivalent to long long int c;
   double e;
   long double f;
   
   printf("size of int=%zu bytes\n",sizeof (a));
   printf("size of long int=%zu bytes\n",sizeof(b));
   printf("size of long long int=%zu bytes\n",sizeof(c));
   printf("size of double=%zu bytes\n",sizeof(e));
   printf("size of long double=%zu bytes\n",sizeof(f));
   return 0;
}
/*
  output
size of int=4 bytes
size of long int=8 bytes
size of long long int=8 bytes
size of double=8 bytes
size of long double=16 bytes
/*