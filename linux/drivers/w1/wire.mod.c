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
	{ 0x1b30de3c, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x5b8ba1e9, "cn_add_callback" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x243b0418, "driver_register" },
	{ 0x1b3a4ea7, "of_find_matching_node_and_match" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x2e8dc91c, "hwmon_device_unregister" },
	{ 0x683f20ea, "kobject_uevent" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x7483e13, "cn_del_callback" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x6c289ab5, "device_register" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0x20105980, "driver_unregister" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x7c3083ec, "hwmon_device_register_with_info" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x3533cb47, "bus_unregister" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0xc1bacc77, "flush_signals" },
	{ 0x44239691, "_dev_info" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x4dd9d14d, "cn_netlink_send_mult" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc4d34c83, "sysfs_create_groups" },
	{ 0x7a1b327b, "sysfs_remove_groups" },
	{ 0xe71535d7, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "cn");


MODULE_INFO(srcversion, "F9D735EF2833AE1AA953CFA");
