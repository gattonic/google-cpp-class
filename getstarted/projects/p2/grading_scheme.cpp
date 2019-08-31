// grading_scheme.cpp: Nicola Gatto
// Description: Calculates the final grade for the programming course

#include<iostream>
using namespace std;

#define kWeightAssignments 0.4
#define kWeightMidtermExamination 0.15
#define kWeightFinalExamination 0.35
#define kWeightClassParticipation 0.1
#define kNumberOfAssignments 4

int getScore() {
    int score;
    while(!(cin >> score)) {
        cout << "Score is not a number." << endl;
    }
    return score;
}

float calculateAssignmentGrade(int assignment_scores[]) {
    float assignment_total_score = 0;

    for (int i = 0; i < kNumberOfAssignments; i++) {
        assignment_total_score = assignment_total_score + assignment_scores[i];
    }

    return (assignment_total_score/4) * kWeightAssignments;
}

float calculateMidtermGrade(int midterm_score) {
    return midterm_score * kWeightMidtermExamination;
}

float calculateFinalExaminationGrade(int final_score) {
    return final_score * kWeightFinalExamination;
}

float calculateParticipationGrade(int participation_score) {
    return participation_score * kWeightClassParticipation;
}

float calculateFinalGrade(int assignment_scores[], int midterm_score, int final_score, int participation_score) {
    return calculateAssignmentGrade(assignment_scores)
        + calculateMidtermGrade(midterm_score)
        + calculateFinalExaminationGrade(final_score)
        + calculateParticipationGrade(participation_score);
}

int main() {
    int assignment_scores[kNumberOfAssignments], midterm_score, final_score,
        participation_score;
    float final_grade;

    for (int i = 0; i < kNumberOfAssignments; i++) {
        cout << "Enter the score for the " << i + 1 << ". assignment: ";
        assignment_scores[i] = getScore();
    }
    cout << "Enter the score for the midterm: ";
    midterm_score = getScore();
    cout << "Enter the score for the final: ";
    final_score = getScore();
    cout << "Enter the score for the participation: ";
    participation_score = getScore();

    final_grade = calculateFinalGrade(assignment_scores, midterm_score, final_score, participation_score);
    cout << "The final grade is " << final_grade << endl;
    return 0;
}