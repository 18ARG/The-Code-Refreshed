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
	printf("请按任意键进入");
	color(3);
	puts("THE CODE OF THE WASHER");
	color(7);
	puts("温馨提示：请开大写锁定\n");
	printf("18");
	color(11);
	printf("A");
	color(14);
	printf("R");
	color(10);
	printf("G");
	color(7);
	printf("出品\n制作人：三千焦\n测试人：裹严实\n设计人：三千焦&还有谁\n");
	puts("测试版本,如有bug或规则错误请联系制作人\n");
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
	printf("\n加载完毕！");
	loading(0.5);
	system("cls");
	//printf("输入S查看开场动画(温馨提示：五毛钱特效)\n输入其他字符直接进入游戏\n\n请输入：");
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
	puts("\n地图：");
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
	printf("数据生成中...\n");
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
	printf("数据生成完毕!\n\n");
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
	printf("地图生成中...\n");
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
	printf("地图生成完毕!按任意键查看地图\n\n");
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
	} else printf("未知...\n");
}
void printsitu() {
	psS();
	for(int i=tct; i>0; i--)printcar(i);
	printf("你位于(%d,%d)",x+1,y+1);
	printnode(mp[x][y]);
	printf(",");
	printf("输入M移动(机会还有%d次),输入Q请求提示,输入H提交,输入O结束全局\n",ct);
}
void cardo(char A) {
	if(A=='0') {
		system("cls");
		printsitu();
		return;
	}
	if(A!='U'&&A!='D'&&A!='R'&&A!='L'||ct<1) {
		system("cls");
		if(ct>0)printf("方向不存在!\n");
		else printf("机会已用完!\n");
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
			printf("输入移动方向，按0取消\n");
			scanf("%s",dire);
			cardo(dire[0]);
		} else if(doer[0]=='Q') {
			printf("获取提示(5分) 购买次数(10分) 输入所需格点 或输入W购买步数\n");
			scanf("%s",dire);
			if(dire[0]=='W') {
				if(tct>=8){
					printf("你氮腾啊，真是土豪，可惜已经卖空了\n");
					loading(1.5);
					system("cls");
					printsitu();
					continue;
				}
				printf("确认付款？按Y确定\n");
				scanf("%s",dire+2);
				if(dire[2]=='Y') {
					tct++;
					ct++;
					cost+=10;
				}
			} else if(!tip[dire[0]-'A'][dire[1]-'1']&&'A'<=dire[0]&&'F'>=dire[0]&&'1'<=dire[1]&&'4'>=dire[1]&&luck[dire[1]-'1']!=dire[0]-'A')
				tip[dire[0]-'A'][dire[1]-'1']=1;
			else {
				printf("请求错误!\n");
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
			printf("输入上交格点,按G取消\n");
			scanf("%s",dire);
			if('A'>dire[0]||'F'<dire[0]||'1'>dire[1]||'4'<dire[1]) {
				if(dire[0]!='G')printf("格点不存在");
				loading(1);
				system("cls");
				printsitu();
				continue;
			}
			printf("输入答案,按0取消\n");
			scanf("%s",ansss);
			if(ansss[0]=='0') {
				system("cls");
				printsitu();
				continue;
			}
			guess[dire[0]-'A'][dire[1]-'1']=scr[dire[0]-'A'][dire[1]-'1']=ansss[0];
		} else if(doer[0]=='O') {
			printf("确定要结束吗？如果确定输入Y，否则输入其他任意字符\n");
			scanf("%s",dire);
			if(dire[0]=='Y')over=1;
		} else {
			printf("错误的命令!\n");
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
	printf("你的总分是——");
	if(tot>=120)color(10);
	else if(tot>=72)color(7);
	else if(tot>0)color(12);
	else color(4);
	loading(1);
	printf("%d！\n",tot);
	color(7);
	for(int i=0; i<6; i++) {
		for(int j=0; j<4; j++) {
			scr[i][j]=ans[i][j];
		}
	}
	printf("按任意键查看答案\n");
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
