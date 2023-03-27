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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe5c02461, "netdev_info" },
	{ 0x74cf78e0, "skb_clone_tx_timestamp" },
	{ 0x1ab402df, "napi_schedule_prep" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0xbabe8df, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x40761ec2, "netif_rx" },
	{ 0xe0e82ceb, "skb_queue_purge" },
	{ 0x5b89bed1, "sock_efree" },
	{ 0xdcb764ad, "memset" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc051115b, "free_netdev" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x7ca2fd32, "nla_put" },
	{ 0x5682efd3, "netif_receive_skb" },
	{ 0x258e6d74, "napi_enable" },
	{ 0x42eff981, "kfree_skb_reason" },
	{ 0x354f99d0, "netif_napi_add" },
	{ 0xf74ce92, "rtnl_link_unregister" },
	{ 0xf1d26d04, "of_get_child_by_name" },
	{ 0x63ba7f75, "device_property_read_u32_array" },
	{ 0x47279311, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x23414fe3, "alloc_netdev_mqs" },
	{ 0x8c551e5e, "napi_complete_done" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x835033cd, "netdev_err" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x668cbf84, "__netif_napi_del" },
	{ 0xb83cbf42, "devm_gpiod_get_optional" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0xf56d8a2, "rtnl_link_register" },
	{ 0xcf7c7160, "skb_dequeue" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0xb64ddf9e, "skb_tstamp_tx" },
	{ 0xb127e82, "gpiod_set_value" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x3e57ec09, "of_node_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A64F8A60A49E22701BDE356");
