#include<stdio.h>
#include<conio.h>
void main()
{
	int cost,cs,w,m,l,s,i,n;
	clrscr();
		printf("****WELCOME TO TECH YUVA****\n");
		printf("=========================\nSPECIAL OFFER TODAY\n==========================\n");
		printf("1.MOBILES\n2.LAPTOPS\n3.WATCHES\n4.BOOKS\n5.SHOES\n6.MENS&WOMENS WEAR\n");
		printf("PLEASE SELECT THE ABOVE:");
		scanf("%d",&cs);
	switch(cs)
	{
		case 1:
		{
		printf("SELECT THE BRAND\n");
		printf("1.samsung\n2.lenovo\n3.moto\n");
		printf("please enter the brand:");
		scanf("%d",&w);
	switch(w)
	{
		case 1:
		{
		printf("1.samsung s7edge\n2.samsung A5\n3.samsung4Gprime\n ");
		printf("please enter your choice:");
		scanf("%d",&m);
	switch(m)
	{
		case 1:
		{
		printf("\tSAMSUNG S7 EDGE\nMRP=`22000'\nDISCOUNT=10%\nwarranty-one year");
		break;
		}
		case 2:
		{
		printf("\tSAMSUNG A5\nMRP=`15000'\nDISCOUNT=10%\nwarranty-two year");
		break;
		}
		case 3:
		{
		printf("\tSAMSUNG 4GPRIME\nMPR=`32000'\nwarrenty three years");
		break;
		}
		default :
		{
		printf("sold out");
		}
	}
		break;
		}
		case 2:
		{
		printf("1.lenovo k3note\n2.lenovo e5\n3.lenovo wibe\n ");
		printf("please enter your choice:");
		scanf("%d",&m);
	switch(m)
	{
		case 1:
		{
		printf("\tLENOVO K3\nMRP=`12999'\nDISCOUNT=20%\nwarranty-one year");
		break;
		}
		case 2:
		{
		printf("\tLENOVO E5\nMRP=`11000'\nDISCOUNT=10%\nwarranty-two year");
		break;
		}
		case 3:
		{
		printf("\tLENOVO WIBE\nMPR=`32899'\nwarrenty three years");
		break;
		}
		default :
		{
		printf("sold out");
		}
	}
		break;
		}
		case 3:
		{
		printf("1.MOTOG3\n2.MOTOE3\n3.MOTOG4\n ");
		printf("please enter your choice:");
		scanf("%d",&m);
	switch(m)
	{
		case 1:
		{
		printf("\tMOTOG3\nMRP=`12999'\nDISCOUNT=10%\nwarranty-one year");
		break;
		}
		case 2:
		{
		printf("\tMOTO E3\nMRP=`19990'\nDISCOUNT=10%\nwarranty-two year");
		break;
		}
		case 3:
		{
		printf("\tMOTO G4\nMPR=`14899'\nwarrenty three years");
		break;
		}
		default :
		{
		printf("sold out");
		}
	}
		break;
		}
		}
		break;
	}
		case 2:
		{
		printf("SELECT THE BRAND\n");
		printf("1.dell\n2.lenovo\n3.hp\n");
		printf("please enter the brand:");
		scanf("%d",&w);
		switch(w)
		{
		case 1:
		{
		printf("1.250gb/500gb/1tb/ssd:128gb\n2.weight:less than 2.34 kg\n3.lcd size:15.6 and above\n ");
		printf("please enter your choice:");
		scanf("%d",&m);
		switch(m)
		{
			case 1:
			{
			printf("\tDELL LAPTOP\n250Gb/500Gb/1tb/ssd:128Gb\nWEIGHT:APPR 2.34kg\nLCD SIZE:15.6inches\nMRP=`22000'\nDISCOUNT=10%\nwarranty-one year");
			break;
			}
			case 2:
			{
			printf("\tDELL LAPTOP\n250Gb/200Gb/1tb/ssd:128Gb\nWEIGHT:APPR 1.54kg\nLCD SIZE:17.6inches\nMRP=`25000'\nDISCOUNT=20%\nwarranty-one year");
			break;
			}
			case 3:
			{
			printf("\tDELL LAPTOP\n250Gb/500Gb/1tb/ssd:128Gb\nWEIGHT:APPR 2.34kg\nLCD SIZE:18.6inches\nMRP=`22000'\nDISCOUNT=10%\nwarranty-one year");
			break;
			}
			default :
			{
			printf("sold out");
			}
		}
	break;
	}
		case 2 :
		{
		printf("1.250gb/500gb/1tb/ssd:128gb\n2.weight:less than 2.34 kg\n3.lcd size:15.6 and above\n ");
		printf("please enter your choice:");
		scanf("%d",&m);
		switch(m)
		{
			case 1:
			 {
			printf("\tLENOVO LAPTOP\n250Gb/500Gb/1tb/ssd:128Gb\nWEIGHT:APPR 2.34kg\nLCD SIZE:15.6inches\nMRP=`22000'\nDISCOUNT=10%\nwarranty-one year");
			break;
			}
			case 2:
			{
			printf("\tLENOVO LAPTOP\n250Gb/200Gb/1tb/ssd:128Gb\nWEIGHT:APPR 1.54kg\nLCD SIZE:17.6inches\nMRP=`25000'\nDISCOUNT=20%\nwarranty-one year");
			break;
			}
			case 3:
			{
			printf("\tLENOVO LAPTOP\n250Gb/500Gb/1tb/ssd:128Gb\nWEIGHT:APPR 2.34kg\nLCD SIZE:18.6inches\nMRP=`22000'\nDISCOUNT=10%\nwarranty-one year");
			break;
			}
			default :
			{
			printf("sold out");
			}
		}
	break;
	}
		case 3:
		{
		printf("1.250gb/500gb/1tb/ssd:128gb\n2.weight:less than 2.34 kg\n3.lcd size:15.6 and above\n ");
		printf("please enter your choice:");
		scanf("%d",&m);
		switch(m)
		{
			case 1:
			 {
			printf("\tHP LAPTOP\n250Gb/500Gb/1tb/ssd:128Gb\nWEIGHT:APPR 2.34kg\nLCD SIZE:15.6inches\nMRP=`22000'\nDISCOUNT=10%\nwarranty-one year");
			break;
			}
			case 2:
			{
			printf("\tHP LAPTOP\n250Gb/200Gb/1tb/ssd:128Gb\nWEIGHT:APPR 1.54kg\nLCD SIZE:17.6inches\nMRP=`25000'\nDISCOUNT=20%\nwarranty-one year");
			break;
			}
			case 3:
			{
			printf("\tHP LAPTOP\n250Gb/500Gb/1tb/ssd:128Gb\nWEIGHT:APPR 2.34kg\nLCD SIZE:18.6inches\nMRP=`22000'\nDISCOUNT=10%\nwarranty-one year");
		       break;
			}
			default :
			{
			printf("sold out");
			}
		}
		break;
		}
		}
		break;
		}
		case 3:
		{
		printf("SELECT THE BRAND\n");
		printf("1.fast track\n2.sonata\n3.rolex\n");
		printf("please enter the brand:");
		scanf("%d",&w);
		switch(w)
		{
			case 1:
			{
			printf("1.metal type\n2.leather type\n3.price less than 1000\n ");
			printf("please enter your choice:");
			scanf("%d",&m);
		switch(m)
		{
			case 1:
			{
			printf("\tFAST TRACK\nMETAL TYPE\nMRP=`5000'\nDISCOUNT=10%\nwarranty-one year");
			break;
			}
			case 2:
			{
			printf("\tFAST TRACK\nLEATHER TYPE\nMRP=`15000'\nDISCOUNT=10%\nwarranty-two year");
			break;
			}
			case 3:
			{
			printf("\tFAST TRACK\nMPR=`200-1000'\n");
			for(i=1;i<5;i++)
			{
			n=i*250;
			printf("%d.fast track-%d\n",i,n);
			}
			break;
			}
			default :
			{
			printf("sold out");
			}
		}
		break;
		}
			case 2:
			{
			printf("1.metal type\n2.leather type\n3.price less than 1000\n ");
			printf("please enter your choice:");
			scanf("%d",&m);
		switch(m)
		{
			case 1:
			{
			printf("\tSONATA\nMETAL TYPE\nMRP=`5000'\nDISCOUNT=10%\nwarranty-one year");
			break;
			}
			case 2:
			{
			printf("\tSONATA\nLEATHER TYPE\nMRP=`15000'\nDISCOUNT=10%\nwarranty-two year");
			break;
			}
			case 3:
			{
			printf("\tSONATA\nMPR=`200-1000'\n");
			for(i=1;i<5;i++)
			{
			n=i*250;
			printf("%d.SONATA-%d\n",i,n);
			}
			break;
			}
			default :
			{
			printf("sold out");
			}
	}
		break;
		}
		case 3:
		{
			printf("1.metal type\n2.price less than 10000\n ");
			printf("please enter your choice:");
			scanf("%d",&m);
		switch(m)
		{
			case 1:
			{
			printf("\tROLEX\nMETAL TYPE\nMRP=`50000'\nDISCOUNT=10%\nwarranty-one year");
			break;
			}
			case 2:
			{
			printf("\tROLEX\nMPR=`2000-100000'\n");
			for(i=1;i<5;i++)
			{
			n=i*2000;
			printf("%d.fast track-%d\n",i,n);
			}
			break;
			}
			default :
			{
			printf("sold out");
			}
		}
		break;
		}
		}
		break;
		}
		case 4:
			{
			printf("SELECT THE BOOKS\n");
			printf("1.GENERAL KNOWLEDGE\n2.ENGLISH\n3.ARTHEMATICS\n");
			printf("please enter the book:");
			scanf("%d",&w);
		switch(w)
		{
			case 1:
			{
			printf("1.GENERAL KNOWLEDGE BY V.NIKHIL TECH YUVA PUBLICATIONS\n2.GENERAL KNOWLEDGE BY V.ARJUN RCE PUBLICATIONS\n3.GENERAL KNOWLEDGE BY V.CHAKRAVARTHY ECET PUBLICATIONS\n");
			printf("please enter your choice:");
			scanf("%d",&m);
		switch(m)
		{
			case 1:
			{
			printf("\tGENERAL KNOWLEDGE BY V.NIKHIL TECH YUVA PUBLICATIONS\nMRP=`2000'\nDISCOUNT=10%\n");
			break;
			}
			case 2:
			{
			printf("\tGENERAL KNOWLEDGE BY V.ARJUN RCE PUBLICATIONS\nMRP=`1500'\nDISCOUNT=10%\nwarranty-two year");
			break;
			}
			case 3:
			{
			printf("\tGENERAL KNOWLEDGE BY V.CHAKRAVARTHY ECET PUBLICATIONS\\nMPR=`320'\nwarrenty three years");
			break;
			}
			default :
			{
			printf("sold out");
			}
		}
		break;
		}
		case 2:
			{
			printf("1.GENERAL ENGLISH  BY V.NIKHIL TECH YUVA PUBLICATIONS\n2.GENERALENGLISH  BY V.ARJUN RCE PUBLICATIONS\n3.GENERALENGLISH  BY V.CHAKRAVARTHY ECET PUBLICATIONS\n");
			printf("please enter your choice:");
			scanf("%d",&m);
		switch(m)
		{

			case 1:
			{
			printf("\tGENERAL ENGLISH BY V.NIKHIL TECH YUVA PUBLICATIONS\nMRP=`2000'\nDISCOUNT=10%\n");
			break;
			}
			case 2:
			{
			printf("\tGENERAL ENGLISH BY V.ARJUN RCE PUBLICATIONS\nMRP=`1500'\nDISCOUNT=10%\nwarranty-two year");
			break;
			}
			case 3:
			{
			printf("\tGENERAL ENGLISH BY V.CHAKRAVARTHY ECET PUBLICATIONS\\nMPR=`320'\nwarrenty three years");
			break;
			}
			default :
			{
			printf("sold out");
			}
		}
		break;
		}
		case 3:
			{
			printf("1.ARTHEMATIC BY V.NIKHIL TECH YUVA PUBLICATIONS\n2.ARTHEMATIC  BY V.ARJUN RCE PUBLICATIONS\n3.ARTHEMATIC  BY V.CHAKRAVARTHY ECET PUBLICATIONS\n");
			printf("please enter your choice:");
			scanf("%d",&m);
		switch(m)
		{
			case 1:
			{
			printf("\tARTHEMATICS \nMRP=`2000'\nDISCOUNT=10%\n");
			break;
			}
			case 2:
			{
			printf("\tARTHEMATICS BY  R.S. AGARWAL\nMRP=`1500'\nDISCOUNT=10%\nwarranty-two year");
			break;
			}
			case 3:
			{
			printf("\tARTHEMATICS BY V.CHAKRAVARTHY ECET PUBLICATIONS\\nMPR=`320'\nwarrenty three years");
			break;
			}
			default :
			{
			printf("sold out");
			}
		}
		break;
		}
		}
		break;
		}
		case 5:
			{
			printf("SELECT THE BRAND\n");
			printf("1.PUMA\n2.FAST TRACK\n3.FORMALS\n");
			printf("please enter the brand:");
			scanf("%d",&w);
		switch(w)
		{
			case 1:
			{
			printf("1.RUNNING SHOES\n2.SPORTS SCHOES\n ");
			printf("please enter your choice:");
			scanf("%d",&m);
		switch(m)
		{
			case 1:
			{
			printf("\tRUNNING SHOES\nMRP=`2200'\nDISCOUNT=10%\nwarranty-one year");
			break;
			}
			case 2:
			
			printf("\tSPORTS SHOES\nMRP=`1500'\nDISCOUNT=10%\nwarranty-two year");
			break;
			}
			case 3:
			{
			printf("\tFORMALS\nMPR=`3200'\nwarrenty three years");
			break;
			}
			default :
			{
			printf("sold out");
			}
		}
		break;
		}
			case 2:
			{
			printf("1.RUNNING SHOES\n2.SPORTS SHOES\n ");
			printf("please enter your choice:");
			scanf("%d",&m);
		switch(m)
		{
			case 1:
			{
			printf("\tRUNNING SHOES\nMRP=`2200'\nDISCOUNT=10%\nwarranty-one year");
			break;
			}
			case 2:
			{
			printf("\tSPORTS SHOES\nMRP=`1500'\nDISCOUNT=10%\nwarranty-two year");
			break;
			}
			case 3:
			{
			printf("\tFORMALS\nMPR=`3200'\nwarrenty three years");
			break;
			}
			default :
			{
			printf("sold out");
			}
		}
		break;
	      }
			case 3:
			{
			printf("1.RUNNING SHOES\n2.SPORTS SCHOES\n ");
			printf("please enter your choice:");
			scanf("%d",&m);
			switch(m)
			{
			case 1:
			{
			printf("\tRUNNING SHOES\nMRP=`2200'\nDISCOUNT=10%\nwarranty-one year");
			break;
			}
			case 2:
			{
			printf("\tSPORTS SHOES\nMRP=`1500'\nDISCOUNT=10%\nwarranty-two year");
			break;
			}
			case 3:
			{
			printf("\tFORMALS\nMPR=`3200'\nwarrenty three years");
			break;
			}
			default :
			{
			printf("sold out");
			}
		}
		break;
		}
		}
	break;
	}
	}
	getch();

}