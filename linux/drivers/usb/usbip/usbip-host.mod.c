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
	{ 0x33a860c8, "kmem_cache_destroy" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xca48e37e, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x840342c6, "sgl_free" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xd833c14c, "kernel_sendmsg" },
	{ 0xde1302d2, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7ab523ba, "usb_set_configuration" },
	{ 0xa0c60303, "usbip_alloc_iso_desc_pdu" },
	{ 0xeeb77997, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x2284b745, "usb_hub_claim_port" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x604e2abd, "usb_unlink_urb" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf2ba0ca2, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0xdcb764ad, "memset" },
	{ 0xde2e023d, "usbip_in_eh" },
	{ 0xd46d47d2, "usb_lock_device_for_reset" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x28537419, "usb_set_interface" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2e53869f, "usb_register_device_driver" },
	{ 0xa1018fa2, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x50e9eb95, "kernel_sock_shutdown" },
	{ 0x9a017fcd, "device_attach" },
	{ 0x8f05bd3c, "usbip_stop_eh" },
	{ 0xc1478d30, "dev_attr_usbip_debug" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xe3056e58, "fput" },
	{ 0x93352a10, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0x41314665, "kmem_cache_alloc" },
	{ 0x6e6d8d53, "usbip_dump_urb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xcb657a4a, "driver_create_file" },
	{ 0xcdc597dc, "usbip_recv" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7241c452, "usb_reset_device" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xc8f4b8f8, "usb_clear_halt" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xdf0aa7e4, "usb_deregister_device_driver" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x96b759ad, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x613993cc, "usbip_recv_xbuff" },
	{ 0x81d3da83, "usb_hub_release_port" },
	{ 0x9ba47c9e, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3341c928, "driver_remove_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4ce3be4f, "usbip_start_eh" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0x6f2a3e87, "usbip_pack_pdu" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "464C1F14F48EF5D5EE0D980");
