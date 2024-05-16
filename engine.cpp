#include <stdio.h>
#include "engine.h"
#include "temperatureConverter.h"

/*  SCANF_S 
scanf_s" is a newer, more secure version of "scanf" that was introduced in the C11 standard. 
"scanf_s" includes bounds checking on the input, which helps prevent buffer overflow vulnerabilities. 
When using "scanf_s", you must specify the maximum number of characters that can be read for each input variable

*/

static char menu_choice(void)
{
    char c = ' ';

    printf("1 - Celsius to Fahrenheit\n");
    printf("2 - Fahrenheit to Celsius\n");
    printf("0 - Quit\n");
    if (0 > scanf_s("%c", &c, 1))
    {
        c = ' ';
    }

    return c;
}
static int converter_args(double* value)
{
    if (NULL == value)
    {
        return -1;
    }

    printf("Enter your value to convert :\n");
    if (0 > scanf_s("%2lf", value))
    {
        return -1;
    }

    return 0;
}

void engine_start(void)
{
    
    double value = 0;
    double out = 0;

    switch (menu_choice())
    {
    case '1':
    {
        if (0 == converter_args(&value))
        {
            convert_temperature_CtoF(value, out);
            printf("Result ( C -> F  :  %lf\n", out);
          
        }
        else
        {
            printf("Input error\n");
        }
    }
    case '2':
    {
        if (0 == converter_args(&value))
        {
            convert_temperature_FtoC(value, out);
            printf("Result ( F -> C  :  %lf\n", out);
            
        }
        else
        {
            printf("Input error\n");
        }
    }
    break;

    case '0':
        break;

    default:
        printf("This is not a valid choice !\n");
        break;
    }
}
