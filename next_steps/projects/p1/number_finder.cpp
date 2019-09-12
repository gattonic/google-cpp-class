// number_finder.cpp: Nicola Gatto
// Description: searches for numbers that are a perfect square and also the sum
//              of 1..n 

#include <iostream>
#include <chrono>
#include <math.h>
using namespace std;

static const long kMaxNumber = 4294967296;

class SumOfChains {
    long index_;
    long sum_;
    
public:
    explicit SumOfChains() {
        index_ = 0;
        sum_ = 0;
    };

    SumOfChains& operator++() {
        index_ = index_ + 1;
        sum_ = sum_ + index_;
        return *this;
    };

    void next() {
        ++(*this);
    };

    long getCurrentSum() {
        return sum_;
    };

    long getIndex() {
        return index_;
    }
};

bool IsPerfectSquare(unsigned int n) {
    double square_root = sqrt(n);
    if (roundf(square_root) == square_root) {
        return true;
    }
    return false;
}

int main() {
    auto start = chrono::high_resolution_clock::now();

    long i = 0;
    SumOfChains sum_of_chains;

    while(sum_of_chains.getCurrentSum() < kMaxNumber) {
        long cur_sum_of_chains = sum_of_chains.getCurrentSum();
        cout << "\r" << cur_sum_of_chains << "/" << kMaxNumber;
        if (IsPerfectSquare(cur_sum_of_chains)) {
            cout << "\r" << cur_sum_of_chains 
                 << " is perfect square and a sum of integer chains. (n=" 
                 << sum_of_chains.getIndex() << ", square="
                 << sqrt(cur_sum_of_chains) << ")," << endl;
        }
        ++sum_of_chains;
    }
    auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);
    cout << "\r" << "Execution time: " << (double) duration.count()/(1000000.0) << " seconds" << endl;
    return 0;
}