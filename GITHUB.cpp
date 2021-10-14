#include<iostream>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
     int a;
     cin>>a;
     int div1=0;
     int d=a%10;
     if(d==5 || d==0)
     {
          while(true)
          {
               if(a%10==0)
               {
                    break;
               }
               a=a*2;
               div1++;
          }
          cout<<div1<<endl;
     }
     else
     {
          cout<<"-1"<<endl;
     }
     }
     return 0;
}
