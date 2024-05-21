#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

enum ServiceType
{
    ROOM = 1000,
    FOOD = 500,
    LAUNDRY = 200,
    CLEANING = 200,
    UTILITIES = 100
};

class Customer
{
    std::string name;
    std::string id;
    int phoneNumber;
    std::vector<ServiceType>services;

    public:
    Customer():name("AB"),id("1"),phoneNumber(9){};

    Customer (const std::string& name, const std::string& id, const int& phoneNumber){
        this->name = name;
        this->id = id;
        this->phoneNumber = phoneNumber;
    }

    std::string getName(){
        return this->name;
    }

    std::string getId(){
        return this->id;
    }

    int getPhoneNumber(){
        return this->phoneNumber;
    }

    void addService(ServiceType serviceType){
        this->services.push_back(serviceType);
    }

    int getFees(){
        int total = 0;

        for(auto it:services){
            total+=it;
        }

        return total;
    }

};

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

int main(){
    Hotel* hotel = new Hotel("TajMahal");

    Room* room1 = new Room(101,false);
    Room* room2 = new Room(102, false);

    hotel->addRoom(room1);
    hotel->addRoom(room2);

    Customer* alice = new Customer("Alice","123",246);
    Room* aliceRoom = hotel->availableRoom();

    if(aliceRoom!=nullptr){
        Bookings* booking = new Bookings(aliceRoom, alice, "20-03-2024", "22-03-2024");
        hotel->addBookings(booking);
        alice->addService(ServiceType::ROOM);
        alice->addService(ServiceType::FOOD);
        std::cout<<"Alice Booked"<<std::endl;
    }
    else{
        std::cout<<"Room Unavailable"<<std::endl;
    }

    Customer *bob = new Customer("Bob","125",685);
    Room* bobRoom = hotel->availableRoom();

    if(bobRoom!=nullptr){
        Bookings* booking = new Bookings(bobRoom, bob, "20-03-2024", "22-03-2024");
        hotel->addBookings(booking);
        std::cout<<"Bob Booked"<<std::endl;
        bob->addService(ServiceType::ROOM);
    }
    else{
        std::cout<<"Room Unavailable"<<std::endl;
    }

    Customer *sam = new Customer("Sam","875",653);
    Room* samRoom = hotel->availableRoom();

    if(samRoom!=nullptr){
        Bookings* booking = new Bookings(samRoom, sam, "20-03-2024", "22-03-2024");
        hotel->addBookings(booking);
        std::cout<<"Sam Booked"<<std::endl;
    }
    else{
        std::cout<<"Room Unavailable"<<std::endl;
    }

    aliceRoom->checkOut();

    Customer* ron = new Customer("Ron","785",454);
    Room* ronRoom = hotel->availableRoom();

    if(ronRoom!=nullptr){
        Bookings* booking = new Bookings(ronRoom, ron, "20-03-2024", "22-03-2024");
        hotel->addBookings(booking);
        std::cout<<"Ron Booked"<<std::endl;
        ron->addService(ServiceType::ROOM);
        ron->addService(ServiceType::LAUNDRY);
    }
    else{
        std::cout<<"Room Unavailable"<<std::endl;
    }

    for(auto it:hotel->getBookings()){
        Bookings* b = it;
        std::cout<<b->getCustomerName()<<" "<<b->getRoomNumber()<<" "<<b->getCustomer()->getFees()<<std::endl;
    }

    delete hotel;
    return 0;
}
