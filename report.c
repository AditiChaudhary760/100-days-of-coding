#include <stdio.h>

int main() {
    int category, flavor, qty;
    float total = 0;
    char feedback[200];   

    while (1) {
        printf("\n========== MAIN MENU ==========\n");
        printf("1. Pizza\n");
        printf("2. Burger\n");
        printf("3. Sandwich\n");
        printf("4. Coffee\n");
        printf("5. Exit & Submit Bill\n");
        printf("Enter your choice: ");
        scanf("%d", &category);

        if (category == 5) {
            break;
        }

        switch (category) {

            
            case 1:
                printf("\n--- Pizza Flavors ---\n");
                printf("1. Margherita     - Rs. 150\n");
                printf("2. Farmhouse      - Rs. 200\n");
                printf("3. Paneer Tikka   - Rs. 220\n");
                printf("Select flavor: ");
                scanf("%d", &flavor);

                printf("Enter quantity: ");
                scanf("%d", &qty);

                if (flavor == 1) total += qty * 150;
                else if (flavor == 2) total += qty * 200;
                else if (flavor == 3) total += qty * 220;
                else printf("Invalid flavor!\n");
                break;

    
            case 2:
                printf("\n--- Burger Types ---\n");
                printf("1. Veg Burger     - Rs. 80\n");
                printf("2. Cheese Burger  - Rs. 100\n");
                printf("3. Aloo Tikki     - Rs. 70\n");
                printf("Select flavor: ");
                scanf("%d", &flavor);

                printf("Enter quantity: ");
                scanf("%d", &qty);

                if (flavor == 1) total += qty * 80;
                else if (flavor == 2) total += qty * 100;
                else if (flavor == 3) total += qty * 70;
                else printf("Invalid flavor!\n");
                break;

            case 3:
                printf("\n--- Sandwich Types ---\n");
                printf("1. Veg Sandwich        - Rs. 60\n");
                printf("2. Grilled Sandwich    - Rs. 90\n");
                printf("3. Cheese Sandwich     - Rs. 100\n");
                printf("Select flavor: ");
                scanf("%d", &flavor);

                printf("Enter quantity: ");
                scanf("%d", &qty);

                if (flavor == 1) total += qty * 60;
                else if (flavor == 2) total += qty * 90;
                else if (flavor == 3) total += qty * 100;
                else printf("Invalid flavor!\n");
                break;

           
            case 4:
                printf("\n--- Coffee Types ---\n");
                printf("1. Hot Coffee      - Rs. 50\n");
                printf("2. Cold Coffee     - Rs. 80\n");
                printf("3. Cappuccino      - Rs. 120\n");
                printf("Select flavor: ");
                scanf("%d", &flavor);

                printf("Enter quantity: ");
                scanf("%d", &qty);

                if (flavor == 1) total += qty * 50;
                else if (flavor == 2) total += qty * 80;
                else if (flavor == 3) total += qty * 120;
                else printf("Invalid flavor!\n");
                break;

            default:
                printf("Invalid category! Try again.\n");
        }



    printf("\n============== FINAL BILL ==============\n");
    printf("Total Amount: Rs. %.2f\n", total);
    printf("----------------------------------------\n");
    printf("Thank you for visiting our restaurant!\n");
    printf("========================================\n");

    return 0;
}  
