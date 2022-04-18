#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <netdb.h>
#include <arpa/inet.h>
// #include <opencv2/opencv.hpp>

#define MAXLINE 4096

using namespace std;
// using namespace cv;

int main(int argc, char** argv){
    int n;
    int   sockfd, len;
    char  buffer[MAXLINE];
    char flag[4];
    struct sockaddr_in  servaddr;
    FILE *fq;

    if( argc != 2){
        printf("usage: ./client <ipaddress>\n");
        return 0;
    }

    if( (sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0){
        printf("create socket error: %s(errno: %d)\n", strerror(errno),errno);
        return 0;
    }

    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(6666);
    if( inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0){
        printf("inet_pton error for %s\n",argv[1]);
        return 0;
    }

    if( connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) < 0){
        printf("connect error: %s(errno: %d)\n",strerror(errno),errno);
        return 0;
    }

    printf("====== waiting for device's signal sockfd is %d ======\n", sockfd);

    int i = 0;
    while( i < 7 )
    {

        //************  read from device  *********//
        while (1)
        {
            //************  read from device
            bzero( buffer, sizeof(buffer) );
            n = read(sockfd, buffer, MAXLINE);
            printf("buffer is %s\n", buffer);
            printf("the n in read is %d\n", n);
            // if(strcmp(flag,"zzzz") == 0)
            if ( n == 0 )
            // if ( n != MAXLINE )
            // if ( n < 50 )
            {
                printf("***** flag is trigging \n");
                break;
            }
        }
        printf("current i is %d\n", i);
        i++;
    }
    close(sockfd);

    return 0;
}