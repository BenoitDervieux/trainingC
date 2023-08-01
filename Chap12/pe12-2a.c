#include <stdio.h>
#include "pe12-2a.h"

extern int mode;
static int modeSet = 0;
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
}
void get_info() {
    if (modeSet == 0) {
        printf("Enter distance travelled in kilometers: ");
        scanf("%lf", &km);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &liters);
    } else if (modeSet == 1) {
        printf("Enter distance travelled in miles: ");
        scanf("%lf", &miles);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &gallons);
    }
}
void show_info() {
    if (modeSet == 0) {
        total = (liters / km) * 100;
        printf("Fuel consumption is %f liters per 100km\n", total);
    } else if (modeSet == 1) {
        total = gallons / miles;
        printf("Fuel consumpetion is %f miles per gallon\n", total);
    }
}