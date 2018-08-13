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
