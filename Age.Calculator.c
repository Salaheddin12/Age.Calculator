
#include<stdio.h>

	void main()
	 { //01-Declaration des variables
		int Day,Dmax ,DayOfBirth,YearOfBirth,Year,MounthOfBirth,	Mounth, Mmax=12 , TotalDays, TotalMounths, TotalYears;
		//02-Les entrees
		do
		{       printf("Enter current date:\n");

		        printf("Day:");
				scanf("%d",&Day);
				printf("Mounth:");
				scanf("%d",&Mounth);
				printf("Year:");
				scanf("%d",&Year);

				printf("Enter date of birth:\n");

				printf("Day of birth:");
				scanf("%d",&DayOfBirth);
				printf("Mounth of birth :");
				scanf("%d",&MounthOfBirth);
				printf("Year of birth:");
				scanf("%d",&YearOfBirth);

		} while (YearOfBirth>Year);

		//03-Traitements

		switch(Mounth)
		{
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			Dmax=31;

			break;
			case 4:case 6:case 9:case 11:

			Dmax=30;

			break;
			case 2:
			{
				if(Year%4==0 && Year%100 !=0 || Year%400==0)
			Dmax=29;

				else
			Dmax=28;
			}break;
			default : printf("Erreur:Le mois doit etre compris entre 1 et 12\n");
		}
		if(Day>=1 && Day<=Dmax)
			printf("La date entree %d/%d/%d est correcte\n",Day,Mounth,Year);
		else
            printf("Erreur :Pour Le mois %d ,Le jour ne doit pas depasser %d\n",Mounth,Dmax);

 switch(MounthOfBirth)
		{
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            Dmax=31;

			break;
			case 4:case 6:case 9:case 11:
            Dmax=30;
			break;
			case 2:
			{

				if(YearOfBirth%4==0 && DayOfBirth%100 !=0 || DayOfBirth%400==0)
					{
					 Dmax=29;
					 DayOfBirth=Dmax-DayOfBirth;
					}
				else
					{
					 Dmax=28;
					 DayOfBirth=Dmax-DayOfBirth;
					}
			}break;
			default : printf("Erreur:Le mois doit etre compris entre 1 et 12\n");
		}
		if(Day>=1 && Day<=Dmax)
		printf("La date entree %d/%d/%d est correcte\n",DayOfBirth,MounthOfBirth,YearOfBirth);
		else
            printf("Erreur :Pour Le mois %d , Le jour ne doit pas depasser %d\n",MounthOfBirth,Dmax);

      TotalYears= Year - YearOfBirth -1;
      MounthOfBirth=Mmax-MounthOfBirth-1;
      TotalMounths= Mounth - MounthOfBirth ;
      TotalDays=Day+DayOfBirth;
      if(TotalDays>31)
      {
        TotalDays=TotalDays-31;
        TotalMounths=TotalMounths+1;
      }
      printf("\aAge:\n%d years %d months %d days",TotalYears,TotalMounths,TotalDays);
	 }
