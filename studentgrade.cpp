#include<iostream>
using namespace std;
char studGrades(int marks){
    switch(marks/10){
        case 10:return 'A';break;
        case 9:return 'A';break;
        case 8:return 'B';break;
        case 7:return 'C';break;
        case 6:return 'D';break;
        default:return 'E';
    }
}
int main()
{
    for(int marks=0;marks<=100;marks++){
        char grades=studGrades(marks);
        cout<<"The Marks Of the Student Are  "<<marks<<"  And Grades Are  "<<grades<<endl;
    }
 return 0;
}