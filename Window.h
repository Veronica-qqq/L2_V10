#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

using namespace std;
class Window {
private:
    string owner;
    string title;
    string color;
public:
    Window();
    void print();
    Window& operator= (const string &a);
    bool const operator==(const Window &w);
    bool const operator!=(const Window &w);
    bool const operator<(const Window &w);
    bool const operator> (const Window &w);
    bool const operator>=(const Window &w);
    bool const operator<=(const Window &w);
    friend ostream& operator<< (ostream& os, const Window &w);
    friend istream& operator>> (istream& in, Window &w);

    } ;

#endif // WINDOW_H_INCLUDED
