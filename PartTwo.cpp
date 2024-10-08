// Halimatou Diaby
//Lab Number 5 🎀
//9/23/24


#include <iostream>

using namespace std;


int main (){



    // Data usage per hour in MB
     double LOW_QUALITY_MB_PER_HOUR = 43.2;
     double NORMAL_QUALITY_MB_PER_HOUR = 72.0;
     double HIGH_QUALITY_MB_PER_HOUR = 115.2;

    // User input for monthly data plan in GB
    double gigabytes;
    cout << "Enter your monthly hotspot plan (in gigabytes): ";
    cin >> gigabytes;

    // Convert gigabytes to megabytes
    double megabytes = gigabytes * 1000;

    // Calculate hours of streaming for each quality
    double hoursLowQuality = megabytes / LOW_QUALITY_MB_PER_HOUR;
    double hoursNormalQuality = megabytes / NORMAL_QUALITY_MB_PER_HOUR;
    double hoursHighQuality = megabytes / HIGH_QUALITY_MB_PER_HOUR;







return 0;
}
