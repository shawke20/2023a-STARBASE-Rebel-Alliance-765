#include <kipr/wombat.h>

int main()
{
    printf("Bot Gal\n");
    enable_servos();
    set_servo_position(0, 1345);
	motor(0,20);
    motor(3,20);
    msleep(1000);
	set_servo_position(0, 420);
    msleep(500);
    return 0;
}
