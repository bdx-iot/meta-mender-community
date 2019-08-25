
# To avoid conflicts with systemd in meta-mender-demo

do_install_append_stm32mp1() {
	rm ${D}${sysconfdir}/systemd/network/eth.network
}

