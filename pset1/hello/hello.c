#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string name = get_string("What is your name?\n"); //    Ask for user name
    printf("hello, %s\n", name);//  Say Hello to user
}