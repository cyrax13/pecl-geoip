ZEND_BEGIN_ARG_INFO_EX(arginfo_geoip_void, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_geoip_database_opt, 0, 0, 0)
	ZEND_ARG_INFO(0, database)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_geoip_database, 0, 0, 1)
	ZEND_ARG_INFO(0, database)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_geoip_host, 0, 0, 1)
	ZEND_ARG_INFO(0, host)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_geoip_region, 0, 0, 2)
	ZEND_ARG_INFO(0, country_code)
	ZEND_ARG_INFO(0, region_code)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_geoip_directory, 0, 0, 1)
	ZEND_ARG_INFO(0, directory)
ZEND_END_ARG_INFO()

/* {{{ */
static const zend_function_entry geoip_functions[] = {
	ZEND_FE(geoip_database_info,                   arginfo_geoip_database_opt)
	ZEND_FE(geoip_country_code_by_name,            arginfo_geoip_host)
	ZEND_FE(geoip_country_code3_by_name,           arginfo_geoip_host)
	ZEND_FE(geoip_country_name_by_name,            arginfo_geoip_host)
	ZEND_FE(geoip_continent_code_by_name,          arginfo_geoip_host)
	ZEND_FE(geoip_org_by_name,                     arginfo_geoip_host)
	ZEND_FE(geoip_record_by_name,                  arginfo_geoip_host)
	ZEND_FE(geoip_id_by_name,                      arginfo_geoip_host)
	ZEND_FE(geoip_region_by_name,                  arginfo_geoip_host)
	ZEND_FE(geoip_isp_by_name,                     arginfo_geoip_host)
	ZEND_FE(geoip_db_avail,                        arginfo_geoip_database)
	ZEND_FE(geoip_db_get_all_info,                 arginfo_geoip_void)
	ZEND_FE(geoip_db_filename,                     arginfo_geoip_database)
#if LIBGEOIP_VERSION >= 1004001
	ZEND_FE(geoip_region_name_by_code,             arginfo_geoip_region)
	ZEND_FE(geoip_time_zone_by_country_and_region, arginfo_geoip_region)
#endif
#ifdef HAVE_CUSTOM_DIRECTORY
	ZEND_FE(geoip_setup_custom_directory,          arginfo_geoip_directory)
#endif
	ZEND_FE(geoip_asnum_by_name,                   arginfo_geoip_host)
	ZEND_FE(geoip_domain_by_name,                  arginfo_geoip_host)
#if LIBGEOIP_VERSION >= 1004005
	ZEND_FE(geoip_country_code_by_name_v6,         arginfo_geoip_host)
	ZEND_FE(geoip_country_code3_by_name_v6,        arginfo_geoip_host)
	ZEND_FE(geoip_country_name_by_name_v6,         arginfo_geoip_host)
#endif
#if LIBGEOIP_VERSION >= 1004008
	ZEND_FE(geoip_netspeedcell_by_name,            arginfo_geoip_host)
#endif
	ZEND_FE_END
};
/* }}} */