#include <stdio.h>
#include <stdlib.h>

//check the largest function
void lagrestOfThree(int x, int y, int z){
    if(x>=y && x>=z ){
        printf("largest of three numbers: %d",x);
    }
    else if(y>=x && y>=z ){
        printf("largest of three numbers: %d",y);
    }
    else{
        printf("largest of three numbers: %d",z);
    }
}

//when the user enter the 5 value, it will show three of the biggest one
int main(){
    
    
}

