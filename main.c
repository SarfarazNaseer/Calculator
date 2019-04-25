void main()
{
	int val1,val2,result;
	int choice;
	clrscr();
	printf("*********Calculator**********");
	printf("\n1) Addition");
	printf("\n2) Subtraction");
	printf("\n3) Multiplication");
	printf("\n4) Division");
	printf("\n5) Exit");
	printf("\nSelect any choice:");
	scanf("%d",&choice);

	switch (choice){

	case 1:
	{  
		printf("Enter first value:");
		scanf("%d",&val1);
		printf("Enter second value:");
		scanf("%d",&val2);
		result=val1+val2;
		printf("Addition =%d",result);
	}
	case 2:
	{
		printf("enter first value :");
		scanf("%d",&val1);
		printf("enter second value:");
		scanf("%d",&val2);
		result=val1-val2;
		printf("subtraction=%d",result);
	}
        case 3:
	{
		printf("Enter First Value :");
		scanf("%d",&val1);
		printf("Enter Second Value:");
		scanf("%d",&val2);
		result=val1*val2;
		printf("Multiplication =%d",result);
	}
	case 4:

	{
	
		printf("Enter First value : ");
	
		scanf("%d",&val1);
		
		printf("Enter Second Value:");
			
		scanf("%d",& val2);
		
		result= val1/val2;
		
		printf("Division = %d" , result);

	}
	
	case 5:

	{
	
		exit(0);
	
	}
	default:
	{
		printf("Invalid...!");
	

	}
        }

	getch();
}
