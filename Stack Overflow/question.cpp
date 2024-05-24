#include"answer.cpp"

class Question{
    std::string title;
    std::string content;
    User* questioner;
    std::vector<Answer*>answers;
    std::vector<Comment*>comments;
    std::vector<Vote*>votes;

    public:

    std::string getTitle() const {
        return this->title;
    }

    void setTitle(const std::string& newTitle) {
        this->title = newTitle;
    }

    std::string getContent() const {
        return this->content;
    }

    void setContent(const std::string& newContent) {
        this->content = newContent;
    }

    User* getQuestioner() const {
        return this->questioner;
    }

    void setQuestioner(User* newQuestioner) {
        this->questioner = newQuestioner;
    }

    const std::vector<Answer*>& getAnswers() const {
        return this->answers;
    }

    void setAnswers(const std::vector<Answer*>& newAnswers) {
        this->answers = newAnswers;
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