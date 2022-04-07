// #include <stdio.h>
// #include <stdlib.h>

// enum menu
// {
//     TEA,    //0
//     COFFEE, //1
//     JUICE,  //2
//     BEER,   //3
// };

// int main()
// {
//     enum menu mario = COFFEE;
//     enum menu andrea = BEER;

//     printf("Mario:    %d\n", mario);
//     printf("Andrea:  %d\n", andrea);

//     return EXIT_SUCCESS;
// }

// -------------EXAMPLE 2----------------

// #include <stdio.h>
// #include <stdlib.h>

// enum menu
// {
//     TEA = 10,
//     COFFEE = 20,
//     JUICE = 30,
//     BEER = 40,
// };

// int main()
// {
//     enum menu mario = COFFEE;
//     enum menu andrea = BEER;

//     printf("Mario:    %d\n", mario);
//     printf("Andrea:  %d\n", andrea);

    
//     return EXIT_SUCCESS;
// }


// -------------EXAMPLE 3----------------

// #include <stdio.h>
// #include <stdlib.h>

// enum menu
// {
//     TEA,
//     COFFEE,
//     JUICE = 100,
//     BEER,
// };

// int main()
// {
//     enum menu mario = COFFEE;
//     enum menu andrea = BEER;

//     printf("Mario:    %d\n", mario);
//     printf("Andrea:  %d\n", andrea);

    
//     return EXIT_SUCCESS;
// }

// -------------EXAMPLE 4----------------


// #include <stdio.h>
// #include <stdlib.h>

// enum months
// {
//     JAN,
//     FEB,
//     MAR,
//     APR,
//     MAY,
//     JUN,
//     JUL,
//     AUG,
//     SEP,
//     OCT,
//     NOV,
//     DEC,
// };

// int main()
// {
//     enum months myFavoriteMonth = JUL;
//     enum months myWorstMonth = NOV;
    

//     printf("Andrea's favorite month is: %d\n", myFavoriteMonth);
//     printf("Andrea's worst month is: %d\n", myWorstMonth);
    

    
//     return EXIT_SUCCESS;
// }


// -------------EXAMPLE 5----------------



#include <stdio.h>
#include <stdlib.h>

enum months
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC,
};

int main()
{
    enum months myFavoriteMonth = JUL;
    enum months myWorstMonth = NOV;
    

    printf("Andrea's favorite month is: %d\n", myFavoriteMonth);
    printf("Andrea's worst month is: %d\n", myWorstMonth);
    

    
    return EXIT_SUCCESS;
}
