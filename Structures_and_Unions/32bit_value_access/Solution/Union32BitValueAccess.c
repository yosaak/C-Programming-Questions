#include <stdint.h> //for uint32_t
#include <stdio.h>
union number
{
    uint32_t value;// = 0xFFFFFFFF; //input is hex
    //how to set default value to union member
};

void main()
{
    union number number;
    int option;
    printf("Type your 32 bit number\n");
    scanf("%u", &number.value); //format specifier for unsigned int? %u
    //ormat specifier for hex? %0x

    printf("Choose option\n1 Print in 16 bits\n2 Print in 8 bits\n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        /*return 16 bits*/
        printf("Input:%x , Output:%x %x\n", number.value, number.value>>16,(number.value & 0x0000FFFF)); 
        //print in hex output
        break;

    case 2:
        /*return 8 bits*/
        printf("valid option\n");
        break;
    
    default:
        printf("Invalid option\n");
        break;
    }
}