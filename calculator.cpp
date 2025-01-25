#include<iostream>  //calculator
using namespace std;
int main()
{
    char op;
    int a;
    int b,n;
    do{ 
        cout<<"Enter the operator :"<<endl;
        cout<<"1. +"<<endl;
        cout<<"2. -"<<endl;
        cout<<"3. *"<<endl;
        cout<<"4. /"<<endl;
        cin>>op;
        cout<<"Enter the operand : "<<endl;
        cin>>a>>b;

         switch(op)
         {
            case'+': cout<<"Addition is: "<<a+b;
                break;
            case'-': cout<<"Subtraction is: "<<a-b;
                 break;
            case'*': cout<<"Multiplication is: "<<a*b;
                break;
            case'/': cout<<"Division is: "<<a/b;
                break;
         }
         cout<<endl;
    cout<<"Do you want to continue(yes=0, no=1)"<<endl;
    cin>>n;
    }
    while(n!=1);
return 0;
}