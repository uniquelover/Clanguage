#include <stdio.h>
#include <string.h>
 
typedef struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} Book;
 
int main(void)
{
   Book book;
 
   strcpy( book.title, "C 语言");
   strcpy( book.author, "Runoob"); 
   strcpy( book.subject, "函数");
   book.book_id = 12345;
 
   printf( "书名是 : %s\n", book.title);
   printf( "作者是 : %s\n", book.author);
   printf( "主题是 : %s\n", book.subject);
   printf( "编号ID : %d\n", book.book_id);
 
   return 0;
}