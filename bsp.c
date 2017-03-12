/*****************************************************************************
* bsp.c for Lab2A of ECE 153a at UCSB
* Date of the Last Update:  October 23,2014
*****************************************************************************/

/**/
// #include "LPC11xx.h"
#include "qpn_port.h"
#include "bsp.h"
#include "lab2a.h"
#include "gpio.h"
#include "board.h"

/*****************************/

/* Define all variables and Gpio objects here  */


/*..........................................................................*/

//this is where we will initialize all of our LEDs, Buttons, etc...

void BSP_init(void) {

//set GPIO LEDs to outputs
GPIOSetDir( LED1_PORT, LED1_PIN, GPIO_OUTPUT);
GPIOSetValue( LED1_PORT, LED1_PIN, LED_OFF);
GPIOSetDir( LED2_PORT, LED2_PIN, GPIO_OUTPUT);
GPIOSetValue( LED2_PORT, LED2_PIN, LED_OFF);
GPIOSetDir( LED3_PORT, LED3_PIN, GPIO_OUTPUT);
GPIOSetValue( LED3_PORT, LED3_PIN, LED_OFF);
GPIOSetDir( LED4_PORT, LED4_PIN, GPIO_OUTPUT);
GPIOSetValue( LED4_PORT, LED4_PIN, LED_OFF);
GPIOSetDir( LED5_PORT, LED5_PIN, GPIO_OUTPUT);
GPIOSetValue( LED5_PORT, LED5_PIN, LED_OFF);
GPIOSetDir( LED6_PORT, LED6_PIN, GPIO_OUTPUT);
GPIOSetValue( LED6_PORT, LED6_PIN, LED_OFF);
GPIOSetDir( LED7_PORT, LED7_PIN, GPIO_OUTPUT);
GPIOSetValue( LED7_PORT, LED7_PIN, LED_OFF);
GPIOSetDir( LED8_PORT, LED8_PIN, GPIO_OUTPUT);
GPIOSetValue( LED8_PORT, LED8_PIN, LED_OFF);

//set Switches to inputs
GPIOSetDir( SW1_PORT, SW1_PIN, GPIO_INPUT);
GPIOSetDir( SW2_PORT, SW2_PIN, GPIO_INPUT);
GPIOSetDir( SW3_PORT, SW3_PIN, GPIO_INPUT);
GPIOSetDir( SW4_PORT, SW4_PIN, GPIO_INPUT);
GPIOSetDir( SW5_PORT, SW5_PIN, GPIO_INPUT);


//Set QA and QB pins as inputs (quadrature rotary encoder)
GPIOSetDir( QA_PORT, QA_PIN, GPIO_INPUT);
GPIOSetDir( QB_PORT, QB_PIN, GPIO_INPUT);


/* Setup LED's, etc */
/* Setup interrupts and reference to interrupt handler function(s)  */

	/*
	 * Initialize the interrupt controller driver so that it's ready to use.
	 * specify the device ID that was generated in xparameters.h
	 *
	 * Initialize GPIO and connect the interrupt controller to the GPIO.
	 *
	 */

	// Press Knob

	// Twist Knob

}
/*..........................................................................*/
void QF_onStartup(void) {                 /* entered with interrupts locked */

/* Enable interrupts */
	//xil_printf("\n\rQF_onStartup\n"); // Comment out once you are in your complete program

	// Press Knob
	// Enable interrupt controller
	// Start interupt controller
	// register handler with Microblaze
	// Global enable of interrupt
	// Enable interrupt on the GPIO

	// Twist Knob

	// General
	// Initialize Exceptions
	// Press Knob
	// Register Exception
	// Twist Knob
	// Register Exception
	// General
	// Enable Exception

	// Variables for reading Microblaze registers to debug your interrupts.
//	{
//		u32 axi_ISR =  Xil_In32(intcPress.BaseAddress + XIN_ISR_OFFSET);
//		u32 axi_IPR =  Xil_In32(intcPress.BaseAddress + XIN_IPR_OFFSET);
//		u32 axi_IER =  Xil_In32(intcPress.BaseAddress + XIN_IER_OFFSET);
//		u32 axi_IAR =  Xil_In32(intcPress.BaseAddress + XIN_IAR_OFFSET);
//		u32 axi_SIE =  Xil_In32(intcPress.BaseAddress + XIN_SIE_OFFSET);
//		u32 axi_CIE =  Xil_In32(intcPress.BaseAddress + XIN_CIE_OFFSET);
//		u32 axi_IVR =  Xil_In32(intcPress.BaseAddress + XIN_IVR_OFFSET);
//		u32 axi_MER =  Xil_In32(intcPress.BaseAddress + XIN_MER_OFFSET);
//		u32 axi_IMR =  Xil_In32(intcPress.BaseAddress + XIN_IMR_OFFSET);
//		u32 axi_ILR =  Xil_In32(intcPress.BaseAddress + XIN_ILR_OFFSET) ;
//		u32 axi_IVAR = Xil_In32(intcPress.BaseAddress + XIN_IVAR_OFFSET);
//		u32 gpioTestIER  = Xil_In32(sw_Gpio.BaseAddress + XGPIO_IER_OFFSET);
//		u32 gpioTestISR  = Xil_In32(sw_Gpio.BaseAddress  + XGPIO_ISR_OFFSET ) & 0x00000003; // & 0xMASK
//		u32 gpioTestGIER = Xil_In32(sw_Gpio.BaseAddress  + XGPIO_GIE_OFFSET ) & 0x80000000; // & 0xMASK
//	}
}


