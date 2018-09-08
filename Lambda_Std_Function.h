/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lambda_Std_Function.h
 * Author: Eagleye
 *
 * Created on August 29, 2018, 10:09 PM
 */



#ifndef LAMBDA_STD_FUNCTION_H
#define LAMBDA_STD_FUNCTION_H

#include <functional>
#include <iostream>

using namespace std;

class Lambda_Std_Function {
public:
    void PerformOperation(function <void() > f);
    Lambda_Std_Function();



};

#endif /* LAMBDA_STD_FUNCTION_H */

