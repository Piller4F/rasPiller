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
	{ 0x6fe8451e, "device_remove_file" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0xf97dfac9, "generic_file_llseek" },
	{ 0x6115ec1f, "hid_open_report" },
	{ 0x4558a487, "single_open" },
	{ 0x68bae379, "single_release" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x393cac96, "seq_printf" },
	{ 0x762a3fb4, "__hid_request" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0xdcf25530, "seq_read" },
	{ 0x6aae0e4f, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0x771f85fb, "input_event" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc5dbd270, "hid_hw_close" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0xcef6dead, "hid_hw_open" },
	{ 0x3d632891, "input_set_capability" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x299e62, "hid_set_field" },
	{ 0xe7f1fdf9, "simple_open" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xa353aef4, "device_create_file" },
	{ 0x9cb9a01, "hid_alloc_report_buf" },
	{ 0x44239691, "_dev_info" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa26a5f2c, "input_register_device" },
	{ 0x92997ed8, "_printk" },
	{ 0xd6011851, "input_free_device" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xf864e474, "hid_hw_stop" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1b396629, "input_unregister_device" },
	{ 0xdd34dae3, "__hid_register_driver" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa467f8a3, "hid_hw_start" },
	{ 0xb0b10a74, "hid_unregister_driver" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7e925cf, "hid_output_report" },
	{ 0x6f140995, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");

MODULE_INFO(srcversion, "0E3D5FC259559CDAC6CCA7D");
