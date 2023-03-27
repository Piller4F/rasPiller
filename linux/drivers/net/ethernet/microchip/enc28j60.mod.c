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
	{ 0x27339f09, "param_ops_int" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0x20105980, "driver_unregister" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcdf2d945, "device_get_mac_address" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1b6678ba, "alloc_etherdev_mqs" },
	{ 0xc5dc4f28, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0xc7275ee2, "netdev_printk" },
	{ 0x44239691, "_dev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x835033cd, "netdev_err" },
	{ 0xe5c02461, "netdev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2715240, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36043ee3, "spi_write_then_read" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x92997ed8, "_printk" },
	{ 0xa8a68ecf, "_dev_printk" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0xc051115b, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb6526fd6, "unregister_netdev" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "671248F8334B11A39F859FD");
