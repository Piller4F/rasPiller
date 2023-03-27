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
	{ 0x9cc1c19f, "net_ns_type_operations" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x77b7671e, "macvlan_link_register" },
	{ 0xaa80a51a, "tap_destroy_cdev" },
	{ 0xbbc1b23a, "class_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xac97d5fa, "__class_register" },
	{ 0x7bc0c964, "tap_create_cdev" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc2c384e5, "macvlan_common_newlink" },
	{ 0xab32255, "netdev_rx_handler_register" },
	{ 0x1d6a640d, "tap_handle_frame" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x3c787dd1, "sysfs_create_link" },
	{ 0x12284cf8, "device_create" },
	{ 0xe0e2d941, "tap_free_minor" },
	{ 0xc6bfeb6c, "device_destroy" },
	{ 0x3599f100, "sysfs_remove_link" },
	{ 0xf6a07e4e, "tap_queue_resize" },
	{ 0x54aabb5c, "tap_get_minor" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x47e67eb3, "macvlan_common_setup" },
	{ 0x99c14b53, "netdev_update_features" },
	{ 0xf05d5175, "macvlan_dellink" },
	{ 0x706b8598, "tap_del_queues" },
	{ 0xb3262370, "netdev_rx_handler_unregister" },
};

MODULE_INFO(depends, "macvlan,tap");


MODULE_INFO(srcversion, "6E52C7C353220FDBFAA8908");
