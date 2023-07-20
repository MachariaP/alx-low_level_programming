#include <stdio.h>

/**
*_isupper - function that verifies if a  character is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}
