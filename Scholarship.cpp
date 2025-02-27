Description

The Government of India has decided to provide scholarships for Engineering students. The following are the eligibility criteria. Students passing out on or after 2021 are eligible. Standing arrears shall be maximum of 2. Family Income should be less than or equal to 200000 annually. Students' age should be greater than or equal to 18 and less than 21. The score on the scholarship test should be greater than or equal to 60%. Attendance percentage to date should be greater than or equal to 80%. There are some relaxations provided by the government for the above-mentioned criteria.

If the student has more than 2 standing arrears he/she should score 80% of marks in the scholarship test and attendance should be greater than or equal to 90% to date. If the family income is greater than 200000 but less than 250000 half the scholarship amount will be granted if he/she satisfies all the other criteria.

Write a program to tell the eligibility of the students for the scholarship by providing "Eligible", "Not Eligible", "Partially Eligible"



Input Format

The first is an Integer denoting age. The second is an Integer denoting the year of passing. The third is an Integer denoting family income. The fourth is an Integer input denoting standing arrears. The fifth is a float denoting the percentage of marks obtained in the scholarship test. The sixth is a float denoting attendance percentage.



Output Format

A string telling the eligibility as mentioned above.



Sample Input 1

19

2022

190000

0

100

100



Sample Output 1

Eligible



// __________________________________________________________________________
#include <iostream>
using namespace std;

string checkEligibility(int age, int yearOfPassing, int familyIncome, int standingArrears, float scholarshipMarks, float attendancePercentage) {
    // Initial eligibility check
    if (age >= 18 && age < 21 && yearOfPassing >= 2021 && standingArrears <= 2 && familyIncome <= 200000 && scholarshipMarks >= 60 && attendancePercentage >= 80) {
        return "Eligible";
    }

    // Relaxation for more than 2 standing arrears
    if (standingArrears > 2) {
        if (scholarshipMarks >= 80 && attendancePercentage >= 90) {
            return "Eligible";
        } else {
            return "Not Eligible";
        }
    }

    // Case for family income greater than 200000 but less than or equal to 250000
    if (familyIncome > 200000 && familyIncome <= 250000) {
        if (age >= 18 && age < 21 && yearOfPassing >= 2021 && standingArrears <= 2 && scholarshipMarks >= 60 && attendancePercentage >= 80) {
            return "Partially Eligible";
        }
    }

    // If none of the conditions are satisfied
    return "Not Eligible";
}

int main() {
    int age, yearOfPassing, familyIncome, standingArrears;
    float scholarshipMarks, attendancePercentage;

    // Input the data
    cin >> age;
    cin >> yearOfPassing;
    cin >> familyIncome;
    cin >> standingArrears;
    cin >> scholarshipMarks;
    cin >> attendancePercentage;

    // Check eligibility
    cout << checkEligibility(age, yearOfPassing, familyIncome, standingArrears, scholarshipMarks, attendancePercentage) << endl;

    return 0;
}
