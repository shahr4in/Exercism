#include "darts.h"

namespace darts {
    int score(float x, float y){
        float centerX=0.0f;
        float centerY=0.0f;
        float dist=(x-centerX)*(x-centerX)+(y-centerY)*(y-centerY);
        if(dist<=1*1){
            return 10;
        }else if(dist<=5*5){
            return 5;
        }else if(dist<=10*10){
            return 1;
        }else{
            return 0;
        }
    }
} // namespace darts