#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    int n = 100;
    int *p = &n;
    int *q = p;
    (*p)++;
    cout << *q << endl;
    cout << n << endl;
    cout << p << endl;

    int *d = new int;
    *d = 42;
    cout << *d << endl;
    delete d;

    Student *s = new Student;
    s->name = "Иван";
    s->age = 19;
    cout << s->name << " " << s->age << endl;
    delete s;

    return 0;
}
