# include <stdlib.h>
# include <stdio.h>
# include <windows.h>

//system函数包含在stdlib.h库中。
int main(){
	MessageBoxA(0,"测试","测试",0);
	//打开QQ
	system("\"D:\\Program Files (x86)\\Tencent\\QQ\\Bin\\QQScLauncher.exe\"");
	//暂停一会儿
	_sleep(1000);
	//显示任务列表
	system("tasklist");
	//干掉QQ进程
	_sleep(1000);
	system("taskkill /f /im QQ.exe");
	getchar();
	return 0;
}