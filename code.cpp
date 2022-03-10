#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int i,n,kol,j;
  struct kurs
  {
    char inic[40];
    int group;
    int mark[5];
    int dva[6];
  };
  cout<<"Введите количество курсантов в группе"<<endl;
  cin>>n;
  kurs* box= new kurs[n];
  kurs tmp;

for(int i=0;i<n;i++) //заполнение данных студентов
  {
    cout<<"Введите фамилию и инициалы в формате Фамилия.И.О: "<<endl;
    cin.getline(box[i].inic,80);
    cin >> box[i].inic;
    cout<<"Введите номер группы: "<<endl;
    cin>>box[i].group;
    cout<<"Введите оценки: "<<endl;
    for(j=0;j<5;j++)
    {
      cin>>box[i].mark[j];
      if (box[i].mark[j]=='2')
        kol++;
      box[i].dva[i]=kol;
    }
  }
  for (i=n-1;i>0;i--)//сортировка
  {
    for(int j=0;j<i;j++)
    {
      if(strcmp(box[j].inic,box[j+1].inic)>0)
      {
        tmp=box[j];
        box[j]=box[j+1];
        box[j+1]=tmp;
      }
    }
  }
  cout<<"Сортировка по алфавиту: "<<endl;
  for(int i=0;i<n;i++) //вывод на экран студентов
  {
    cout<<"Фамилия и инициалы: "<<box[i].inic<<endl;
    cout<<"Номер группы: "<<box[i].group<<endl;
    for(int j=0;j<5;j++)
      cout<<"Оценка: "<<box[i].mark[j]<<endl;
  }
  cout<<"Студенты, у которых более двух 2: "<<endl;
  for(i=0;i<n;i++)
  {
    if(*box[i].dva>=2)
    {
      cout<<"Фамилия и инициалы: "<<box[i].inic<<endl;
      cout<<"Номер группы: "<<box[i].group<<endl;
    }
  }
  return 0;
}
