#include<stdio.h>
#include<string.h>

//input the address and print of 5 person?

struct address{
    int houseNo;
    int blockNo;
    char city[15];
    char state[15];
    char name[15];
};
void printaddress(struct address add);

int main(){

    struct address add[5];
    //input;
    printf("Enter info for person 1:\n");
    printf("Name: ");
    scanf("%s", add[0].name);
    printf("House no: ");
    scanf("%d", &add[0].houseNo);
    printf("Block no: ");
    scanf("%d", &add[0].blockNo);
    printf("city : ");
    scanf("%s", add[0].city);
    printf("state : ");
    scanf("%s", add[0].state);
    
    printf("Enter info for person 2: \n");
    printf("Name: ");
    scanf("%s", add[1].name);
    printf("House no: ");
    scanf("%d", &add[1].houseNo);
    printf("Block no: ");
    scanf("%d", &add[1].blockNo);
    printf("city : ");
    scanf("%s", add[1].city);
    printf("state : ");
    scanf("%s", add[1].state);
    
    printf("Enter info for person 3: \n");
    printf("Name: ");
    scanf("%s", add[2].name);
    printf("House no: ");
    scanf("%d", &add[2].houseNo);
    printf("Block no: ");
    scanf("%d", &add[2].blockNo);
    printf("city : ");
    scanf("%s", add[2].city);
    printf("state : ");
    scanf("%s", add[2].state);
    
    printf("Enter info for person 4: \n");
    printf("Name: ");
    scanf("%s", add[3].name);
    printf("House no: ");
    scanf("%d", &add[3].houseNo);
    printf("Block no: ");
    scanf("%d", &add[3].blockNo);
    printf("city : ");
    scanf("%s", add[3].city);
    printf("state : ");
    scanf("%s", add[3].state);
    
    printf("Enter info for person 5: \n");
    printf("Name: ");
    scanf("%s", add[4].name);
    printf("House no: ");
    scanf("%d", &add[4].houseNo);
    printf("Block no: ");
    scanf("%d", &add[4].blockNo);
    printf("city : ");
    scanf("%s", add[4].city);
    printf("state : ");
    scanf("%s", add[4].state);

    printaddress(add[0]);
    printaddress(add[1]);
    printaddress(add[2]);
    printaddress(add[3]);
    printaddress(add[4]);

    return 0;
}

void printaddress(struct address add){
    printf("Address is : \n Name: %s, Houseno: %d, Blockno: %d, City: %s, State: %s \n", add.name, add.houseNo, add.blockNo, add.city, add.state);
}