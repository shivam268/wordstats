/*---Name: Parikh Shivam---*/
/*---Class: CSI333---*/
/*---Lab: Wednesday 9:20 AM---*/
/*---Programming Assignment 1---*/

#include <stdio.h>


int main(void) {
  
  
  /*Assign all the Variables*/
  
    int input;
    int i;
    int x = 0;
    int size = 31; /*Array Size*/
    int countOnes = 0;
    int start = 0;
    int startLoop = 0;
    int count = 0;
    int maxCount = 0;
    int rem = 0;
    int inputCopy = 0;
    int pointer = 0;
    int p = 0;
    int keepCounting = 1; /*Use this as boolean type*/

  
  
    int conversion[size]; /*Array Initialization*/

    printf("Enter a decimal integer: ");
    scanf("%d", &input);

  /*If statement to check the input value for negative */

    if(input < 0){
        printf("Input value is negative. \n");
    }

    else{

      /*If the input value is not negative then do the conversion process on it and so on*/
      
      /*For loop will populate the array with 0's*/
      
        for(i = 0; i<size; i++){
            conversion[i] = 0;
        }


    inputCopy = input; /*makes copy of the input integer value*/

    pointer = size-1; /*This will point to the last element*/

  
  /*Create while loop with some nested loops to convert to binary and setup the array*/
  
  /*While loop will run until it devides the inputCopy to 1*/
  /*and remainder will store the remainder as an element of the array*/
  /*and it will continue to devide, with decrementig the pointer*/
  
  /*-------Binary Conversion Starts--------*/
  
    while(inputCopy > 0 ){
        rem = inputCopy%2;
        inputCopy = inputCopy/2;

        conversion[pointer] = rem;


        pointer--;
    }

      /*If statement will check for 0, it is true than store startloop to last element*/
     /*Create a While loop inside a if-else statement to find the starting point of the binary representation of the int*/
     /*Whichever element is 1, the real representation of the Binary will start at that element.*/ 
  
      
      
      if(input == 0){
        startLoop = size-1;
      }
      else{
  while(start == 0){
    if(conversion[x]==1){ /*if finds 1 make that location start location for printing the binary representation*/
      start = 1; /*Stops while loop*/
      startLoop = x; /*Store that location to use in future*/
    } 
    else{
    }
    x++;
  }
  
    }
      /*Create a for loop that prints the needed size of the array with binary value*/
      /*For loop will print the binary without leading 0's*/
  
  printf("\n Binary Representation: ");
    for(i = startLoop; i<size; i++){
        printf("%d", conversion[i]);
    }

  
  /*-------Binary Conversion Ends--------*/
  
  
  
  
  
  /*-------No. of 1's counting Starts--------*/
  /*For loop will go through the array and counts how many elements are equals to 1*/
  
    for(i = startLoop; i<size; i++){ /*Only search the length that represents the binary, don't need to search the whole array*/
        if(conversion[i] == 1){
            countOnes++;
        }
        else{}
    }

  /*Print out the number of 1's in the array*/
  
    printf("\n No. of 1's in the binary representation: %d", countOnes);

  /*-------No. of 1's counting Ends--------*/
  
  
  
  
  /*------Maximum block length Starts------*/
  
  /*While loop needs boolean type of operation to stop or run*/
  /*inside the while, check if the current element of array equals to 1, then increase count*/
  /*AND ALSO CHECK IF THE maxCount IS GREATER THAN COUNT STORE THE HIGHER VALUE IN maxCount*/
  /*ELSE RESET THE COUNT - SET TO 0*/
  /*IF THE POINTER IS POINTING AT THE LAST ELEMENT OF THE ARRAY THEN STOP COUNTING*/
  /*AT THE END KEEP INCREMENTING POINTER P.*/
  
  
    p = startLoop; /*Same here, don't scan the whole array, just scan on the area that represents binary number*/
  
    while(keepCounting == 1){

        if(conversion[p] == 1){
            count++;
            if(maxCount < count){ /*checks if maxCount is less than current count, if it is then assign the higher*/
                maxCount = count;
            }
            else{}
        }

        else{
            count = 0; /*First block is done and it sets count to 0, because next loop might start counting 1's for next block-if there is any*/
        }

        if(p==size-1){         /*We must check that when we are standing on last element of array, then we don't need to keep counting anymore.*/
            keepCounting = 0;  /*setting keepCount to 0 will make while to stop*/
        }

        p++; /*Pointer p is incremented*/

    } /*While ends*/


    printf("\n Maximum block length: %d \n", maxCount);


    /*------Maximum block length Ends------*/
  
}
return 0;
}

        
        
        
        
        
        
        