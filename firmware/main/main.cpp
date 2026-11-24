#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "dht.h"
#include "esp_log.h"

#define SENSOR_PIN GPIO_NUM_4

void read_sensor(void)
{
    esp_log_level_set("dht", ESP_LOG_NONE);
    float temperature, humidity;
    esp_err_t err = dht_read_float_data(DHT_TYPE_DHT11, SENSOR_PIN, &humidity, &temperature);
    if (err ==ESP_OK)
        printf("Humidity: %.0f, Temperature: %.1f \n", humidity, temperature);
    else
        printf("error\n");
}
extern "C" void app_main(void)
{
while (true)
{
    read_sensor();
    vTaskDelay(pdMS_TO_TICKS(2000));
}
}
