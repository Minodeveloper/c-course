#include <stdio.h>

enum Days
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main(void)
{
    enum Days today;
    printf("\n");
    printf("MONDAY[1] TO SUNDAY[7]\n");
    printf("ENTER TODAYS DAY NUMBER: ");
    scanf("%u", &today);


    switch (today)
    {
    case MONDAY:
        printf("\nMONDAY\n");
        break;
    case TUESDAY:
        printf("\nTUESDAY\n");
        break;
    case WEDNESDAY:
        printf("\nWEDNESDAY\n");
        break;
    case THURSDAY:
        printf("\nTHURSDAY\n");
        break;
    case FRIDAY:
        printf("\nFRIDAY\n");
        break;
    case SATURDAY:
        printf("\nSATURDAY\n");
        break;
    case SUNDAY:
        printf("\nSUNDAY\n");
        break;
    default:
        printf("\nERROR:UNKNOWN DAY\n");
        break;
    }



    return 0;
}