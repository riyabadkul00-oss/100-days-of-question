//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[15];
    char day[3], month[3], year[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int m;

    printf("Enter date (dd/mm/yyyy): ");
    gets(date); // or use fgets(date, 15, stdin);

    // Extract day, month, year
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    // Convert month to integer
    sscanf(month, "%d", &m);

    if (m < 1 || m > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    printf("%s-%s-%s\n", day, months[m - 1], year);

    return 0;
}