void QF_onIdle(void) {        /* entered with interrupts locked */

    QF_INT_UNLOCK();                       /* unlock interrupts */

    {
    	// Write code to increment your interrupt counter here.
    	// QActive_postISR((QActive *)&AO_Lab2A, ENCODER_DOWN); is used to post an event to your FSM



// 			Useful for Debugging, and understanding your Microblaze registers.
//    		u32 axi_ISR =  Xil_In32(intcPress.BaseAddress + XIN_ISR_OFFSET);
//    	    u32 axi_IPR =  Xil_In32(intcPress.BaseAddress + XIN_IPR_OFFSET);
//    	    u32 axi_IER =  Xil_In32(intcPress.BaseAddress + XIN_IER_OFFSET);
//
//    	    u32 axi_IAR =  Xil_In32(intcPress.BaseAddress + XIN_IAR_OFFSET);
//    	    u32 axi_SIE =  Xil_In32(intcPress.BaseAddress + XIN_SIE_OFFSET);
//    	    u32 axi_CIE =  Xil_In32(intcPress.BaseAddress + XIN_CIE_OFFSET);
//    	    u32 axi_IVR =  Xil_In32(intcPress.BaseAddress + XIN_IVR_OFFSET);
//    	    u32 axi_MER =  Xil_In32(intcPress.BaseAddress + XIN_MER_OFFSET);
//    	    u32 axi_IMR =  Xil_In32(intcPress.BaseAddress + XIN_IMR_OFFSET);
//    	    u32 axi_ILR =  Xil_In32(intcPress.BaseAddress + XIN_ILR_OFFSET) ;
//    	    u32 axi_IVAR = Xil_In32(intcPress.BaseAddress + XIN_IVAR_OFFSET);
//
//    	    // Expect to see 0x00000001
//    	    u32 gpioTestIER  = Xil_In32(sw_Gpio.BaseAddress + XGPIO_IER_OFFSET);
//    	    // Expect to see 0x00000001
//    	    u32 gpioTestISR  = Xil_In32(sw_Gpio.BaseAddress  + XGPIO_ISR_OFFSET ) & 0x00000003;
//
//    	    // Expect to see 0x80000000 in GIER
//    		u32 gpioTestGIER = Xil_In32(sw_Gpio.BaseAddress  + XGPIO_GIE_OFFSET ) & 0x80000000;


    }
}

/* Do not touch Q_onAssert */
/*..........................................................................*/
void Q_onAssert(char const Q_ROM * const Q_ROM_VAR file, int line) {
    (void)file;                                   /* avoid compiler warning */
    (void)line;                                   /* avoid compiler warning */
    QF_INT_LOCK();
    for (;;) {
    }
}

/* Interrupt handler functions here.  Do not forget to include them in lab2a.h!
To post an event from an ISR, use this template:
QActive_postISR((QActive *)&AO_Lab2A, SIGNALHERE);
Where the Signals are defined in lab2a.h  */

/******************************************************************************
*
* This is the interrupt handler routine for the GPIO for this example.
*
******************************************************************************/

void PIOINT1_IRQHandler (void)    //name of function is predefined
{
  static uint8_t ledState;

  /* toggle LED on PIO0_2 */
  if (ledState == 0)
  {
    ledState = 1;
    GPIOSetValue( LED1_PORT, LED1_PIN, LED_OFF);
  }
  else
  {
    ledState = 0;
    GPIOSetValue( LED1_PORT, LED1_PIN, LED_ON);
  }

  //clear PIO1_5 falling edge interrupt
  LPC_GPIO1->IC = (1<<5);   //write with bit 5 set to clear interrupt from PIO1_5
}


// void GpioHandler(void *CallbackRef) {
// 	// Increment A counter
// }
//
// void TwistHandler(void *CallbackRef) {
// 	//XGpio_DiscreteRead( &twist_Gpio, 1);
//
// }
//
// void debounceTwistInterrupt(){
// 	// Read both lines here? What is twist[0] and twist[1]?
// 	// How can you use reading from the two GPIO twist input pins to figure out which way the twist is going?
// }
//
// void debounceInterrupt() {
// 	QActive_postISR((QActive *)&AO_Lab2A, ENCODER_CLICK);
// 	// XGpio_InterruptClear(&sw_Gpio, GPIO_CHANNEL1); // (Example, need to fill in your own parameters
// }
