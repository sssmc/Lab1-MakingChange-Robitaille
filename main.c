/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Sebastien Robitaille
 * 
 * Prompts the user for a purchase price and a amount tendered
 * then calculates the required change(rounded to the nearest $0.05)
 * and displays the amount of each denomination required.
 * 
 * Uses the following denominations($):
 * 20,10,5,2,1,0.25,0.1,0.05
 *
 * Created on January 6, 2025, 9:42 p.m.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double price, tendered, changeDue;

int numOfChangeItems = 0;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Get cost and amount tendered from the user
    printf("Purchase Cost: ");
    scanf("%lf", &price);
    
    printf("Amount Tendered: ");
    scanf("%lf", &tendered);
    
    //Calculate and print change due
    changeDue = tendered - price;
    printf("Change Due: $%.2f\n", changeDue);
    
    //Round change due to the nearest 0.05 cents and print
    //20 = 1/0.05
    changeDue = round((changeDue * 20.0)) / 20.0;
    printf("Change Due(Rounded to nearest nickel): $%.2f\n", changeDue);
    
    //Calculate and print change due for each denomination
    
    //Twenties
    numOfChangeItems = changeDue / 20;
    printf("Twenties: %d\n", numOfChangeItems);
    changeDue -= (numOfChangeItems * 20);
    
    //Tens
    numOfChangeItems = changeDue / 10;
    printf("Tens: %d\n", numOfChangeItems);
    changeDue -= (numOfChangeItems * 10);
    
    //Fives
    numOfChangeItems = changeDue / 5;
    printf("Fives: %d\n", numOfChangeItems);
    changeDue -= (numOfChangeItems * 5);
    
    //Toonies
    numOfChangeItems = changeDue / 2;
    printf("Toonies: %d\n", numOfChangeItems);
    changeDue -= (numOfChangeItems * 2);
    
    //Loonies
    numOfChangeItems = changeDue / 1;
    printf("Loonies: %d\n", numOfChangeItems);
    changeDue -= (numOfChangeItems * 1);
    
    //Quarters
    numOfChangeItems = changeDue / 0.25;
    printf("Quarters: %d\n", numOfChangeItems);
    changeDue -= (numOfChangeItems * 0.25);
    
    //Dimes
    numOfChangeItems = changeDue / 0.1;
    printf("Dimes: %d\n", numOfChangeItems);
    changeDue -= (numOfChangeItems * 0.1);
    
    //Nickles
    numOfChangeItems = changeDue / 0.05;
    printf("Nickles: %d\n", numOfChangeItems);
    changeDue -= (numOfChangeItems * 0.05);
    
    return (EXIT_SUCCESS);
}


