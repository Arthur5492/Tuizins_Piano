#include "menu.hpp"

void RiscoX(size_t x)
{
  int x1=2,x2=50;
  for(size_t i=0;i<49;i++)
  {
    gotoxy(x1,3);
     this_thread::sleep_for(chrono::milliseconds(x));
    cout<<"-";
    gotoxy(x2,30);
     this_thread::sleep_for(chrono::milliseconds(x));
    cout<<"-";
    x2-=1;
    x1+=1;
  }
}

void RiscoY(size_t y)
{
  int y1=4,y2=29;
  for(size_t i=0;i<26;i++)
  {
    gotoxy(2,y1);
     this_thread::sleep_for(chrono::milliseconds(y));
    cout<<"|";
    gotoxy(50,y2);
     this_thread::sleep_for( chrono::milliseconds(y ));
    cout<<"|";
    y1+=1;
    y2-=1;
  }
}

void Escritas(size_t x)
{
  //Titulo
  gotoxy(15,5);
  cout<<"Tuizins Piano Menu!!!";
  if(x!=0)Beep(C3,300);
   this_thread::sleep_for( chrono::milliseconds(x));
  //Topics
  gotoxy(4,8);
  cout<<"What do you wanna do? \\o/";
  if(x!=0)Beep(D3,300);
   this_thread::sleep_for( chrono::milliseconds(x));
  //Things
  gotoxy(4,10);
  cout<<"1.Load a music";
  if(x!=0)Beep(E3,300);
   this_thread::sleep_for( chrono::milliseconds(x));
  //
  gotoxy(4,12);
  cout<<"2.Custom Music Menu";
  if(x!=0)Beep(F3,300);
   this_thread::sleep_for( chrono::milliseconds(x));
  //
  gotoxy(4,14);
  cout<<"3.Choose a loaded music to play!!";
  if(x!=0)Beep(G3,300);
   this_thread::sleep_for( chrono::milliseconds(x));
  //
  gotoxy(4,16);
  cout<<"4.Account Config";
  if(x!=0)Beep(A3,300);
   this_thread::sleep_for( chrono::milliseconds(x));
  //
  gotoxy(4,18);
  cout<<"0.exit :( "<<endl;
  if(x!=0)Beep(B3,300);
   this_thread::sleep_for( chrono::milliseconds(x));
  //
  gotoxy(4,20);
  cout<<"Input:";
  if(x!=0)Beep(C4,300);
}

void Caixa(size_t speed1, size_t speed2)
{
  system("cls");
  RiscoX(speed1);
  RiscoY(speed1);
   this_thread::sleep_for( chrono::milliseconds(400));
  gotoxy(3,6);
  for(size_t i=0;i<47;i++)cout<<"-";
   this_thread::sleep_for( chrono::milliseconds(speed2));
  if(speed2!=1)Escritas(speed2);
}

void Clear(size_t x,size_t y,size_t size)
{
  gotoxy(x,y);
  string space;
  for(size_t i=0;i<size-1;i++)
  {
    space.push_back(' ');
  }
  cout<<space;

}
