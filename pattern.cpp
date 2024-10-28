
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    char x=64;
    char z=97;
    bool flag = 0;
    for(int i = 0; i < n;i++)
    {
        
            for(int k = 0; k < n-i;k++)
            {
                cout<<" ";
            }
        
        for(int j = 0;j < 2*i-1;j++)
        {
            if(islower(x)){
                x=toupper(x);
            }else{
                x=tolower(x);
            }
            if(x=='Z'){
                x=65;
            }
            if(x=='z'){
                x=97;
            }
            x++;
            cout<<x;
        }cout<<endl;
        
    }
    char y = 65;
     for(int i = n; i >=1;i--)
    {
        
            for(int k = 0; k < n-i;k++)
            {
                cout<<" ";
            }
        
        for(int j = 0;j < 2*i-1;j++)
        {
             if(islower(y)){
                y=toupper(y);
            }else{
                y=tolower(y);
            }
            if(y=='Z'){
                y=65;
            }
            if(y=='z'){
                y=97;
            }
            y++;
            cout<<y;
        }cout<<endl;
        
    }


    return 0;
}