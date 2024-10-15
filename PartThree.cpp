// Halimatou Diaby
//Lab Number 5 P3🎀
//9/23/24


#include <iostream>

using namespace std;





#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator
    int direct;
    direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
//1 means North, 2 means South, 3 means East and 4 means West

    // Target position (2 blocks east, 3 blocks north)
    const int target_x = 2;
    const int target_y = 3;

    // Current position
    int current_x = 0;
    int current_y = 0;

    // Move the robot 25 times
    for (int step = 1; step <= 25; step++) {
        int direction = rand() % 4 + 1; // Random direction

        switch (direction) {
            case 1: // North
                current_y++;
                break;
            case 2: // South
                current_y--;
                break;
            case 3: // East
                current_x++;
                break;
            case 4: // West
                current_x--;
                break;
        }

        // Print the current position
        cout << "Step " << step << ": Position (" << current_x << ", " << current_y << ")" << endl;
    }

    // Check distance from starting point
    int distance_east_west = current_x; // Positive means east, negative means west
    int distance_north_south = current_y; // Positive means north, negative means south

    cout << "\nFinal position after 25 steps: ";
    if (distance_north_south > 0) {
        cout << distance_north_south << " blocks North";
    } else if (distance_north_south < 0) {
        cout << -distance_north_south << " blocks South";
    }

    if (distance_east_west > 0) {
        cout << ", " << distance_east_west << " blocks East" << endl;
    } else if (distance_east_west < 0) {
        cout << ", " << -distance_east_west << " blocks West" << endl;
    } else {
        cout << endl; // No east/west movement
    }

    // Reset position for checking how many steps to reach the target
    current_x = 0;
    current_y = 0;
    int steps_to_target = 0;

    // Move until reaching the target position
    while (current_x != target_x || current_y != target_y) {
        int direction = rand() % 4 + 1; // Random direction

        switch (direction) {
            case 1: // North
                current_y++;
                break;
            case 2: // South
                current_y--;
                break;
            case 3: // East
                current_x++;
                break;
            case 4: // West
                current_x--;
                break;
        }

        steps_to_target++;
    }

    cout << "The robot reached the target position (2 East, 3 North) in " << steps_to_target << " steps." << endl;

    // Extra Credit: Average steps calculation
    const int simulations = 10;
    int total_steps = 0;

    for (int sim = 0; sim < simulations; sim++) {
        current_x = 0;
        current_y = 0;
        int steps = 0;

        while (current_x != target_x || current_y != target_y) {
            int direction = rand() % 4 + 1;

            switch (direction) {
                case 1: // North
                    current_y++;
                    break;
                case 2: // South
                    current_y--;
                    break;
                case 3: // East
                    current_x++;
                    break;
                case 4: // West
                    current_x--;
                    break;
            }

            steps++;
        }

        total_steps += steps;
        cout << "Simulation " << (sim + 1) << " reached the target in " << steps << " steps." << endl;
    }

    cout << "Average steps to reach the target: " << static_cast<double>(total_steps) / simulations << endl;

    return 0;
}








