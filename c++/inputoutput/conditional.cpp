#include<iostream>
using namespace std;
int main(){

//1 if use in check odd nad even

/*
cout<<"enter a number";
int n;
cin>>n;
if(n%2==0)
{
    cout<<"even";
}
if(n%2!=0){

    cout<<"odd";
}
*/

//2 else statement check even or odd
/*
cout<<"enter a number";
int n;
cin>>n;
if(n%2==0)
{
    cout<<"even";
}
else{
    cout<<"odd";
    }
*/

//3  take possitive integer input and tell  if it is divisible 5 or not

/*
cout<<"enter a number:";
int n;
cin>>n;
if(n%5==0)
{
    cout<<"divisible by 5";
}
else{
    cout<<"not divisble by 5";
}
*/


//4given an integer .print the absoulute values of that integer

/*
cout<<"enter a integer";
int n;
cin>>n;
if(n>0)//if(n<0)
{
    cout<<n;//n=-n;

}
else
{
    cout<<-n;//cout<<n;
}
*/


//5  profit and loss program


/*
cout<<"enter the cost price";
int cp;
cin>>cp;
cout<<"enter the selling price:";
int sp;
cin>>sp;
if(sp>cp)       
{
    cout<<"profit";
}
//else{

   // cout<<"loss";}


if(cp>sp)
{
    cout<<"loss";
}
if(sp==cp)
{
    cout<<"no profit,no loss";
}
*/

/// multiple conditions using &&(and) and II(or)

//take possitive interger input and tell if it is a three digit number or not
/*
cout<<"enter a number";
int n;
cin>>n;
if(n>=100 && n<=999)
{
cout<<"three digit number";
}
else{
    cout<<"not three digit number";
}
*/

//take possitive integerinput and tell if it is disible by 5 and 3.
/*
cout<<"enter a number";
int n;
cin>>n;
if(n%5==0 && n%3==0)//if(n%15==0)
{
    cout<<"number is divisible";
}
else{
    cout<<"number is not divisible";
}
*/


// take positive integer input and tell if it is divisible by 5 or 3.
//logical or operator use krga
/*
cout<<"entet a number";
int n;
cin>>n;
if(n%5==0|| n%3==0)
{
    cout<<" the number is divisible by 5 or 3";
}
else{
    cout<<"the number is not divisible by 5 and it is not divisible by 3";
}
*/
 // take 3 positive integers input print  the greatest of them'
/*
 cout<<"enter a first number";
 int a;
 cin>>a;

cout<<"enter a second number";
int b;
cin>>b;
cout<<"enter a third nuber";
int c;
cin>>c;

if(a>b && a>c)
{
    cout<<a<<"a is largest";
}
if(b>a && b>c);
{
    cout<<b<<" b is largest";
}

if(c>a && c>b)
{
    cout<<c<<"c is largest";
}

*/


//write a progrm to check whether a character is an alphabet or not
// import question
/*
cout<<"enter a charcacter";15
char ch;
cin>>ch;
int ascii=(int)ch;
if(ascii>=97 &&  ascii<=122)
{
cout<<"the character is lowercase alphabet";
}

if(ascii>=60 && ascii<=90)
{
    cout<<"the character is uppercase alphabet";
}*/

/// nested if-else(import)2


//take positive interger input and tell if it is divisible by 5 or 3 but nog divisible by 15

/* int n;
cout<<"enter a number";
cin>>n;

if((n%5==0 || n%3==0) && n%15!=0)
{
cout<<"the number is divisible by 5 or 3";
}
else{
    cout<<"not matching condition";
}*/
//second method
/*

if(n%5==0|| n%3==0)
{
    if(n%15!=0)
    {
        cout<<"the number is divisible by 5 or 3 but not 15";
    }
    else{
        cout<<"not matching";
    }
}
else{
    cout<<"not matching";
}
*/

 //take 3 positive integers input print  the greatest of them'
/*
 cout<<"enter a first number";
 int a;
 cin>>a;

cout<<"enter a second number";
int b;
cin>>b;
cout<<"enter a third nuber";
int c;
cin>>c;

if(a>b)
{
    if(a>c)
    {
cout<<a<<"is greatest";
    }
    else{
        cout<<c<<"c is greatest";
    }
}

else
{
    if(b>c)
    {
        cout<<b<<"is gratest";
    }
    else
    {
        cout<<" c is gratest";
    }
}

*/

///else if

//take input percentage of a student and print the grade according to marks:
/*
1.91-100 excelelnt
2.81-90 very goog
3.71-80 good
4.61-70 can do better
5.51-60 averge
6.40-50 below average
70.<40 fail
*/
//cout<<"enter the marks";
// int n;
//cin>>n;

/* first metod
if(n>=91&& n<=100)
{
    cout<<"excelent";
}
if(n>=81 && n<=90)
{
    cout<<"very good";
}
if(n>=71&& n<=80)
{
    cout<<"good";
}
if(n>=61&&n<=70)
{
    cout<<"can do betetr";
}
if(n>=51&&n<=60)
{
    cout<<"average";
}
if(n>=41&&n<=50)
{
    cout<<"below average";
}
if(n<40)
{
    cout<<"fail";
}

*/

/* 2nd metod
if(n>=91)
{
    cout<<"excelint";
}
else{
    if(n>=81)
    {
        cout<<"very good";
    }
    else{
        if(n>=71)
        {
            cout<<"good";
        }
        else{
            if(n>=61)
            {
                cout<<"can do betetr";
            }
            else{
                if(n>=51)
                {
                    cout<<"average";
                }
                else{
                    if(n>=41)
                    {
                        cout<<"below average";
                    }
                    else{
                        cout<<"fail";
                    }
                }
            }
        }
     
    }
}
*/

/*3 metod

if(n>=91)
{
    cout<<"excelint";
}

   else if(n>=81)
    {
        cout<<"very good";
    }
    
      else if(n>=71)
        {
            cout<<"good";
        }
        
           else if(n>=61)
            {
                cout<<"can do betetr";
            }
            
               else if(n>=51)
                {
                    cout<<"average";
                }
                
                   else if(n>=41)
                    {
                        cout<<"below average";
                    }
                    else{
                        cout<<"fail";
                    }
*/

// write a program to check whether a given character is a vowal or a consonant
  /*      
cout<<"enter a charcacter";
char ch;
cin>>ch;
int ascii=(int)ch;
if((ascii>=97 &&  ascii<=122)||(ascii>=65&& ascii<=90))
{
cout<<"the character is alphabet";

if(ch=='a'||ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
{
    cout<<"the characterv is vowel";
}

else{
    cout<<"the character is constant";
}

}  
else{
    cout<<"the character is not alphabet";
}
*/
 
 // take a three input and tell tell if they can br the sides of a triangle
/*
int a;
cout<<"enter a first side";
cin>>a;
int b;
cout<<"enter a second side";
cin>>b;
int c;
cout<<"enter the 3 side";
cin>>c;
if((a+b>c) && (b+c>a) && (c+a>b))
{
    cout<<a<<" "<<b<<" "<<c<<"can be the side of triangle";
}

else
{
    cout<<"invalid traingle";
}
*/

//predict the output
/*int x=10;
int y=20;

if(x==y);
cout<<x<<" "<<y;
return 0;*/

// predict the output
/*
int x=3,y=5;
if(x==3)

    cout<<x<<endl;
else;
cout<<y<<endl;
return 0;
*/


///ternary operator

//syntak: expression 1?expression2:expression3
// condtion ? true:false

// program
/*
int x;
cin>>x;
(x%2==0) ? cout<<"even" : cout<<"odd" ;
*/

// given the marks of the students.if tha marks are greater than 33 print the result as pass otherwise fail without using if -else statemnet

/* int marks;
cout<<"enter the marks";
cin>>marks;
marks>33 ? cout<<"pass" : cout<<"fail"; */

//predict the output
/*
char x;
int a=2;
x=(a>0) ? 'a' : 'S';
cout<<"value of x:"<<x<<endl;
cout<<"value of a :"<<a;
return 0;
   */
// predict the output

/* int x ;
x=5>8 ? 10 : 1!=2<5 ?20  :30;
cout<<"value of x :"<<x;
return 0; */

// output
/*
int test =0;
float f=3.111;
cout<<(test>0 ? f : 0) << endl;

return 0;
*/

//// switch statement

//write a program to input week number(1-7) and print day of week name using switch statement
   
   /* int x;
   cout<<"enter the day number";
   cin>>x;
    
    switch (x)
    {
    case 1 :
        cout<<"monday";
        break;
    
case 2:
        cout<<"tuesday";
        break;

case 3 :
        cout<<"wednesday";
        break;
case 4 :
        cout<<"thursday";
        break;

case 5:
        cout<<"friday";
        break;

case 6 :
        cout<<"saturaday";
        break;

case 7:
        cout<<"sunday";
        break;
    default:
cout<<"invalid number";
    }
*/
 // program month using switch statement
/*
int x;
   cout<<"enter the day number";
   cin>>x;
// 1 3 5 7 8 10 12 month 31 days
// 4 6 9 11 month 30 days
// 2 month 28 days
  
  switch (x<=7 && x%2!=0)
  {   
case 1:
cout<<"31";

  }
switch(x>=8 && x%2==0)

{
    case 1:
    cout<<"31";
}
switch(x==4 || x==6 || x==9 || x==11)
{
    case 1:
    cout<<"30";
}
switch(x)
{
    case 2:
    cout<<"28";
}*/


// create a calculator using switch statement
  
  /*using  if 
int a,b;
char op;
 cout<<"enter the problem :";
cin>>a>>op>>b;
if(op=='+') cout<<a+b;
if(op=='-') cout<<a-b;
if(op=='*') cout<<a*b;
if(op=='/') cout<<a/b;
*/
/* 2nd method
int a,b;
char op;
 cout<<"enter the problem :";

switch(op)
{
    case '+':
    cout<<a+b;
       break;
       case '-':
       cout<<a-b;
       break;
       case '*':
       cout<<a*b;
       break;
       case '/':
       cout<<a/b;
       break;
        } */

//  predict the output
/*
int x=3,y,z;
y=x=10;
z=x<10;
cout<<"x="<< x << "y="<< y<< "z="<<z;
return 0;
*/

//predict the output
/*
int k=35;
cout<<(k==35) << endl << (k==50) <<endl <<(k>90);
return 0;
*/
//output

int i=65;
char j='A';
if(i==j)

    cout<<"p standsc for physicwaalha";
    else
cout<<"p stands of pwskills";
    







}






















 