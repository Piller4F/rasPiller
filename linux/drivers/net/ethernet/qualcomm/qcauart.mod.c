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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe5c02461, "netdev_info" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0x9f88fca1, "serdev_device_close" },
	{ 0x2b6ddf3f, "qcafrm_fsm_decode" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd26ad1ae, "serdev_device_write_buf" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0xdcb764ad, "memset" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0xba424046, "__serdev_device_driver_register" },
	{ 0xc051115b, "free_netdev" },
	{ 0x20105980, "driver_unregister" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0xe896f0d, "of_get_mac_address" },
	{ 0x44239691, "_dev_info" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x9cc8e538, "serdev_device_open" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6a180a8d, "dev_trans_start" },
	{ 0x70ba7772, "serdev_device_set_flow_control" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0xf983d0f, "serdev_device_set_baudrate" },
	{ 0x5e23a5ba, "of_property_read_variable_u32_array" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xca4cf59e, "devm_kmalloc" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1b6678ba, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "qca_7k_common");

MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "56CB96F5A4D8B7C21100D50");
