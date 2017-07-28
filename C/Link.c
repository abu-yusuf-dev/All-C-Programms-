#include<stdio.h>
#include<stdlib.h>
#include <stdio_ext.h>


typedef struct mylist {
	int info;
	struct mylist *link;
}Node;
Node *_getnode();
	int main(){
		/*Node *a = _getnode();
		Node *t = a;
		a->link = NULL;
		a->link->link=_getnode();
		printf("a data=? ");*/


		Node *s = _getnode;
		s-> link = NULL;
		node *t = s;
		int c;
			while(true){
				printf("\nplease enter the data for s info");
				scanf("%d",&s -> info);
				printf("\nTo add more node press Y else N:");
      _fpurge(stdin);
      c=getch;

				if (c=='n'||c=='N'){
					s -> link = NULL;
					break;
				}
				s-> link=_getnode();
				s = s-> link;
			}
				s=t;
				while(s != NULL){
					printf("%d ->",s -> info);
					s = s -> link;

				}
				printf("null");
				putchar('\n');
				return(0);
			}
			node * _getnode(){
				return ((Node *)malloc(sizeof(Node)));
			}

