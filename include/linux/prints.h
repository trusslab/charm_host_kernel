/*
 * Copyright(C) 2016-2017 University of California, Irvine.
 *
 * Author:
 *   Ardalan Amiri Sani <arrdalan@gmail.com>
 */

#ifndef _PRINTS_H_
#define _PRINTS_H_

#define PRINTK0(fmt, args...)// printk("ardalan:%s " fmt, __func__, ##args)
#define printk1(fmt, args...)// printk("%s " fmt, __func__, ##args)
#define PRINTK_ERR(fmt, args...) printk(KERN_ALERT"Error: %s " fmt "\n", __func__, ##args)
//javad

#define PRINTK1(fmt, args...)// printk("%s " fmt, __func__, ##args)
#define PRINTK4(fmt, args...)// printk(KERN_ALERT"javad: %s " fmt, __func__, ##args)
#define PRINTK5(fmt, args...)// printk(KERN_INFO"javad: %s:%d " fmt "\n" , __func__,__LINE__, ##args)
#define PRINTK6(fmt, args...)// printk(KERN_INFO"javad: %s:%d " fmt "\n" , __func__,__LINE__, ##args)
#define PRINTK7(fmt, args...)// printk(KERN_INFO"javad: %s:%d " fmt "\n" , __func__,__LINE__, ##args)




#endif /* _PRINTS_H_ */
