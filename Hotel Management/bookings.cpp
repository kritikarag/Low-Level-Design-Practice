#include"customer.cpp"
#include"room.cpp"

class Bookings
{
    Room* room;
    Customer* customer;
    std::string checkInDate;
    std::string checkOutDate; 
    int fees;

    public:
    Bookings(Room* room, Customer* customer, std::string checkInDate, std::string checkOutDate){
        this->room = room;
        this->customer = customer;
        this->checkInDate = checkInDate;
        this->checkOutDate = checkOutDate;

        this->room->allotRoom();
    }

    std::string getCustomerName(){
        return this->customer->getName();
    }

    int getRoomNumber(){
        return this->room->getRoomNumber();
    }

    Customer* getCustomer(){
        return this->customer;
    }

};