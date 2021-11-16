  1 #include<stdio.h>
  2 #include<stdlib.h>
  3        struct node
  4 {
  5         int data;
  6        struct node*link;
  7 };
  8 struct node *head = NULL,*cur,*temp,*temp1;
  9 struct node *create(){
 10        int n;
 11        printf("enter no. of nodes:");
 12        scanf("%d",&n);
 13        while(n--){
 14           cur = (struct node*)malloc(sizeof(struct node));
 15           scanf("%d",&(cur-> data));
 16           cur -> link = NULL;
 17              if(head == NULL){
 18              head = cur;
 19              }
 20          else{
 21             temp = head;
 22             while(temp->link != NULL){
 23                    temp = temp -> link;
 24             }
 25             temp->link = cur;
 26          }
 27       }
 28       return head;
 29 }
 30 
 31 struct node*insert_begin(int ele){
 32     cur = (struct node*)malloc(sizeof(struct node));
 33     cur -> data = ele;
 34     cur -> link = head;
 35 head = cur;
 36 return head;
 37 }
 38  struct node*insert_end(int ele){
 39 cur = (struct node*)malloc(sizeof(struct node));
 40 cur->data = ele;
 41 cur->link = NULL;
 42 temp = head;
 43 while(temp->link != NULL){
 44         temp = temp->link;
 45 }
 46 temp->link = cur;
 47 return head;
 48 }
 49 struct node*insert_position(int pos,int ele){
 50     cur = (struct node*)malloc(sizeof(struct node));
 51     cur->data = ele;
 52     int c = 1;
 53     temp = head;
 54     while(c < pos-1){
 55         temp = temp->link;
 56         c++;
 57     }
 58     cur->link = temp->link;
 59     temp->link = cur;
 60     return head;
 61 }
 62 struct node*delete_begin(struct node*head){
 63        temp = head;
 64        head = temp->link;
 65        printf("deleted element %d:",temp->data);
 66        free(temp);
 67        return head;
 68 }
 69 struct node*delete_end(struct node*head){
 70       temp = head;
 71       while(temp -> link != NULL){
 72           temp1 = temp;
 73           temp = temp->link;
 74         }
 75 temp1 ->link = NULL;
 76  printf("deleted element %d:",temp->data);
 77 free(temp);
 78 return head;
 79 }
 80 struct node*delete_position(struct node*head,int pos){
 81     temp = head;
 82     int c = 1;
 83     while(c < pos){
 84         temp1 = temp;
 85         temp = temp->link;
 86         c++;
 87 }
 88 temp1 -> link = temp->link;
 89  printf("deleted element %d:",temp->data);
 90 free(temp);
 91 return head;
 92 }
 93  void display(struct node*head){
 94       temp = head;
 95       while(temp != NULL){
 96       printf("%d -> " ,temp ->data);
 97       temp = temp ->link;
 98 }
 99 }
100 void reversedisplay(struct node*head){
101      if(head != NULL){
102             reversedisplay(head -> link);
103             printf("%d ->",head ->data);
104      }
105 }
106 int searching(struct node*head,int key){
107           int c = 1;
108           temp = head;
109           while(temp != NULL){
110          if(key == temp -> data){
111        return c;
112 }
113 temp = temp -> link;
114 c++;
115 }
116 return -1;
117 }
118 struct node*sorting(struct node*head){
119          temp = head;
120 int x;
121 while(temp!= NULL){
122 temp1 = head;
123 while(temp1 != NULL){
124 if(temp1 -> data > temp1 ->link ->data){
125 x = temp1->data;
126 temp1 -> data = temp1 ->link->data;
127 temp1 -> link -> data = x;
128 }
129 temp1 =temp1 ->link;
130 }
131 temp = temp -> link;
132 }
133 return head;
134 }
135 int main()
136 {
137        int ch,pos,ele,key;
138        while(1){
139             printf("\n 1- create\n 2-Insert at begin\n 3-Insert at end\n 4-Insert at position \n 5-delete at begin \n 6-delete at end \n 7    -delete at position \n 8-display \n 9-reversedisplay \n 10-searching \n 11- sorting \n 12-Exit\n");
140             printf("enter your choice:");
141             scanf("%d",&ch);
142             switch(ch){
143               case 1: head = create();
144                        break;
145                case 2: printf("enter the ele:");
146                       scanf("%d",&ele);
147                       head = insert_begin(ele);
148                        break;
149                 case 3: printf("enter the ele:");
150                        scanf("%d",&ele);
151                        head = insert_end(ele);
152                        break;
153                 case 4: printf("enter the pos:");
154                         scanf("%d",&pos);
155                         printf("enter the ele");
156                         scanf("%d",&ele);
157                         head = insert_position(pos,ele);
158                         break;
159                 case 5: head = delete_begin(head);
160                         break;
161                 case 6: head = delete_end(head);
162                         break;
163                 case 7: printf("enter the pos:");
164                         scanf("%d",&pos);
165                         head = delete_position(head,pos);
166                         break;
167                 case 8: display(head);
168                         break;
169                 case 9: reversedisplay(head);
170                         break;
171                 case 10:printf("enter the value:");
172                         scanf("%d",&key);
173                         pos = searching(head,key);
174                            if(pos == -1){
175                               printf("element not found");
176                         }
177                         else{
178                              printf("element found at %d",pos);
179                         }
180                         break;
181                 case 11:head = sorting(head);
182                         break;
183                 case 12:exit(0);
184                }
185            }
186   }
187 
                                                                                                                            187,1         Bot

                                                                                                                          173,1         90%

