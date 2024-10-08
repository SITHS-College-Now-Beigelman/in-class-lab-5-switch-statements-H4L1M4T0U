// Halimatou Diaby
//Lab Number 5 🎀
//9/23/24


#include <iostream>

using namespace std;


int main (){

    // Constants for MET values
     double const_MET_SLOW_WALK = 2.0;
     double const_MET_FAST_WALK = 3.0;
     double  const_MET_JOGGING = 8.0;

    // User input for exercise duration and weight

    double duration;
    double weight;
    int Excersize;
    double TargCal;

    // Calculate duration needed for each activity
    double durationSlowWalk = (TargCal * 200) / (const_MET_SLOW_WALK * 3.5 * weight);
    double durationFastWalk = (TargCal * 200) / (const_MET_FAST_WALK * 3.5 * weight);
    double durationJogging = (TargCal * 200) / (const_MET_JOGGING * 3.5 * weight);

//START OF CODE
     cout<< "What is the Excersize you want to do? \n 1.)Walking slowly\n 2.)Walking Really fast\n 3.)Jogging?"<<endl; 
     cin>>Excersize;  



        switch (Excersize/1) 
        {
            case 1:  //SLOW WALKER
                cout << "Enter the exercise duration (in minutes): ";    //Asks user the duration of this excersize
                cin >> duration;
                cout << "Enter your weight (in kg): "; //Asks user to enter their weight in kg
                cin >> weight;
                //CALCULATIONS!!
                cout<< "Your total amount of calories burnt is : \n"<< (duration *2*3.5*weight)/200<<"Calories" <<endl;
                 cout<< "\n"<<endl;
                 cout<< "\n"<<endl;
                 cout<< "\n"<<endl;

                 //PART TWO
                 cout<< " How many calories would you like to burn?"<<endl; 
                 cin >> TargCal;

                 // Print the duration needed
                cout << "\nDuration needed to burn " << TargCal << " calories:\n";
                cout << "Walking Slowly: " << durationSlowWalk << " minutes\n";

                 break;
            

            case 2 :    //FAST WALKER
                cout << "Enter the exercise duration (in minutes): ";    //Asks user the duration of this excersize
                cin >> duration;
                cout << "Enter your weight (in kg): "; //Asks user to enter their weight in kg
                cin >> weight;

               
                //CALCULATIONS!!
                cout<< "Your total amount of calories burnt is : \n"<< (duration *3*3.5*weight)/200<<"Calories" <<endl;
                 cout<< "\n"<<endl;
                 cout<< "\n"<<endl;
                 cout<< "\n"<<endl;

                 //PART TWO
                 cout<< " How many calories would you like to burn?"<<endl; 
                 cin >> TargCal;

                 // Print the duration needed
                cout << "\nDuration needed to burn " << TargCal << " calories:\n";
                  cout << "Walking Quickly: " << durationFastWalk << " minutes\n";
                 
                  break;

            case 3 :    //JOGGER
                cout << "Enter the exercise duration (in minutes): ";    //Asks user the duration of this excersize
                cin >> duration;
                cout << "Enter your weight (in kg): "; //Asks user to enter their weight in kg
                cin >> weight;

                     
                //CALCULATIONS
                cout<< "Your total amount of calories burnt is : \n"<< (duration *8*3.5*weight)/200<<" Calories" <<endl;
                 cout<< "\n"<<endl;
                 cout<< "\n"<<endl;
                 cout<< "\n"<<endl;


                 //PART TWO
                 cout<< " How many calories would you like to burn?"<<endl; 
                 cin >> TargCal;

                 // Print the duration needed
                cout << "\nDuration needed to burn " << TargCal << " calories:\n";
                cout << "Jogging: " << durationJogging << " minutes\n";
                 
                 
                 break;
            default :
            cout<< "This is an invalid input. Please run the code and try again.)"<<endl;



            





        }






















    return 0;
}
