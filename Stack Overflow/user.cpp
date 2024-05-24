#include<bits/stdc++.h>
class User{
    std::string name;
    int userId;

    public:
    User(std::string name, int id){
        this->name = name;
        this->userId = id;
    }

    void setId(int id){
        this->userId = id;
    }

    void setName(std::string& name){
        this->name = name;
    }

    int getUserId(){
        return this->userId;
    }

    std::string getName(){
        return this->name;
    }
};