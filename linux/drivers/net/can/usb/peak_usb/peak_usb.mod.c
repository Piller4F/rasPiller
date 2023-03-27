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
	{ 0xe5c02461, "netdev_info" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3a68c7b2, "register_candev" },
	{ 0x30cceca, "alloc_can_err_skb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4666b7ef, "driver_for_each_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1444e565, "usb_unanchor_urb" },
	{ 0x2713098, "can_bus_off" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x4e553255, "close_candev" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x6c0adaa3, "usb_deregister" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0xae9af301, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0xe3cb7337, "alloc_candev_mqs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf0f31154, "free_candev" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xaae7faf5, "can_change_mtu" },
	{ 0x7c7103a4, "can_change_state" },
	{ 0x44239691, "_dev_info" },
	{ 0xd81bd04c, "usb_submit_urb" },
	{ 0xbd2131f0, "unregister_candev" },
	{ 0x4f967470, "netif_device_detach" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xe432fc34, "alloc_can_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xfaf1442c, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x835033cd, "netdev_err" },
	{ 0x7da4ac10, "open_candev" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb5a63bc6, "usb_register_driver" },
	{ 0x7cf632a4, "alloc_canfd_skb" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x2707f7c0, "can_get_echo_skb" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x738d543, "can_put_echo_skb" },
	{ 0xb9f3fc35, "can_free_echo_skb" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e1b72d7, "usb_free_urb" },
	{ 0xb9788c68, "usb_anchor_urb" },
	{ 0x7d7404bc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "96F8A3828904BF9AED801C6");
