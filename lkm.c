// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (C) 2018 Enric Balletbo i Serra <eballetbo@gmail.com>
 */

#include <linux/kernel.h>
#include <linux/module.h>

static int __init lkm_init(void) {
	printk(KERN_INFO "Hello, World!\n");
	return 0;
}

static void __exit lkm_exit(void) {
	printk(KERN_INFO "Goodbye, World!\n");
}

module_init(lkm_init);
module_exit(lkm_exit);

MODULE_AUTHOR("Enric Balletbo i Serra <eballetbo@gmail.com>");
MODULE_DESCRIPTION("A simple Linux kernel module example.");
MODULE_LICENSE("GPL");
