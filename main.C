#include <stdio.h>
#include <stdlib.h>
void list(){
    char gray[10]="\033[1;30m";
    char red[10]="\033[1;31m";
    char green[10]="\033[1;32m";
    char yellow[10]="\033[1;33m";
    char blue[10]="\033[1;34m";
    char cyan[10]="\033[1;36m";
	printf("%s[1] %supdate && upgrade Termux\n",yellow,blue);
    system("sleep 0.03");
	printf("%s[2] %sinstall all pkg Termux\n",yellow,blue);
	system("sleep 0.03");
	printf("%s[3] %sinstall metasploit \n",yellow,blue);
	system("sleep 0.03");
	printf("%s[4] %sinstall ngrok \n",yellow,blue);
	system("sleep 0.03");
	printf("%s[5] %sopen code script\n",yellow,blue);
	system("sleep 0.03");
	printf("%s[6] %sMy account on Github\n",yellow,blue);
	system("sleep 0.03");
	printf("%s[7] %sMy account on fb\n",yellow,blue);
	system("sleep 0.03");
	printf("%s[0] %sexit\n",yellow,blue);
	system("sleep 0.03");
}
void logo (){
    printf("\033[1;32m\n");
	system("figlet bash sh");
}
void _main_(){
	int choose;
	printf("\033[0m[>]\033[1;30m Choose options : ");
	scanf("%d",&choose);
	if(choose == 1){
		system("pkg update && pkg upgrade && pkg clean && ./open3");
	}
	if(choose == 2){
		system("pkg update && pkg upgrade && pkg install git && pkg install wget && pkg install python -y && pkg install python2 -y && pkg install ruby -y && pkg install php -y && pkg install clang -y && pkg install figlet && pkg install micro -y && gem install lolcat && figlet Done |lolcat");
        system("./open3");
    }
    if(choose == 3){
        printf("\033[1;36m\n");
        system("clear ; figlet M");
    	system("pkg install root-repo -y ; pkg install unstable-repo -y ; pkg install x11-repo -y ; pkg install metasploit -y");
    }
    if(choose == 4){
    	system("clear");
    	printf("\033[1;34m\n");
    	system("figlet NGROK");
    	printf("\033[1;33mwelcome to my tools\n");
    	system("wget https://bin.equinox.io/c/4VmDzA7iaHb/ngrok-stable-linux-arm.zip");
        system("unzip ngrok-stable-linux-arm.zip");
        system("rm ngrok-stable-linux-arm.zip && mv ngrok ~");
        system("xdg-open https://dashboard.ngrok.com/get-started/setup");
    }
    if(choose == 5){
    	system("nano V.C");
    }
    if(choose == 6){
    	system("xdg-open https://github.com/bash-sh900");
    	system("./open3");
    }
    if(choose == 0){
    	system("figlet happy day");
    }
    if(choose == 7){
    	system("xdg-open https://www.facebook.com/profile.php?id=100013763140646");
    	system("./open3");
    }
}

int main(){
    system("clear");
    logo();
    list();
    _main_();
	return 0;
}
