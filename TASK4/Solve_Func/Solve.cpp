#include <Solve_Func/Solve.h>
#include<math.h>
using namespace std;

int year=0;

void Task1_func()
{
 int i=0,j=0;
 cout<<"\nTASK1 in process\n";
 cout<<"Please enter first digit: ";
 cin>>i;
 cout<<"please enter second digit: ";
 cin>>j;
 ((i+j)>=10&&(i+j)<=20)?cout<<"TRUE":cout<<"FALSE";
 cout<<endl<<endl;
}

void Task2_func(const int a, const int b)
{

((a==10&&b==10)||a+b==10)?cout<<"TRUE":cout<<"FALSE";

}

void Task3_func()
{
 int i;
 cout<<"Numbers: ";
 for (i=1;i<=50;i=i+2)
 {
   cout<<" "<<i;
 }
cout<<endl<<endl;
}
void Task4_func()
{
    bool flag4=true;
    int i,tsk4;
    cout<<"Please enter your number";
    cin>>tsk4;

for (i=2;i<=tsk4-1;i++)
 {

    if (!(tsk4%i))
       {
        cout<<"your digit can be divided by: "<<i<<endl<<"do not need to do all other iteration..."<<endl;
       flag4=false;
        break;
       }

}
if(flag4)
 {
 cout<<"you digit can be divided only on 1 and digit itself\n";
 }
}

void Task5_func()
{
bool flag=false;                                                                                                   //WE have to comment this line if we are using for cycle for checking in main.cpp
    while (!flag)                                                                                                  //WE have to comment this line if we are using for cycle for checking in main.cpp
{                                                                                                                  //WE have to comment this line if we are using for cycle for checking in main.cpp
cout<<"we need year from 0 till 3000 ";                                                                            //WE have to comment this line if we are using for cycle for checking in main.cpp
cin>>year;                                                                                                         //WE have to comment this line if we are using for cycle for checking in main.cpp
if (year<=3000 && year >=0)                                                                                        //WE have to comment this line if we are using for cycle for checking in main.cpp
    flag=true;                                                                                                     //WE have to comment this line if we are using for cycle for checking in main.cpp
}                                                                                                                  //WE have to comment this line if we are using for cycle for checking in main.cpp
cout<<"year :"<<year<<" result:";
((!(year%4))&&(year<100))||(((year>100)&&(!(year%4)))&&(!(!(year%100)&&(year%400)))) ?cout<<"TRUE":cout<<"FALSE";
cout<<endl;
}
