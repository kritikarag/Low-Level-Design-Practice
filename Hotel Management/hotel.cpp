#include"bookings.cpp"

class Hotel
{
    std::string hotelName;
    std::vector<Room*>rooms;
    std::vector<Bookings*>bookings;

    public:

    Hotel();
    Hotel(const std::string& hotelName){
        this->hotelName = hotelName;
        this->rooms = std::vector<Room*>();
        this->bookings = std::vector<Bookings*>();
    }

    Room* availableRoom(){
        for(auto it:rooms){
            if(it->checkIsOccupied()==false){
                return it;
            } 
        }
        return nullptr;
    }

    void addBookings(Bookings* booking){
        this->bookings.push_back(booking);
    }

    void addRoom(Room* room){
        rooms.push_back(room);
    } 

    std::vector<Bookings*> getBookings(){
        return this->bookings;
    }

};