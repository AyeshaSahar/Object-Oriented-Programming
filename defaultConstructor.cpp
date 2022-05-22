#include <iostream>
#include <string>

using namespace std;

class student
{
    private:
        string name;
        int marks[3];
        int total;
        int max;
        int tmax;
    public:
        student()
        {
            name = "";
            marks[0] = 0;
            marks[1] = 0;
            marks[2] = 0;
            total = 0;
            tmax = 300;
        }
        void assign(string n, int m1, int m2, int m3)
        {
            name = n;
            marks[0] = m1;
            marks[1] = m2;
            marks[2] = m3;
            total = m1 + m2 + m3;
        }
        int compute()
        {
            int avg = total / 3; 
            return avg;
        }

        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks[0] << " " << marks[1] << " " << marks[2] << endl;
            cout << "Total: " << total << "/" <<tmax << endl;
            cout << "Average: " << compute() << "/100" << endl;
        }
};

int main(){
    student *s1 = new student();
    s1->assign("Ali", 50, 70, 100);
    s1->display();

    cout<< "\n";

    student *s2 = new student();
    s2->assign("Alia", 90, 30, 80);
    s2->display();

    cout<< "\n";

    student *s3 = new student();
    s3->assign("Sara", 70, 40, 90);
    s3->display();

    delete s1;
    delete s2;
    delete s3;

    return 0;
}

