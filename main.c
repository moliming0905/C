# include <stdlib.h>
# include <stdio.h>
# include <windows.h>

//system����������stdlib.h���С�
int main(){
	MessageBoxA(0,"����","����",0);
	//��QQ
	system("\"D:\\Program Files (x86)\\Tencent\\QQ\\Bin\\QQScLauncher.exe\"");
	//��ͣһ���
	_sleep(1000);
	//��ʾ�����б�
	system("tasklist");
	//�ɵ�QQ����
	_sleep(1000);
	system("taskkill /f /im QQ.exe");
	getchar();
	return 0;
}