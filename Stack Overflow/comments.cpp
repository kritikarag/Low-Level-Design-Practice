#include"user.cpp"
class Comment{
    std::string content;
    User *commenter;

    public:

    void setContent(std::string&content){
        this->content = content;
    }

    void setCommenter(User* commenter){
        this->commenter = commenter;
    }

    std::string getContent(){
        return this->content;
    }

    User* getCommenter(){
        return this->commenter;
    }

};