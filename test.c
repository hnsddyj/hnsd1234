#include <stdio.h>
main()
{	int score;
	printf("Please input grade:");
	scanf("%d",&score);
	switch( score/10  )
	{
      case 10:printf("A");break;
      case 9: printf("A");break;
	  case 8: printf("B"); break;
	  case 7: printf("C"); break;
	  case 6: printf("D"); break;
	  case 5: printf("E");break;
    case 4: printf("E");break;
    case 3: printf("E");break;
    case 2: printf("E");break;
    case 1: printf("E");break;
    case 0: printf("E");break;
      default: printf("Illegal grade"); break;
	}
   return 0;}
