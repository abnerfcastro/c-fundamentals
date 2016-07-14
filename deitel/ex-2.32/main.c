/*
 * Author: Abner Castro
 * Date: July 13th, 2016
 */

 #include <stdio.h>

/*
 * Calculates BMI index
 * @param weight the weight in kilograms
 * @param height the height in meters
 * @return the BMI index value for the given weight and height
 */
 float bmi_calculator(float weight, float height);

 int main()
 {
     float weight, height;

     printf("Welcome to BMI Calculator:\n\n");

     // Prompts user for weight
     printf("Weight (in kg): ");
     scanf("%f", &weight);

     // Prompts user for weight
     printf("Height  (in m): ");
     scanf("%f", &height);

     printf("\n");
     printf("Your BMI is: %.1f\n\n", bmi_calculator(weight, height));

     printf("BMI VALUES\n");
     printf("Underweight: less than 18.5\n");
     printf("Normal:      between 18.5 and 24.9\n");
     printf("Overweight:  between 25 and 29.9\n");
     printf("Obese:       30 or greater\n");

     return 0;
 }

float bmi_calculator(float weight, float height)
{
    return weight / (height * height);
}
