float func4(int x)
{ float s=1.0/3.0;
  float stepen;
  stepen=pow(abs(1+x),s);
  if((1+x)!=0)
  {if((1+x)<0)
    {stepen=(-1)*stepen;}
    else
    {stepen=stepen;};
  }
  return(stepen);
}

void func1()
{
  int x;
  float y,t;
  float s=1.0/3.0;
  cout<<"Введите целое число: ";
  cin>>x;
  t=func4(x);
  y=((1+abs(x))/t);
  cout << setfill('.')<<right<<"y"; cout<<setw(10)<<y<<endl; cout<<left;
}

void func2()
{
  int x;
  float y1,y2,t;
  float s=1.0/3.0;
  cout<<"Введите целое число x1: "; cin>>x;
  t=func4(x);
  y1=((1+abs(x))/t);
  cout<<"Введите целое число x2: "; cin>>x;
   t=func4(x);
   y2=((1+abs(x))/t);
   if (y1!=y2)
        {if(y1>y2) {cout<<"y1>y2"<<endl;}
         else {cout<<"y2>y1"<<endl;}
        }
    else {cout<<"y1=y2"<<endl;}
    cout<<" y1= "<<y1; cout<<" y2= "<<y2<<endl;
}
void func3()
{
   int x1,x2,x,l;
   float y,t,y1,y2,t1,t2;
   float s=1.0/3.0;
   cout<<"Введите целое число x1: "; cin>>x1;
   cout<<"Введите целое число x2: "; cin>>x2;
   cout<<"Введите целое число для шага: "; cin>>l;
   if(x1!=x2) //иксы не равны
     {if(x1<x2) //х1 большех2
        {if((x2-x1)>l) //возможен шаг
           {x=x1;
             while (x<=x2)
             {t=func4(x);
              y=((1+abs(x))/t);
              cout<<"x= "<<x; cout<<" y= "<<y<<endl;
              x=x+l;
              }
           }
           else//невозможен шаг
           { x=x1;
             t1=func4(x);
             y1=((1+abs(x1))/t1);
             x=x2;
             t2=func4(x);
             y2=((1+abs(x2))/t2);
             cout<<"y1= "<<y1<<endl; cout<<"y2= "<<y2<<endl;
           }
         }
      else//х2 больше х1
        {if((x1-x2)>l)//возможен шаг
          { x=x2;
            while (x<=x1)
            {t=func4(x);
             y=((1+abs(x))/t);
             cout<<"x= "<<x; cout<<" y= "<<y<<endl;
             x=x+l;
             }
          }
          else//шаг невозможен
          {x=x1;
           t=func4(x);
           y1=((1+abs(x))/t);
           x=x2;
           t2=func4(x);
           y2=((1+abs(x))/t);
           cout<<"y1= "<<y1<<endl;cout<<"y2= "<<y2<<endl;
          }
        }
     }
   else {cout<<"Невозможно задать шаг, так как числа равны"<<endl;}
}
