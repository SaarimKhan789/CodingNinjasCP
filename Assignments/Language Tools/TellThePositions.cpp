#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    int rollno;
    int marks;
};

bool compare(Student s1, Student s2)
{
    if (s1.marks > s2.marks)
    {
        return 1;
    }
    else if (s2.marks > s1.marks)
    {
        return 0;
    }
    else
    {
        if (s1.rollno < s2.rollno)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    ifstream cin;
    cin.open("Input.txt");
    ofstream cout;
    cout.open("Output.txt");
    int n;
    cin >> n;
    Student *arr = new Student[n];

    int rollno = 1;
    string name;
    int m1, m2, m3;

    for (int i = 0; i < n; i++)
    {

        int total = 0;
        cin >> name >> m1 >> m2 >> m3;

        total = m1 + m2 + m3;

        // arr[i]name=name;
        //  arr[i]->roll=rollno;
        //  arr[i]->marks=total;

        arr[i] = {(string)name, (int)rollno, (int)total};

        rollno++;
    }

    sort(arr, arr + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << arr[i].name << endl;
    }
    return 0;
}
