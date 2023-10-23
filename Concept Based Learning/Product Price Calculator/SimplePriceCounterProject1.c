#include <stdio.h>

//Practice User Input 
//With scanf function, printf function, and basic arithmetic
//Simple Price Counter Project 1:

int main (){

  char name_of_product[25];
  int price;
  int number_of_items;
  double total_price;
  double discount_rate;
  double tax_rate;
  double discounted_price;
  double tax_price;
  double final_cost;

  printf("\nSimple Price Counter:");
  printf("\n\nName of Product:");
  scanf("%s", &name_of_product);
  printf("Input Price:");
  scanf("%d", &price);
  printf("Number of Items:");
  scanf("%d", &number_of_items);
  printf("Input Discount Rate (In Decimal):");
  scanf("%lf", &discount_rate);
  printf("Input Tax Rate (In Decimal):");
  scanf("%lf", tax_rate);

  total_price = price * number_of_items;
  discounted_price = total_price - total_price * discount_rate;
  tax_price = discounted_price * tax_rate;
  final_cost = discounted_price + tax_price;

  printf("\n\nResults:");
  printf("\n\nName of Product: %s", name_of_product);
  printf("\nNumber of Items Bought: %d", number_of_items);
  printf("\nTotal Price: %.1lf", total_price);
  printf("\nDiscounted Price: %.2lf", discounted_price);
  printf("\nTax Price: %.2lf", tax_price);
  printf("\nFinal Cost: %.2lf", final_cost);

    
    
    return 0;
}