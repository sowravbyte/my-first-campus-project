#include <stdio.h>
#include <string.h>
struct node{
    int id;
 char name[30];
char catagory[30];
char loaction[30];
char date[11];
char status[10];
};
int generateId(){
    struct node p;
    FILE *fp;
    int id = 1000;
    fp = fopen("file.txt", "rb");
    if(fp == NULL){
        return 1001;
    }
    while(fread(&p, sizeof(p), 1,fp)){
        id = p.id;
    }
    fclose(fp);
    return id + 1;
}
void lostIteam(struct node *p){
     p->id = generateId();
    printf("Item name : ");
    scanf(" %29[^\n]", p->name);
      printf("Catagory : ");
    scanf(" %29[^\n]", p->catagory);
      printf("Location : ");
    scanf(" %29[^\n]", p->loaction);
      printf("Date : ");
   scanf(" %10[^\n]", p->date);
    FILE *fp;
    fp = fopen("file.txt", "ab");
    if(fp == NULL){
        printf("file not created\n");
        return;
    }
    strcpy(p->status, "Lost");
       fwrite(p, sizeof(*p), 1,fp);
    fclose(fp);
    printf("Item reported successfully!!\n");
     printf("Item ID: %d\n", p->id);
     printf("\n\n");
}
void reportFound(struct node *p){
         p->id = generateId();
         printf("Item name : ");
       scanf(" %29[^\n]", p->name);
      printf("Catagory : ");
    scanf(" %29[^\n]", p->catagory);
      printf("Location : ");
    scanf(" %29[^\n]", p->loaction);
      printf("Date : ");
   scanf(" %10[^\n]", p->date);
     FILE *fp;
    fp = fopen("file.txt", "ab");
    if(fp == NULL){
        printf("file not created\n");
        return;
    }
    strcpy(p->status, "Found");
       fwrite(p, sizeof(*p), 1,fp);
    fclose(fp);
    printf("Item reported successfully!!\n");
     printf("Item ID: %d\n", p->id);
     printf("\n\n");
}
void viewItems(struct node *p){
  FILE *fp;
  fp = fopen("file.txt","rb");
   if(fp == NULL){
        printf("file not created\n");
        return;
    }
    printf("\n========== ALL ITEMS ==========\n");
    while(fread(p, sizeof(*p), 1, fp)){
         printf("ID       : %d\n", p->id);
        printf("Name     : %s\n", p -> name);
        printf("Category : %s\n", p -> catagory);
        printf("Location : %s\n", p -> loaction);
        printf("Date     : %s\n", p -> date);
        printf("Status   : %s\n", p -> status);
        printf("-------------------------\n");
    }
    fclose(fp);
    printf("\n\n");
}
void searchItem (struct node *p){
  FILE *fp;
  fp = fopen("file.txt","rb");
  if(fp == NULL){
        printf("file not created\n");
        return;
    }
    int id;
    printf("enter item id : "); scanf("%d", &id);
    int found = 0;
    while(fread(p, sizeof(*p), 1, fp)){
      if(p -> id == id){
           printf("ID       : %d\n", p->id);
        printf("Name     : %s\n", p -> name);
        printf("Category : %s\n", p -> catagory);
        printf("Location : %s\n", p -> loaction);
        printf("Date     : %s\n", p -> date);
        printf("Status   : %s\n", p -> status);
        found = 1;
        break;
      }
    }
    fclose(fp);
    if(found == 0){
      printf("your item not found\n");
    }
    printf("\n\n");
}
void dltItem(struct node *p){
  FILE *fp, *temp;
  fp = fopen("file.txt","rb");
   if(fp == NULL){
        printf("file not created\n");
        return;
    }
    temp = fopen("temp.txt","wb");
     if(temp == NULL){
      fclose(fp);
        printf("file not created\n");
        return;
    }
    int id;
    printf("enter item id : "); scanf("%d", &id);
    int found = 0;
    while(fread(p,sizeof(*p),1,fp)){
      if(p -> id == id){
        found = 1;
        continue;
      }
       fwrite(p, sizeof(*p), 1, temp);
    }
    fclose(fp); fclose(temp);
    if(found == 0){
      remove("temp.txt");
        printf("Item not found!\n");
        return;
    }
      remove("file.txt");
    rename("temp.txt", "file.txt");
    printf("item delete successfully!!\n");
    printf("\n\n");
}
int main(){
    struct node p;
    printf("\n\n ========== CAMPUS FIND ==========\n\n");
    printf("\n\n");
    int choice;
    while(1){
        printf("1. Report Lost Item\n");
          printf("2. Report Found Item\n");
            printf("3. View All Items\n");
              printf("4. Search Item\n");
                printf("5. Delete Item\n");
                  printf("6. Exit\n");
                  printf("\n\n");
                  printf("enter your choice : ");
                  if(scanf("%d", &choice) != 1){
                    while (getchar() != '\n');
                    printf("invalid input\n");
                    continue;
                  }
                  switch(choice){
                    case 1 : lostIteam(&p); break;
                    case 2: reportFound(&p); break;
                    case 3: viewItems(&p); break;
                    case 4: searchItem(&p); break;
                    case 5: dltItem(&p); break;
                    case 6:
                    printf("thank you for using!!\n");
                    return 0;
                    default:
                    printf("invalid choice...please enter valid choice!!\n");
                    break;
                  }
    }
    return 0;
}
