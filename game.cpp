#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
char *level_msg[] = {" ","LEVEL 1","LEVEL 2","LEVEL 3","LEVEL 4","LEVEL 5","LEVEL 6"};
char b[260];
int cur_pos;
int level =1;
char name[30];
void play_board(int level){
	int j;
	for(int i=0; i<260;i++)
	      	b[i] = 176;

		 b[23]=b[63]=b[83]=b[143]=124;b[163]=b[183]=b[203]=b[103]=124;
		 b[184]=b[185]=b[186]=b[187]=b[188]=b[189]=b[190] =b[206]=124;
		 b[98]=b[118]=b[138]=b[158]=b[178]=b[198]=  b[218]=b[125]=124;
		 b[149]=b[169]=b[129]    =b[130]=b[240]=b[45]=b[65]=b[56]=124;
		 b[223]=b[140]=b[160]   =b[180]=b[200]=b[220]=b[67]=b[68]=124;	
		 b[69]=b[70]=b[126]=      b[32]=b[52]=b[72]=b[127]=b[128]=124;
		 b[73]=b[74]=b[75]=b[76]=b[78]  =b[34]=b[36]=b[38]=b[27]= 124;
		 b[226]=b[228]=b[210]=b[230]=b[93]  =b[113]=b[132]=b[133]=124;
		 b[216]=b[214]=b[134]=b[136]=b[192]= b[193]=b[194]=b[196]=124;
		 b[0]=b[14]=b[20]=b[40]=b[60]=b[80]=        b[100]=b[120]=124;
		 b[253]=b[254]=b[255]=b[256]=  b[248]=b[87]=b[109]=b[139]=124;		 
         if(level %2  ==0)
	     {b[259]  =   220;
	     cur_pos =    259;
		 }else{b[241]=220;
	     cur_pos = 241;  } 		 
	     if(level  ==  1){  
	     cout<<"\t\t\t\t\t"
		 <<level_msg[level];
         b[148]=b[19]=b[2]
		 =b[205]  = b[92]=
		 b[137]=b[218]=2;}
	     else if(level == 7)
	  {
	  	system("cls"); 
	  	cout<<"\n\n\n\n\t\t\tGAME FINISHED !!\n";
	  	cout<<"  \t\t\tCONGRALUATION !!";
	  	getch();
		  system("cls");
		  exit(0);
	  }
	else 
	{
		cout<<"\t\t\t\t\t"<<level_msg[level];
		ran:
		int k = rand()%40;
	    if(k<11) goto ran;
	     for(int i=0; i<k; i++)
	    {  
	    	 j = (rand()%260);
			 if(b[j]!=124)
			 b[j] = 2;
	    }

	}     
		cout<<endl<<"\n\n\n\n\n\t\t\t\t";
	    for(int i=0; i<260; i++)
	     {
	     cout<<b[i];
		    if(((i+1)%20==0) && (i%10==9))
		   {
		   cout<<"\n\t\t\t\t";
		   } 
		 
		 }
	cout<<"\n\n\t\t\t\t<PRESS Q TO QUIT>";	 
} 

int check(){
	for(int i=0; i<260; i++)
		if(b[i]==2)
		  return 1;
		return 0;  
}
void display(){
	    cout<<"\t\t\t\t\t"<<level_msg[level];
		cout<<endl<<"\n\n\n\n\n\t\t\t\t";
	    for(int i=0; i<260; i++)
	     {
	     cout<<b[i];
		    if(((i+1)%20==0) && (i%10==9))
		   {
		   cout<<"\n\t\t\t\t";
		   } 
		 
		 }
	cout<<"\n\n\t\t\t\t<PRESS Q TO QUIT>";	 	 
}
void movedown(){
	    if(cur_pos <= 239)
	       { 
		   if((b[cur_pos+20]!=124))
		    if ((b[cur_pos+20]!=-79))
	       	 {
	       	 b[cur_pos] = 177;
			 cur_pos+=20;
			 b[cur_pos] = 220;
			 }
	       }
}
void moveup(){
	    if(cur_pos >= 20)
	       { if((b[cur_pos-20]!=124))
		       if((b[cur_pos-20]!=-79))
	       	 {
	       	 b[cur_pos] = 177;
			 cur_pos-=20;
			 b[cur_pos] = 220;
			 }
	       }
}
void moveleft(){
	    if(cur_pos %20 != 0)
	       { if((b[cur_pos-1]!=124))
		       if((b[cur_pos-1]!=-79))
	       	 {
	       	 b[cur_pos] = 177;
			 cur_pos-=1;
			 b[cur_pos] = 220;
			 }
	       }
}
void moveright(){
		if(((cur_pos+1)%20!=0))
	       { 
		if((b[cur_pos+1]!=-79))
		   {
		   if((b[cur_pos+1]!=124))
	       	 {
	       	 b[cur_pos] = 177;
			 cur_pos+=1;
			 b[cur_pos] = 220;
			 }
		  }
	       }
}
void next_level(){
								level+=1;
						     	system("cls");
						     	cout<<"\n\n\n\n\n\n\n\n\t\t\t\t"<<level_msg[level];
						     	getch();
						     	system("cls");
						     	play_board(level);
}

int main(){
char choice;
int ch1,ch2;
//	get_detail();
			cout<<"\n\n\t\tEnter Player's Name: ";
			cin>>name;
			system("cls");
	do{
   	cout<<"\t\t1. READ INSTRUCTION\n"<<"\t\t2. PLAY\n"<<"\t\t3. EXIT\n";
	 choice = getch();
	 switch(choice)
     {
  	case '1':
  		 system("cls"); 
		 cout<<"\n\t<GRAB THE SMILIES>\n\t<YOU CAN'T BACKTRACK>";
  		 cout<<"\n\t<USE ARROW KEYS TO MOVE>\n\t<WHEN STUCKED PRESS Q TO QUIT>";
		   break;
    case '2':
    system("cls");
    system("color 1C");
	play_board(1);
	do{  
  	  ch2 = getch();
      if(ch2==0xE0)
	   {
	    ch1= getch();
		if(ch1==80)
	    {	
						    movedown();
			                system("cls");
							if(check()){
							display();
						     }
						     else 
						     	next_level();
					  }															 
	   else if(ch1==72){
							moveup();
			                system("cls");
							if(check()){
							display();
						     }
						     else 
							  next_level();
						}
						
		else if(ch1==75){
							moveleft();
			                system("cls");
							if(check()){
							display();
						     }
						     else  
						     next_level();
						    						
						}
						
		else if(ch1==77){
							moveright();
							system("cls");
							if(check()){
							display();
						     }
						     else 
						     	next_level();
                        }
	   
	   }
     else if(ch2=='q'||ch2=='Q')
		{  
		  level =1;
		  cout<<"\a";
		  system("cls");
		  printf("\n\n\n\t\tBETTER LUCK NEXT TIME %c_%c !!",1,1);
		break;
		}
      }   while(1);     
  break;
   case '3':
     { 
     
      system("cls");
	  cout<<"\a";
	  printf("\n\n\n\t\tHAVE A NICE DAY %c %s !!",1,name);
	  exit(0);
	  } 
 }
getch();
system("cls");
}while(1);
}
