#include <bits/stdc++.h>
using namespace std;

/*
********** Rules for virtual functions *****************
# They cannot be static
# They are accessed by object pointers
# Virtual functions can be a friend of another class
# A virtual function in the base class might not be used.
# If a virtual function is defined in a base class,
  there is no necessity of redefining it in the derived class
*/

class CodeWithHarry
{
protected:
    string title;
    float rating;

public:
    CodeWithHarry(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual void display() = 0; // Do Nothing Function -> pure virtual function
};

class Video_CodeWithHarry : public CodeWithHarry
{
    float VideoLength;

public:
    Video_CodeWithHarry(string s, float r, float vl) : CodeWithHarry(s, r)
    {
        VideoLength = vl;
    }
    void display()
    {
        cout << "\nThis is amazing video with title " << title << endl;
        cout << "Rating : " << rating << " / 5" << endl;
        cout << "Length : " << VideoLength << " mins" << endl;
    }
};

class Text_CodeWithHarry : public CodeWithHarry
{
    int Pages;

public:
    Text_CodeWithHarry(string s, float r, int w) : CodeWithHarry(s, r)
    {
        Pages = w;
    }
    void display()
    {
        cout << "\nThis is amazing text tutorial with title " << title << endl;
        cout << "Rating : " << rating << " / 5" << endl;
        cout << "Pages : " << Pages << " pages" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int pages;

    // For CodeWithHarry Videos
    title = "C++ OOP Tutorial";
    vlen = 4.58;
    rating = 4.8;

    Video_CodeWithHarry Video(title, rating, vlen);
    // Video.display();

    // For CodeWithHarry Text
    title = "C++ Beginner Tutorial";
    pages = 20;
    rating = 4.1;

    Text_CodeWithHarry Text(title, rating, pages);
    // Text.display();

    CodeWithHarry *tutorials[2];
    tutorials[0] = &Video;
    tutorials[1] = &Text;

    tutorials[0]->display();
    tutorials[1]->display();
    return 0;
}