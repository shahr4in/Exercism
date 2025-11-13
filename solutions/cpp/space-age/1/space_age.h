#pragma once

namespace space_age {

// TODO: add your solution here
    class space_age{
    public:
        space_age(long long seconds)noexcept:spaceAge(seconds){}
    
        long long seconds() const noexcept{
            return spaceAge;
        }
    
        double on_earth() const noexcept {return spaceAge/31557600.0;}
        double on_mercury() const noexcept { return on_earth() / 0.2408467; }
        double on_venus() const noexcept { return on_earth() / 0.61519726; }
        double on_mars() const noexcept { return on_earth() / 1.8808158; }
        double on_jupiter() const noexcept { return on_earth() / 11.862615; }
        double on_saturn() const noexcept { return on_earth() / 29.447498; }
        double on_uranus() const noexcept { return on_earth() / 84.016846; }
        double on_neptune() const noexcept { return on_earth() / 164.79132; }
    
    private:
        long long spaceAge;
    };
}  // namespace space_age
