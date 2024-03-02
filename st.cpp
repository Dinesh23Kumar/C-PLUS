#include<iostream>
using namespace std;
int main()
{
    struct
    {
        string name;
        int age,mark;
    } database[5];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"Enter the name:";
        getline(cin,database[i].name);
        cout<<"Enter your age:";
        cin>>database[i].age;
        cout<<"Enter the mark:";
        cin>>database[i].mark;
        cin.ignore();
    }
    cout<<"Displaying the database of the student:";
     for(i=0;i<5;i++)
    {
        cout<<database[i].name<<endl;
        cout<<database[i].age<<endl;
        cout<<database[i].mark<<endl;
    }
    return 0;

}