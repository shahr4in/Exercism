#include <array>
#include <string>
#include <vector>
#include <algorithm>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> roundDown{};
    for(int i=0; i<student_scores.size();i++){
        roundDown.emplace_back(static_cast<int>(student_scores[i]));
    }
    return roundDown;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int failed{};
    for(int i=0; i<student_scores.size();i++){
        if(student_scores[i]<41){
            failed++;
        }
    }
    return failed;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades

    int interval=(highest_score-40)/4;
    std::array<int, 4> letterGrades{};
    letterGrades[0]=41;
    letterGrades[1]=letterGrades[0]+interval;
    letterGrades[2]=letterGrades[1]+interval;
    letterGrades[3]=letterGrades[2]+interval;
    return letterGrades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> ranking{};
    std::sort(student_scores.begin(),student_scores.end(),std::greater<>());
    for(int i=0;i<student_names.size();i++){
        std::string input=std::to_string(i+1)+". "+student_names[i]+": "+std::to_string(student_scores[i]);
        ranking.emplace_back(input);
    }
    return ranking;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for(int i=0;i<student_scores.size();++i){
        if(student_scores[i]==100){
            return student_names[i];
        }
    }
    return "";
}
