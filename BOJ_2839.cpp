
#include <iostream>
using namespace std;
int main()
{
  int num,m,n=0;
  
  cin>>num;
  
  m=num/5;
  n=num%5;
  
  while(m>=0){
      
      if(n%3==0){
          cout<< m+(n/3);
          break;
      }else{
          if(m==0){
              cout<<-1;
              break;
              }
          m=m-1;
          n=n+5;
          
      }
  }

}
