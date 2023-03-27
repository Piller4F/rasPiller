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
	{ 0xb0ff696a, "kernel_write" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc93bdc96, "usb_gstrings_attach" },
	{ 0x26cc73c3, "complete_and_exit" },
	{ 0x53b954a2, "up_read" },
	{ 0x90ad01fd, "usb_free_all_descriptors" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8a6a4993, "dequeue_signal" },
	{ 0x349cba85, "strchr" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x98cf60b3, "strlen" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xacfe2e7, "usb_ep_set_wedge" },
	{ 0x33164e2b, "config_item_put" },
	{ 0x33bad225, "file_path" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa604aca8, "vfs_fsync" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7975d757, "usb_function_unregister" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x157ba90a, "kernel_read" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6c289ab5, "device_register" },
	{ 0xcf672e2, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x31a0f1a7, "freezing_slow_path" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x11e2f32a, "unregister_gadget_item" },
	{ 0x6340127e, "usb_ep_autoconfig" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5516e238, "config_group_init_type_name" },
	{ 0x5fc294ef, "usb_ep_clear_halt" },
	{ 0xce807a25, "up_write" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe3056e58, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x910bc89d, "usb_function_register" },
	{ 0x375c3de7, "usb_composite_setup_continue" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0xdb6d48b2, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xdc965b3, "config_ep_by_speed" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x5cb09f24, "I_BDEV" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xc10fff5c, "send_sig_info" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x21c79675, "invalidate_mapping_pages" },
	{ 0xe6e5a1bd, "usb_assign_descriptors" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x529c1749, "usb_interface_id" },
	{ 0xe71535d7, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x13277bd8, "dev_set_name" },
	{ 0xd90d784, "usb_ep_fifo_flush" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xc82139f7, "filp_open" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "633A5BCF50DAC830AB89A01");
