// artillery.cpp: Nicola Gatto
// Description: Artillery Game

#include <iostream>
#include <math.h>
using namespace std;

static const int kInitialCannonballs = 10;
static const int kMinDistance = 100;
static const int kMaxDistance = 1000;
static const double kVelocity = 200.0;
static const double kGravity = 32.2;

double degreeToRadians(double degree) {
    return degree * (M_PI / 180.0);
}

void StartUp() {
    cout << "Welcome to Artillery!" << endl;
    cout << "You are in the middle of a war and being charged by thousands of enemies." << endl;
    cout << "You have one cannon, which you can shoot at any angle." << endl;
    cout << "You have " << kInitialCannonballs << " cannonballs for this target..." << endl;
    cout << "Lets begin..." << endl;
}

int RandomEnemyPosition() {
    srand(time(NULL));
    return rand() % (kMinDistance + (kMaxDistance - kMinDistance + 1));
}

double InputAngle() {
    double angle = 0;
    bool do_again = false;

    do {
        do_again = false;
        cout << "What angle? ";
        if(!(cin >> angle)) {
            cout << "Angle is not a decimal!" << endl;
            exit(1);
        }
    } while(do_again);

    return angle;
}

int ShootDistance(double angle) {
    double time_in_air;
    int distance;
    double rad_angle = degreeToRadians(angle);
    time_in_air = (2.0 * kVelocity * sin(rad_angle)) / kGravity;
    distance = (int) round((kVelocity * cos(rad_angle)) * time_in_air);
    return distance;
}

bool Fire() {
    int number_of_cannonballs = kInitialCannonballs;
    int enemy_position = RandomEnemyPosition();
    cout << "The enemy is " << enemy_position << " feet away!" << endl;

    while (number_of_cannonballs > 0) {
        number_of_cannonballs -= 1;
        double shoot_angle = InputAngle();
        int shoot_distance = ShootDistance(shoot_angle);
        int distance_difference = enemy_position - shoot_distance;
        if (abs(distance_difference) <= 1) {
            cout << "You hit him!" << endl;
            cout << "It took you " << kInitialCannonballs - number_of_cannonballs << " shots." << endl;
            return true;
        } else if (distance_difference > 0) {
            cout << "You under shot by " << distance_difference << endl;
        } else {
            cout << "You over shot by " << distance_difference * (-1) << endl;
        }
    }
    cout << "You have no more cannonballs." << endl;
    return false;
}

int main() {
    StartUp();
    int killed = 0;
    char done = 'y';
    do {
        if (Fire()) {
            killed = killed + 1;
            cout << "I see another one. Care to shoot again? (y/n)";
            cin >> done;
        } else {
            cout << "You do not have any more cannonballs!" << endl;
            done = 'n';
        }
    } while(done != 'n');
    cout << "You killed " << killed << " of the enemy." << endl;
}