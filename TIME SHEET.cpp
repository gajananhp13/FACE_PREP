Description

John Watson just started to work as a programming trainer for Bart's Placement Cell. He is paid Rs.100 an hour, with a few exceptions. He earns an extra Rs.15 an hour for any part of a day where he works for more than 8 hours. Also, he earns a 25% bonus for working on Saturdays and a 50% bonus for working on Sundays. The bonuses for Saturday and Sunday are computed based on the hours worked on those days. You'll be given the number of hours John Watson worked on each day in a week (Sunday, Monday, ..., Saturday), and you need to compute his salary for the week.



Input Format

Input consists of 7 integers



Output Format

Print John's salary for a week.



Sample Input 1

0

8

8

8

10

6

0



Sample Output 1

4030








_____________________________________________________________________________________________________________
#include <iostream>
using namespace std;

int main() 
{

int ans=0,mon,tue,wed,thu,fri,sat,sun;
  cin>>sun>>mon>>tue>>wed>>thu>>fri>>sat;
ans=(mon+tue+wed+thu+fri)*100;
    int sat_bonus = 125;
    int sun_bonus = 150;   // every sunday ko intne bonus se multiply karna hai
  if(mon>8)
  {	ans=ans+(mon-8)*15;  }  // ans mein monday ke extra overn time ka paid and same for all day
if(tue>8)
{ans=ans+(tue-8)*15;}
  if(wed>8)
  {	ans=ans+(wed-8)*15;}
    if(thu>8)
    {	ans=ans+(thu-8)*15;}
      if(fri>8)
      {	ans=ans+(fri-8)*15;}
     
        
     ans=ans+sat*sat_bonus+sun*sun_bonus;   // saturday and sunday bonus are added into it 
  
cout<<ans;
  
  
    return 0;
}
