#include<stdio.h>
struct student{
		char name[15];
		int marks;
	};
int main()
{
	int j,i=0;
	int n;
	struct student student[100];
	do{
		printf("enter the 1 for add new student,2 for display the detiles\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1 : printf("the rollno is %d\n",i);
			         printf("enter the student name");
			         scanf("%s",student[i].name);
			         printf("enter the marks\n");
			         scanf("%d",&student[i].marks);
			         i++;
			         break;
			case 2 : for(j=0;j<i;j++)
			         {
			         	printf("the rollno is %d\n",j);
			         	printf("the student name is %s\n",student[j].name);
			         	printf("the masks is %d\n",student[j].marks);
					 }	        
					 break;
		}
	}while(n<3);
	return 0;
}
