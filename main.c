#include <kipr/wombat.h>

int main()
{
    printf("Hall activated.... Pracice Mode activated\n");
    create_connect();
    
    create_drive_direct(-20, -100);
    msleep(1500);
    
    create_drive_direct(-100,-100);
    msleep(500);
    
    create_drive_direct(0,-100);
    msleep(1900);
    
    create_drive_direct(-100,-100);
    msleep(1000);
    
    create_drive_direct(-100, -25);
    msleep(1000);
    
    create_drive_direct(-100,-100);
    msleep(1000);
    
    create_drive_direct(100,-100);
    msleep(500);
    
    create_drive_direct(-100,-100);
    msleep(2000);
    
    create_drive_direct(-100, -40);
    msleep(2000);
    
    create_drive_direct(100,-100);
    msleep(500);
    
    create_drive_direct(-100,-100);
    msleep(2000);
    
    create_drive_direct(-100, -40);
    msleep(2000);
    
    create_drive_direct(-10,-100);
    msleep(2000);
    
    create_drive_direct(-100,-100);
    msleep(3000);
    
    create_drive_direct(100,100);
    msleep(2500);
    
    return 0;
}
