#include<stdio.h>
#include<conio.h>
main()
{
	float basesalary,hra,da,ta,gs;
	clrscr();
	printf("enter base salary");
	scanf("%f",&basesalary);
	printf("salary%0f",basesalary);
	hra=(basesalary*10)/100;
	da=(basesalary*5)/100;
	ta=(basesalary*8)/100;
	gs=basesalary+hra+da+ta;
	printf("\nhra%0f\nda%of\nta%0f",hra,da,ta);
	printf("\ngrossalry of%0f",gs);
	getch();
}





