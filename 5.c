#include <stdio.h>
int main(){
    char alph;
    printf("enter any letter\n");
    scanf("%c",&alph);
    switch(alph){
        case'a':printf("A is a vowel");
        break;
        case'e':printf("E is a vowel");
        break;
        case'i':printf("I is a vowel");
        break;
        case'o':printf("O is a vowel");
        break;
        case'u':printf("U is a vowel");
        break;
        default:("the letter is not a vowel");
    }
}