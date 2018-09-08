/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lambda_Std_Function.cpp
 * Author: Eagleye
 * 
 * Created on August 29, 2018, 10:09 PM
 */

//Kaynak:
// https://www.youtube.com/watch?v=uk0Ytomv0wY

#include "Lambda_Std_Function.h"
#include <functional>
#include <iostream>

using namespace std;

void Lambda_Std_Function::PerformOperation(function <void() > f) {
    f();
}

Lambda_Std_Function::Lambda_Std_Function() {

    int x = 100;

    auto funk = [&]() ->int { // lambda bir arguman almazsa fonksiyon olarak return veriyor. Argüman alırsa return variable olabiliyor.
        x++;

    };

    PerformOperation(funk);

    cout << x << endl;

}


