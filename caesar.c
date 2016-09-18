#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>



int main(int argc, string argv[])
{
    
    string userText =""; // text requested form user that will be changed. 
    
    // checks number of command line arguments  - users can only enter one int - which is the rotation key.
    
    if (argc < 2 || argc > 2){
        
            int userArgc = argc - 1;
        
        printf ("This programme only accepts 1 user command line argument. You input: %i \n", userArgc);
        
        return 1;
    
    } else {
        string strEncodeKey = argv[1];
        int intEncodeKey = atoi(strEncodeKey);
        
        if (intEncodeKey > 0){
            printf("Dear user, what text would you like to encode? \n"); // line not needed for CS50 checker
            userText = GetString();
        
        } else {
            
            printf("Your encode key must be greater 1 \n");
            
        }
        
    string outPutText = userText;
    
    for(int counterI = 0, length = strlen(outPutText) ; counterI < length ;counterI++ ){
        
        if ((outPutText[counterI] >= 97 &&  outPutText[counterI] <= 122) || (outPutText[counterI] >= 65 && outPutText[counterI] <= 90)  ){
        
        // could have used isalpha(); whoops!
        
            if (isupper(outPutText[counterI])){
                // changes to uppercase
                int newLetter = outPutText[counterI] - 65;
                
                newLetter += intEncodeKey;
                
                newLetter %= 26;
                
                newLetter += 65;
                
                outPutText[counterI] = newLetter;
            
            } else {
            
                // changes to lowercase    
            
                int newLetter = outPutText[counterI] - 97;
                
                newLetter += intEncodeKey;
                
                newLetter %= 26;
                
                newLetter += 97;
                
                outPutText[counterI] = newLetter;
                
            }
            
        }
    }
    
            
    printf("your ciphered word is: %s\n", outPutText); // final result after key applied. 
    
    
    return 0;
    
    }
    

} 



// print tests to check values

// int argCount = argc ;
// string j = argv[0];
// int k = atoi(argv[1]);

// printf ("argc =  %d \n" , argCount );
// printf ("encodeKey = %d\n", intEncodeKey);
// printf ("argv[0] =  %s \n" , j );
// printf ("argv[1] =  %d \n" , k );
// printf ("userText = %s \n" , userText);

// end of print tests to check values
