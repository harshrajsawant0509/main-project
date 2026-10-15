/*
Features
Enter marks
Store marks of N students in an array.
Display all marks
Traverse the array and display them.
Find highest marks
Find the topper.
Find lowest marks
Find the lowest score.
Calculate average
Calculate the class average.
Count passed/failed students
Example: marks ≥ 40 → Pass.
Search for a particular mark
Use linear search.
Count how many students scored above average
Sort the marks
Start with Bubble Sort.
Reverse the array
Display marks from last to first.
*/ 
#include <stdio.h>
int input_marks(int arr[],int n);
int display_marks(int arr[] , int n);
int highest_marks(int arr[] , int n);
int lowest_score(int arr[] , int n);
int class_avg(int arr[], int n);
int no_of_stu_pass_fail(int arr[], int n);
int search_marks(int arr[], int n);
int get_stud_above_avg(int arr[], int n);
int sort_marks(int arr[], int n);
int display_sorted_marks(int arr[] , int n);
int main() 
{
    int marks[40];
    int n;
    printf("Enter Number of Student : ");
    scanf("%d" , &n);
    int choice;
    while (choice != 11)
    {
    printf("***Task*** \n");
    printf("1. Input Marks \n");
    printf("2. Display Marks\n");
    printf("3. Find Highest Marks\n");
    printf("4. Find Lowest Marks\n");
    printf("5. Find Class Average\n");
    printf("6. Find Number Of Student Passed/Failed\n");
    printf("7. Seach For Particular Marks\n");
    printf("8.Count how many students scored above average\n");
    printf("9. Sort Marks\n");
    printf("10. Display Sorted Marks\n");

    printf("Enter What's Your Task : ");
    scanf("%d" , &choice);
    
    switch (choice)
    {
    case 1:
        input_marks(marks , n);
        break;
    
    case 2:
        display_marks(marks , n);
        break;
    
    case 3:
        highest_marks(marks, n);
        break;

    case 4:
        lowest_score(marks, n);
        break;

    case 5:
        class_avg(marks, n);
        break;
    
    case 6:
        no_of_stu_pass_fail(marks, n);
        break;

    case 7:
        search_marks(marks, n);
        break;

    case 8:
        get_stud_above_avg(marks, n);
        break;

    case 9:
        sort_marks(marks, n);
        break;

    case 10:
        display_sorted_marks(marks, n);
        break;

    default:
        printf("Error ...");
        break;
    }
    }

    return 0;
}

int input_marks(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter Marks for student %d :",i+1);
        scanf("%d", &arr[i]);
    }
    return 0;
}

int display_marks(int arr[] , int n)
{
    printf("***Marks of Student***\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("Student %d : %d \n" , i+1 , arr[i]);
    }
    return 0;
}

int highest_marks(int arr[] , int n)
{
    int high = arr[0];
    int pos = 0;
    for(int i = 0 ; i < n ; i++ )
    {
        if(arr[i] > high)
        {
            high = arr[i];
            pos++;
        }
    } 
    printf("Highest Marks Scored by Student %d : %d\n",pos+1 , high);
    return 0;
}
int lowest_score(int arr[] , int n)
{
    int low = arr[0];
    int pos = 0;

    for(int i = 0 ; i< n ; i++)
    {
        if(arr[i] < low)
        {
            low = arr[i];
            pos++;
        }
    } 
    printf("Lowest Marks Scored by Student %d : %d\n",pos+1 , low);
    return 0;
}
int class_avg(int arr[], int n)
{
    int total = 0;
    float avg ;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    avg = total/n;
    printf("Average Of Students : %f.02" , avg);
}
int no_of_stu_pass_fail(int arr[], int n)
{
    int count = 0;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]>=40)
        {
            count++;
        }
    }
    printf("Number of Student Passed : %d" , count);
    printf("Number of Student Failed : %d" , n-count);
}
int search_marks(int arr[], int n)
{
    int num;
    printf("Enter marks you want to search : ");
    scanf("%d" , &num);
    int flag = 0 , pos;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == num)
        {
            flag = 1;
            break;
        }
        pos++;
    }
    printf("Student %d : %d" , pos+1 , num);
}
int get_stud_above_avg(int arr[], int n)
{
    int avg_func = class_avg(arr, n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > avg_func)
        {
            count++;
        }
    }
    printf("%d number of student got above average" , count);
}
int sort_marks(int arr[], int n)
{
     for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap adjacent elements if they are in wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorting Completed.");
}
int display_sorted_marks(int arr[] , int n)
{
    printf("***Sorted List***");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}