 #include "main.h"                                                                                                                       
                                                                                                                                        
char *add_strings(char *n1, char *n2, char *r, int r_index);                                                                            
char *infinite_add(char *n1, char *n2, char *r, int size_r);                                                                            
                                                                                                                                        
/**                                                                                                                                     
 * add_strings - Adds the numbers stored in two strings.                                                                                
 * @n1: The string containing the first number to be added.                                                                             
 * @n2: The string containing the second number to be added.                                                                            
 * @r: The buffer to store the result.                                                                                                  
 * @r_index: The current index of the buffer.                                                                                           
 *                                                                                                                                      
 * Return: If r can store the sum - a pointer to the result.                                                                            
 *         If r cannot store the sum - 0.                                                                                               
 */                                                                                                                                     
char *add_strings(char *n1, char *n2, char *r, int r_index)                                                                             
{                                                                                                                                       
        int num, tens = 0;                                                                                                                                
        
        for (; *n1 && *n2; n1--, n2--, r_index--)                                                                                       
        {                                                                                                                               
                num = (*n1 - '0') + (*n2 - '0');                                                                                        
                num += tens;                                                                                                            
                *(r + r_index) = (num % 10) + '0';                                                                                      
                tens = num / 10;                                                                                                        
        }                                                                                                                               
                                                                                                                                        
        for (; *n1; n1--, r_index--)                                                                                                    
        {                                                                                                                               
                num = (*n1 - '0') + tens;                                                                                               
                *(r + r_index) = (num % 10) + '0';                                                                                      
                tens = num / 10;                                                                                                        
        }                                                                                                                               
                                                                                                                                        
        for (; *n2; n2--, r_index--)                                                                                                    
        {                                                                                                                               
                num = (*n2 - '0') + tens;                                                                                               
                *(r + r_index) = (num % 10) + '0';                                                                                      
                tens = num / 10;                                                                                                        
        }                                                                                                                               
                                                                                                                                        
        if (tens && r_index >= 0)                                                                                                       
        {                                                                                                                               
                *(r + r_index) = (tens % 10) + '0';                                                                                     
                return (r + r_index);                                                                                                   
        }                                                                                                                               
                                                                                                                                        
        else if (tens && r_index < 0)                                                                                                   
                return (0);                                                                                                             
                                                                                                                                        
        return (r + r_index + 1);                                                                                                       
}

#include "main.h"                                                                                                                       
#include <stdio.h>                                                                                                                      
                                                                                                                                        
/**                                                                                                                                     
 * print_buffer - Prints a buffer 10 bytes at a time, starting with                                                                     
 *                the byte position, then showing the hex content,                                                                      
 *                then displaying printable charcaters.                                                                                 
 * @b: The buffer to be printed.                                                                                                        
 * @size: The number of bytes to be printed from the buffer.                                                                            
 */                                                                                                                                     
void print_buffer(char *b, int size)                                                                                                    
{                                                                                                                                       
        int byte, index;
        
        for (byte = 0; byte < size; byte += 10)                                                                                         
        {                                                                                                                               
                printf("%08x: ", byte);                                                                                                 
                                                                                                                                        
                for (index = 0; index < 10; index++)                                                                                    
                {                                                                                                                       
                        if ((index + byte) >= size)                                                                                     
                                printf("  ");                                                                                           
                                                                                                                                        
                        else                                                                                                            
                                printf("%02x", *(b + index + byte));                                                                    
                                                                                                                                        
                        if ((index % 2) != 0 && index != 0)                                                                             
                                printf(" ");                                                                                            
                }                                                                                                                       
                                                                                                                                        
                for (index = 0; index < 10; index++)                                                                                    
                {                                                                                                                       
                        if ((index + byte) >= size)                                                                                     
                                break;                                                                                                  
                                                                                                                                        
                        else if (*(b + index + byte) >= 31 &&                                                                           
                                 *(b + index + byte) <= 126)                                                                            
                                printf("%c", *(b + index + byte));                                                                      
                                                                                                                                        
                        else                                                                                                            
                                printf(".");                                                                                            
                }                                                                                                                       
                                                                                                                                        
                if (byte >= size)                                                                                                       
                        continue;                                                                                                       
                                                                                                                                        
                printf("\n");                                                                                                           
        }                                                                                                                               
                                                                                                                                        
        if (size <= 0)                                                                                                                  
                printf("\n");                                                                                                           
}
