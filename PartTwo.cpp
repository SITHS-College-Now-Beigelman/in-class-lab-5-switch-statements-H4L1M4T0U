// Halimatou Diaby
//Lab Number 5 🎀
//9/23/24


#include <iostream>

using namespace std;


int main (){

  double gigabytes;

    // Data usage per hour in MB
     double LOW_QUALITY_MB_PER_HOUR = 43.2;
     double NORMAL_QUALITY_MB_PER_HOUR = 72.0;
     double HIGH_QUALITY_MB_PER_HOUR = 115.2;

// Convert gigabytes to megabytes
    double megabytes = gigabytes * 1000;

    // Calculate hours of streaming for each quality
    double hoursLowQuality = megabytes / LOW_QUALITY_MB_PER_HOUR;
    double hoursNormalQuality = megabytes / NORMAL_QUALITY_MB_PER_HOUR;
    double hoursHighQuality = megabytes / HIGH_QUALITY_MB_PER_HOUR;


    // User input for monthly data plan in GB
  
    cout << "Enter your monthly hotspot plan (in gigabytes): ";
    cin >> gigabytes;

 










    







return 0;
}

/*My Mobile hotspot allows for a limited number of gigabytes of data! How can I figure out how
 much music streaming I can do per month? Here is some information you need for your program:
Low quality is typically 96kbps (kilobits per second). On average, Low-quality audio streaming uses 0.72MB 
per minute or 43.2MB per hour. Normal quality is typically 160kbps. Normal-quality music streaming uses 1.20MB 
per minute or 72MB per hour on average. High quality music is typically 320kbps. High-quality streaming music uses 
2.40MB per minute or 115.2MB per hour on average.
 
Write a program that asks the user how many gigabytes of data are included in their monthly hotspot plan. Then print out the number 
of hours for low, normal, and high quality music the user can stream per month. 
You may assume that a gigabyte is 1 billion (1,000,000,000) bytes and a megabyte is 1 million (1,000,000) bytes.






*/