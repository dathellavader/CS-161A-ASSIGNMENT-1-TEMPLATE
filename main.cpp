// ------------- FILE HEADER -------------
// Author ✅: Ella Henner
// Assignment ✅: 1
// Date ✅: 9/28/25
// Citations:


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 1
// Participation ✅:100
// Challenge ✅: 100
// Labs ✅: 100


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
// Links (Optional):


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: yes
// B. OUTPUT ✅: yes
// C. CALCULATIONS ✅: yes
// D. LOGIC and ALGORITHMS ✅: yes
//    (Optional) flow chart link or file name:


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅:yes
// (Optional) Additional tests count:1


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
    
// input int
int employee_id = 0;
int hours_worked = 0;
int hourly_rate_usd = 0;
int federal_withholding_percent = 0;

// output int
int gross_pay_usd = 0;
double federal_withholding_usd = 0.0;
double net_pay_usd = 0.0;

//messages
cout << "Welcome to the coolest Weekly Payroll program!" << endl << endl;

cout << "Enter your employee ID number (NUMBERS ONLY!!): ";
cin >> employee_id;

cout << "Enter number of hours worked (WHOLE NUMBERS!!): ";
cin >> hours_worked;

cout << "Enter your hourly rate: ";
cin >> hourly_rate_usd;

cout << "Enter the federal withholding rate (AS A PERCENTAGE): ";
cin >> federal_withholding_percent;

// calculations
gross_pay_usd = hours_worked * hourly_rate_usd;
double decimal_withholding = federal_withholding_percent / 100.0;
federal_withholding_usd = gross_pay_usd * decimal_withholding;
net_pay_usd = gross_pay_usd - federal_withholding_usd;
cout << endl;

// end messages

cout << "Your payroll summary is....drum roll please..." << endl;

cout << "Total Gross Pay: $" << gross_pay_usd << endl;

cout << "Federal Tax Withholding: $" << federal_withholding_usd << endl;

cout << "Net Pay: $" << net_pay_usd << endl << endl;


cout << "Remember to tip your programmer :)" << endl;

    return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/*
Program Name: Weekly Payroll Program

Program Description:

Design:
A. INPUT
int employee_id = 0;
int hours_worked = 0;
int hourly_rate_usd = 0;
int federal_withholding_percent = 0;

B. OUTPUT
int gross_pay_usd = 0;
int federal_withholding_usd = 0;
int net_pay_usd = 0;

C. CALCULATIONS
gross_pay_usd = hours_worked * hourly_rate_usd;
double decimal_withholding = federal_withholding_percent / 100.0;
federal_withholding_usd = gross_pay_usd * decimal_withholding;
net_pay_usd = gross_pay_usd - federal_withholding_usd;

D. LOGIC and ALGORITHMS

MESSAGE "Welcome to the coolest Weekly Payroll program!"

PROMPT "Enter your employee ID number (NUMBERS ONLY!!): "
INPUT employee_id

PROMPT "Enter number of hours worked (WHOLE NUMBERS!!): "
INPUT hours_worked

PROMPT "Enter your hourly rate: "
INPUT hourly_rate_usd

PROMPT "Enter the federal withholding rate (AS A PERCENTAGE): "
INPUT federal_withholding_percent

DO CALCULATIONS

MESSAGE "Your payroll summary is....drum roll please..."

LABEL "Total Gross Pay: $"
DATA gross_pay_usd

LABEL "Federal Tax Withholding: $"
DATA federal_withholding_usd

LABEL "Net Pay: $"
DATA net_pay_usd

MESSAGE "Remember to tip your programmer :)"

SAMPLE RUNS
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my Weekly Payroll program!!



Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10

Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594

Thank you for using my Weekly Payroll program!!

*/
