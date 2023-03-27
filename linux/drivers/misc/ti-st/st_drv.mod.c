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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x4558a487, "single_open" },
	{ 0x68bae379, "single_release" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x3a109e75, "gpio_to_desc" },
	{ 0x393cac96, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcf25530, "seq_read" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x8c9e446, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0x6864928b, "tty_ldisc_flush" },
	{ 0x9166fada, "strncpy" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0xa75efb1c, "gpiod_direction_output_raw" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0xc270c522, "__alloc_skb" },
	{ 0xf8e8aa42, "tty_driver_flush_buffer" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xb76d6ccf, "sysfs_notify" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xb93052e8, "stop_tty" },
	{ 0xfd0caae8, "tty_write_room" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xfe990052, "gpio_free" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0x2313ab84, "gpiod_set_raw_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0x9be07d44, "tty_register_ldisc" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "03588F092B82FAE394967A3");
