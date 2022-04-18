#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <iostream>

#define MAXLINE 4096

using namespace std;


int main(int argc, char** argv){
    int listenfd, connfd, sockfd, len;
    struct sockaddr_in  servaddr;
    char  buff[4096];
    char flag[4] = {'z', 'z', 'z', 'z'};
    int  n;
    FILE *fp = NULL;

    if( (listenfd = socket(AF_INET, SOCK_STREAM, 0)) == -1 ){
        printf("create socket error: %s(errno: %d)\n",strerror(errno),errno);
        return 0;
    }
    printf("----init socket----\n");

    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(6666);
    //设置端口可重用
    int contain;
    setsockopt(listenfd,SOL_SOCKET, SO_REUSEADDR, &contain, sizeof(int));

    if( bind(listenfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) == -1){
        printf("bind socket error: %s(errno: %d)\n",strerror(errno),errno);
        return 0;
    }
    printf("----bind sucess----\n");

    if( listen(listenfd, 10) == -1){
        printf("listen socket error: %s(errno: %d)\n",strerror(errno),errno);
        return 0;
    }
    printf("----listening listenfd is %d----\n",listenfd);

    struct sockaddr_in client_addr;
    socklen_t size = sizeof(client_addr);
    if( (connfd = accept(listenfd, (struct sockaddr*)&client_addr, &size)) == -1)
    {
        printf("accept socket error: %s(errno: %d)",strerror(errno),errno);
    }
    
    printf("====== host connects device successfully connfd is %d ======\n",connfd);

    int i = 0;
    while( i < 7 )
    {
        len = strlen(flag);
        write(connfd, flag, len);
        printf("flag = %s len = %d \n", flag, len);
        usleep(200000);
        i++;
    }
    close(connfd);
    close(listenfd);
    return 0;
}