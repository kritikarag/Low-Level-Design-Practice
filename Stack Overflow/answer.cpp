#include"user.cpp"
#include"comments.cpp"
#include"vote.cpp"

class Answer{
    std::string content;
    User* answerer;
    std::vector<Comment*>comments;
    std::vector<Vote*>votes;

    public:

    std::string getContent() const {
        return this->content;
    }

    void setContent(const std::string& newContent) {
        this->content = newContent;
    }

    User* getAnswerer() const {
        return this->answerer;
    }

    void setAnswerer(User* newAnswerer) {
        this->answerer = newAnswerer;
    }

    const std::vector<Comment*>& getComments() const {
        return this->comments;
    }

    void setComments(const std::vector<Comment*>& newComments) {
        this->comments = newComments;
    }

    const std::vector<Vote*>& getVotes() const {
        return this->votes;
    }

    void setVotes(const std::vector<Vote*>& newVotes) {
        this->votes = newVotes;
    }
};

