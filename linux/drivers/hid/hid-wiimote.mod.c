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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6fe8451e, "device_remove_file" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0x4558a487, "single_open" },
	{ 0x98cf60b3, "strlen" },
	{ 0x75464319, "input_ff_create_memless" },
	{ 0x68bae379, "single_release" },
	{ 0x4923ba39, "power_supply_unregister" },
	{ 0x683f20ea, "kobject_uevent" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x393cac96, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x478fbcb6, "power_supply_powers" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x13445e92, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcf25530, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x7f9832e7, "input_set_abs_params" },
	{ 0x771f85fb, "input_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x86baf6a0, "power_supply_get_drvdata" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x97308019, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc5dbd270, "hid_hw_close" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0xcef6dead, "hid_hw_open" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe7f1fdf9, "simple_open" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x44239691, "_dev_info" },
	{ 0xa916b694, "strnlen" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xd6011851, "input_free_device" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb18f4e29, "get_device" },
	{ 0x5f3c0c17, "led_classdev_unregister" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0x5a6e6e6f, "power_supply_register" },
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6f140995, "input_allocate_device" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0005g*v0000057Ep00000306");
MODULE_ALIAS("hid:b0005g*v0000057Ep00000330");

MODULE_INFO(srcversion, "7191DA90E759CB253160F0F");
