/*
Next project: Expense Tracker Using Arrays
codester
Goal: Build a C program that stores daily expenses in an array and analyzes your spending.
Features to implement
Add an expense — store an expense amount in the array.
Display all expenses — print every stored amount.
Calculate total spending — sum all array elements.
Find the highest expense — identify the largest amount.
Find the lowest expense — identify the smallest amount.
Calculate average expense — find the average of all entries.
Search for an amount — use linear search.
Sort expenses — arrange them using Bubble Sort.
*/

#include <stdio.h>

void add_expense(int arr[] , int *x);
void display_expenses(int arr[] , int *x);
int main() {
    int exp[50];
    int x = 0;
    printf("***Expense Tracker Using Arrays***");
    printf("1.Add new expenses.\n");
    printf("2.Display all expenses.\n");
    printf("3.calculate total spending.\n");
    printf("4.Find the highest expense.\n");
    printf("5.Find the lowest expense.\n");
    printf("6.Calculate average expense.\n");
    printf("7.Search for amount.\n");
    printf("8.Sor Expenses.\n");
    printf("0.Exit.");

    int ch;
    printf("Enter your choice");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        add_expense(exp , &x);
        break;
    
    case 2:
        display_expenses(exp , &x);
        break;

    default:
        break;
    }
    return 0;
}

void add_expense(int arr[] , int *x)
{
    int n;
    printf("Enter how many expensive you want to add :");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive number of expenses.\n");
        return;
    }
    if (n > 50 - *x)
    {
        printf("Error: Only %d spaces are available.\n", 50 - *x);
        return;
    }
    for(int i = *x ; i < *x + n ;i++)
    {
        printf("Enter Expense %d :" , i+1);
        scanf("%d" , &arr[i]);
        (*x)++;
    }
    printf("Done successfully...\n");
}

void display_expenses(int arr[] , int *x)
{
    for (int i = 0; i < *x ; i++)
    {
        printf("E")
    }
    
}