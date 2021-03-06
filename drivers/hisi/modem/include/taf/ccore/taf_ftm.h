


#ifndef __TAF_FTM_H__
#define __TAF_FTM_H__

#ifdef __cplusplus
extern "C"
{
#endif

typedef enum
{
    EN_FTM_TMODE_SIGNAL=0,
    EN_FTM_TMODE_NONESIGNAL,
    EN_FTM_TMODE_LOAD,
    EN_FTM_TMODE_RESET,
    EN_FTM_TMODE_SIGNAL_NOCARD,
    EN_FTM_TMODE_OFFLINE,
    EN_FTM_TMODE_UNKNOWN = 6
} FTM_TMODE_ENUM;


/*****************************************************************************
// 函数名称: FTM_GetMode
// 功能描述: 获取FTM当前模式的同步接口
//
// 参数说明:
//   pFtmMode [out]: FTM 模式
//
//
//
// 返 回 值:
//    成功：ERR_FTM_SUCCESS                 表示操作成功
//    失败：ERR_FTM_INVALID_PARAMETER       传入参数为空
//          ERR_FTM_UNKNOWN                 未知错误
//          ERR_FTM_NOT_SUPPORT	            不支持
//
// 调用要求: FTM初始化后，否则返回错误码 ERR_FTM_UNKNOWN
// 调用举例: TODO: ...
*****************************************************************************/
VOS_UINT32 FTM_GetMode(FTM_TMODE_ENUM* penFtmMode);
#ifdef __cplusplus
}
#endif
#endif
