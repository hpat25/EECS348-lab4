#include <stdio.h>

void categorize_temperature(float celsius) {
    if (celsius>35) {
        printf("Temperature category: Extreme Heat\n");
        printf("Avoid going outside!\n");
    
    } else if (celsius>25) {
        printf("Temperature category: Hot\n");
        printf("Dress light.\n");
    } else if (celsius>10) {
        printf("Temperature category: Comfortable\n");
        printf("Pleasant weather.\n");
    } else if (celsius>=0 ) {
        printf("Temperature category: Cold\n");
        printf("Dress warm.\n");
    } else if (celsius<0) {
        printf("Temperature category: Freezing\n");
        printf("Frostbite warning.\n");
    }
}


float celsius_to_fahrenheit (float celsius) {
     return ((9.0/5.0)*celsius)+32;
 }

float fahrenheit_to_celsius (float fahrenheit) {
    return (5.0/9.0)*(fahrenheit-32);
}

float celsius_to_kelvin (float celsius) {
    return celsius+273.15;
}

float kelvin_to_celsius (float kelvin) {
    return kelvin-273.15;
}

float fahrenheit_to_kelvin (float fahrenheit) {
    return (fahrenheit- 32)* (5.0/9.0)+273.15;
}

float kelvin_to_fahrenheit (float kelvin) {
    return ((kelvin-273.15)*(9.0/5.0))+32;
}

int main() {
    float temperature;
    int temperature_scale;
    int conversion_target;
    float celsius;
    float converted_temp;

    while (1) {
    printf("Enter the temperature:");
    scanf("%f", &temperature);
    printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin:");
    scanf("%d", &temperature_scale);
    printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin:");
    scanf("%d", &conversion_target);

    if (temperature_scale<1 || temperature_scale>3 || conversion_target<1 || conversion_target>3) {
        printf("Invalid conversion choice\n");
        continue;
    } else if (temperature_scale==3 && temperature<0) {
        printf("Negative temperature not allowed for kelvin\n");
        continue;
    } else if (temperature_scale==conversion_target) {
        printf("Invalid conversion choice.\n");
        continue;
    }
    break;
}


    if (temperature_scale==1 && conversion_target==2) {
        converted_temp=celsius_to_fahrenheit (temperature);
        printf("Converted temperature: %.2fF\n", converted_temp);
        celsius=temperature;
        categorize_temperature(celsius);

    } else if (temperature_scale==1 && conversion_target==3) {
        converted_temp=celsius_to_kelvin (temperature);
        printf("Converted temperature: %.2fK\n", converted_temp);
        celsius=temperature;
        categorize_temperature(celsius);

    } else if (temperature_scale==2 && conversion_target==1) {
        converted_temp=fahrenheit_to_celsius (temperature);
        printf("Converted temperature: %.2fC\n", converted_temp);
        categorize_temperature(converted_temp);

    } else if (temperature_scale==2 && conversion_target==3) {
        converted_temp=fahrenheit_to_kelvin (temperature);
        printf("Converted temperature: %.2fK\n", converted_temp);
        celsius=fahrenheit_to_celsius (temperature);
        categorize_temperature(celsius);

    } else if (temperature_scale==3 && conversion_target==1) {
        converted_temp=kelvin_to_celsius (temperature);
        printf("Converted temperature: %.2fC\n", converted_temp);
        categorize_temperature(converted_temp);

    } else if (temperature_scale==3 && conversion_target==2) {
        converted_temp=kelvin_to_fahrenheit (temperature);
        printf("Converted temperature: %.2fF\n", converted_temp);
        celsius=kelvin_to_celsius (temperature);
        categorize_temperature(celsius);

    }
    }


    

   

