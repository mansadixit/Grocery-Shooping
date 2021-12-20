#include<stdio.h>

void veg();

void fruits();

void exotic();

void nv();

int main()

{

int choice,a,b,c,d,e,buy;

char add[300];

printf("Welcome\n Press '1' if you want to know the price of vegetables\n '2' for fruits\n '3' for exotic and non vegetarian products\n");

scanf("%d",&choice);

if(choice==1){

veg();

}

else if(choice==2){

fruits();

}

else if(choice==3){

printf("Press '1' for exotic food items and '2' for non vegetarian products\n");

scanf("%d",&c);

if(c==1){

exotic();

}

else{

nv();

}

}

printf("\nDo you want to buy it?\n Enter 1 for yes and 2 for no:");

scanf("%d",&buy);

if(buy==1){

printf("Enter the address:");

scanf("%s",add);

printf("COD is available\n The product will be delivered in 3-4 shipping days.\n Thank you for shopping with us.");

}

else

printf("Hope we helped you!\nVisit again...");

return 0;

}

void veg()

{

int a;

printf("Press the following number against the vegetable you want to buy mentioned below:\n");

printf("Potato-1\n Onion-2\n Ginger-3\n Garlic-4\n Tomato-5\n Jackfruit-6\n Green Peas-7\n Drumsticks-8\n Raddish-9\n Chilli-10\n");

scanf("%d",&a);

if (a==1)

printf("The price per kg is 40");

else if(a==2)

printf("The price per kg is 30");

else if(a==3)

printf("The price per 1/4 kg is 20");

else if(a==4)

printf("The price per 1/4 kg is 20");

else if(a==5)

printf("The price per kg is 15");

else if(a==6)

printf("The price per kg is 50");

else if(a==7)

printf("The price per kg is 80");

else if(a==8)

printf("The price unit is 10");

else if(a==9)

printf("The price per kg is 45");

else if(a==10)

printf("The price per 1/4 kg is 10");

}

void fruits()

{

int b;

printf("Press the following number against the fruit you want to buy mentioned below:\n");

printf("Apple-1\n Banana-2\n Orange-3\n Mango-4\n Watermelon-5\n Kiwi-6\n Avocado-7\n Pomegranate-8\n Grapes-9\n Muskmelon-10\n");

scanf("%d",&b);

if(b==1)

printf("The price per kg is 140");

else if(b==2)

printf("The price per dosen is 40");

else if (b==3)

printf("The price per kg is 80");

else if (b==4)

printf("The price per kg is 60");

else if (b==5)

printf("The price per kg is 40");

else if (b==6)

printf("The price for 3 units is 120");

else if (b==7)

printf("The price for 2 units is 99");

else if (b==8)

printf("The price per 1/2 kg is 150");

else if (b==9)

printf("The price per kg is 200");

else if (b==10)

printf("The price per unit is 30");

}

void exotic()

{

int d;

printf("Press the following number against the product you want to buy mentioned below:\n");

printf("Baby Corn-1\n Asparagus Beans-2\n Bell Pepper-3\n Brocolli-4\n Chinese Cabbage-5\n Dragon Fruit-6\n Zuchini-7\n Parsley-8\n Jalapeno-9\n");

scanf("%d",&d);

if(d==1)

printf("The price per kg is 150");

else if(d==2)

printf("The price per kg is 70");

else if(d==3)

printf("The price per kg is 208");

else if(d==4)

printf("The price per kg is 90");

else if(d==5)

printf("The price per kg is 40");

else if(d==6)

printf("The price per piece is 125");

else if(d==7)

printf("The price per kg is 124");

else if(d==8)

printf("The price per kg is 320");

else if(d==9)

printf("The price per 1/5 kg is 100");

}

void nv()

{

int e;

printf("Press the following number against the product you want to buy mentioned below:\n");

printf("Egg-1\n Chicken-2\n Fish-3\n Mutton-4\n Prawn-5\n Squid-6\n Beef-7\n Crab-8\n");

scanf("%d",&e);

if (e==1)

printf("The price for 6 pieces is 30");

else if (e==2)

printf("The price per kg is 240");

else if (e==3)

printf("The price per kg is 180");

else if (e==4)

printf("The price per kg is 800");

else if (e==5)

printf("The price per kg is 350");

else if (e==6)

printf("The price per kg is 400");

else if (e==7)

printf("The price per kg is 160");

else if (e==2)

printf("The price per kg is 500");

}