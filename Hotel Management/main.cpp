#include"bookings.cpp"
#include"hotel.cpp"

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