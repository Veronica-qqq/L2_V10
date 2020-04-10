#include <iostream>
#include "Window.h"
#include <cstring>

using namespace std;

    Window::Window() : owner("none"), title("none"), color("none") {}

    void Window::print(){
    cout << "(" << owner << ", " << title << ", " << color << ")\n";}

    Window& Window::operator=(const string &a) {
    owner = a.substr(0, a.find(' '));
    title = a.substr(a.find(' ')+1, a.rfind(' ')-a.find(' ')-1);
    color = a.substr(a.rfind(' '), a.length());
    return *this;
}
bool Window::operator==(const Window &w) {
        return (owner == w.owner &&
            title == w.title &&
            color == w.color);
}

bool Window::operator!=(const Window &w) {
        return !(*this == w);
}
bool Window::operator<(const Window &w) {
        return (title < w.title);
}

bool Window::operator>(const Window &w) {
        return (title > w.title);
}

bool Window::operator>=(const Window &w) {
        return (title >= w.title);
}

bool Window::operator<=(const Window &w) {
        return (title <= w.title);
}
ostream& operator<< (ostream& os, const Window &w)
{
    os << "(" << w.owner << ", " << w.title << ", " << w.color << ")";
    return os;
}

istream& operator>> (istream& in, Window &w)
{
    in >> w.owner;
    in >> w.title;
    in >> w.title;
    return in;
}




