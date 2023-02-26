//program which does calculation for >=20 age<=40 years
#include<iostream>
using namespace std;
int main()
{
    int age,a,b,sum;//defining variables
    cout<<"Enter your Age: ";//age of user
    cin>>age;
    //condition for getting calculator
    if (age>=20 && age<=40){
        cout<< "enter two numbers to add:\n ";
        cin>> a >> b;
        sum=a+b;
        cout<<"the sum of: " <<a<< " and " <<b<< " is "<<sum<<endl;
//reject
    }else{
    cout<<"You're RESTRICTED from accessing calculator: "<< endl;
    }
    return 0;
}

