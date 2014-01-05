/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

int main()
{
    uint16 c1;
    uint16 v1;
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_Start();

    CyGlobalIntEnable; /* Uncomment this line to enable global interrupts. */
    PowerMonitor_Start();
    for(;;)
    {
        /* Place your application code here. */
        c1 = PowerMonitor_GetConverterCurrent(1) * 1000;
        v1 = PowerMonitor_GetConverterVoltage(1);
        
        LCD_Position(0, 0);
        LCD_PrintDecUint16(c1);
        LCD_PrintString("  ");
        LCD_Position(1, 0);
        LCD_PrintDecUint16(v1);
        LCD_PrintString("  ");
    }
}

/* [] END OF FILE */
