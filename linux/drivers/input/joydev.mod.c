#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd4b13e21, "module_layout" },
	{ 0x18fcb916, "no_llseek" },
	{ 0xaab212e9, "input_unregister_handler" },
	{ 0xb48cafaa, "input_register_handler" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x1000e51, "schedule" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x2336051f, "input_open_device" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8d1f6bc1, "stream_open" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x92997ed8, "_printk" },
	{ 0x6fcf78bb, "cdev_device_add" },
	{ 0x4392e2ef, "cdev_init" },
	{ 0x1d150618, "input_register_handle" },
	{ 0x3055489f, "device_initialize" },
	{ 0xa5ce7960, "input_class" },
	{ 0xb18f4e29, "get_device" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdcb764ad, "memset" },
	{ 0xfb4adf78, "input_match_device_id" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xdec0b49c, "fasync_helper" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x9459b556, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x293fe0f7, "cdev_device_del" },
	{ 0xc29de2c0, "input_close_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf6db38dd, "kill_fasync" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "5D38E1930FE512019BCA54C");
