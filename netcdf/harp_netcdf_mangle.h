#ifndef HARP_NETCDF_MANGLE_H
#define HARP_NETCDF_MANGLE_H

/*
 * This header file mangles all symbols exported from the netcdf library.
 * This is needed on some platforms because of nameresolving conflicts when
 * HARP is used as a module in an application that has its own version of netcdf.
 * Even though name mangling is not needed for every platform or HARP
 * interface, we always perform the mangling for consitency reasons.
 *
 * The following command was used to obtain the symbol list:
 * nm .libs/netcdf.a | grep " [TR] " | grep -v " _harp_"
 */

#ifdef HARP_NETCDF_NAME_MANGLE

#define dup_NC_attrarrayV harp_dup_NC_attrarrayV
#define dup_NC_dimarrayV harp_dup_NC_dimarrayV
#define dup_NC_vararrayV harp_dup_NC_vararrayV
#define elem_NC_attrarray harp_elem_NC_attrarray
#define elem_NC_dimarray harp_elem_NC_dimarray
#define fill_NC_var harp_fill_NC_var
#define find_NC_Udim harp_find_NC_Udim
#define free_NC_attr harp_free_NC_attr
#define free_NC_attrarrayV harp_free_NC_attrarrayV
#define free_NC_attrarrayV0 harp_free_NC_attrarrayV0
#define free_NC_dim harp_free_NC_dim
#define free_NC_dimarrayV harp_free_NC_dimarrayV
#define free_NC_dimarrayV0 harp_free_NC_dimarrayV0
#define free_NC_string harp_free_NC_string
#define free_NC_var harp_free_NC_var
#define free_NC_vararrayV harp_free_NC_vararrayV
#define free_NC_vararrayV0 harp_free_NC_vararrayV0
#define nc__create harp_nc__create
#define nc__create_mp harp_nc__create_mp
#define nc__enddef harp_nc__enddef
#define nc__open harp_nc__open
#define nc__open_mp harp_nc__open_mp
#define nc_abort harp_nc_abort
#define nc_advise harp_nc_advise
#define NC_calcsize harp_NC_calcsize
#define NC_check_id harp_NC_check_id
#define NC_check_name harp_NC_check_name
#define NC_check_vlen harp_NC_check_vlen
#define nc_cktype harp_nc_cktype
#define nc_close harp_nc_close
#define nc_copy_att harp_nc_copy_att
#define nc_copy_var harp_nc_copy_var
#define nc_create harp_nc_create
#define nc_def_dim harp_nc_def_dim
#define nc_def_var harp_nc_def_var
#define nc_del_att harp_nc_del_att
#define nc_delete harp_nc_delete
#define nc_delete_mp harp_nc_delete_mp
#define nc_enddef harp_nc_enddef
#define NC_findattr harp_NC_findattr
#define NC_findvar harp_NC_findvar
#define nc_get_att harp_nc_get_att
#define nc_get_att_double harp_nc_get_att_double
#define nc_get_att_float harp_nc_get_att_float
#define nc_get_att_int harp_nc_get_att_int
#define nc_get_att_long harp_nc_get_att_long
#define nc_get_att_schar harp_nc_get_att_schar
#define nc_get_att_short harp_nc_get_att_short
#define nc_get_att_text harp_nc_get_att_text
#define nc_get_att_uchar harp_nc_get_att_uchar
#define nc_get_NC harp_nc_get_NC
#define nc_get_rec harp_nc_get_rec
#define nc_get_var_double harp_nc_get_var_double
#define nc_get_var_float harp_nc_get_var_float
#define nc_get_var_int harp_nc_get_var_int
#define nc_get_var_long harp_nc_get_var_long
#define nc_get_var_schar harp_nc_get_var_schar
#define nc_get_var_short harp_nc_get_var_short
#define nc_get_var_text harp_nc_get_var_text
#define nc_get_var_uchar harp_nc_get_var_uchar
#define nc_get_var1 harp_nc_get_var1
#define nc_get_var1_double harp_nc_get_var1_double
#define nc_get_var1_float harp_nc_get_var1_float
#define nc_get_var1_int harp_nc_get_var1_int
#define nc_get_var1_long harp_nc_get_var1_long
#define nc_get_var1_schar harp_nc_get_var1_schar
#define nc_get_var1_short harp_nc_get_var1_short
#define nc_get_var1_text harp_nc_get_var1_text
#define nc_get_var1_uchar harp_nc_get_var1_uchar
#define nc_get_vara harp_nc_get_vara
#define nc_get_vara_double harp_nc_get_vara_double
#define nc_get_vara_float harp_nc_get_vara_float
#define nc_get_vara_int harp_nc_get_vara_int
#define nc_get_vara_long harp_nc_get_vara_long
#define nc_get_vara_schar harp_nc_get_vara_schar
#define nc_get_vara_short harp_nc_get_vara_short
#define nc_get_vara_text harp_nc_get_vara_text
#define nc_get_vara_uchar harp_nc_get_vara_uchar
#define nc_get_varm harp_nc_get_varm
#define nc_get_varm_double harp_nc_get_varm_double
#define nc_get_varm_float harp_nc_get_varm_float
#define nc_get_varm_int harp_nc_get_varm_int
#define nc_get_varm_long harp_nc_get_varm_long
#define nc_get_varm_schar harp_nc_get_varm_schar
#define nc_get_varm_short harp_nc_get_varm_short
#define nc_get_varm_text harp_nc_get_varm_text
#define nc_get_varm_uchar harp_nc_get_varm_uchar
#define nc_get_vars harp_nc_get_vars
#define nc_get_vars_double harp_nc_get_vars_double
#define nc_get_vars_float harp_nc_get_vars_float
#define nc_get_vars_int harp_nc_get_vars_int
#define nc_get_vars_long harp_nc_get_vars_long
#define nc_get_vars_schar harp_nc_get_vars_schar
#define nc_get_vars_short harp_nc_get_vars_short
#define nc_get_vars_text harp_nc_get_vars_text
#define nc_get_vars_uchar harp_nc_get_vars_uchar
#define nc_inq harp_nc_inq
#define nc_inq_att harp_nc_inq_att
#define nc_inq_attid harp_nc_inq_attid
#define nc_inq_attlen harp_nc_inq_attlen
#define nc_inq_attname harp_nc_inq_attname
#define nc_inq_atttype harp_nc_inq_atttype
#define nc_inq_base_pe harp_nc_inq_base_pe
#define nc_inq_dim harp_nc_inq_dim
#define nc_inq_dimid harp_nc_inq_dimid
#define nc_inq_dimlen harp_nc_inq_dimlen
#define nc_inq_dimname harp_nc_inq_dimname
#define nc_inq_format harp_nc_inq_format
#define nc_inq_libvers harp_nc_inq_libvers
#define nc_inq_natts harp_nc_inq_natts
#define nc_inq_ndims harp_nc_inq_ndims
#define nc_inq_nvars harp_nc_inq_nvars
#define nc_inq_rec harp_nc_inq_rec
#define nc_inq_unlimdim harp_nc_inq_unlimdim
#define nc_inq_var harp_nc_inq_var
#define nc_inq_vardimid harp_nc_inq_vardimid
#define nc_inq_varid harp_nc_inq_varid
#define nc_inq_varname harp_nc_inq_varname
#define nc_inq_varnatts harp_nc_inq_varnatts
#define nc_inq_varndims harp_nc_inq_varndims
#define nc_inq_vartype harp_nc_inq_vartype
#define NC_lookupvar harp_NC_lookupvar
#define nc_open harp_nc_open
#define nc_put_att harp_nc_put_att
#define nc_put_att_double harp_nc_put_att_double
#define nc_put_att_float harp_nc_put_att_float
#define nc_put_att_int harp_nc_put_att_int
#define nc_put_att_long harp_nc_put_att_long
#define nc_put_att_schar harp_nc_put_att_schar
#define nc_put_att_short harp_nc_put_att_short
#define nc_put_att_text harp_nc_put_att_text
#define nc_put_att_uchar harp_nc_put_att_uchar
#define nc_put_rec harp_nc_put_rec
#define nc_put_var_double harp_nc_put_var_double
#define nc_put_var_float harp_nc_put_var_float
#define nc_put_var_int harp_nc_put_var_int
#define nc_put_var_long harp_nc_put_var_long
#define nc_put_var_schar harp_nc_put_var_schar
#define nc_put_var_short harp_nc_put_var_short
#define nc_put_var_text harp_nc_put_var_text
#define nc_put_var_uchar harp_nc_put_var_uchar
#define nc_put_var1 harp_nc_put_var1
#define nc_put_var1_double harp_nc_put_var1_double
#define nc_put_var1_float harp_nc_put_var1_float
#define nc_put_var1_int harp_nc_put_var1_int
#define nc_put_var1_long harp_nc_put_var1_long
#define nc_put_var1_schar harp_nc_put_var1_schar
#define nc_put_var1_short harp_nc_put_var1_short
#define nc_put_var1_text harp_nc_put_var1_text
#define nc_put_var1_uchar harp_nc_put_var1_uchar
#define nc_put_vara harp_nc_put_vara
#define nc_put_vara_double harp_nc_put_vara_double
#define nc_put_vara_float harp_nc_put_vara_float
#define nc_put_vara_int harp_nc_put_vara_int
#define nc_put_vara_long harp_nc_put_vara_long
#define nc_put_vara_schar harp_nc_put_vara_schar
#define nc_put_vara_short harp_nc_put_vara_short
#define nc_put_vara_text harp_nc_put_vara_text
#define nc_put_vara_uchar harp_nc_put_vara_uchar
#define nc_put_varm harp_nc_put_varm
#define nc_put_varm_double harp_nc_put_varm_double
#define nc_put_varm_float harp_nc_put_varm_float
#define nc_put_varm_int harp_nc_put_varm_int
#define nc_put_varm_long harp_nc_put_varm_long
#define nc_put_varm_schar harp_nc_put_varm_schar
#define nc_put_varm_short harp_nc_put_varm_short
#define nc_put_varm_text harp_nc_put_varm_text
#define nc_put_varm_uchar harp_nc_put_varm_uchar
#define nc_put_vars harp_nc_put_vars
#define nc_put_vars_double harp_nc_put_vars_double
#define nc_put_vars_float harp_nc_put_vars_float
#define nc_put_vars_int harp_nc_put_vars_int
#define nc_put_vars_long harp_nc_put_vars_long
#define nc_put_vars_schar harp_nc_put_vars_schar
#define nc_put_vars_short harp_nc_put_vars_short
#define nc_put_vars_text harp_nc_put_vars_text
#define nc_put_vars_uchar harp_nc_put_vars_uchar
#define nc_redef harp_nc_redef
#define nc_rename_att harp_nc_rename_att
#define nc_rename_dim harp_nc_rename_dim
#define nc_rename_var harp_nc_rename_var
#define nc_set_base_pe harp_nc_set_base_pe
#define nc_set_default_format harp_nc_set_default_format
#define nc_set_fill harp_nc_set_fill
#define nc_strerror harp_nc_strerror
#define nc_sync harp_nc_sync
#define NC_sync harp_NC_sync
#define NC_var_shape harp_NC_var_shape
#define ncabort harp_ncabort
#define ncattcopy harp_ncattcopy
#define ncattdel harp_ncattdel
#define ncattget harp_ncattget
#define ncattinq harp_ncattinq
#define ncattname harp_ncattname
#define ncattput harp_ncattput
#define ncattrename harp_ncattrename
#define ncclose harp_ncclose
#define nccreate harp_nccreate
#define ncdimdef harp_ncdimdef
#define ncdimid harp_ncdimid
#define ncdiminq harp_ncdiminq
#define ncdimrename harp_ncdimrename
#define ncendef harp_ncendef
#define ncinquire harp_ncinquire
#define ncio_close harp_ncio_close
#define ncio_create harp_ncio_create
#define ncio_filesize harp_ncio_filesize
#define ncio_open harp_ncio_open
#define ncio_pad_length harp_ncio_pad_length
#define ncopen harp_ncopen
#define ncrecget harp_ncrecget
#define ncrecinq harp_ncrecinq
#define ncrecput harp_ncrecput
#define ncredef harp_ncredef
#define ncsetfill harp_ncsetfill
#define ncsync harp_ncsync
#define nctypelen harp_nctypelen
#define ncvardef harp_ncvardef
#define ncvarget harp_ncvarget
#define ncvarget1 harp_ncvarget1
#define ncvargetg harp_ncvargetg
#define ncvargets harp_ncvargets
#define ncvarid harp_ncvarid
#define ncvarinq harp_ncvarinq
#define ncvarput harp_ncvarput
#define ncvarput1 harp_ncvarput1
#define ncvarputg harp_ncvarputg
#define ncvarputs harp_ncvarputs
#define ncvarrename harp_ncvarrename
#define ncx_get_double_double harp_ncx_get_double_double
#define ncx_get_double_float harp_ncx_get_double_float
#define ncx_get_double_int harp_ncx_get_double_int
#define ncx_get_double_long harp_ncx_get_double_long
#define ncx_get_double_schar harp_ncx_get_double_schar
#define ncx_get_double_short harp_ncx_get_double_short
#define ncx_get_double_uchar harp_ncx_get_double_uchar
#define ncx_get_float_double harp_ncx_get_float_double
#define ncx_get_float_float harp_ncx_get_float_float
#define ncx_get_float_int harp_ncx_get_float_int
#define ncx_get_float_long harp_ncx_get_float_long
#define ncx_get_float_schar harp_ncx_get_float_schar
#define ncx_get_float_short harp_ncx_get_float_short
#define ncx_get_float_uchar harp_ncx_get_float_uchar
#define ncx_get_int_double harp_ncx_get_int_double
#define ncx_get_int_float harp_ncx_get_int_float
#define ncx_get_int_int harp_ncx_get_int_int
#define ncx_get_int_long harp_ncx_get_int_long
#define ncx_get_int_schar harp_ncx_get_int_schar
#define ncx_get_int_short harp_ncx_get_int_short
#define ncx_get_int_uchar harp_ncx_get_int_uchar
#define ncx_get_off_t harp_ncx_get_off_t
#define ncx_get_short_double harp_ncx_get_short_double
#define ncx_get_short_float harp_ncx_get_short_float
#define ncx_get_short_int harp_ncx_get_short_int
#define ncx_get_short_long harp_ncx_get_short_long
#define ncx_get_short_schar harp_ncx_get_short_schar
#define ncx_get_short_short harp_ncx_get_short_short
#define ncx_get_short_uchar harp_ncx_get_short_uchar
#define ncx_get_size_t harp_ncx_get_size_t
#define ncx_getn_double_double harp_ncx_getn_double_double
#define ncx_getn_double_float harp_ncx_getn_double_float
#define ncx_getn_double_int harp_ncx_getn_double_int
#define ncx_getn_double_long harp_ncx_getn_double_long
#define ncx_getn_double_schar harp_ncx_getn_double_schar
#define ncx_getn_double_short harp_ncx_getn_double_short
#define ncx_getn_double_uchar harp_ncx_getn_double_uchar
#define ncx_getn_float_double harp_ncx_getn_float_double
#define ncx_getn_float_float harp_ncx_getn_float_float
#define ncx_getn_float_int harp_ncx_getn_float_int
#define ncx_getn_float_long harp_ncx_getn_float_long
#define ncx_getn_float_schar harp_ncx_getn_float_schar
#define ncx_getn_float_short harp_ncx_getn_float_short
#define ncx_getn_float_uchar harp_ncx_getn_float_uchar
#define ncx_getn_int_double harp_ncx_getn_int_double
#define ncx_getn_int_float harp_ncx_getn_int_float
#define ncx_getn_int_int harp_ncx_getn_int_int
#define ncx_getn_int_long harp_ncx_getn_int_long
#define ncx_getn_int_schar harp_ncx_getn_int_schar
#define ncx_getn_int_short harp_ncx_getn_int_short
#define ncx_getn_int_uchar harp_ncx_getn_int_uchar
#define ncx_getn_schar_double harp_ncx_getn_schar_double
#define ncx_getn_schar_float harp_ncx_getn_schar_float
#define ncx_getn_schar_int harp_ncx_getn_schar_int
#define ncx_getn_schar_long harp_ncx_getn_schar_long
#define ncx_getn_schar_schar harp_ncx_getn_schar_schar
#define ncx_getn_schar_short harp_ncx_getn_schar_short
#define ncx_getn_schar_uchar harp_ncx_getn_schar_uchar
#define ncx_getn_short_double harp_ncx_getn_short_double
#define ncx_getn_short_float harp_ncx_getn_short_float
#define ncx_getn_short_int harp_ncx_getn_short_int
#define ncx_getn_short_long harp_ncx_getn_short_long
#define ncx_getn_short_schar harp_ncx_getn_short_schar
#define ncx_getn_short_short harp_ncx_getn_short_short
#define ncx_getn_short_uchar harp_ncx_getn_short_uchar
#define ncx_getn_text harp_ncx_getn_text
#define ncx_getn_void harp_ncx_getn_void
#define ncx_howmany harp_ncx_howmany
#define ncx_len_NC harp_ncx_len_NC
#define ncx_pad_getn_schar_double harp_ncx_pad_getn_schar_double
#define ncx_pad_getn_schar_float harp_ncx_pad_getn_schar_float
#define ncx_pad_getn_schar_int harp_ncx_pad_getn_schar_int
#define ncx_pad_getn_schar_long harp_ncx_pad_getn_schar_long
#define ncx_pad_getn_schar_schar harp_ncx_pad_getn_schar_schar
#define ncx_pad_getn_schar_short harp_ncx_pad_getn_schar_short
#define ncx_pad_getn_schar_uchar harp_ncx_pad_getn_schar_uchar
#define ncx_pad_getn_short_double harp_ncx_pad_getn_short_double
#define ncx_pad_getn_short_float harp_ncx_pad_getn_short_float
#define ncx_pad_getn_short_int harp_ncx_pad_getn_short_int
#define ncx_pad_getn_short_long harp_ncx_pad_getn_short_long
#define ncx_pad_getn_short_schar harp_ncx_pad_getn_short_schar
#define ncx_pad_getn_short_short harp_ncx_pad_getn_short_short
#define ncx_pad_getn_short_uchar harp_ncx_pad_getn_short_uchar
#define ncx_pad_getn_text harp_ncx_pad_getn_text
#define ncx_pad_getn_void harp_ncx_pad_getn_void
#define ncx_pad_putn_schar_double harp_ncx_pad_putn_schar_double
#define ncx_pad_putn_schar_float harp_ncx_pad_putn_schar_float
#define ncx_pad_putn_schar_int harp_ncx_pad_putn_schar_int
#define ncx_pad_putn_schar_long harp_ncx_pad_putn_schar_long
#define ncx_pad_putn_schar_schar harp_ncx_pad_putn_schar_schar
#define ncx_pad_putn_schar_short harp_ncx_pad_putn_schar_short
#define ncx_pad_putn_schar_uchar harp_ncx_pad_putn_schar_uchar
#define ncx_pad_putn_short_double harp_ncx_pad_putn_short_double
#define ncx_pad_putn_short_float harp_ncx_pad_putn_short_float
#define ncx_pad_putn_short_int harp_ncx_pad_putn_short_int
#define ncx_pad_putn_short_long harp_ncx_pad_putn_short_long
#define ncx_pad_putn_short_schar harp_ncx_pad_putn_short_schar
#define ncx_pad_putn_short_short harp_ncx_pad_putn_short_short
#define ncx_pad_putn_short_uchar harp_ncx_pad_putn_short_uchar
#define ncx_pad_putn_text harp_ncx_pad_putn_text
#define ncx_pad_putn_void harp_ncx_pad_putn_void
#define ncx_put_double_double harp_ncx_put_double_double
#define ncx_put_double_float harp_ncx_put_double_float
#define ncx_put_double_int harp_ncx_put_double_int
#define ncx_put_double_long harp_ncx_put_double_long
#define ncx_put_double_schar harp_ncx_put_double_schar
#define ncx_put_double_short harp_ncx_put_double_short
#define ncx_put_double_uchar harp_ncx_put_double_uchar
#define ncx_put_float_double harp_ncx_put_float_double
#define ncx_put_float_float harp_ncx_put_float_float
#define ncx_put_float_int harp_ncx_put_float_int
#define ncx_put_float_long harp_ncx_put_float_long
#define ncx_put_float_schar harp_ncx_put_float_schar
#define ncx_put_float_short harp_ncx_put_float_short
#define ncx_put_float_uchar harp_ncx_put_float_uchar
#define ncx_put_int_double harp_ncx_put_int_double
#define ncx_put_int_float harp_ncx_put_int_float
#define ncx_put_int_int harp_ncx_put_int_int
#define ncx_put_int_long harp_ncx_put_int_long
#define ncx_put_int_schar harp_ncx_put_int_schar
#define ncx_put_int_short harp_ncx_put_int_short
#define ncx_put_int_uchar harp_ncx_put_int_uchar
#define ncx_put_NC harp_ncx_put_NC
#define ncx_put_off_t harp_ncx_put_off_t
#define ncx_put_short_double harp_ncx_put_short_double
#define ncx_put_short_float harp_ncx_put_short_float
#define ncx_put_short_int harp_ncx_put_short_int
#define ncx_put_short_long harp_ncx_put_short_long
#define ncx_put_short_schar harp_ncx_put_short_schar
#define ncx_put_short_short harp_ncx_put_short_short
#define ncx_put_short_uchar harp_ncx_put_short_uchar
#define ncx_put_size_t harp_ncx_put_size_t
#define ncx_putn_double_double harp_ncx_putn_double_double
#define ncx_putn_double_float harp_ncx_putn_double_float
#define ncx_putn_double_int harp_ncx_putn_double_int
#define ncx_putn_double_long harp_ncx_putn_double_long
#define ncx_putn_double_schar harp_ncx_putn_double_schar
#define ncx_putn_double_short harp_ncx_putn_double_short
#define ncx_putn_double_uchar harp_ncx_putn_double_uchar
#define ncx_putn_float_double harp_ncx_putn_float_double
#define ncx_putn_float_float harp_ncx_putn_float_float
#define ncx_putn_float_int harp_ncx_putn_float_int
#define ncx_putn_float_long harp_ncx_putn_float_long
#define ncx_putn_float_schar harp_ncx_putn_float_schar
#define ncx_putn_float_short harp_ncx_putn_float_short
#define ncx_putn_float_uchar harp_ncx_putn_float_uchar
#define ncx_putn_int_double harp_ncx_putn_int_double
#define ncx_putn_int_float harp_ncx_putn_int_float
#define ncx_putn_int_int harp_ncx_putn_int_int
#define ncx_putn_int_long harp_ncx_putn_int_long
#define ncx_putn_int_schar harp_ncx_putn_int_schar
#define ncx_putn_int_short harp_ncx_putn_int_short
#define ncx_putn_int_uchar harp_ncx_putn_int_uchar
#define ncx_putn_schar_double harp_ncx_putn_schar_double
#define ncx_putn_schar_float harp_ncx_putn_schar_float
#define ncx_putn_schar_int harp_ncx_putn_schar_int
#define ncx_putn_schar_long harp_ncx_putn_schar_long
#define ncx_putn_schar_schar harp_ncx_putn_schar_schar
#define ncx_putn_schar_short harp_ncx_putn_schar_short
#define ncx_putn_schar_uchar harp_ncx_putn_schar_uchar
#define ncx_putn_short_double harp_ncx_putn_short_double
#define ncx_putn_short_float harp_ncx_putn_short_float
#define ncx_putn_short_int harp_ncx_putn_short_int
#define ncx_putn_short_long harp_ncx_putn_short_long
#define ncx_putn_short_schar harp_ncx_putn_short_schar
#define ncx_putn_short_short harp_ncx_putn_short_short
#define ncx_putn_short_uchar harp_ncx_putn_short_uchar
#define ncx_putn_text harp_ncx_putn_text
#define ncx_putn_void harp_ncx_putn_void
#define ncx_szof harp_ncx_szof
#define new_NC_string harp_new_NC_string
#define new_x_NC_attr harp_new_x_NC_attr
#define new_x_NC_dim harp_new_x_NC_dim
#define new_x_NC_var harp_new_x_NC_var
#define nextUTF8 harp_nextUTF8
#define read_numrecs harp_read_numrecs
#define set_NC_string harp_set_NC_string
#define utf8proc_check harp_utf8proc_check
#define utf8proc_codepoint_valid harp_utf8proc_codepoint_valid
#define utf8proc_decompose harp_utf8proc_decompose
#define utf8proc_decompose_char harp_utf8proc_decompose_char
#define utf8proc_encode_char harp_utf8proc_encode_char
#define utf8proc_errmsg harp_utf8proc_errmsg
#define utf8proc_get_property harp_utf8proc_get_property
#define utf8proc_iterate harp_utf8proc_iterate
#define utf8proc_map harp_utf8proc_map
#define utf8proc_NFC harp_utf8proc_NFC
#define utf8proc_NFD harp_utf8proc_NFD
#define utf8proc_NFKC harp_utf8proc_NFKC
#define utf8proc_NFKD harp_utf8proc_NFKD
#define utf8proc_reencode harp_utf8proc_reencode
#define write_numrecs harp_write_numrecs

#endif

#endif
