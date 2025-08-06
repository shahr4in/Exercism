#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& person,std::string item){
        person.possession = std::make_unique<artifact>(item);
    }
    void exchange_artifacts(std::unique_ptr<artifact>& a, std::unique_ptr<artifact>& b) {
        std::swap(a, b);
    }
    void manifest_power(human& person, const std::string& power) {
        if(!person.own_power) {
            person.own_power = std::make_shared<troy::power>(power);
        }else{
            person.own_power->effect = power;
        }
    }
     void use_power(human& caster, human& target) {
        target.influenced_by = caster.own_power;
    }
    int power_intensity(const human& person) {
        if (!person.own_power) {
            return 0;
        }
        return person.own_power.use_count();
    }
}  // namespace troy
