/*
	Program Name: Table
	Author		: Deepak Kumar
*/

#include<stdio.h>
#include<stdlib.h>

int Chr_size(char clm[][30] ,int clm_n);
/*------------------------------- Table Properties ---------------------------*/

int columns	= 5;
int rows	= 20;

char columns_name[][30] = {
	"Name",
	"DOB",
	"Password",
	"id",
	"RegNO"
};

/*------------------------------------ Table ---------------------------------*/

char name[][30]={
	"Deepak_Play",
	"Play",
	"MyTable",
	"Deepak",
	"Play",
	"MyName",
	"Deepak_Play",
	"Play",
	"MyTable",
	"Deepak",
	"Play",
	"MyName",
	"Deepak",
	"Play",
	"ListTables",
	"Deepak",
	"Play",
	"C_Prog",
	"Deepak",
	"Deepak PLY"
};

char DOB[][30]={
	"14/07/1998",
	"19/05/1995",
	"14/07/1998",
	"19/05/1995",
	"14/07/1998",
	"19/05/1995",
	"14/07/1998",
	"19/05/1995",
	"19-05-1995",
	"14/07/1998",
	"14/07/1998",
	"19/05/1995",
	"14/07/1998",
	"19/05/1995",
	"19-05-1995",
	"14/07/1998",
	"14/07/1998",
	"19/05/1995",
	"19/05/1995",
	"14-07-1998"
};

char pass[][30]={
	"programming",
	"play@420",
	"password",
	"Password@",
	"!myPass@",
	"@playHacker",
	"anonymous",
	"hacker@445",
	"programming",
	"play@420",
	"password",
	"Password@",
	"!myPass@",
	"@playHacker",
	"anonymous",
	"whoami",
	"!myPass",
	"@ifconfig",
	"anonymous",
	"MyPass@123"
};

char id[][30]={
	"10011",
	"10012",
	"10013",
	"10014",
	"10015",
	"10016",
	"10017",
	"10018",
	"10019",
	"10020",
	"10021",
	"10022dad",
	"10023",
	"10015",
	"10016",
	"10017",
	"10018",
	"10019",
	"10020",
	"12345"
};

char reg[][30]={
	"14106411",
	"14106412",
	"14106413",
	"14106414",
	"14106415",
	"14106416",
	"14106417",
	"14106418",
	"14106419",
	"14106414",
	"14106415",
	"14106416",
	"14106417",
	"14106418",
	"14106419",
	"14106420",
	"14106421",
	"14106422",
	"14106423",
	"510815103304"
};

/*------------------------------ Program -----------------------------------*/
int main()
{
	int clm_size[columns], f_size, row=0, row_tbl=0;
	clm_size[0] = Chr_size(name	,0);
	clm_size[1] = Chr_size(DOB	,1);
	clm_size[2] = Chr_size(pass	,2);
	clm_size[3] = Chr_size(id	,3);
	clm_size[4] = Chr_size(reg	,4);

	putchar('\n');
	while(row!=rows+4){
		if(row == 0 || row == 2 || row == rows+3){
			putchar(' ');
			for(int i=0; i<columns; i++){
				putchar('+');
				for(int j=0; j<=(clm_size[i]+1); j++){
					putchar('-');
				}
			}
			putchar('+');
			putchar('\n');
		}else if(row == 1){
			putchar(' ');
			for(int i=0; i<columns; i++){
				for(int j=0; j<=clm_size[i]; j++){
					if(columns_name[i][j] == '\0'){
						f_size=j;
						break;
					}
				}
				putchar('|');
				printf(" %s",columns_name[i]);
				for(int j=0;j<=((clm_size[i]-f_size));j++){
					printf(" ");
				}
			}
			putchar('|');
			putchar('\n');
		}else{
			putchar(' ');
			for(int i=0; i<columns;i++){
				if(i == 0){
					for(int j=0;j<=clm_size[i]; j++){
						if(name[row_tbl][j] == '\0'){
							f_size=j;
							break;
						}
					}
					putchar('|');
					printf(" %s",name[row_tbl]);
					for(int j=0;j<=((clm_size[i]-f_size));j++){
						printf(" ");
					}
				}else if(i == 1){
					for(int j=0;j<=clm_size[i]; j++){
						if(DOB[row_tbl][j] == '\0'){
							f_size=j;
							break;
						}
					}
					putchar('|');
					printf(" %s",DOB[row_tbl]);
					for(int j=0;j<=((clm_size[i]-f_size));j++){
						printf(" ");
					}
				}else if(i == 2){
					for(int j=0;j<=clm_size[i]; j++){
						if(pass[row_tbl][j] == '\0'){
							f_size=j;
							break;
						}
					}
					putchar('|');
					printf(" %s",pass[row_tbl]);
					for(int j=0;j<=((clm_size[i]-f_size));j++){
						printf(" ");
					}
				}else if(i == 3){
					for(int j=0;j<=clm_size[i]; j++){
						if(id[row_tbl][j] == '\0'){
							f_size=j;
							break;
						}
					}
					putchar('|');
					printf(" %s",id[row_tbl]);
					for(int j=0;j<=((clm_size[i]-f_size));j++){
						printf(" ");
					}
				}else if(i == 4){
					for(int j=0;j<=clm_size[i]; j++){
						if(reg[row_tbl][j] == '\0'){
							f_size=j;
							break;
						}
					}
					putchar('|');
					printf(" %s",reg[row_tbl]);
					for(int j=0;j<=((clm_size[i]-f_size));j++){
						printf(" ");
					}
				}
			}
			row_tbl++;
			putchar('|');
			putchar('\n');
		}
		row++;
	}
	return 0;
}

int Chr_size(char clm[][30] ,int clm_n){
	int size=0, m_size=0;
	for(int i=0;i<=sizeof(columns_name[clm_n]);i++){
		if(*(*(columns_name+clm_n)+i) =='\0'){
			size=i;
			break;
		}
	}
	if(m_size<size){
		m_size = size;
	}
	for(int i=0; i<=rows; i++){
		for(int j=0; j<=sizeof(*(clm+i)); j++){
			if(*(*(clm+i)+j) =='\0'){
				size=j;
				break;
			}
		}
		if(m_size<size){
			m_size = size;
		}
	}
	return m_size;
}
