#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    /*variables to store date components*/
    int cmonth, cday, cyear, bmonth, bday, byear, nmonths, ndays, nyears;

    /*time_t is arithmetic time type*/
    time_t now;

    /*Obtain current time*/
    /*time() returns the current time of the system as a time_t value*/
    time(&now);

    /*Convert to local time format and print to stdout*/
    printf ("\nToday is: %s", ctime(&now));
    printf ("-------------------------------------\n\n");

    /*localtime converts a time_t value to calendar time and returns a
     * pointer to a tm structure with its members filled with the
     * corresponding values*/
    struct tm *local = localtime(&now);

    cmonth = local->tm_mon + 1;     //get month of year (0 to 11)
    cday = local->tm_mday;          //get day of the month (1 to 31)
    cyear = local->tm_year + 1900;  //get year since 1900

    printf ("\tWhat month were you born (in 2-digit MM format)? \n");
    scanf ("\t%02i", &bmonth);

    printf ("\tWhat day of the month were you born (in 2-digit DD format)? \n");
    scanf ("\t%02i", &bday);

    printf ("\tWhat year were you born (in 4-digit YYYY format)? \n");
    scanf ("\t%04i", &byear);
    
    if ( bmonth <= cmonth )         //if the birthmonth has passed
        nmonths = cmonth - bmonth;  //subtract birth month from current month
    else                            //if the birth month has not passed
        nmonths = 12 - bmonth + cmonth; //num of months - birth month + current month

    if ( bmonth <= cmonth )         //if birthmonth has passed
        nyears = cyear - byear;     //current year - birth year
    else                            //if birthmonth has not passed
        nyears = cyear - byear - 1; //current year - birthyear - 1

    if ( bday <= cday )             //if birth day has passed
        ndays = cday - bday;        //current day - birth day
    else if ( cmonth == 4||6||9||11 )   //if Apr, Jun, Sep, or Nov
        ndays = 30 - bday + cday;   //30 - birth day + current day
    else if ( cmonth == 1||3||5||7||8||10||12 ) //if any other month excpt Feb
        ndays = 31 - bday + cday;   
    else                            //if Feb
        ndays = 28 - bday + cday;

    if ( bday > cday )              //if birth day has not passed
        --nmonths;                  //subtract 1 month from number of months

    printf ("\tYou are %02d years, %02d months, and %02d days old.\n\n", nyears, nmonths, ndays);

    return 0;

}
