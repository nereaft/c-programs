#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]){

    const char * list[] = {"yield", "yelp", "yellow"};

    int compara_1_2 = strcmp(list[0],list [1]);
    int compara_1_3 = strcmp(list[0],list [2]);
    int compara_2_3 = strcmp(list[1],list [2]);

  if(compara_1_2 == 0){
    if(compara_1_2 == 0 || compara_1_3 > 0)
	printf(" %s %s %s \n", list[0], list[1], list[2]);
    
    if(compara_1_3 < 0)
	printf(" %s %s %s \n", list[2], list[0], list[1]);
   };


 if(compara_1_2 < 0){
    if(compara_2_3 == 0 || compara_1_3 < 0)
	printf(" %s %s %s \n", list[1], list[2], list[0]);
    
    if(compara_2_3 < 0)
	printf(" %s %s %s \n", list[2], list[1], list[0]);
   
 if(compara_2_3 > 0 || compara_1_3 == 0 || compara_1_3 > 0)
	printf(" %s %s %s \n", list[1], list[0], list[2]);

 };

 if(compara_1_2 > 0) {
    if(compara_1_3 == 0 || compara_2_3 < 0)
	printf(" %s %s %s \n", list[0], list[2], list[1]);
    
    if(compara_1_3 > 0 || compara_2_3 == 0 || compara_2_3 > 0)
	printf(" %s %s %s \n", list[0], list[1], list[2]);
   
    if(compara_1_3 < 0)
  printf(" %s %s %s \n", list[2], list[1], list[0]);
  
  };
  
   
   
   
   
   
   
   
    return EXIT_SUCCESS;
}

