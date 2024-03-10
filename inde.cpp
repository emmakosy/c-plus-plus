#include<iostream>
int(){
   std::int a, n, d, tn, stn;
   cout<<"Enter first term: \n";
   cin>>a;
    cout<<"Enter nth term: \n";
   cin>>n;
   cout<<"Enter common difference: \n";
   cin>>d;
   tn = a + (n-1)*d;
   stn = n/2(a + tn);
   cout<<"The nth term of arithmetic progression is: "<<tn;
   cout<<"The sum of series is: "<<stn;

   return 0;
}
