#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Forward declaration
class Post;

class User
{
private:
    string username;

public:
    User(const string &name) : username(name) {}

    void likePost(Post &post);
};

class Post
{
private:
    string content;
    int likes;

public:
    Post(const string &text) : content(text), likes(0) {}

    friend void User::likePost(Post &post); // Declare User::likePost as a friend

    void display()
    {
        cout << "Content: " << content << "\nLikes: " << likes << "\n";
    }
};

void User::likePost(Post &post)
{
    post.likes++;
    cout << username << " liked the post!\n";
}

int main()
{
    User alice("Alice");
    User bob("Bob");
    Post post("Hello, world!");

    post.display();

    alice.likePost(post);
    bob.likePost(post);

    post.display();

    return 0;
}
