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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe5c02461, "netdev_info" },
	{ 0x2f040dfe, "kmalloc_caches" },
	{ 0xba7a88df, "ethtool_op_get_ts_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xae0ce2ef, "__pm_runtime_idle" },
	{ 0x911c3dd, "phy_disconnect" },
	{ 0x74cf78e0, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb9a6fcf, "pcim_enable_device" },
	{ 0x229484cd, "netdev_stats_to_stats64" },
	{ 0x836c7d88, "phy_do_ioctl_running" },
	{ 0xda360153, "phy_stop" },
	{ 0x129bf20a, "napi_disable" },
	{ 0xfc8f919e, "napi_consume_skb" },
	{ 0x1ab402df, "napi_schedule_prep" },
	{ 0xde0bf20c, "pcim_iomap_table" },
	{ 0xb0bbcb9a, "dev_err_probe" },
	{ 0x113fe5c7, "phy_resume" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x60ccffd4, "dma_set_mask" },
	{ 0xffcf4ed4, "__devm_mdiobus_register" },
	{ 0xc41d1fc2, "pcie_set_readrq" },
	{ 0xdf108eea, "phy_init_hw" },
	{ 0xf5db4d93, "phy_read_mmd" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xb3314b2d, "phy_ethtool_nway_reset" },
	{ 0x2b5b80a8, "mdiobus_get_phy" },
	{ 0xc598f876, "phy_write_paged" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa46544de, "phy_select_page" },
	{ 0xfd66d501, "mdiobus_write" },
	{ 0xe0e1df7c, "phy_get_pause" },
	{ 0xe779c309, "pci_write_config_byte" },
	{ 0x642c476b, "phy_support_asym_pause" },
	{ 0x49058f65, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa29e5273, "pcie_capability_clear_and_set_word" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x5e113aa3, "__pm_runtime_resume" },
	{ 0x3919be46, "dma_free_attrs" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xdd64e639, "strscpy" },
	{ 0x5966c90b, "dma_set_coherent_mask" },
	{ 0x6acefef, "devm_mdiobus_alloc_size" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0xec11b6af, "phy_ethtool_get_eee" },
	{ 0x4434ad9e, "phy_set_asym_pause" },
	{ 0x4d65cbd5, "csum_ipv6_magic" },
	{ 0x9d8d141d, "phy_start_aneg" },
	{ 0x3db7b795, "__pskb_pull_tail" },
	{ 0xba03d744, "phy_print_status" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x594d14c, "pci_set_master" },
	{ 0xbbdd28af, "__alloc_pages" },
	{ 0x681d8fba, "netif_schedule_queue" },
	{ 0x5becbc54, "pci_alloc_irq_vectors_affinity" },
	{ 0x404fd5c3, "phy_mac_interrupt" },
	{ 0x3c01dda, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x99a624, "phy_modify" },
	{ 0x2e80a424, "dma_sync_single_for_cpu" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xe40953c5, "phy_start" },
	{ 0x3d88230e, "netif_tx_wake_queue" },
	{ 0x162d047, "eth_platform_get_mac_address" },
	{ 0x1df8d46d, "ethtool_op_get_link" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x8d8ff229, "mdiobus_read" },
	{ 0xcb8afb0a, "register_netdev" },
	{ 0x258e6d74, "napi_enable" },
	{ 0x40ea97cb, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc5a9545a, "phy_speed_down" },
	{ 0xe1e570f, "dma_alloc_attrs" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x674a154b, "phy_modify_paged" },
	{ 0xc7275ee2, "netdev_printk" },
	{ 0x354f99d0, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcfa5a248, "phy_suspend" },
	{ 0x6c8376db, "softnet_data" },
	{ 0x163f4a3f, "_dev_err" },
	{ 0x89948c62, "__phy_modify" },
	{ 0xfd286274, "pci_clear_master" },
	{ 0x70b0d587, "pcim_iomap_regions" },
	{ 0xf8f0835d, "devm_alloc_etherdev_mqs" },
	{ 0x3d6a8166, "devm_add_action" },
	{ 0xf043c385, "phy_ethtool_get_link_ksettings" },
	{ 0xdc4ed578, "pci_select_bars" },
	{ 0x60e5cc72, "netif_device_attach" },
	{ 0xad8ff428, "napi_gro_receive" },
	{ 0x44239691, "_dev_info" },
	{ 0xd4010db0, "__free_pages" },
	{ 0x4ecd5ec0, "pci_disable_link_state" },
	{ 0x4f967470, "netif_device_detach" },
	{ 0x47279311, "__napi_schedule" },
	{ 0xe89e7686, "phy_connect_direct" },
	{ 0xa39072d8, "phy_speed_up" },
	{ 0xaac1db13, "pci_status_get_and_clear_errors" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe67d7095, "pm_schedule_suspend" },
	{ 0x1d466866, "__devm_alloc_percpu" },
	{ 0x3ec73439, "__mdiobus_write" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x8c551e5e, "napi_complete_done" },
	{ 0x4c1b6591, "genphy_soft_reset" },
	{ 0xb7219ef8, "dma_map_page_attrs" },
	{ 0xc42e99a7, "eth_type_trans" },
	{ 0x7b4627a9, "cpu_hwcap_keys" },
	{ 0xa44c2eb0, "dev_driver_string" },
	{ 0x21ce3ed1, "dev_fetch_sw_netstats" },
	{ 0xdb5a1045, "phy_restore_page" },
	{ 0xca42775e, "phy_read_paged" },
	{ 0xeb451c00, "pskb_expand_head" },
	{ 0x835033cd, "netdev_err" },
	{ 0x25ff1e01, "pci_unregister_driver" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x86cd1836, "devm_clk_get" },
	{ 0x4a22cacf, "kmem_cache_alloc_trace" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x87ee80d, "phy_write_mmd" },
	{ 0xaf565fa6, "pci_irq_vector" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x21bd6724, "pci_set_power_state" },
	{ 0xc7f84d1b, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x1b29bbe2, "eth_validate_addr" },
	{ 0xcc0ed40f, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6f57dd07, "phy_attached_info" },
	{ 0x4f336844, "dma_sync_single_for_device" },
	{ 0xce7ea036, "pci_dev_run_wake" },
	{ 0x44450e48, "phy_ethtool_set_eee" },
	{ 0xf674d375, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x6d2de3b6, "request_firmware" },
	{ 0xc82329ad, "dma_unmap_page_attrs" },
	{ 0xb6526fd6, "unregister_netdev" },
	{ 0x20bb3feb, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x99c14b53, "netdev_update_features" },
	{ 0x68dd3a22, "__napi_alloc_skb" },
	{ 0xb64ddf9e, "skb_tstamp_tx" },
	{ 0x51d36ca8, "pci_wake_from_d3" },
	{ 0x8be1d7cd, "pcim_set_mwi" },
	{ 0xd7e682ff, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xebcdc4a1, "skb_copy_bits" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x76f7ca05, "__skb_pad" },
	{ 0x753471b9, "phy_set_max_speed" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010FFd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00003000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "669EB3EA67225918FBA45F7");
