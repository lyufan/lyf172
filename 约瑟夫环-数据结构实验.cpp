#include<iostream.h>
#include<malloc.h>
struct JosephList
{
   int number; //���
   int password;//����
   JosephList *next;//��һ�����
};
int m,PeopleNumber;
JosephList *p,*q,*p1;
void Input()
{
    cout<<"����m�ĳ�ʼֵ m:";
    cin>>m
    cout<<"�������� PeopleNumber:";
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
        cout<<"�����"<<i<<"���˵�����: ";
        cin>>p->password;
        p->number=i;
   }
}
void Output()
{
   p->next=p1; //�γ�ѭ���б�
   p=p1;
   cout<<"����˳��Ϊ: ";
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
	cout<<"��� 175051";
	cout<<endl;
    return 0;
}