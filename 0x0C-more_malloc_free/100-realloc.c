/*Function that reallocates a memory block using malloc and free*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*function _realloc - reallocates a memory block using malloc and free
*@ptr : ia a pointer to the memory previously allocated with a call to malloc
*@old_size : is the size in bytes of the allocated space for ptr
*@new_size : is the new size in bytes of the new memory block
*Return : is a pointer to the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *temp_block;

    /*If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr)*/
    if(new_size == 0 && ptr != NULL) {
        free(ptr);
        return NULL;
    }

    /*If ptr is NULL, then the call is equivalent to malloc(new_size)*/
    if(ptr == NULL){
        return malloc(new_size);
    }

    /*If new_size == old_size do not do anything and return ptr*/
    if(new_size == old_size){
        return ptr;
    }

   /*Allocate a new block of memory with the specified new size*/
   temp_block = malloc(new_size);

   if(temp_block != NULL){

    /*copy the memory contents from old block to new block*/
    /*use the smaller of old_size and new_size to avoid over-copying*/
    unsigned int copy_size = (old_size < new_size)? old_size:new_size;
    memcpy(temp_block, ptr, copy_size);

    /*free the old memory block*/
    free(ptr);
   }
   return temp_block;
}
