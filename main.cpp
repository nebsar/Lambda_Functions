/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on August 28, 2018, 11:24 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

#include "Lamda_Array_Display_Sort.h"
#include "Lambda_Std_Function.h"

using namespace std;

/*
 * 
 */


int main() {

    Lamda_Array_Display_Sort lds;
    //lds.DisplayNums();

    int i = 10;
    int j = 20;

    // &i and &j is used to be able to change the values of the variable. 
    // Otherwise you cannot change the values of the variables.
    // [] means "Capture List", you should put the variables to be used inside the lambda function
    // if you use [=], you can use all local variables. Cos you include all of them with it.
    auto sum = [&i, &j](int a, int b) ->int {

        i = 60;
        j = 50;

        return (a + b + i + j);
    };

    auto sum2 = [ = ](int a, int b) ->int { // [=] does not allow to change the variable value
        return (a + b + i + j);
    };

    auto sum3 = [&] (int a, int b) ->int { // [&] allows to change all the variable values
        return (a + b + i + j);
    };


    auto sum4 = [&, i] (int a, int b) ->int { // [&,i] allows to change all the variable values except the variable i

        return (a + b + i + j);
    };

    auto sum5 = [ =, &i] (int a, int b) ->int { // [=, &i] allows to change only the variable i

        return (a + b + i + j);
    };


    cout << sum(100, 200) << endl;

    cout << sum2(200, 300) << endl;

    cout << sum3(200, 300) << endl;

    cout << sum4(200, 300) << endl;

    cout << sum5(200, 300) << endl;

    cout << i << "  " << j << endl;

    vector<int> v{1, 2, 3, 4, 5}; // or vector<int> v(5) = {1,2,3,4,5};

    int sumOfVector = 0;

    for_each(begin(v), end(v), [&sumOfVector](int element) { // vector'deki sayıların toplamı
        sumOfVector += element;
    });
    
    cout<<sumOfVector<<endl;
    
    Lambda_Std_Function lsf;

    return 0;
}

