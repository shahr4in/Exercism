#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
    int preparationTime(std::vector<std::string> layers){
        return static_cast<int>(layers.size()*2);
    }
    int preparationTime(std::vector<std::string> layers,int time){
        return static_cast<int>(layers.size()*time);
    }
    amount quantities(std::vector<std::string> layers){
        int noodles=0;
        double sauce=0.0;
        for(auto& layer:layers){
            if(layer=="noodles"){
                noodles+=50;
            }else if(layer=="sauce"){
                sauce+=0.2;
            }
        }
        return{noodles,sauce};
    }
    void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string> friendsList){
        myList.back()=friendsList.back();
    }
    void addSecretIngredient(std::vector<std::string>& myList, const std::string secret){
        myList.back()=secret;
    }
    std::vector<double> scaleRecipe(std::vector<double>quantities, int portions){
        std::vector<double> output={};
        for(auto& quantity:quantities){
            output.push_back(quantity*(static_cast<double>(portions))/2.0);
        }
        return output;
    }
}  // namespace lasagna_master
