#include<stdio.h>
#include<string.h>
int main(){
    char name []= "PARAMESH";
    char surname []= "paramesh";

    //strlwr(name); //converts string to lowercase
    //strupr(surname); //converts string to uppercase(Capitalize the string)
    //strcat(name,surname);//appends name to surname
    //strncat(name,surname,3);//appends name to surname with n characters
    //strcpy(name,surname);//copy surname to name
    //strncpy(name,surname,2);//copy name to surname with n characters
    //strrev(name);//reverses the string
    //strset(name,'f');// sets all characters in a name into a given character
    //strnset(name,'x',3);// sets first n number of characters in a name into a given character
    //int length = strlen(name);// returns string length
    //int compare = strcmp(name,surname);//compare and tell if both name and surname are same if same int compare == 0 and if not it will give some random values
    // compare is also case sensitive
    //int compare = strncmp(name,surname,6);// string compare n number of characters 
    //int compare = strcmpi(name,surname);//same like strcmp but case insensitive
    int compare = strnicmp(name,surname ,5);// same like strcmp but case insensitive and compare n number of characters
    printf("%d",compare);
    if(compare == 0){
        printf("\nBoth name and surname are same");
    }
    else{
        printf("\nBoth name and surname are not same");
    }
    return 0;
}