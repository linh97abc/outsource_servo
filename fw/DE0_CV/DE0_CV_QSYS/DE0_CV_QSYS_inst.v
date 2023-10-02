	DE0_CV_QSYS u0 (
		.clk_clk                                     (<connected-to-clk_clk>),                                     //                              clk.clk
		.clk_5m_clk                                  (<connected-to-clk_5m_clk>),                                  //                           clk_5m.clk
		.clk_sdram_clk                               (<connected-to-clk_sdram_clk>),                               //                        clk_sdram.clk
		.ltc2992_i2c_sda_t                           (<connected-to-ltc2992_i2c_sda_t>),                           //                      ltc2992_i2c.sda_t
		.ltc2992_i2c_scl_t                           (<connected-to-ltc2992_i2c_scl_t>),                           //                                 .scl_t
		.ltc2992_i2c_sda_i                           (<connected-to-ltc2992_i2c_sda_i>),                           //                                 .sda_i
		.ltc2992_i2c_scl_i                           (<connected-to-ltc2992_i2c_scl_i>),                           //                                 .scl_i
		.pll_locked_export                           (<connected-to-pll_locked_export>),                           //                       pll_locked.export
		.reset_reset_n                               (<connected-to-reset_reset_n>),                               //                            reset.reset_n
		.sdram_wire_addr                             (<connected-to-sdram_wire_addr>),                             //                       sdram_wire.addr
		.sdram_wire_ba                               (<connected-to-sdram_wire_ba>),                               //                                 .ba
		.sdram_wire_cas_n                            (<connected-to-sdram_wire_cas_n>),                            //                                 .cas_n
		.sdram_wire_cke                              (<connected-to-sdram_wire_cke>),                              //                                 .cke
		.sdram_wire_cs_n                             (<connected-to-sdram_wire_cs_n>),                             //                                 .cs_n
		.sdram_wire_dq                               (<connected-to-sdram_wire_dq>),                               //                                 .dq
		.sdram_wire_dqm                              (<connected-to-sdram_wire_dqm>),                              //                                 .dqm
		.sdram_wire_ras_n                            (<connected-to-sdram_wire_ras_n>),                            //                                 .ras_n
		.sdram_wire_we_n                             (<connected-to-sdram_wire_we_n>),                             //                                 .we_n
		.servo_controllerv1_0_conduit_end_spi_sclk   (<connected-to-servo_controllerv1_0_conduit_end_spi_sclk>),   // servo_controllerv1_0_conduit_end.spi_sclk
		.servo_controllerv1_0_conduit_end_spi_cs     (<connected-to-servo_controllerv1_0_conduit_end_spi_cs>),     //                                 .spi_cs
		.servo_controllerv1_0_conduit_end_spi_miso   (<connected-to-servo_controllerv1_0_conduit_end_spi_miso>),   //                                 .spi_miso
		.servo_controllerv1_0_conduit_end_spi_mosi   (<connected-to-servo_controllerv1_0_conduit_end_spi_mosi>),   //                                 .spi_mosi
		.servo_controllerv1_0_conduit_end_hall_0     (<connected-to-servo_controllerv1_0_conduit_end_hall_0>),     //                                 .hall_0
		.servo_controllerv1_0_conduit_end_hall_1     (<connected-to-servo_controllerv1_0_conduit_end_hall_1>),     //                                 .hall_1
		.servo_controllerv1_0_conduit_end_hall_2     (<connected-to-servo_controllerv1_0_conduit_end_hall_2>),     //                                 .hall_2
		.servo_controllerv1_0_conduit_end_hall_3     (<connected-to-servo_controllerv1_0_conduit_end_hall_3>),     //                                 .hall_3
		.servo_controllerv1_0_conduit_end_phase_0    (<connected-to-servo_controllerv1_0_conduit_end_phase_0>),    //                                 .phase_0
		.servo_controllerv1_0_conduit_end_phase_1    (<connected-to-servo_controllerv1_0_conduit_end_phase_1>),    //                                 .phase_1
		.servo_controllerv1_0_conduit_end_phase_2    (<connected-to-servo_controllerv1_0_conduit_end_phase_2>),    //                                 .phase_2
		.servo_controllerv1_0_conduit_end_phase_3    (<connected-to-servo_controllerv1_0_conduit_end_phase_3>),    //                                 .phase_3
		.servo_controllerv1_0_conduit_end_nFault     (<connected-to-servo_controllerv1_0_conduit_end_nFault>),     //                                 .nFault
		.servo_controllerv1_0_conduit_end_drv8320_en (<connected-to-servo_controllerv1_0_conduit_end_drv8320_en>), //                                 .drv8320_en
		.tmp101_i2c_sda_t                            (<connected-to-tmp101_i2c_sda_t>),                            //                       tmp101_i2c.sda_t
		.tmp101_i2c_scl_t                            (<connected-to-tmp101_i2c_scl_t>),                            //                                 .scl_t
		.tmp101_i2c_sda_i                            (<connected-to-tmp101_i2c_sda_i>),                            //                                 .sda_i
		.tmp101_i2c_scl_i                            (<connected-to-tmp101_i2c_scl_i>),                            //                                 .scl_i
		.uart_rs485_conduit_end_rxd                  (<connected-to-uart_rs485_conduit_end_rxd>),                  //           uart_rs485_conduit_end.rxd
		.uart_rs485_conduit_end_txd                  (<connected-to-uart_rs485_conduit_end_txd>),                  //                                 .txd
		.uart_rs485_conduit_end_dbg_os_pulse         (<connected-to-uart_rs485_conduit_end_dbg_os_pulse>)          //                                 .dbg_os_pulse
	);

