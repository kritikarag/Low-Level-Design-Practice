#include"service_type.cpp"

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