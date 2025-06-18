/*We must have linux header to run this program so close it today */
#include<linux/module.h>
#include<linux/kernal.h>
#include<linux/init.h>

///< This license type -- this affected runtime behavior

MODULE_LICENSE("GPL");

///<THE AUTHOR -- visible When you use modinfo

MODULE_AUTHOR("SANAM TAMANG");


MODULE_DESCRIPTION("A Simple Hello World LKM!");


MODULE_VERSION("0.1");


static int _ _ init hello_start(void)
{
    printk(KERN_INFO"Loading Hello Module...\n");
    printk(KERN_INFO"Hello World\n");
    return 0;
}

static void _ _exit hello_end(void)
{
    printk(KERN_INFO"Goodbye Mr.\n");
}
