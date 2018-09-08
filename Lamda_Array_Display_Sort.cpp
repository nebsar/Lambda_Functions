/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lamda_Array_Display_Sort.cpp
 * Author: Eagleye
 * 
 * Created on August 28, 2018, 11:31 PM
 */

#include <iostream>
#include <algorithm>
#include <vector>

#include "Lamda_Array_Display_Sort.h"

using namespace std;

Lamda_Array_Display_Sort::Lamda_Array_Display_Sort() {

    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);

    DisplayNums(myNums);

    cout << "Sorting them in descending order" << endl;

    sort(myNums.begin(), myNums.end(), [](const int& Num1, const int& Num2) ->bool {
        return (Num2 < Num1); });

    DisplayNums(myNums);

}

void Lamda_Array_Display_Sort::DisplayNums(vector<int>& dynArray) {
    for_each(dynArray.begin(), dynArray.end(), [](int Element) {
        cout << Element << " ";
    });

    cout << endl;
}


