#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

string ari(string s) {
	int ch=0,score;
	int words=1;
	int sentences=0;
	for(int i=0;s[i]!='\0';i++) {
		if(isalnum(s[i]))
			ch++;
		if(s[i]==' ')
			words++;
		if((s[i]=='.' && s[i+1]==' ')||(s[i]=='.' && s[i+1]=='\0'))
			sentences++;
		if(s[i]=='?' || s[i]=='!')
			sentences++;
			}
	float a=(float)ch/words;
	float b=(float)words/sentences;
	float c=((4.71*a)+(0.5*b)-21.43);
	if((float)c!=(int)c)
		score=c+1;
	else score=c;
	if(score==1){ return "Kindergarten";}
	else if(score==2){return "First/Second Grade";}
	else if(score==3){return "Third Grade";}
	else if(score==4){return "Fourth Grade";}
	else if(score==5){return "Fifth Grade";}
	else if(score==6){return "Sixth Grade";}
	else if(score==7){return "Seventh Grade";}
	else if(score==8){return "Eighth Grade";}
	else if(score==9){return "Ninth Grade";}
	else if(score==10){return "Tenth Grade";}
	else if(score==11){return "Eleventh Grade";}
	else if(score==12){return "Twelfth Grade";}
	else if(score==13){return "College student";}
	else if(score>13){return "Professor";}
	}
