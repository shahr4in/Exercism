#include "difference_of_squares.h"

namespace difference_of_squares {

// TODO: add your solution here
    int square_of_sum(int term){
        int sum{};
        for (int i=1; i<=term; i++){
            sum+=i;
        }
        sum=sum*sum;
        return sum;
    }
    int sum_of_squares(int term){
        int sum{};
        for (int i=1; i<=term; i++){
            sum+=i*i;
        }
        return sum;
    }
    int difference(int term){
        return(square_of_sum(term)-sum_of_squares(term));
    }
    
}  // namespace difference_of_squares
