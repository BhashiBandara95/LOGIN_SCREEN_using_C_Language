#include <stdio.h>
#include <conio.h>
#include <string.h>


int main()
{
    char ch;
    cahr pass [20]; // Ask the user to enter password
    int i = 0;
    char saved_pass[20];
    while(1){
    ch = getch(); //  start a infinite while loop
    if(ch = 13){
        pass[i] = '\0';
        break;
    }else{
    pass[i++] = ch;
    prntf["*"]; //  start a infinite while loop
    }
    }
    printf("You Entered : %s\n", pass);

    FILE * ptr ;
    ptr = fopen("password.text","r");
    scanf(ptr,"%s", saved_pass);    // fscanf()
    fclose(ptr);

    int l = strcmp[pass, saved_pass];
    return 0;
}
