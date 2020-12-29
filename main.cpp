#include<iostream>
#include<windows.h>
#include <cmath>
#include <string>
using namespace std;
int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int j;
int marks;
int k=0;
int l;
int m;
int n;
int average;
string grades;
string remarks;
int main() {
    cout << "answer of a:";
    cin >> d;
    cout << "answer of b:";
    cin >> e;
    cout << "answer of c:";
    cin >> f;
    for (int j = 0; j <= 2; j++)
    {
        cout << "\n\n\nans of a by student:";
        cin >> g;
        cout << "ans of b by student:";
        cin >> h;
        cout << "ans of c by student:";
        cin >> i;
        if (d == g) {
            marks  =1 ;
        }
        else {
            marks = 0;
        }
        if (e == h) {
            marks ++;
        }
        else {

        }
        if (f == i) {
            marks ++;
        }
        k+= marks;
        system("color 01");
        cout << "\n\nthe mark of the student is\t" << marks;
        if (marks == 0) {
            grades = 'f';
            remarks ="bad";
        }
        if (marks == 1) {
            grades = 'd';
            remarks = "ok";
        }
        if (marks == 2) {
            grades = 'b';
            remarks = "good";
        }
        if (marks == 3) {
            grades = 'a';
            remarks = "best";
        }
        marks = 0;
        cout << "\ngrades\tremarks\n" << grades<<"\t" << remarks;
    }
   div_t  l =div(k,3);
    m=l.quot;
    n = l.rem;
    average = m + n;
    cout << "\n\n\n\naverage is:" <<average<< endl;
    if (average < 1) {
        system("color 04");
        cout << "the average is *very* low ";
    }
    if (average == 1) {
        system("color 05");
        cout << "\nthe average is low :(";
    }
    if (average == 2) {
        system("color 010");
        cout << "\nthe average is moderate :|";
    }
    if (average == 3) {
        system("color 02");
        cout << "da the best average XD";
    }

    return 0;
}
