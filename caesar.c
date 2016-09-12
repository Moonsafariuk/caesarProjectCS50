#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int i = 0 ; 

int main(int argc, string argv[])
{

string userText ="";

if (argc < 3) {

printf("Dear user, what text would you like to encode? \n");

userText = GetString();

int argCount = argc ;
string j = argv[0];
int k = atoi(argv[1]);

printf ("argc =  %d \n" , argCount );
printf ("argv[0] =  %s \n" , j );
printf ("argv[1] =  %d \n" , k );
printf ("userText = %s \n" , userText);
return 0;

} else {
    
    int userArgc = argc - 1;
    
    printf ("This programme only accepts 1 user command line argument. You input: %i \n", userArgc);
    
    return 1;
    
}


}
