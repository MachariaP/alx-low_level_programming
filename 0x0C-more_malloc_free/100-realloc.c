#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Custom min macro for unsigned int */
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory block
 * Return: a pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
    void *temp_block;
    unsigned int i;

    /* If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr) */
    if (new_size == 0 && ptr != NULL) {
        free(ptr);
        return NULL;
    }

    /* If ptr is NULL, then the call is equivalent to malloc(new_size) */
    else if (ptr == NULL) {
        return malloc(new_size);
    }

    /* If new_size == old_size do not do anything and return ptr */
    else if (new_size == old_size) {
        return ptr;
    }

    /* Allocate a new block of memory with the specified new size */
    else {
        temp_block = malloc(new_size);

        if (temp_block != NULL) {
            /* Copy the memory contents from the old block to the new block */
            /* Use the smaller of old_size and new_size to avoid over-copying */
            unsigned int copy_size = MIN(old_size, new_size);
            for (i = 0; i < copy_size; i++) {
                *((char *)temp_block + i) = *((char *)ptr + i);
            }

            /* Free the old memory block */
            free(ptr);
            return temp_block;
        } else {
            return NULL;
        }
    }
}

