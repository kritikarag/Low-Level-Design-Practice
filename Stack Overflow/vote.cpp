#include"user.cpp"
class Vote{
    User* voter;
    bool upvote;

    public:

    Vote(User* voter, bool upvote){
        this->voter = voter;
        this->upvote = upvote;
    }

    void setVoter(User* voter){
        this->voter = voter;
    }

    void setUpvote(bool upvote){
        this->upvote = upvote;
    }

    User* getVoter(){
        return this->voter;
    }

    bool getUpvote(){
        return this->upvote;
    }
};