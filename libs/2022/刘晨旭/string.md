## 串的链式
```c
#includ<stdlib.h>
typedef struct node{
    char c;
    struct node *next;
}node;
    node *head=(node*)malloc(sizeof(node));
    head->next=NULL;
```
### 串赋值
```c
void StrAssign(node *head,char ch[]){
    node *p;
    p=head;
    for(int i=0;ch[i]!='\0';i++){
        node *temp=(node*)malloc(sizeof(node));
        temp->c=ch[i];
        temp->next=NULL;
        p->next=temp;
        p=p->next;
    }
}
```
### 求串长
```c
int Strlen(node *head){
    node *p=head;
    int i=0;
    while(p){
        i++;
        p=p->next;
    }
    return i-1;
}
```
### 串判等
```c
int Strcmp(node *head,char ch){
    node *p=head;
    p=p->next;
    int i=0;
    for(i=0;p&&ch!='\0';i++){
        if(p->c!=ch[i]) break;
    }
    if(p==NULL&&ch[i]=='\0') return 1;
    else return 0;
}
```
### 串联结
```c
node * Concat(node *head,char ch){
    node *s=(node*)malloc(sizeof(node));
    s->next=NULL;
    node *p=head,*q=s,*o;
    head=head->next;
    free(p);
    p=head;
    while(p){
        node *temp=(node*)malloc(sizeof(node));
        temp->next=NULL;
        temp->c=p->c;
        q->next=temp;
        q=q->next;
        o=p;
        p=p->next;
        free(o);
    }
    for(int i=0;ch[i]!='\0';i++){
        node *temp=(node*)malloc(sizeof(node));
        temp->next=NULL;
        temp->c=ch[i];
        q->next=temp;
        q=q->next;
    }
    return s;
}
```
### 求子串
```c
node * SubStr(node *head,int a,int b){
    node *sub=(node*)malloc(sizeof(node));
    sub->next=NULL;
if(i<=0||i>Strlen(head)||j<0||i+j-1>Strlen(head))     
     return sub; 
     int k=0;
     node *p=head->next;,*q=sub;
     for(k=0;k<a-1;k++)
     p=p->next;
     for(k=1;k<=b;k++){
        node *temp=(node*)malloc(sizeof(node));
        temp->next=NULL;
        temp->c=p->c;
        q->next=temp;
        q=q->next;
        p=p->next;
     }
     return sub;
}
```
### 子串定位
```c
node *Index(node*head char a[]){
    node *p=head->next;
    len=strlen(a);
    while(p){
        int i;
        if(p->c==a[0]){
            for(i=1;i<len;i++){
                if(p->next->c!=a[i]) break;
            }
            if(i==len-1) return p;
        }
        else p=p->next;
    }
    return NULL;
}
```
### 替换
```c
node *Replace(node *head,char a[],char b[]){
    int len_1=strlen(a),len_2=strlen(b);
    node *p=Index(head,a[]);
    node *q=p;
    while(p){
        for(int i=0,k=0;i<len_1;i++){
            if(k<len_2){
                if(k>0){
                    q=q->next;
                }
                p->c==b[k];
                k++;
                p=p->next;
            }
            else{
                node *o=p;
                q->next=p->next;
                p=p->next;
                free(o);
            }
        }
    }
}
```
### 插入子串

1.
 ```c
 void StrInsert(node *head,int pos,char a[]){
    node *p=head->next;
    for(int i=0;i<pos-1;i++){
        p=p->next;
    }
    int len=strlen(a);
    for(int i=0;i<len;i++){
        node *temp=(node*)malloc(sizeof(node));
        temp->c=a[i];
        temp->next=p->next;
        p->next=temp;
        p=p->next;
    }
 }
 
 void Strappend(node*head,int pos,char a[]){
    node *p=head->next;
    for(int i=0;i<pos;i++){
        p=p->next;
    }
    int len=strlen(a);
    for(int i=0;i<len;i++){
        node*temp=(node*)malloc(sizeof(node));
        temp->c=a[i];
        temp->next=p->next;
        p->next=temp;
        p=p->next;
    }
 }
```
### 删除子串
```c
void Strdelete(node*head,int pos,len){
    node *p=head->next;
    for(int i=0;i<pos;i++){
        p=p->next;
    }
    node *q;
    for(int i=0;i<len;i++){
        if(p){
        q=p;
        p=p->next;
        free(q);
        }
    }
}
```

