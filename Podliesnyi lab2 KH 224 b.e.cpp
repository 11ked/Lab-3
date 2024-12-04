#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x,n,sum,mlt,dif = 0;
    cout << "Input x and n (n>0)";
    cin >> x;
    cin >> n;
    if (x >= 6) 
    {
        int i = 5;
        int j = 1;
        while (i < 7) {
            sum={sum+(x*i)};
            i++;
            }
        while (j < n){
            dif=dif+((x-j)/(x+i));
            j++;
        }
        
        mlt=sum-dif;
        cout << mlt;
        return 0;
    
}
else{
    int i = 0;
    int j = 0;
    sum = 0;
    dif = 0;
    while (i < n){
        while (j<n+1){
            dif = dif*(pow(j, 2)+ pow(i, 2))/(10*x+1);   // cout << 0; for every x and n 
            j++;
        }
        sum = sum+dif;
        i++;
    }
    cout << sum;
    return 0;
}
}