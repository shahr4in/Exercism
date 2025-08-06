namespace targets {
// TODO: Insert the code for the alien class here
class Alien{
    private:
        int health{};
    public:
        int x_coordinate{};
        int y_coordinate{};
        Alien(int x, int y)
            :health(3),x_coordinate(x),y_coordinate(y){}
        int get_health(){
            return health;
        }
        bool hit(){
            health--;
            return health;
        }
        bool is_alive(){
            if(health>0){
                return true;
            }else{
                health=0;
                return false;
            }
        }
        bool teleport(int x_new, int y_new){
            x_coordinate=x_new;
            y_coordinate=y_new;
            return true;
        }
        bool collision_detection(Alien other){
            return (x_coordinate==other.x_coordinate) && (y_coordinate==other.y_coordinate);
        }
    };
}  // namespace targets