#include<iostream.h>
#include<malloc.h>
struct JosephList
{
   int number; //编号
   int password;//密码
   JosephList *next;//后一个结点
};
int m,PeopleNumber;
JosephList *p,*q,*p1;
void Input()
{
    cout<<"输入m的初始值 m:";
    cin>>m
    cout<<"输入人数 PeopleNumber:";
    cin>>PeopleNumber;
}
void InputPassword()
{
    for(int i=1;i<=PeopleNumber;i++)
   {
        if(i==1)
        {
            p=(JosephList*)malloc(sizeof(JosephList));
			p1=p;
        }
        else
        {
            q=(JosephList*)malloc(sizeof(JosephList));
            p->next=q;
            p=q;
        }
        cout<<"输入第"<<i<<"个人的密码: ";
        cin>>p->password;
        p->number=i;
   }
}
void Output()
{
   p->next=p1; //形成循环列表
   p=p1;
   cout<<"出列顺序为: ";
   for ( j=1;j<=PeopleNumber;j++)
   {
        for(int i=1;i<m;i++)
			p=p->next;
        m=p->password;
        cout<<p->number<<" ";
        p->number=p->next->number;
        p->password=p->next->password;
        q=p->next;
        p->next=p->next->next;
        free(q);
   }
   cout<<endl;
}
int main()
{
    Input();
    InputPassword();
    Output();
    return 0;
}
