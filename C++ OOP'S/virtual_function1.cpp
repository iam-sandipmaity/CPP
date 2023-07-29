#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH
{
    float video_lenght;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        video_lenght = vl;
    }
    void display(void)
    {
        cout << "This Is An Amzing Video With Title : " << title << endl
             << "Rating : " << rating << " Out Of 5 Stars." << endl
             << "length Of The Video Is : " << video_lenght << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wl) : CWH(s, r)
    {
        words = wl;
    }
    void display(void)
    {
        cout << "This Is An Amzing Text With Title : " << title << endl
             << "Rating : " << rating << " Out Of 5 Stars." << endl
             << "length Of The Text Is : " << words << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    // for the video
    title = "Django Tutorial";
    vlen = 5.57;
    rating = 4.98;
    CWHVideo Dj_Vedio(title, rating, vlen);
    // Dj_Vedio.display();

    // for the text

    title = "Django Tutorial Text";
    words = 924;
    rating = 4.45;
    CWHVideo Dj_Text(title, rating, words);
    // Dj_Text.display();

    CWH *tuts[2];
    tuts[0] = &Dj_Vedio;
    tuts[1] = &Dj_Text;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}