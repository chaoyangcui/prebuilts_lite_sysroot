/*
 * This header was generated from the Linux kernel headers by update_headers.py,
 * to provide necessary information from kernel to userspace, such as constants,
 * structures, and macros, and thus, contains no copyrightable information.
 */
#define CHET_MT   0
#define CHET_ST   1
#define CHET_IE   2
#define CHET_DT   3
#define CHET_V1   4
#define CHET_V2   5
#define CHET_V3   6
#define CHET_V4   7
struct changer_params {
	int cp_curpicker;
	int cp_npickers;
	int cp_nslots;
	int cp_nportals;
	int cp_ndrives;
};
struct changer_vendor_params {
	int  cvp_n1;
	char cvp_label1[16];
	int  cvp_n2;
	char cvp_label2[16];
	int  cvp_n3;
	char cvp_label3[16];
	int  cvp_n4;
	char cvp_label4[16];
	int  reserved[8];
};
struct changer_move {
	int cm_fromtype;
	int cm_fromunit;
	int cm_totype;
	int cm_tounit;
	int cm_flags;
};
#define CM_INVERT   1
struct changer_exchange {
	int ce_srctype;
	int ce_srcunit;
	int ce_fdsttype;
	int ce_fdstunit;
	int ce_sdsttype;
	int ce_sdstunit;
	int ce_flags;
};
#define CE_INVERT1   1
#define CE_INVERT2   2
struct changer_position {
	int cp_type;
	int cp_unit;
	int cp_flags;
};
#define CP_INVERT   1
struct changer_element_status {
	int             ces_type;
	unsigned char   __user *ces_data;
};
#define CESTATUS_FULL     0x01
#define CESTATUS_IMPEXP   0x02
#define CESTATUS_EXCEPT   0x04
#define CESTATUS_ACCESS   0x08
#define CESTATUS_EXENAB   0x10
#define CESTATUS_INENAB   0x20
struct changer_get_element {
	int	cge_type;
	int	cge_unit;
	int	cge_status;
	int     cge_errno;
	int     cge_srctype;
	int     cge_srcunit;
	int     cge_id;
	int     cge_lun;
	char    cge_pvoltag[36];
	char    cge_avoltag[36];
	int     cge_flags;
};
#define CGE_ERRNO     0x01
#define CGE_INVERT    0x02
#define CGE_SRC       0x04
#define CGE_IDLUN     0x08
#define CGE_PVOLTAG   0x10
#define CGE_AVOLTAG   0x20
struct changer_set_voltag {
	int	csv_type;
	int	csv_unit;
	char    csv_voltag[36];
	int     csv_flags;
};
#define CSV_PVOLTAG   0x01
#define CSV_AVOLTAG   0x02
#define CSV_CLEARTAG  0x04
#define CHIOMOVE       _IOW('c', 1,struct changer_move)
#define CHIOEXCHANGE   _IOW('c', 2,struct changer_exchange)
#define CHIOPOSITION   _IOW('c', 3,struct changer_position)
#define CHIOGPICKER    _IOR('c', 4,int)
#define CHIOSPICKER    _IOW('c', 5,int)
#define CHIOGPARAMS    _IOR('c', 6,struct changer_params)
#define CHIOGSTATUS    _IOW('c', 8,struct changer_element_status)
#define CHIOGELEM      _IOW('c',16,struct changer_get_element)
#define CHIOINITELEM   _IO('c',17)
#define CHIOSVOLTAG    _IOW('c',18,struct changer_set_voltag)
#define CHIOGVPARAMS   _IOR('c',19,struct changer_vendor_params)
