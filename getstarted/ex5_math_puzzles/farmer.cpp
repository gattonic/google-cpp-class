// farmer.cpp: Nicola Gatto
// Description: Provides a solution for the farmer puzzle

#include <iostream>
using namespace std;


const int kAnimals = 100;
const float kBudget = 100;
const float kPriceHorses = 10.0;
const float kPricePigs = 3.0;
const float kPriceRabbit = 0.5;

int main() {
    for (int horses = 0; horses < kAnimals + 1; horses++) {
        for (int pigs = 0; pigs < kAnimals + 1; pigs++) {
            for (int rabbits = 0; rabbits < kAnimals + 1; rabbits++) {
                if (horses + rabbits + pigs == kAnimals) { 
                    float price = kPriceHorses * horses + kPricePigs * pigs 
                        + kPriceRabbit * rabbits;
                    if (price == kBudget) {
                        cout << horses << " horses; " << pigs << " pigs; " 
                            << rabbits  << " rabbits" << endl;
                    }
                }
            }
        }
    }
    return 0;
}