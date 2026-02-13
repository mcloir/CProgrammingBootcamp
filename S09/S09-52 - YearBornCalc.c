#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    int age;
    int birthYear;
    printf("Hello, my friend!\nStay a while and listen:\nI'm have the power to tell you which year that you was born!\nSo, tell me, which is the current year? ");
    scanf("%d", &year);
    printf("Oh, good boy. Now, tell your age: ");
    scanf("%d", &age);    
    printf("Here we go, let me focus on my own intern energy...\nAaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahhhhhhhhhhhhhhh\nSo, the year when you was born is %d!!!!\n", year - age);
    
    birthYear = year - age;
    
    printf("I said, your birthyear is %d!!!!", birthYear);
    return 0;    
}