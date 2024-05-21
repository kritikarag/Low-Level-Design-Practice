#include"service_type.cpp"

class Room
{
    int roomNumber;
    bool isOccupied;

    public:
    Room():roomNumber(1),isOccupied(false){};
    Room(int roomNumber, bool isOccupied){
        this->roomNumber = roomNumber;
        this->isOccupied = isOccupied;
    }

    int getRoomNumber(){
        return this->roomNumber;
    }

    void allotRoom(){
        this->isOccupied = true;
    }

    bool checkIsOccupied(){
        return this->isOccupied;
    }

    void checkOut(){
        this->isOccupied = false;
    }

};