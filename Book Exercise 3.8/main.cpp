//
//  main.cpp
//  Book Exercise 3.8
//
//  Created by ax on 8/30/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Book exercise 3.8 - Financial Application: Monetary Units
//

#include <iostream>
using namespace std;

int main() {

    // Receive the amount
    cout << "Enter an amount in double, for example 11.56: ";
    double amount;
    cin >> amount;
    
    int remaining_amount = static_cast<int>(amount * 100);
    
    // get single dollars
    int number_of_one_dollars = remaining_amount / 100;
    remaining_amount = remaining_amount % 100;
    
    // find the number of quarters in the remaining amount
    int number_of_quarters = remaining_amount / 25;
    remaining_amount = remaining_amount % 25;
    
    // find the number of dimes in the remaining amount
    int number_of_dimes = remaining_amount / 10;
    remaining_amount = remaining_amount % 10;
    
    // find the number of nickels in the remaining amount
    int number_of_nickels = remaining_amount / 5;
    remaining_amount = remaining_amount % 5;
    
    // find the number of pennies in the remaining amount
    int number_of_pennies = remaining_amount;
    
    // Display the results
    cout << "Your amount " << amount << " consists of " << endl <<
    "   " << number_of_one_dollars << " dollars" << endl <<
    "   " << number_of_quarters << " quarters" << endl <<
    "   " << number_of_dimes << " dimes" << endl <<
    "   " << number_of_nickels << " nickels" << endl <<
    "   " << number_of_pennies << " penis" << endl;
    
    return 0;
}
