#include<stdio.h>
#include<string.h>
#include<stdlib.h>


// char filecreater(char filename){
//     FILE *fptr;
//     fptr = fopen(filename,"w");

//     if(fptr != NULL) {
//         printf("%s was created successfully!");
//     }
//     else{
//         printf("Cannot create %s ",filename);
//     }

// }
// void starter() {
//     printf("\nEnter 'o' to open a file ,'c' to create file, 'm' to modify/add content to a file,  'e' to exit the text editor: ");
//     char input_char;
//     scanf("%c",&input_char);
//     FILE *ptr;
   

   
//     if(input_char == 'o')
//     {
//         char file_name[100];
//         printf("Enter name of file you want to open: ");
//         scanf("%s",file_name);
//         ptr = fopen(file_name,"r");
//         if(ptr != NULL)
//         {
//         printf("%s was oppened successfully",file_name);
//         char ch;
//         ch = fgetc(ptr);
//         while(ch != EOF) {
//             printf("%c",ch);
//             ch = fgetc(ptr);
//         }
//         }
//         else
//         {
//         printf("File doesn't exist !");
//         }
//         fclose(ptr);
//     }


//     if(input_char == 'c'){
//        char file_name[20];
//        printf("Name your file: ");
//        scanf("%s",&file_name);
//        ptr = fopen(file_name,"w");
//        if(ptr != NULL){
//         printf("%s was created successfully",file_name);
//         }
//         else{
//         printf("Error!");
//         }

//     }
//     if(input_char == 'c') 
//     {   
//         char file_name[15];
//         printf("Enter file name: ");
//         scanf("%s",&file_name);
//         char created_file = filecreater(file_name);
//     }


//     if(input_char == 'm'){
//         char file_name[20];
//         printf("Enter file name: ");
//         scanf("%s",&file_name);
//         ptr = fopen(file_name,"a");
//         char a[1000];
//         printf("Enter data to add to file: ");
//         scanf("%[^\n]",&a);
//         for(int i = 0; i < strlen(a); i++)
//         {
//         putc(a[i],ptr);
//         }
//         fclose(ptr);
//     }


//     else if(input_char == 'e'){
//         NULL;
//     }
// }

// int main() {
//     printf("### File manager###\n");
//     starter();
// }

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

    printf("\nEnter\n 'c' to create\n 'o' to open\n 'm' to modify\n 'd' to delete a file: ");
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

    else {
        printf("Invalid input!");
    }
}