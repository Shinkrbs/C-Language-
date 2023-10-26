#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get credit card number from user
    long long card_number;
    do
    {
        card_number = get_long("Enter credit card number: ");
    }
    while (card_number < 0);

    // Calculate checksum according to Luhn's algorithm
    int sum = 0;
    bool alternate = false;
    long long num = card_number;

    while (num > 0)
    {
        int digit = num % 10;
        if (alternate)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit = digit - 9;
            }
        }
        sum += digit;
        num /= 10;
        alternate = !alternate;
    }

    // Check if the card number is valid and determine the card type
    if (sum % 10 == 0)
    {
        // Check for card type
        if ((card_number >= 340000000000000 && card_number < 350000000000000) ||
            (card_number >= 370000000000000 && card_number < 380000000000000))
        {
            printf("AMEX\n");
        }
        else if (card_number >= 5100000000000000 && card_number < 5600000000000000)
        {
            printf("MASTERCARD\n");
        }
        else if ((card_number >= 4000000000000 && card_number < 5000000000000) ||
                 (card_number >= 4000000000000000 && card_number < 5000000000000000))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
