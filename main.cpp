#include <iostream>
#include<math.h>
#include<string>
using namespace std;


int main()
{

  int age;
  double income;
  string city_employment; 

  cout<<"This is the public transportation system.\n Please answers the question to indicated what you have to pay.\n\n";
  
  cout<<"Let's start!\n\n";
  cout<<"Please enter your Age:\n";cin>>age;
  cout<<"Please enter your Income:\n";cin>>income;
  cout<< "Are you a City Employee? Please answer Yes or No: \n";
  cin>>city_employment;

  if(city_employment=="yes"){
    cout<< "Please pay only $50\n";
  }
    else if( age >=0  && age <=5)
      { cout<< "Kids under 5 years old don't pay\n";}
    else if( age >= 6 && age <=17) 
      { cout<< "Please pay $80 dollars\n"; }
    else if( age >= 18 && income <=15000)
      { cout<< "Please pay $30 dollars\n";}       
    else if(age >= 65 && income <=30000) 
      {  cout<< "Please pay $70 dollars\n";}
        //    }   ) 
        else { 
        cout<< "You are part of General Population, Please pay only $100\n\n"; }
return 0;
}

