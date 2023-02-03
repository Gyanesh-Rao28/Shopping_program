#include<stdio.h>
#include<string.h>
    char name[15];
    char username[10],username1[10];
    char state[15],district[15],city[15],area[15];
    int houseN,streetN,pincode;
    int password,password1;
    int Pno;
void detail()
{
                                 printf("\nEnter your Name:-");
                scanf("%s",&name);
                                 printf("\nEnter your User Name:-");
                scanf("%s",&username);
                                 printf("\nEnter your password(should be in number):-");
                scanf("%d",&password);
                                 printf("\nEnter your Phone number:-");
                scanf("%d",&Pno);
                                 printf("\nEnter your state:-");
                scanf("%s",&state);
                                 printf("\nEnter your district:-");
                scanf("%s",&district);
                                 printf("\nEnter your city:-");
                scanf("%s",&city);
                                printf("\nEnter your area:-");
                scanf("%s",&area);
                                 printf("\nEnter your house number:-");
                scanf("%d",&houseN);
                                printf("\nEnter your street number:-");
                scanf("%s",&streetN);
                                 printf("\nEnter your pincode:-");
                scanf("%d",&pincode);
}
int main()
{
 static int totalCost;
 int i,j,choice,c=1,a[12],cost[12];
 for(i=0;i<12;i++)
 a[i]=0;

 char items[12][100]={"milk",
 "butter",
 "eggs",
 "yogurt",
 "bread",
 "cereal",
 "chips",
 "nuts",
 "banana",
 "oranges",
 "mango",
 "pineapple"
 };
detail();
printf("**********************************************************************************************************************");
 printf("\n\nHello! %s, Welcome to our Online Shop.\n",&name);
 do{
  //C is 1 by default
  if(c==1){
  printf("\n\nEnter:-\n1 - Dairy\n2 - Packaged goods \n3 - Fruits\nAny other number to exit\n");
  scanf("%d",&choice);
  //------------start-------------
  switch(choice)
  {
      //--------------TAG1-------------
   case 1:
   {
    int dairyChoice;
    printf("\n\nEnter:-\n1 - milk(500mL) - Rs.26\n2 - Butter(250gm)- Rs.30\n3 - eggs(1dozen) - Rs.55\n4 - yogurt(250gm) - Rs.35\nAny other number to exit\n");
    scanf("%d",&dairyChoice);
    cost[0]=26;
    cost[1]=30;
    cost[2]=55;
    cost[3]=35;
    switch(dairyChoice)
    {
     case 1:
     {
      int num;
      printf("You chose milk(1L) with Rs.26.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       totalCost+=26;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose Butter(250gm) with Rs.30.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[1]++;
       totalCost+=30;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose eggs(1dozen) with Rs.55.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[2]++;
       totalCost+=55;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 4:
     {
      int num;
      printf("You chose yogurt(250gm) with Rs.35.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalCost+=35;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from Dairy\n");
      break;
     }
    }
    break;
   }
   //------------------TAG2----------------
   case 2:
   {
    int packagedChoice;
    printf("\n\nEnter:-\n1 - bread - Rs.15\n2 - cereal - Rs.45\n3 - chips - Rs.10\n4 - nuts - Rs.45\nAny other number to exit\n");
    scanf("%d",&packagedChoice);
    cost[4]=15;
    cost[5]=45;
    cost[6]=10;
    cost[7]=45;
    switch(packagedChoice)
    {
     case 1:
     {
      int num;
      printf("You chose bread Shoes for Rs.15.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalCost+=15;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose cereal for Rs.45.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalCost+=45;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose chips for Rs.10.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[6]++;
       totalCost+=10;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 4:
     {
      int num;
      printf("You chose nuts for Rs.45.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[7]++;
       totalCost+=45;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from packaged Category\n");
      break;
     }
    }
    break;
   }
   //--------------TAG3----------------
   case 3:
   {
    int fruitChoice;
    printf("\n\nEnter:-\n1 - banana(1dozen) - Rs.40\n2 - oranges(1kg) - Rs.80\n3 - mango(1kg) - Rs.120\n4 - pineapple - Rs.80\nAny other number to exit\n");
    scanf("%d",&fruitChoice);
    cost[8]=40;
    cost[9]=80;
    cost[10]=120;
    cost[11]=80;
    switch(fruitChoice)
    {
     case 1:
     {
      int num;
      printf("You chose to buy banana for Rs.40.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[8]++;
       totalCost+=40;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose to buy orange for Rs.80.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[9]++;
       totalCost+=80;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose to buy mango for Rs.120.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[10]++;
       totalCost+=120;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 4:
     {
      int num;
      printf("You chose to buy pineapple for Rs.80.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[11]++;
       totalCost+=80;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from fruits Category\n");
      break;
     }
    }
    break;
   }
   default:
   {
    printf("Enter Valid Categories Choice\n");
    break;
   }
  }
  //-----------------item list ended-------------------------
  //----------------------bill start-------------------------
  printf("\n\n%s's cart\n",name);
  printf("\nId\tItems\t\t\tQuantity\t\t\tCost\n");
  for(i=0;i<12;i++)
  {
   if(a[i]!=0)
   {
    printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
   }
  }
  printf("Total Cost\t\t\t\t\t%d\n",totalCost);
  printf("\n\nEnter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
  scanf("%d",&c);
 }
  if(c==2)
  {
   int id;
   printf("Enter id to delete item\n");
   scanf("%d",&id);
   if(id<12&&id>0){
   totalCost=totalCost-(cost[id]*a[id]);
   a[id]=0;
   }
   else{
    printf("Enter Valid id\n");
   }
       printf("Revised Items \n");
       printf("Id\tItems\t\t\tQuantity\t\tCost\n");
            for(i=0;i<12;i++)
      {
     if(a[i]!=0)
      {
    printf("%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
      }
     }
        printf("Total Cost\t\t\t\t\t%d\n",totalCost);
        printf("\n\nEnter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
     scanf("%d",&c);
  }

 }while(c==1 || c==2);
 printf("==>Your Final Cost is Rs.%d<==\n",totalCost);
 printf("Order will be delivered to your address:-HouseNo.%d,StreetNo.%d,%s,%s,%s,%d. \n",houseN,streetN,area,district,state,pincode);
 printf("\n\n");
 printf("******************************Thank You %s for Choosing Us and Visit us again.***************************\n",name);
}

