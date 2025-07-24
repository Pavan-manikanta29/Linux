#include<fcntl.h>
#include<unistd.h>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
int fd=open("greet.txt",O_WRONLY|O_CREAT,0644);
if(fd==-1){
cerr<<"error occured: ";
return 1;
}
const char *text="hello, Namasthe!\n";
ssize_t buffer_writter = write(fd,text,strlen(text));
if (buffer_writter==-1){
cerr<<"error in write method";
close(fd);
return 1;
}
cout<<"file opened and write system call used ."<< buffer_writter<<endl;

close(fd);
int fd_read = open("greet.txt",O_RDONLY);
char buffer[1024];
ssize_t bytes_read;
while((bytes_read= read(fd_read,buffer,sizeof(buffer)-1))>0){
buffer[bytes_read]='\0';
cout<<buffer;
}
if(bytes_read == -1){
cerr<<"error in reading";
}
close(fd_read);
return 0;
}
