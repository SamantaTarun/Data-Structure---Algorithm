#include<bits/stdc++.h>
using namespace std;


struct Stack{
  int size;
  int top;
  int *s;
};

void Create(struct Stack *st)
{
    cout<<"Enter Size of the Stack: ";
    cin>>st->size;
    st->top=-1;
    st->s=(int *)malloc(st->size*sizeof(int));

}

void Display(struct Stack st)
{
    for(int i=st.top;i>=0;i--)
    {
        cout<<st.s[i]<<" ";
    }
    cout<<endl;

}

void push(struct Stack *st,int x)
{
    //Checking stack is full or not
    if(st->top==st->size-1)
        cout<<"Stack Overflow"<<endl;
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}

int pop(struct Stack *st)
{
    int x=-1;

    if(st->top==-1)
        cout<<"stack Underflow"<<endl;
    else
        x=st->s[st->top--];

    return x;

}
// peek- return the elements from given index

int peek(struct Stack st,int index)
{

    int x=-1;

    if(st.top-index+1<0)
        cout<<"Invalid Index"<<endl;
    x=st.s[st.top-index+1];
    return x;
}

bool isEmpty(struct Stack st)
{

    if(st.top==-1)
        return true;
    return false;
}

bool isFull(struct Stack st)
{
    return st.top==st.size-1;
}

int stackTOp(struct Stack st)
{
    if(!isEmpty(st))
        return st.s[st.top];
    return -1;
}
int main()
{

    struct Stack st;

    Create(&st);

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,50);
    push(&st,40);

    push(&st,60);

    Display(st);

    cout<<endl;
    cout<<pop(&st)<<endl;

    cout<<pop(&st)<<endl;

    cout<<peek(st,3)<<endl;


    return 0;
}
