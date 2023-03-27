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
	{ 0xf9a482f9, "msleep" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x8fd4ce64, "debugfs_create_dir" },
	{ 0x4558a487, "single_open" },
	{ 0x27339f09, "param_ops_int" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x68bae379, "single_release" },
	{ 0x2f07a679, "seq_puts" },
	{ 0xdb1e1d6f, "netif_carrier_on" },
	{ 0x393cac96, "seq_printf" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0xcffbff6, "__spi_register_driver" },
	{ 0x30c93844, "debugfs_create_file" },
	{ 0x73b71578, "spi_setup" },
	{ 0x2b6ddf3f, "qcafrm_fsm_decode" },
	{ 0xdcf25530, "seq_read" },
	{ 0xf45a89df, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x681d8fba, "netif_schedule_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0x9e540b77, "netif_rx_ni" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x1df8d46d, "ethtool_op_get_link" },
	{ 0xbbcf8b16, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xcdb84f0f, "of_find_property" },
	{ 0xc051115b, "free_netdev" },
	{ 0x20105980, "driver_unregister" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0xd5ee3859, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfaeae2a5, "skb_push" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x2715240, "spi_sync" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0x2425fd6f, "skb_copy_expand" },
	{ 0xe896f0d, "of_get_mac_address" },
	{ 0x44239691, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xeb349ff6, "wake_up_process" },
	{ 0x835033cd, "netdev_err" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xa1803e34, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6a180a8d, "dev_trans_start" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x62d17fa5, "skb_put" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1b6678ba, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "qca_7k_common");

MODULE_ALIAS("spi:qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "95CB68F4405098F5BF43BD4");
