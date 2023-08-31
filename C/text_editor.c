#include<stdio.h>
#include<string.h>

void starter() {
    printf("\nEnter 'o' to open a file ,'c' to create file, 'm' to modify/add content to a file,  'e' to exit the text editor: ");
    char input_char;
    scanf("%c",&input_char);
    FILE *ptr;
   
    if(input_char == 'o')
    {
        char file_name[100];
        printf("Enter name of file you want to open: ");
        scanf("%s",file_name);
        ptr = fopen(file_name,"r");
        if(ptr != NULL)
        {
        printf("%s was oppened successfully",file_name);
        char ch;
        ch = fgetc(ptr);
        while(ch != EOF) {
            printf("%c",ch);
            ch = fgetc(ptr);
        }
        }
        else
        {
        printf("File doesn't exist !");
        }
        fclose(ptr);
    }
    else if(input_char == 'c'){
       char file_name[20];
       printf("Name your file: ");
       scanf("%s",&file_name);
       ptr = fopen(file_name,"w");
       if(ptr != NULL){
        printf("%s was created successfully",file_name);
        }
        else{
        printf("Error!");
        }

    }
    else if(input_char == 'm'){
        char file_name[20];
       printf("Enter file name: ");
       scanf("%s",&file_name);
       ptr = fopen(file_name,"a");
        char a[1000];
        printf("Enter data to add to file: ");
        scanf("%[^\n]",&a);
        for(int i = 0; i < strlen(a); i++){
        putc(a[i],ptr);
    }
    fclose(ptr);
    }
    else if(input_char == 'e'){
        NULL;
    }
}

int main() {
    printf("### File manager###\n");
    starter();
}

