#include <iostream>
#include <ctime>
using namespace std;

int main (){
    int year;
    int weeksInOneYear;
    int weeksInNatillera;
    double quotePrice;
    int totalNumLateFees;
    double lateFee;
    
    
    // ----- DATE AND DATES FOR QUOTE  ----- 
    // current date/time based on current system
   time_t now = time(0);
   // convert now to string form
   char* todayDate = ctime(&now);
   cout << "The local date and time is: " << todayDate << endl;
   
   //char* fechaAbono; //fecha donde debe dar abono a natillera
   // char* quoteDueDay    // fecha ultimo dia de plazo
   
}