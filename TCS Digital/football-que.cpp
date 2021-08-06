#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char home_team,away_team,token;
   
    unordered_map<char,int> win;
    
   
    int hscore,ascore; 
      
    for(int i=0;i<n*((n-1)/2);i++)
    {
        cin>>home_team>>away_team>>hscore>>token>>ascore;
        
            if(hscore> ascore)
            {
                win[home_team]+=3;
            }
            else if(hscore< ascore)
            {
                win[away_team]+=3;
            }
            else
            {
                win[home_team]+=1;
                win[away_team]+=1;
            }
    
    }
    int maxgoal=0;
    char winteam;
    for(auto x:win)
    {   
      int temp=x.second;
       if(temp>maxgoal)
       {
           winteam=x.first;
           maxgoal=temp;
       }
        
    }
    cout<<winteam<<"\n"<<maxgoal;
}


// Test Case
/*
======Input======
3
A B 2-1
B C 5-6
C A 2-1
====Output======
C
6
*/
