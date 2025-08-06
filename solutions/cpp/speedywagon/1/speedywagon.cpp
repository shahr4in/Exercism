#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
    bool connection_check(pillar_men_sensor* input){
        if(input!=nullptr){
            return true;
        }else{
            return false;
        }
    }
    int activity_counter(pillar_men_sensor* array, int cap){
        int total=0;
        for (int i=0; i<cap; ++i){
            total+=(array+i)->activity;
        }
        return total;
    }
    bool alarm_control(pillar_men_sensor* input){
        if(input!=nullptr&&input->activity>0){
            return true;
        }else{
            return false;
        }
    }
    bool uv_alarm(pillar_men_sensor* input){
        if(input!=nullptr){
            if(uv_light_heuristic(&input->data)>input->activity){
                return true;
            }
        }
        return false;
    }
    
// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

}  // namespace speedywagon
