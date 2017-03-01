// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string romNumbers[3][3]={{"I","V","X"},
                            {"X","L","C"},
                            {"C","D","M"}};
    
  string str="";
  int temp=0,num=0;
  cin>>num;
  
  ///////////////////////////////////////////
  for(int y=0;y<3;y++)
  {
    temp=num%10;
    num/=10;
    if(temp<=3)
    for(int i=0;i<temp;i++)
        str=romNumbers[y][0]+str;
    else if(temp==4){
        str=romNumbers[y][0]+romNumbers[y][1]+str;

    }
    else if(temp==5)
        str=romNumbers[y][1]+str;
    else if(temp<=8){
            str=romNumbers[y][1]+str;
            for(int i=0;i<temp-5;i++)
                str=romNumbers[y][0]+str;
        }
    else if(temp==9)
        str=romNumbers[y][0]+romNumbers[y][2]+str;
        
  }
  
    temp=num%10;
    num/=10;
        for(int i=0;i<temp;i++)
            str='M'+str;
  
  cout << str;

}
