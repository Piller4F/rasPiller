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
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xca48e37e, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x529500c6, "usb_create_shared_hcd" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xd833c14c, "kernel_sendmsg" },
	{ 0xde1302d2, "sockfd_lookup" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x746a0650, "usb_add_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0xd6c2af8a, "usb_remove_hcd" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x513d6f7f, "usb_create_hcd" },
	{ 0x3bc8e6c9, "usb_hcd_poll_rh_status" },
	{ 0xa0c60303, "usbip_alloc_iso_desc_pdu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x1ad09590, "usb_hcd_giveback_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x54bd79d9, "sysfs_remove_group" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x81cbe3cb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe463b667, "usb_put_hcd" },
	{ 0xf2ba0ca2, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x35744c73, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0xdcb764ad, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xe9e1234a, "usb_hcd_link_urb_to_ep" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0xef735b85, "sysfs_create_group" },
	{ 0x439f7963, "platform_device_del" },
	{ 0xc26643aa, "platform_device_alloc" },
	{ 0x1357e30f, "platform_device_add" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x50e9eb95, "kernel_sock_shutdown" },
	{ 0x8f05bd3c, "usbip_stop_eh" },
	{ 0xc1478d30, "dev_attr_usbip_debug" },
	{ 0xefbfd9c, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3599f100, "sysfs_remove_link" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xe3056e58, "fput" },
	{ 0x93352a10, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x590776e8, "usbip_pad_iso" },
	{ 0x4fe38208, "usb_hcd_check_unlink_urb" },
	{ 0x44239691, "_dev_info" },
	{ 0x6e6d8d53, "usbip_dump_urb" },
	{ 0x93a3f0ab, "usb_get_dev" },
	{ 0xcdc597dc, "usbip_recv" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcfd42b0c, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0xb9cd0a2e, "platform_bus" },
	{ 0x412a0a6c, "platform_device_add_data" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x613993cc, "usbip_recv_xbuff" },
	{ 0x9ba47c9e, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13868293, "platform_driver_unregister" },
	{ 0xf1efd2fc, "usb_hcd_unlink_urb_from_ep" },
	{ 0xb405ab58, "usb_hcd_resume_root_hub" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x4ce3be4f, "usbip_start_eh" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6f2a3e87, "usbip_pack_pdu" },
	{ 0x6ad2e5e, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "8D5569137A4FED6EC22B5AD");
