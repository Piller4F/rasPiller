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
	{ 0xe5c02461, "netdev_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x911c3dd, "phy_disconnect" },
	{ 0x6742d4fa, "ptp_schedule_worker" },
	{ 0xda360153, "phy_stop" },
	{ 0x129bf20a, "napi_disable" },
	{ 0x1ab402df, "napi_schedule_prep" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x60ccffd4, "dma_set_mask" },
	{ 0xb655b259, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x72e24e4, "pci_disable_msix" },
	{ 0xa3ad68c0, "__mdiobus_register" },
	{ 0xdd98b53f, "of_phy_get_and_connect" },
	{ 0x5aab4505, "phy_ethtool_get_wol" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xad841033, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x642c476b, "phy_support_asym_pause" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0xb2e932ab, "mdiobus_unregister" },
	{ 0x5966c90b, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6acefef, "devm_mdiobus_alloc_size" },
	{ 0xec11b6af, "phy_ethtool_get_eee" },
	{ 0x2f8cdd6, "__netdev_alloc_skb" },
	{ 0x9d8d141d, "phy_start_aneg" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xb2e8783e, "ptp_clock_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xba03d744, "phy_print_status" },
	{ 0x594d14c, "pci_set_master" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x491329f0, "phy_remove_link_mode" },
	{ 0x2e80a424, "dma_sync_single_for_cpu" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xe40953c5, "phy_start" },
	{ 0x17edcce5, "phy_find_first" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1df8d46d, "ethtool_op_get_link" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x258e6d74, "napi_enable" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x81bb8729, "__dev_kfree_skb_irq" },
	{ 0x354f99d0, "netif_napi_add" },
	{ 0xaf3d5b31, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x142480ae, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf8f0835d, "devm_alloc_etherdev_mqs" },
	{ 0xa61be4e3, "phy_init_eee" },
	{ 0xf043c385, "phy_ethtool_get_link_ksettings" },
	{ 0xdc4ed578, "pci_select_bars" },
	{ 0xe896f0d, "of_get_mac_address" },
	{ 0xad8ff428, "napi_gro_receive" },
	{ 0x4f967470, "netif_device_detach" },
	{ 0x1f50a5cf, "pci_enable_msix_range" },
	{ 0xf5b8311c, "eth_prepare_mac_addr_change" },
	{ 0x47279311, "__napi_schedule" },
	{ 0xe89e7686, "phy_connect_direct" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92997ed8, "_printk" },
	{ 0x8c551e5e, "napi_complete_done" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x3e777582, "ptp_find_pin" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x835033cd, "netdev_err" },
	{ 0x25ff1e01, "pci_unregister_driver" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x668cbf84, "__netif_napi_del" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x10e6db0f, "phy_ethtool_set_wol" },
	{ 0xcc0ed40f, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6f57dd07, "phy_attached_info" },
	{ 0x68f9669a, "ptp_clock_index" },
	{ 0x29251f66, "pci_disable_msi" },
	{ 0x7a86a83a, "devm_ioremap" },
	{ 0x44450e48, "phy_ethtool_set_eee" },
	{ 0xf674d375, "__pci_register_driver" },
	{ 0xc82329ad, "dma_unmap_page_attrs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x58ef4906, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x71ef59f8, "consume_skb" },
	{ 0x6684f706, "pci_enable_device_mem" },
	{ 0xb64ddf9e, "skb_tstamp_tx" },
	{ 0x62d17fa5, "skb_put" },
	{ 0x982bad7d, "pci_release_selected_regions" },
	{ 0x298c44c7, "pci_request_selected_regions" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb3019420, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001055d00007430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001055d00007431sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0D8C9B88DAA0C3A108F4D3D");
