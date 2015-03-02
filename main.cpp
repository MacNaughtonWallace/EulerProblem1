/* 
 * File:   main.cpp
 * Author: MacNaughton Wallace
 *
 * Created on February 1, 2015, 1:49 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int inputNum() {
    int maxNum = 0;
    int nSum = 0;
    
    cout << "Please enter the max number limit for the sum of all"
            " of the multiples of 3 or 5: ";
    cin >> maxNum;
    for (int i=1; i<maxNum; i++) {
        if (i % 5 == 0){
         nSum += i;  
        }
        else if(i % 3 == 0){
         nSum += i;
        }
    }
    
    int m = (maxNum-1)/3;
    int n = (maxNum-1)/5;
    int p = (maxNum-1)/15;
    int nSum2 = 5*n*(n+1)/2 + 3*m*(m+1)/2 - 15*p*(p+1)/2;
    
    cout << "Sum (for n = " << maxNum;
    cout << ") = " << nSum << endl;
    cout << "Confirmation sum (for n = " << maxNum;
    cout << ") = " << nSum2 << endl;
    return 0;
}

int main(int argc, char** argv) {
    inputNum();
    int sum = 0;
    for (int i=1; i<1000; i++) {
        if (i % 5 == 0){
         sum += i;  
        }
        else if(i % 3 == 0){
         sum += i;
        }
    }
    
    int m = 999/3;
    int n = 999/5;
    int p = 999/15;
    int sum2 = 5*n*(n+1)/2 + 3*m*(m+1)/2 - 15*p*(p+1)/2;

    cout << "Sum (for n = 1000) = " << sum << endl;
    cout << "Confirmation sum (for n = 1000) = " << sum2 << endl;
    return 0;
}

