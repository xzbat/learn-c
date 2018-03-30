#include<stdio.h>
int main()
{
	int score;
	while(scanf("%d",&score)!=EOF)
	{
		if(score<0||score>100){
			printf("Score is error!\n");
		}
		else{
			score=score/10;
			switch(score){
				case 10:
				case 9:
				printf("A\n");
				break;
				case 8:
				printf("B\n");
				break;
				case 7:
				printf("C\n");
				break;
				case 6:
				printf("D\n");
				break;
				default:
				printf("E\n");
				break; 
			}
		}
	}
	return 0;
}
