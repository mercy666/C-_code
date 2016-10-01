#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char s[] = "Hello, world!";
    char t[] = "Hello, my friend!";
    int test = strcmp(s, t);
     
    if (test == 0) {
        printf("All right!\n");
    }
    else {
        if (test > 0) {
            printf("%s\n", s);
        }
        else {
            printf("%s\n", t);
        }
    } 
     
    return 0;    
}
 
/* 《程式語言教學誌》的範例程式
    http://pydoing.blogspot.com/
    檔名：cstrcmp.c
    功能：示範 string.h 中函數 strcmp() 的使用
    作者：張凱慶
    時間：西元2010年6月 */