#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <stdbool.h> 
 
int main ()
 
{
    srand(time(0)); 
    int posHamster1 = 0, posHamster2 = 0;
   
    bool acabou = false; 
 
    while(acabou == false)
    {
     int n1 = rand() % 5 + 1;
        int n2 = rand() % 5 + 1; 

        
        if (n1 == 1) {
            posHamster1++; 
        } else if (n1 == 2) {
            posHamster1 += 2;
        } else if (n1 == 3) {
           
        } else if (n1 == 4) {
            posHamster1--;
        } else if (n1 == 5) {
            posHamster1 -= 2;
        }

        
        if (posHamster1 < 0) {
            posHamster1 = 0;
        }

        
        if (n2 == 1) {
            posHamster2++; 
        } else if (n2 == 2) {
            posHamster2 += 2;
        } else if (n2 == 3) {
            
        } else if (n2 == 4) {
            posHamster2--;
        } else if (n2 == 5) {
            posHamster2 -= 2;
        }

        
        if (posHamster2 < 0) {
            posHamster2 = 0;
        }

        
        if (posHamster1 >= 12 || posHamster2 >= 12) {
            acabou = true;
        }

        
        printf("H1 = %d, H2 = %d\n", posHamster1, posHamster2);
    }

    
    if (posHamster1 >= 12 && posHamster2 >= 12) {
        printf("Empate! Ambos os hamsters chegaram ao final!\n");
    } else if (posHamster1 >= 12) {
        printf("Hamster 1 venceu!\n");
    } else {
        printf("Hamster 2 venceu!\n");
    }

    return 0;
}