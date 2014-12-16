#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xca05c877, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd0b61a6e, __VMLINUX_SYMBOL_STR(ar9003_paprd_is_done) },
	{ 0xcc65d1ac, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0xece59bc4, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0xb52af3cd, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x2f7c36b3, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3ce5801b, __VMLINUX_SYMBOL_STR(_pcim_iomap_table) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x68ac809d, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x21e8b0c6, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x8f132be4, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0x5fb7d225, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9e7745b0, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x1975aa1a, __VMLINUX_SYMBOL_STR(ar9003_mci_send_wlan_channels) },
	{ 0xca62a858, __VMLINUX_SYMBOL_STR(_pci_set_master) },
	{ 0x63bf7b77, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0xc2de7b1b, __VMLINUX_SYMBOL_STR(_ioread32) },
	{ 0xc9218acf, __VMLINUX_SYMBOL_STR(_pcie_capability_read_word) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa92dfda7, __VMLINUX_SYMBOL_STR(ath9k_hw_setantenna) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x38390c3c, __VMLINUX_SYMBOL_STR(ath9k_hw_gen_timer_start) },
	{ 0x258183b5, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0xd604f66d, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0xed403bb5, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x1c8c9783, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x579ee14f, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x12cc135e, __VMLINUX_SYMBOL_STR(relay_file_operations) },
	{ 0x176b46c8, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xe9c3d12e, __VMLINUX_SYMBOL_STR(ath9k_hw_numtxpending) },
	{ 0x32c4bce7, __VMLINUX_SYMBOL_STR(ar9003_paprd_setup_gain_table) },
	{ 0x68222be4, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0xed94600a, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x6236571c, __VMLINUX_SYMBOL_STR(ath9k_hw_set_interrupts) },
	{ 0xbdc494ee, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xa4f66064, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x5fca12bf, __VMLINUX_SYMBOL_STR(_pci_write_config_dword) },
	{ 0x8c838049, __VMLINUX_SYMBOL_STR(_iowrite32) },
	{ 0xe9c175d9, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_mci) },
	{ 0xc15c8611, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0x3f7806ea, __VMLINUX_SYMBOL_STR(ar9003_paprd_enable) },
	{ 0xbba06ab2, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0x38f92ff1, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x18e4ed79, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xa0c7b7d5, __VMLINUX_SYMBOL_STR(ath9k_hw_computetxtime) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xe792ec37, __VMLINUX_SYMBOL_STR(ath9k_hw_disable_interrupts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe8e2a23b, __VMLINUX_SYMBOL_STR(ath9k_hw_bstuck_nfcal) },
	{ 0x7393541c, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0xb2481c30, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0xf0f4acb3, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xeed5d6f7, __VMLINUX_SYMBOL_STR(ath9k_hw_gettxbuf) },
	{ 0xbb36e33, __VMLINUX_SYMBOL_STR(dfs_pattern_detector_init) },
	{ 0xada49ccf, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb7ef4536, __VMLINUX_SYMBOL_STR(rate_control_send_low) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xa8b94eb8, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdca96084, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xb8f21e46, __VMLINUX_SYMBOL_STR(ath_gen_timer_free) },
	{ 0xee4e3d28, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0xa0ecd01f, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x5e21143a, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0xaf0d3053, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x4474c6c2, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xbb9ca457, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x55331a91, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_gpio_input) },
	{ 0xae5454c3, __VMLINUX_SYMBOL_STR(ath9k_hw_kill_interrupts) },
	{ 0x4609fe02, __VMLINUX_SYMBOL_STR(_pci_get_drvdata) },
	{ 0xdbbdcf06, __VMLINUX_SYMBOL_STR(relay_switch_subbuf) },
	{ 0x239e1cf2, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5ea6996d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x6b1c85fb, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xcd11b759, __VMLINUX_SYMBOL_STR(_pcie_capability_clear_word) },
	{ 0x391cd8af, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xb7827051, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xa79860e6, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb6d56b6c, __VMLINUX_SYMBOL_STR(ath9k_hw_process_rxdesc_edma) },
	{ 0xbac51ef8, __VMLINUX_SYMBOL_STR(ar9003_paprd_populate_single_table) },
	{ 0xbc7e1f73, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x4bce7a33, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7ba6f396, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xba025087, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xc107f805, __VMLINUX_SYMBOL_STR(ath_gen_timer_isr) },
	{ 0x603af2ef, __VMLINUX_SYMBOL_STR(ath9k_hw_rxprocdesc) },
	{ 0xa48cf7b3, __VMLINUX_SYMBOL_STR(relay_close) },
	{ 0xd74047d6, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x23944829, __VMLINUX_SYMBOL_STR(_pci_set_drvdata) },
	{ 0x4740fda4, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x509f70c7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb9cd8958, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_2wire) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xf73546d1, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x48d782d8, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x7ab1c1a3, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x13836670, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_dbg_info) },
	{ 0xc35d5232, __VMLINUX_SYMBOL_STR(ar9003_paprd_create_curve) },
	{ 0xcbec5fb8, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_register) },
	{ 0x2f3960d5, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xff92e29c, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x6d39bcdb, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x85cf6df2, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x4420fcb4, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0xd645bfbc, __VMLINUX_SYMBOL_STR(ath9k_hw_gen_timer_stop) },
	{ 0xca492021, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x4e2481d5, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x82783356, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x98dd1db1, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc09b4964, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xedbeb188, __VMLINUX_SYMBOL_STR(ath9k_hw_addrxbuf_edma) },
	{ 0x1d72c12c, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x898a8ee9, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xcaa0e35, __VMLINUX_SYMBOL_STR(ath9k_hw_setup_statusring) },
	{ 0xcf827f10, __VMLINUX_SYMBOL_STR(_pci_unregister_driver) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x69ab919d, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xda33965e, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xa82a5eb8, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xe88929fa, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x327183a1, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0xa10c6f21, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xd2a70dae, __VMLINUX_SYMBOL_STR(ar9003_mci_get_next_gpm_offset) },
	{ 0x5c77406c, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x9cf94504, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2e12f5e5, __VMLINUX_SYMBOL_STR(dev_kfree_skb_any) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x627eaab3, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xd28aa2ed, __VMLINUX_SYMBOL_STR(ath9k_hw_puttxbuf) },
	{ 0x8ed7a69c, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x4ce34828, __VMLINUX_SYMBOL_STR(ar9003_mci_state) },
	{ 0xe68a30c3, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_scheme) },
	{ 0x4b0778b7, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x1faf4bb4, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x58983b81, __VMLINUX_SYMBOL_STR(_pcim_enable_device) },
	{ 0x24e829d0, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x309c0e1b, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x77f62b28, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x50ec8914, __VMLINUX_SYMBOL_STR(ath9k_hw_abortpcurecv) },
	{ 0xe056082a, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0xf5a8b5b3, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd2981357, __VMLINUX_SYMBOL_STR(ath9k_cmn_count_streams) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x2174b794, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb79c5eaf, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9376f2, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0x5cbb274d, __VMLINUX_SYMBOL_STR(ar9003_mci_get_interrupt) },
	{ 0xfc76caa5, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7842af6f, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xc5da7f46, __VMLINUX_SYMBOL_STR(_pci_set_consistent_dma_mask) },
	{ 0x1c96663b, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0xe6fb4d20, __VMLINUX_SYMBOL_STR(ath9k_hw_updatetxtriglevel) },
	{ 0x8a243df9, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0x7ca990c5, __VMLINUX_SYMBOL_STR(ar9003_mci_set_bt_version) },
	{ 0x367f433e, __VMLINUX_SYMBOL_STR(ath9k_hw_set_rx_bufsize) },
	{ 0x40f0df73, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0x190f2bef, __VMLINUX_SYMBOL_STR(ar9003_is_paprd_enabled) },
	{ 0x56a89ead, __VMLINUX_SYMBOL_STR(ar9003_get_pll_sqsum_dvc) },
	{ 0xffdd6c81, __VMLINUX_SYMBOL_STR(ar9003_mci_send_message) },
	{ 0xc4e54872, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x8d686d5b, __VMLINUX_SYMBOL_STR(ar9003_mci_cleanup) },
	{ 0x192559a, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x1586ea2f, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x68ed4fb, __VMLINUX_SYMBOL_STR(ath9k_hw_txstart) },
	{ 0xd5d52b50, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x873ee550, __VMLINUX_SYMBOL_STR(ath9k_hw_check_alive) },
	{ 0x25563496, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf41ea618, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_concur_txprio) },
	{ 0x521414ec, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4a79c5dc, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x68ab69d4, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xde1fb820, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x902e4494, __VMLINUX_SYMBOL_STR(ar9003_mci_setup) },
	{ 0x3892e21a, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x7a03fb89, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_unregister) },
	{ 0xcd13b66b, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x9c5e6334, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0x84bc73c, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x3dd0962, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xfc5abd1d, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xe7af73c5, __VMLINUX_SYMBOL_STR(_pci_read_config_dword) },
	{ 0x1333e3c0, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e53258, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdef01f2d, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xa1fc36c4, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xe5495276, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw) },
	{ 0xa351a7e9, __VMLINUX_SYMBOL_STR(ath9k_hw_check_nav) },
	{ 0xe33cb5bf, __VMLINUX_SYMBOL_STR(ath9k_hw_putrxbuf) },
	{ 0x152b0819, __VMLINUX_SYMBOL_STR(_pci_read_config_byte) },
	{ 0x80e2d100, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0x73b6fa0d, __VMLINUX_SYMBOL_STR(_pci_set_dma_mask) },
	{ 0xd8df7445, __VMLINUX_SYMBOL_STR(ar9003_paprd_init_table) },
	{ 0x922fa169, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x29fc6729, __VMLINUX_SYMBOL_STR(ath9k_hw_setuprxdesc) },
	{ 0x5ec34bc8, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x63ac308d, __VMLINUX_SYMBOL_STR(ath9k_hw_abort_tx_dma) },
	{ 0xa535c61e, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x8565ae40, __VMLINUX_SYMBOL_STR(_pci_write_config_byte) },
	{ 0xe228631b, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xf2a87a78, __VMLINUX_SYMBOL_STR(relay_open) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x345c64e, __VMLINUX_SYMBOL_STR(ath_gen_timer_alloc) },
	{ 0x565aa423, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0xcc7bc244, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x857dde58, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x44335ef3, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x3f880403, __VMLINUX_SYMBOL_STR(ath9k_hw_enable_interrupts) },
	{ 0xa6a439f2, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc1f81642, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xd3ef8e26, __VMLINUX_SYMBOL_STR(ath9k_hw_intrpend) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xdfdcff55, __VMLINUX_SYMBOL_STR(_pci_register_driver) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6ab776fd, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x5907da33, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1b6773d7, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6c2ec4b8, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xf5741fff, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4835b291, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x1e6fbb2d, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x227a4454, __VMLINUX_SYMBOL_STR(_pcim_iomap_regions) },
	{ 0xfa773a23, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
	{ 0xc70cf43d, __VMLINUX_SYMBOL_STR(ath9k_hw_stop_dma_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,mac80211,grt_redirect,ath9k_common,cfg80211,ath";

MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A3Bsd00001C71bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000105Bsd0000E01Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A32sd00000306bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000185Fsd0000309Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd00001536bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv00001A3Bsd00002C37bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002086bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001237bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002126bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd0000126Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002152bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E075bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003122bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004105bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004106bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C706bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C680bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C708bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003218bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003219bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002C97bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002100bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001C56sd00004001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006627bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006628bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Fsd00007197bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001186bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F86bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001195bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F95bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C00bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C01bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001043sd0000850Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002116bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006661bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000168Csd00003117bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000017AAsd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001969sd00000091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002110bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001043sd0000850Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006631bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006641bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000103Csd00001864bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000063bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000064bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000010CFsd00001783bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002176bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E068bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00006671bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002811bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002812bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003025bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E069bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000622bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000672bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000662bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd000018E3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd0000217Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000652bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000612bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002130bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Fsd00007202bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002810bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("platform:ath9k");
MODULE_ALIAS("platform:ar933x_wmac");
MODULE_ALIAS("platform:ar934x_wmac");
MODULE_ALIAS("platform:qca955x_wmac");

MODULE_INFO(srcversion, "1C16D058B34CD8BD3D4024C");
