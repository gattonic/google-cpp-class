// best_compensation.cpp: Nicola Gatto
// Description: Calculates the best compensation for the job

#include <iostream>
using namespace std;

#define kPricePerShoe 225.0
#define kFixedSalaryPerWeek 600.0
#define kFixedSalaryPerHour 7.0
#define kCommissionPercentageMethod2 0.1
#define kCommissionPercentageMethod3 0.2
#define kCommissionFixedMethod3 20.0
#define kHoursPerWeek 40

float CalcMethodOne(int weekly_sales) {
    return kFixedSalaryPerWeek;
}

float CalcMethodTwo(int weekly_sales) {
    float fixed_salary = kFixedSalaryPerHour * kHoursPerWeek;
    float commission = weekly_sales * kCommissionPercentageMethod2 * kPricePerShoe;
    return fixed_salary + commission;
}

float CalcMethodThree(int weekly_sales) {
    float commission_fixed = weekly_sales * kCommissionFixedMethod3;
    float commission_perc = weekly_sales * kCommissionPercentageMethod3 * kPricePerShoe;
    return commission_fixed + commission_perc;
}

int main() {
    float method1, method2, method3;
    int weeklySales;

    cout << "Number of weekly sales: ";
    if (!(cin >> weeklySales)) {
        cout << "You typed in a non numeric value";
        return -1;
    }

    method1 = CalcMethodOne(weeklySales);
    method2 = CalcMethodTwo(weeklySales);
    method3 = CalcMethodThree(weeklySales);

    cout << "Method 1:\t" << method1 << endl;
    cout << "Method 2:\t" << method2 << endl;
    cout << "Method 3:\t" << method3 << endl; 
}