#include<iostream>
using namespace std;
int main()
{
    //variables definition
    int age;
    float x,y,result;
    char op;

    cout<<"Input Your Age: ";
    cin>>age;//collects age of user
    if (age>=20 &&age<=35){
        cout<<"Enter the Mathematical Operation (+,-,*,/): ";
        cin>>op;
        //switch control
        switch (op){
            case '+'://addition
            cout<<"Input the two values: ";
            cin>>x>>y;
            result=x+y;
            cout<<"The sum of " <<x<< " and " <<y<< " is " <<result<<endl;
            break;
            case '/'://division
            cout<<"Input the two values: ";
            cin>>x>>y;
            result=x/y;
            cout<<"The qoutient of " <<x<< " and " <<y<< " is " <<result<<endl;
            break;
            case '-'://subtraction
            cout<<"Input the two values: ";
            cin>>x>>y;
            result=x-y;
            cout<<"The difference of " <<x<< " and " <<y<< " is " <<result<<endl;
            break;
            case '*':
            cout<<"Input the two values: ";
            cin>>x>>y;
            result=x*y;//multiplication
            cout<<"The product of " <<x<< " and " <<y<< " is " <<result<<endl;
            break;
            default://when all cases fail
            cout<<"Sorry!! Your Operation not RECOGNIZED: ";
            return 0;
             }

            }else{
                cout<<"SORRY!! You are Barred from using the calculator";//output when out of the age limit

    };
    return 0;

}
