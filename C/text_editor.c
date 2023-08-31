#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void file_creater(){
    char file_name[15];
    printf("Name your file: ");
    scanf("%s",&file_name);

    FILE *ptr;
    ptr = fopen(file_name,"w");
    if(ptr != NULL) 
    {
        printf("%s was created ",file_name);
    }
    else{
        printf("Error!");
    }
}
void file_opener(){
    char file_name[15];
    printf("Enter name of file: ");
    scanf("%s",&file_name);

    FILE *fptr;
    fptr = fopen(file_name,"r");
    char ch;
    ch = fgetc(fptr);
    if(fptr != NULL) 
    {
    while(ch != EOF)
    {
        printf("%c",ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    }
    else
    {
        printf("Unable to open %s!",file_name);
    }
}


void file_deleter(){
    char file_name[15];
    printf("Enter file name: ");
    scanf("%s",&file_name);

   
    if (strcmp(file_name, "text_editor.c") == 0) {
        printf("Nice try \n Ha ha");
    }
    
    else 
    {
        if(remove(file_name)==0)
        {
            printf("%s was deleted successfully!",file_name);
    }
        else
        {
            printf("Cannot delete %s ",file_name);
    }
    }
} 


void file_modifier(){
    FILE *ptr;
    char file_name[15];
    printf("Enter name of file you want to modify: ");
    scanf("%s",&file_name);
    ptr = fopen(file_name,"a");
    
    char a[50];
    printf("Enter a string: ");
    scanf("%[^\n]",&a);
    for(int i = 0; i < strlen(a); i++){
        putc(a[i],ptr);
    }
    fclose(ptr);
}

int main() {
    printf("\n\t\t\t### File Manager ###");

    printf("\nEnter\n 'c' to create\n 'o' to open\n 'm' to modify\n 'd' to delete a file \n 'e' to exit the program: ");
    char input_char;
    scanf("%s",&input_char);
    
    if(input_char == 'c') 
    {
        file_creater();
    }

    if(input_char == 'o')
    {
        file_opener();
    }

    if(input_char == 'm') 
    {
        file_modifier();
    }

    if(input_char =='d')
    {
        file_deleter();
    }

    if(input_char == 'e') 
    {
        abort();
    }
    else
    {
        printf("Invalid Input!");
    }
    

    main();
}