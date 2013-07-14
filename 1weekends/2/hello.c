#include <linux/fs.h> 
#include <linux/init.h>
#include <linux/miscdevice.h>
#include <linux/module.h> 
#include <linux/kernel.h> 

static const struct file_operations hello_fops = {
        .owner                = THIS_MODULE,
};

static struct miscdevice hello_dev = {
        MISC_DYNAMIC_MINOR,
        "hello",
        &hello_fops
};

static int __init
hello_init(void)
{
        int ret;

        ret = misc_register(&hello_dev);
        if (ret)
                printk(KERN_ERR "Unable to register Hello, world! misc devicen");

        return ret;
}

module_init(hello_init);

static void __exit
hello_exit(void)
{
        misc_deregister(&hello_dev);
}

module_exit(hello_exit);

MODULE_LICENSE("GPL");
