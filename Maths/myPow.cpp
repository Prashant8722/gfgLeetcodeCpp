#include<bits/stdc++.h>
using namespace std;
/*
    double myPow(double x, int n) {
        double res = 1.0;
        long long power = n;   

        if(power < 0){
            x = 1 / x;
            power = -power;
        } 

        while( power > 0){
            if(power % 2 == 1){
                res *= x; 
            }
            x *= x;
            power = power / 2;
        }
        return res;
    }
*/

/*
double myPow(double x, int n) {
        if(n == 0) return 1;
        if(n < 0){
            n = abs(n);
            x = 1 / x;
        }
        if( n % 2 == 0) return myPow(x* x , n /2);
        else{
            return x * myPow( x , n-1);
        }
}
// time complexity => O(log n) , Space Complexity => O(logn)
*/
double myPow(double x, int n) {
    if(n == 1) return x;
    if( n < 0) {
        n = abs(n);
        x = 1 / x;
    }
        return x*myPow(x , n-1);

    // Time Complexity => O(n) , time complexity => O(n)
}
int main(){
    double x = 2.0;
    int n = -34;
    cout << myPow(x , n);
return 0;
}