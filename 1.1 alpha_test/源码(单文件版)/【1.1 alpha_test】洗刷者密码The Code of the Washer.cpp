#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int mp[10][10],luck[4],tot,x,y,a=1,ct=4,tct=4,cost;
char ans[10][10],scr[10][10],guess[10][10],again[5];
bool tip[10][10];
const double sec=0.287/100000000;
void loading(double a) {
	long long b=a/sec;
	for(int i=0; i<b; i++);
}
struct caronce {
	int xx,yy,aa;
} car[10][5];
void color(int a) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
void intodo() {
	printf("�밴���������");
	color(3);
	puts("THE CODE OF THE WASHER");
	color(7);
	puts("��ܰ��ʾ���뿪��д����\n");
	printf("18");
	color(11);
	printf("A");
	color(14);
	printf("R");
	color(10);
	printf("G");
	color(7);
	printf("��Ʒ\n�����ˣ���ǧ��\n�����ˣ�����ʵ\n����ˣ���ǧ��&����˭\n");
	puts("���԰汾,����bug������������ϵ������\n");
	system("pause");
	puts("");
	for(int i=1; i<=100; i++) {
		loading(0.005);
		//system("cls");
		printf("Loading...%03d%%\t",i);
		for(int j=0; j<50; j++) {
			if(i>(j<<1))printf("%%");
			else printf(".");
		}
		puts("");
	}
	printf("\n������ϣ�");
	loading(0.5);
	system("cls");
	//printf("����S�鿴��������(��ܰ��ʾ����ëǮ��Ч)\n���������ַ�ֱ�ӽ�����Ϸ\n\n�����룺");
	//char tyty[5];
	//scanf("%s",tyty);
	/*	if(tyty[0]=='S') {
		system("cls");
		loading(2);
		color(10);
		puts("I am walking about");
		loading(2);
		color(14);
		puts("I am talking aloud");
		loading(2);
		color(9);
		puts("Here We Go");
		loading(2);
		puts("Here We Go");
		color(7);
		loading(2);
		printf("Welcome to");
		loading(0.5);
		printf(".");
		loading(0.5);
		printf(".");
		loading(0.5);
		printf(".");
		loading(2);
		color(11);
		printf("\nTHE CODE OF THE WASHER!\n\n");
		color(7);
		loading(1.8);
	}//*/
	loading(0.2);
	system("cls");
}
void printnode(int a) {
	color(10+a);
	printf("%c",a+'A');
	color(7);
	printf(" ");
}
void printmap() {
	puts("\n��ͼ��");
	printf("  1 2 3 4 5 6\n");
	for(int i=0; i<6; i++) {
		color(7);
		printf("%d ",i+1);
		for(int j=0; j<6; j++) {
			printnode(mp[i][j]);
		}
		puts("");
	}
	color(7);
}
void ansfill() {
	color(6);
	printf("����������...\n");
	color(7);
	loading(0.3);
	for(int i=0; i<6; i++) {
		int a1=rand()%5;
		if(a1==0||a1==2)ans[i][0]='+';
		else if(a1==1||a1==3)ans[i][0]='-';
		else ans[i][0]='*';
		if(ans[i][0]=='*')ans[i][1]=rand()%2+'2';
		else ans[i][1]=rand()%3+'1';
		int a2=rand()%4;
		if(a2==0)ans[i][2]='U';
		else if(a2==1)ans[i][2]='D';
		else if(a2==2)ans[i][2]='L';
		else ans[i][2]='R';
		ans[i][3]=rand()%3+'1';
	}
	for(int i=0; i<4; i++) {
		luck[i]=rand()%6;
		guess[luck[i]][i]=1;
	}
	for(int i=0; i<6; i++) {
		for(int j=0; j<4; j++) {
			if(i!=luck[j])scr[i][j]=' ';
			else scr[i][j]=ans[i][j];
		}
	}
	x=rand()%6;
	y=rand()%6;
	printf("�����������!\n\n");
}
void psS() {
	for(int i=0; i<=12; i++) {
		int j=i>>1;
		if(i==3)printf("  1 2 3 4 5 6");
		else if(i<10&&i>3) {
			color(7);
			printf("%d ",i-3);
			for(int j=0; j<6; j++) {
				printnode(mp[i-4][j]);
			}
		} else printf("              ");
		if(i%2==0)printf("\t\t-----------------");
		else {
			color(7);
			printf("\t\t| ");
			color(10+j);
			printnode(j);
			color(7);
			printf("| %c %c | %c %c |",scr[j][0],scr[j][1],scr[j][2],scr[j][3]);
		}
		puts("");
	}
	puts("");
}
void mapfill() {
	color(12);
	printf("��ͼ������...\n");
	int yet[10];
	memset(yet,0,sizeof(yet));
	for(int i=0; i<6; i++) {
		for(int j=0; j<6; j++) {
			int x=rand()%6;
			while(yet[x]>=6)x=rand()%6;
			mp[i][j]=x;
			yet[x]++;
		}
	}
	loading(0.3);
	color(7);
	printf("��ͼ�������!��������鿴��ͼ\n\n");
	system("pause");
	psS();
	system("pause");
	system("cls");
}
void printcar(int i) {
	printf("No.%d: ",tct+1-i);
	if(i>ct) {
		printf("(%d,%d)",car[i][0].xx+1,car[i][0].yy+1);
		printnode(mp[car[i][0].xx][car[i][0].yy]);
		printf(" a=%d-->%d-->%d-->",car[i][0].aa,car[i][1].aa,car[i][2].aa);
		printf("(%d,%d)",car[i][3].xx+1,car[i][3].yy+1);
		printnode(mp[car[i][3].xx][car[i][3].yy]);
		printf(" a=%d",car[i][3].aa);
		puts("");
	} else printf("δ֪...\n");
}
void printsitu() {
	psS();
	for(int i=tct; i>0; i--)printcar(i);
	printf("��λ��(%d,%d)",x+1,y+1);
	printnode(mp[x][y]);
	printf(",");
	printf("����M�ƶ�(���ỹ��%d��),����Q������ʾ,����H�ύ,����O����ȫ��\n",ct);
}
void cardo(char A) {
	if(A=='0') {
		system("cls");
		printsitu();
		return;
	}
	if(A!='U'&&A!='D'&&A!='R'&&A!='L'||ct<1) {
		system("cls");
		if(ct>0)printf("���򲻴���!\n");
		else printf("����������!\n");
		system("pause");
		printsitu();
		return;
	}
	if(A=='U')x--;
	else if(A=='D')x++;
	else if(A=='L')y--;
	else y++;
	if(x<0)x=5;
	if(x>5)x=0;
	if(y<0)y=5;
	if(y>5)y=0;
	car[ct][0].xx=x;
	car[ct][0].yy=y;
	car[ct][0].aa=a;
	if(ans[mp[x][y]][2]=='U')x=(x-ans[mp[x][y]][3]+'0'+6)%6;
	else if(ans[mp[x][y]][2]=='D')x=(x+ans[mp[x][y]][3]-'0'+6)%6;
	else if(ans[mp[x][y]][2]=='L')y=(y-ans[mp[x][y]][3]+'0'+6)%6;
	else y=(y+ans[mp[x][y]][3]-'0'+6)%6;
	if(ans[mp[x][y]][0]=='+')a+=ans[mp[x][y]][1]-'0';
	else if(ans[mp[x][y]][0]=='-')a-=ans[mp[x][y]][1]-'0';
	else a*=ans[mp[x][y]][1]-'0';
	car[ct][1].xx=x;
	car[ct][1].yy=y;
	car[ct][1].aa=a;
	if(ans[mp[x][y]][2]=='U')x=(x-ans[mp[x][y]][3]+'0'+6)%6;
	else if(ans[mp[x][y]][2]=='D')x=(x+ans[mp[x][y]][3]-'0'+6)%6;
	else if(ans[mp[x][y]][2]=='L')y=(y-ans[mp[x][y]][3]+'0'+6)%6;
	else y=(y+ans[mp[x][y]][3]-'0'+6)%6;
	if(ans[mp[x][y]][0]=='+')a+=ans[mp[x][y]][1]-'0';
	else if(ans[mp[x][y]][0]=='-')a-=ans[mp[x][y]][1]-'0';
	else a*=ans[mp[x][y]][1]-'0';
	car[ct][2].aa=a;
	if(ans[mp[x][y]][2]=='U')x=(x-ans[mp[x][y]][3]+'0'+6)%6;
	else if(ans[mp[x][y]][2]=='D')x=(x+ans[mp[x][y]][3]-'0'+6)%6;
	else if(ans[mp[x][y]][2]=='L')y=(y-ans[mp[x][y]][3]+'0'+6)%6;
	else y=(y+ans[mp[x][y]][3]-'0'+6)%6;
	if(ans[mp[x][y]][0]=='+')a+=ans[mp[x][y]][1]-'0';
	else if(ans[mp[x][y]][0]=='-')a-=ans[mp[x][y]][1]-'0';
	else a*=ans[mp[x][y]][1]-'0';
	car[ct][3].xx=x;
	car[ct][3].yy=y;
	car[ct][3].aa=a;
	ct--;
}
void play() {
	bool over=0;
	char doer[5],dire[5],d2[5];
	while(!over) {
		scanf("%s",doer);
		if(doer[0]=='M') {
			printf("�����ƶ����򣬰�0ȡ��\n");
			scanf("%s",dire);
			cardo(dire[0]);
		} else if(doer[0]=='Q') {
			printf("��ȡ��ʾ(5��) �������(10��) ���������� ������W������\n");
			scanf("%s",dire);
			if(dire[0]=='W') {
				if(tct>=8){
					printf("�㵪�ڰ���������������ϧ�Ѿ�������\n");
					loading(1.5);
					system("cls");
					printsitu();
					continue;
				}
				printf("ȷ�ϸ����Yȷ��\n");
				scanf("%s",dire+2);
				if(dire[2]=='Y') {
					tct++;
					ct++;
					cost+=10;
				}
			} else if(!tip[dire[0]-'A'][dire[1]-'1']&&'A'<=dire[0]&&'F'>=dire[0]&&'1'<=dire[1]&&'4'>=dire[1]&&luck[dire[1]-'1']!=dire[0]-'A')
				tip[dire[0]-'A'][dire[1]-'1']=1;
			else {
				printf("�������!\n");
				loading(1);
				system("cls");
				printsitu();
				continue;
			}
			guess[dire[0]-'A'][dire[1]-'1']=scr[dire[0]-'A'][dire[1]-'1']=ans[dire[0]-'A'][dire[1]-'1'];
			system("cls");
			printsitu();
		} else if(doer[0]=='H') {
			char ansss[5];
			printf("�����Ͻ����,��Gȡ��\n");
			scanf("%s",dire);
			if('A'>dire[0]||'F'<dire[0]||'1'>dire[1]||'4'<dire[1]) {
				if(dire[0]!='G')printf("��㲻����");
				loading(1);
				system("cls");
				printsitu();
				continue;
			}
			printf("�����,��0ȡ��\n");
			scanf("%s",ansss);
			if(ansss[0]=='0') {
				system("cls");
				printsitu();
				continue;
			}
			guess[dire[0]-'A'][dire[1]-'1']=scr[dire[0]-'A'][dire[1]-'1']=ansss[0];
		} else if(doer[0]=='O') {
			printf("ȷ��Ҫ���������ȷ������Y�������������������ַ�\n");
			scanf("%s",dire);
			if(dire[0]=='Y')over=1;
		} else {
			printf("���������!\n");
		}
		system("cls");
		printsitu();
	}
}
void calc() {
	system("cls");
	for(int i=0; i<6; i++) {
		for(int j=0; j<4; j++) {
			if(scr[i][j]==' ') {
				printnode(i);
				color(240);
				printf("%d(%c)",j+1,' ');
				printf(" NULL \n");
				continue;
			}
			if(luck[j]==i) {
				printnode(i);
				color(208);
				printf("%d(%c)",j+1,scr[i][j]);
				printf(" given\n");
				continue;
			}
			if(tip[i][j]) {
				printnode(i);
				color(224);
				printf("%d(%c)",j+1,scr[i][j]);
				printf(" tips \n");
				tot-=5;
				continue;
			}
			if(j==2&&ans[i][3]=='3') {
				if(ans[i][2]=='D'||ans[i][2]=='U') {
					if(guess[i][j]=='D'||guess[i][j]=='U') {
						printnode(i);
						color(160);
						printf("%d(%c)",j+1,scr[i][j]);
						printf(" right\n");
						color(7);
						tot+=6;
					} else {
						printnode(i);
						color(192);
						printf("%d(%c)",j+1,scr[i][j]);
						printf(" wrong\n");
						color(7);
					}
				} else {
					if(guess[i][j]=='L'||guess[i][j]=='R') {
						printnode(i);
						color(160);
						printf("%d(%c)",j+1,scr[i][j]);
						printf(" right\n");
						color(7);
						tot+=6;
					} else {
						printnode(i);
						color(192);
						printf("%d(%c)",j+1,scr[i][j]);
						printf(" wrong\n");
						color(7);
					}
				}
			} else if(guess[i][j]==ans[i][j]) {
				printnode(i);
				color(160);
				printf("%d(%c)",j+1,scr[i][j]);
				printf(" right\n");
				color(7);
				tot+=6;
			} else {
				printnode(i);
				color(192);
				printf("%d(%c)",j+1,scr[i][j]);
				printf(" wrong\n");
				color(7);
			}
		}
	}
	tot-=cost;
	color(7);
	printf("����ܷ��ǡ���");
	if(tot>=120)color(10);
	else if(tot>=72)color(7);
	else if(tot>0)color(12);
	else color(4);
	loading(1);
	printf("%d��\n",tot);
	color(7);
	for(int i=0; i<6; i++) {
		for(int j=0; j<4; j++) {
			scr[i][j]=ans[i][j];
		}
	}
	printf("��������鿴��\n");
	system("pause");
	psS();
	for(int i=tct; i>0; i--)printcar(i);
	system("pause");
}
int main() {
	srand(time(NULL));
	intodo();
	ansfill();
	mapfill();
	printsitu();
	play();
	calc();
	return 0;
}
