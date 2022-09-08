#include <stdio.h>                                                                                        

int main(void){                                                                                           

char c;                                                                                                   

int i;                                                                                                    

long lo;                                                                                                   

long long ll;                                                                                             

float f;
printf("size of char: %ld byte(s)\n", sizeof(c));
printf("size of int: %ld byte(s)\n", sizeof(i));
printf("size of long int: %ld byte(s)\n", sizeof(lo)); 
printf("size of long long int: %ld byte(s)\n", sizeof(ll));


printf("size of float: %ld byte(s)\n", sizeof(f)); 
return(0);
}
