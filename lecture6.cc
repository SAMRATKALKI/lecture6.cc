#include <iostream>
#include <math.h>
using namespace std;

int main(){
    // decimal to binary converter program
    int n ;
    cout<<"enter the decimal no to convert into binary - ";
    cin>>n;
    int ans = 0;
    int po = 1;
    while(n!=0){
        int  digit = n%2;
        n = (n/2);
        ans = ans + (digit*po);
        po = po*10;
        
    }
    cout<<ans<<endl;
    
    // binary to decimal converter program
    int a ;
    cout<<"enter the binary no to convert into decimal - ";
    cin>>a;
    int i = 0;
    int ans1 = 0;
    while(a!=0){
        int no = a%10;
        ans1 = ans1 + no*(pow(2,i)); 
        i++;
        a = a/10;
    }
    cout<<ans1<<endl;
    

     // negitive no to binary converter program  
    int d ;
    cout<<"enter a negitive no to convert it into binary - ";
    cin>>d;
    d = -(d);
    int loop = 1;
    int ans3 = 0;
    int power = 1; 
    while(loop<=8){
        int bi = d&1;
        if (bi==1){
            bi=0;
        }
        else{
            bi=1;
        }
        if (power==1){
            if(bi==1){
                bi = 0;
            }
            else{
                bi = 1;
            }
        }
        ans3 = ans3 + (bi*power);
        d = d>>1;
        loop++;
        power *= 10;


    }
    cout<<ans3;






}