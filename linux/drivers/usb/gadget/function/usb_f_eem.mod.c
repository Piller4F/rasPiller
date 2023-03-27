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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc93bdc96, "usb_gstrings_attach" },
	{ 0x90ad01fd, "usb_free_all_descriptors" },
	{ 0xeea8b533, "gether_get_qmult" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xc4d81e90, "gether_setup_name_default" },
	{ 0xbabe8df, "skb_clone" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x90132a01, "gether_set_ifname" },
	{ 0x68c53f38, "gether_get_ifname" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x7975d757, "usb_function_unregister" },
	{ 0x34df9eaa, "skb_trim" },
	{ 0x24451bf0, "gether_set_host_addr" },
	{ 0x61205b8, "gether_get_dev_addr" },
	{ 0x845bfa32, "gether_connect" },
	{ 0xcf672e2, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6340127e, "usb_ep_autoconfig" },
	{ 0xc051115b, "free_netdev" },
	{ 0x828bf1c0, "gether_set_gadget" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xc3b42429, "gether_get_host_addr" },
	{ 0x5516e238, "config_group_init_type_name" },
	{ 0x13185744, "gether_set_qmult" },
	{ 0xd38c2e43, "skb_pull" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x910bc89d, "usb_function_register" },
	{ 0xcf337a06, "skb_queue_tail" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0xa4889f35, "gether_register_netdev" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x76da1a75, "gether_set_dev_addr" },
	{ 0xdc965b3, "config_ep_by_speed" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xa58ae7c0, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6e5a1bd, "usb_assign_descriptors" },
	{ 0x529c1749, "usb_interface_id" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xebcdc4a1, "skb_copy_bits" },
};

MODULE_INFO(depends, "libcomposite,u_ether");


MODULE_INFO(srcversion, "79F1961EF2C4849873A1163");
