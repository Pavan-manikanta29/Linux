#include<iostream>
#include<fcntl.h>
#include<unistd.h>
#include<cstring>
using namespace std;
int main(){
const char *files[]={"file1.txt","file2.txt","file3.txt"};
const char *text = "After this month there is a august month in that month we can celebrate the independence day at 15th of aug..";
for(int i=0;i<(sizeof(files)/sizeof(files[0]));i++){
int fd = open(files[i],O_RDWR|O_CREAT|O_TRUNC,0644);
if(fd==-1){
cerr<<"error occured in opening a file"<<files[i];
continue;
}
cout<<"opened "<<files[i]<<"\n";\
ssize_t written=write(fd,text,strlen(text));
if(written ==-1){
cerr<<"error occured in written mode\n";
return 1;
}
cout<<"data can be written in "<<files[i];
lseek(fd,0,SEEK_SET);
char buffer[200];
ssize_t bytes=read(fd,buffer,sizeof(buffer)-1);
buffer[bytes]='\0';
cout<<buffer;
}

return 0;
}
