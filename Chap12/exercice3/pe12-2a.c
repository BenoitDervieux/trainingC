#include <stdio.h>
#include "pe12-2a.h"

int modeSet;
static double km, miles, liters, gallons, total;

void set_mode(int mode);
void get_info();
void show_info();


void set_mode(int mode) {
    if (mode == 0) {
        modeSet = 0;
    } else if (mode == 1) {
        modeSet = 1;
    } else if (mode == -1) {
    } else {
        modeSet = modeSet;
    }
    get_info(modeSet);
}
void get_info(int modeSet) {
    if (modeSet == 0) {
        printf("Enter distance travelled in kilometers: ");
        scanf("%lf", &km);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &liters);
        show_info(modeSet, liters, km);
    } else if (modeSet == 1) {
        printf("Enter distance travelled in miles: ");
        scanf("%lf", &miles);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &gallons);
        show_info(modeSet, gallons, miles);
    }
}
void show_info(int modeSet, double oil, double distance) {

    if (modeSet == 0) {
        total = (oil / distance) * 100;
        printf("Fuel consumption is %f liters per 100km\n", total);
    } else if (modeSet == 1) {
        total = oil / distance;
        printf("Fuel consumpetion is %f gallon per mile\n", total);
    }
}