#define MODULE
#include <linux/kernel.h> /*Needed by all modules*/
#include <linux/module.h> /*Needed for KERN_* */
#include <linux/init.h> /* Needed for the macros */

//MODULE_LICENSE("GPL");

int init_module(void)
{
  printk(KERN_EMERG "<1> Hello kernel!\n");
  return 0;
}


void cleanup_module(void)
{
  printk(KERN_EMERG "<1> Bye, kernel!\n");
}
