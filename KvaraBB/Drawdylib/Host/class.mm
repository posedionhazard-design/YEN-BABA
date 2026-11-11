
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>







#include <objc/message.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

__attribute__((unused)) static void _logos_register_hook(Class _class, SEL _cmd, IMP _new, IMP *_old) {
unsigned int _count, _i;
Class _searchedClass = _class;
Method *_methods;
while (_searchedClass) {
_methods = class_copyMethodList(_searchedClass, &_count);
for (_i = 0; _i < _count; _i++) {
if (method_getName(_methods[_i]) == _cmd) {
if (_class == _searchedClass) {
*_old = method_getImplementation(_methods[_i]);
*_old = method_setImplementation(_methods[_i], _new);
} else {
class_addMethod(_class, _cmd, _new, method_getTypeEncoding(_methods[_i]));
}
free(_methods);
return;
}
}
free(_methods);
_searchedClass = class_getSuperclass(_searchedClass);
}
}
@class BLYBlockLogic; @class IOSBGDownloadPufferManager; @class IMSDKStatFacebookManager; @class VungleConfigController; @class BLYDevice; @class BuglyAgentV2; @class APMRemoteConfig; @class APMAdExposureReporter; @class FBAdReportingOptionCollectionViewCell; @class VungleInternalMRAIDViewController; @class GNLReportContainer; @class MidasAddrReporter; @class VungleCustomMRAIDViewController; @class RqdCrashReporterLiteException; @class IMSDKToolStat; @class QQApiInterface; @class MidasAddrHelper; @class APMMeasurement; @class GSDKLoginEvent; @class APMidasCommReportHelper; @class FBAdReportingCoordinator; @class FBAdReportingConfig; @class IMSDKStatFirebaseManager; @class IMSDKStatAdjustManager; @class IOSBGDownloadCommonManager; @class APMSearchAdReporter; @class GADNativeAd; @class PLCrashReport; @class FBAdDSLViewController; @class FBAdConfigManager; @class BLYSDKManager; @class IOSBGDownloadManager; @class IMSDKStatBuglyManager; @class PLCrashReporter; @class GNLReportManager; @class FBSDKSettings; @class BLYCommonUploadLogic; @class MidasIAPProductInfoRequester; @class FBAdCrashManagerImpl; @class TXCVideoPreprocessorHT; @class BLYCrashReport; @class GSDKInGameSystem; @class MidasIAPStatics; @class IMSDKReport; @class PLCrashReportProcessInfo; @class GADNativeAdFeatures; @class APMSessionReporter; @class MidasIAPReportEventListener; @class BLYCrashLogic; @class VLEventReportRequest; @class BLYAnalyticsLogic; @class BuglyAgent; @class IMSDKLocalLog; @class PLCrashReportBinaryImageInfo; @class GADCustomNativeAd; @class PLCrashReportTextFormatter; @class VungleMRAIDAdReport; @class VungleReportAdController; @class BLYUnexpectedExitManager; @class APMScreenViewReporter; @class IOSBGDownload_Report_Helper; @class GNLRecord; @class FBAdBotDetector; @class Bugly; @class PLCrashReportThreadInfo; @class GCloudBGApplication; @class GNLReport; @class VungleLegacyAdReport; @class VNGSendReportAdsOperation; @class IOSBGDownloadResumeDataManager; @class BLYCrashReporter; @class GADSafeBrowsingReport; @class TXExtInfoHT; @class GSDKReporter; @class MidasIAPReportHelper; @class MidasIAPPayOperation; @class VungleAdReport; @class GADActiveViewReporter; @class FBSDKSKAdNetworkReporter; 
static Class _logos_superclass$_ungrouped$IMSDKLocalLog; static Class _logos_supermetaclass$_ungrouped$IMSDKLocalLog; static IMSDKLocalLog*  _LOGOS_RETURN_RETAINED(*_logos_meta_orig$_ungrouped$IMSDKLocalLog$allocWithZone$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, struct _NSZone *);static id (*_logos_meta_orig$_ungrouped$IMSDKLocalLog$sharedInstance)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$setLogFileHandle$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$IMSDKLocalLog$logFileHandle)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$setEndDate$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$IMSDKLocalLog$endDate)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$setBeginDate$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$IMSDKLocalLog$beginDate)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$setLogfile$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$IMSDKLocalLog$logfile)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$setRetry$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, long long);static long long (*_logos_orig$_ungrouped$IMSDKLocalLog$retry)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$setMaxFileSize$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, long long);static long long (*_logos_orig$_ungrouped$IMSDKLocalLog$maxFileSize)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$setMaxLogSize$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, long long);static long long (*_logos_orig$_ungrouped$IMSDKLocalLog$maxLogSize)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$setIsCreating$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$IMSDKLocalLog$isCreating)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$setIsUploading$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$IMSDKLocalLog$isUploading)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$setIsLocalLogEnable$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$IMSDKLocalLog$isLocalLogEnable)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$writeData$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id);static long long (*_logos_orig$_ungrouped$IMSDKLocalLog$compress$dest$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$getNetworkStatus$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$IMSDKLocalLog$isValidDate$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id);static long long (*_logos_orig$_ungrouped$IMSDKLocalLog$getFileSize$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id);static long long (*_logos_orig$_ungrouped$IMSDKLocalLog$getLogSize)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$uploadFile$counter$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id, long long);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$createLogFile$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$IMSDKLocalLog$writeLog2Local$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$IMSDKLocalLog$mutablecopyWithZone$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, struct _NSZone *);static IMSDKLocalLog*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$IMSDKLocalLog$copyWithZone$)(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST, SEL, struct _NSZone *);static Class _logos_superclass$_ungrouped$IOSBGDownloadPufferManager; static bool (*_logos_orig$_ungrouped$IOSBGDownloadPufferManager$PrepareBackgroundDownload$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadPufferManager* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$IOSBGDownloadPufferManager$SetBGApplication$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadPufferManager* _LOGOS_SELF_CONST, SEL, id);static IOSBGDownloadPufferManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$IOSBGDownloadPufferManager$init)(_LOGOS_SELF_TYPE_INIT IOSBGDownloadPufferManager*, SEL);static Class _logos_superclass$_ungrouped$IOSBGDownloadManager; static Class _logos_supermetaclass$_ungrouped$IOSBGDownloadManager; static id (*_logos_meta_orig$_ungrouped$IOSBGDownloadManager$sharedInstance)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IOSBGDownloadManager$setTaskArray$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$IOSBGDownloadManager$taskArray)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IOSBGDownloadManager$setTheApp$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$IOSBGDownloadManager$theApp)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IOSBGDownloadManager$RemoveAllDownloadTask)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$IOSBGDownloadManager$AddRetryTasks)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IOSBGDownloadManager$CancalIOSBGTask)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IOSBGDownloadManager$RepairBackgroundDownloadDirectory)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$IOSBGDownloadManager$StartMoreTask_MultiRange$withDownloadTask$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL, long long, id);static bool (*_logos_orig$_ungrouped$IOSBGDownloadManager$StartMoreTask$withDownloadTask$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL, long long, id);static bool (*_logos_orig$_ungrouped$IOSBGDownloadManager$PrepareBackgroundDownload)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IOSBGDownloadManager$SetBGApplication$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$IOSBGDownloadManager$dealloc)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST, SEL);static IOSBGDownloadManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$IOSBGDownloadManager$init)(_LOGOS_SELF_TYPE_INIT IOSBGDownloadManager*, SEL);static Class _logos_superclass$_ungrouped$IOSBGDownloadCommonManager; static Class _logos_supermetaclass$_ungrouped$IOSBGDownloadCommonManager; static id (*_logos_meta_orig$_ungrouped$IOSBGDownloadCommonManager$sharedInstance)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IOSBGDownloadCommonManager$setTheApp$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadCommonManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$IOSBGDownloadCommonManager$theApp)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadCommonManager* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$IOSBGDownloadCommonManager$RecreateSpecifiedTaskSession$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadCommonManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$IOSBGDownloadCommonManager$SetBGApplication$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadCommonManager* _LOGOS_SELF_CONST, SEL, id);static IOSBGDownloadCommonManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$IOSBGDownloadCommonManager$init)(_LOGOS_SELF_TYPE_INIT IOSBGDownloadCommonManager*, SEL);static Class _logos_superclass$_ungrouped$IOSBGDownloadResumeDataManager; static Class _logos_supermetaclass$_ungrouped$IOSBGDownloadResumeDataManager; static id (*_logos_meta_orig$_ungrouped$IOSBGDownloadResumeDataManager$sharedInstance)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$setResumeDataInfos$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$resumeDataInfos)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$setStoredResumeData$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$GetResumeData$withOffset$withLength$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST, SEL, id, long long, long long);static void (*_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$StoreResumeData$withResuemData$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$storedResumeData)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST, SEL);static IOSBGDownloadResumeDataManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$init)(_LOGOS_SELF_TYPE_INIT IOSBGDownloadResumeDataManager*, SEL);static Class _logos_superclass$_ungrouped$IOSBGDownload_Report_Helper; static Class _logos_supermetaclass$_ungrouped$IOSBGDownload_Report_Helper; static void (*_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$AddSuccessTask$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST, SEL, long long);static void (*_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$AddFailTask$withErrorCode$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST, SEL, long long, long long);static void (*_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$SetActionImpletement$withKey$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST, SEL, id, id);static bool (*_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$SaveReportFile)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$GetReportDictionary)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$reportDictionary)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$setReportDictionary$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$reportFilePath)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$setReportFilePath$)(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_meta_orig$_ungrouped$IOSBGDownload_Report_Helper$sharedInstance)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$GCloudBGApplication; static void (*_logos_orig$_ungrouped$GCloudBGApplication$resetPufferActionReport$withNewPath$)(_LOGOS_SELF_TYPE_NORMAL GCloudBGApplication* _LOGOS_SELF_CONST, SEL, id, id);static Class _logos_superclass$_ungrouped$GSDKInGameSystem; static void (*_logos_orig$_ungrouped$GSDKInGameSystem$reportDotsToBeacon$)(_LOGOS_SELF_TYPE_NORMAL GSDKInGameSystem* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GSDKInGameSystem$reportBaseDict)(_LOGOS_SELF_TYPE_NORMAL GSDKInGameSystem* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKInGameSystem$setReportBaseDict$)(_LOGOS_SELF_TYPE_NORMAL GSDKInGameSystem* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$GSDKReporter; static Class _logos_supermetaclass$_ungrouped$GSDKReporter; static void (*_logos_orig$_ungrouped$GSDKReporter$setGSDKReportPlatform$)(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST, SEL, int);static void (*_logos_orig$_ungrouped$GSDKReporter$gsdkReport$Params$)(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$GSDKReporter$gsdkReportTdm$Params$)(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST, SEL, id, id);static bool (*_logos_orig$_ungrouped$GSDKReporter$gsdkReportBeacon$params$)(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$GSDKReporter$initBeaconInGSDK$)(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST, SEL, id);static int (*_logos_orig$_ungrouped$GSDKReporter$reportPlatform)(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKReporter$setReportPlatform$)(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST, SEL, int);static id (*_logos_meta_orig$_ungrouped$GSDKReporter$sharedInstance)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$GSDKLoginEvent; static bool (*_logos_orig$_ungrouped$GSDKLoginEvent$report_flag)(_LOGOS_SELF_TYPE_NORMAL GSDKLoginEvent* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKLoginEvent$setReport_flag$)(_LOGOS_SELF_TYPE_NORMAL GSDKLoginEvent* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$MidasIAPReportEventListener; static Class _logos_supermetaclass$_ungrouped$MidasIAPReportEventListener; static bool (*_logos_orig$_ungrouped$MidasIAPReportEventListener$processEvent$)(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$MidasIAPReportEventListener$removeAfterEnd)(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_orig$_ungrouped$MidasIAPReportEventListener$beginType)(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$MidasIAPReportEventListener$beginEvent)(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_orig$_ungrouped$MidasIAPReportEventListener$endType)(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$MidasIAPReportEventListener$endEvent)(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST, SEL);static id (*_logos_meta_orig$_ungrouped$MidasIAPReportEventListener$listenerWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, unsigned long long, id, unsigned long long, id, bool);static MidasIAPReportEventListener*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$MidasIAPReportEventListener$initWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$)(_LOGOS_SELF_TYPE_INIT MidasIAPReportEventListener*, SEL, id, unsigned long long, id, unsigned long long, id, bool);static Class _logos_supermetaclass$_ungrouped$MidasIAPReportHelper; static id (*_logos_meta_orig$_ungrouped$MidasIAPReportHelper$misDictionary$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static id (*_logos_meta_orig$_ungrouped$MidasIAPReportHelper$formatResultInfo$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static void (*_logos_meta_orig$_ungrouped$MidasIAPReportHelper$addReportListener$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static void (*_logos_meta_orig$_ungrouped$MidasIAPReportHelper$removeReportListener$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static void (*_logos_meta_orig$_ungrouped$MidasIAPReportHelper$appendToNextReport$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static id (*_logos_meta_orig$_ungrouped$MidasIAPReportHelper$processUUID)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static id (*_logos_meta_orig$_ungrouped$MidasIAPReportHelper$formatErrorInfo$code$msg$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, long long, id);static void (*_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$orderInfo$userInfo$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, id, id, id);static void (*_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$orderInfo$userInfo$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$orderInfo$userInfo$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$isErrorReport$errorCode$errorInfo$orderInfo$userInfo$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, id, bool, long long, id, id, id);static Class _logos_superclass$_ungrouped$APMidasCommReportHelper; static Class _logos_supermetaclass$_ungrouped$APMidasCommReportHelper; static APMidasCommReportHelper*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$APMidasCommReportHelper$init)(_LOGOS_SELF_TYPE_INIT APMidasCommReportHelper*, SEL);static void (*_logos_orig$_ungrouped$APMidasCommReportHelper$enqueueRequestName$reqTag$)(_LOGOS_SELF_TYPE_NORMAL APMidasCommReportHelper* _LOGOS_SELF_CONST, SEL, id, unsigned long long);static void (*_logos_orig$_ungrouped$APMidasCommReportHelper$dequeueRequestName$reqTag$success$httpRespCode$errorMsg$action$resultInfoDict$orderInfo$userInfo$)(_LOGOS_SELF_TYPE_NORMAL APMidasCommReportHelper* _LOGOS_SELF_CONST, SEL, id, unsigned long long, bool, long long, id, id, id, id, id);static id (*_logos_meta_orig$_ungrouped$APMidasCommReportHelper$sharedInstance)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$MidasAddrReporter; static MidasAddrReporter*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$MidasAddrReporter$initWithOrderInfo$userInfo$)(_LOGOS_SELF_TYPE_INIT MidasAddrReporter*, SEL, id, id);static void (*_logos_orig$_ungrouped$MidasAddrReporter$reportSpeed$qDiaoType$delay$isIPv6$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrReporter* _LOGOS_SELF_CONST, SEL, id, id, float, bool);static id (*_logos_orig$_ungrouped$MidasAddrReporter$orderInfo)(_LOGOS_SELF_TYPE_NORMAL MidasAddrReporter* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$MidasAddrReporter$setOrderInfo$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrReporter* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$MidasAddrReporter$userInfo)(_LOGOS_SELF_TYPE_NORMAL MidasAddrReporter* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$MidasAddrReporter$setUserInfo$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrReporter* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$MidasIAPPayOperation; static void (*_logos_orig$_ungrouped$MidasIAPPayOperation$reportGotoAppStore$errorInfo$)(_LOGOS_SELF_TYPE_NORMAL MidasIAPPayOperation* _LOGOS_SELF_CONST, SEL, bool, id);static Class _logos_superclass$_ungrouped$MidasIAPStatics; static void (*_logos_orig$_ungrouped$MidasIAPStatics$onReport$)(_LOGOS_SELF_TYPE_NORMAL MidasIAPStatics* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$MidasIAPProductInfoRequester; static void (*_logos_orig$_ungrouped$MidasIAPProductInfoRequester$reportAppleSystemErrorWithCode$msg$)(_LOGOS_SELF_TYPE_NORMAL MidasIAPProductInfoRequester* _LOGOS_SELF_CONST, SEL, long long, id);static Class _logos_superclass$_ungrouped$MidasAddrHelper; static id (*_logos_orig$_ungrouped$MidasAddrHelper$reporter)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$MidasAddrHelper$setReporter$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, id);static Class _logos_supermetaclass$_ungrouped$GNLRecord; static id (*_logos_meta_orig$_ungrouped$GNLRecord$recordWithReports$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$GNLReport; static Class _logos_supermetaclass$_ungrouped$GNLReport; static GNLReport*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GNLReport$init)(_LOGOS_SELF_TYPE_INIT GNLReport*, SEL);static bool (*_logos_orig$_ungrouped$GNLReport$isReportValidated)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GNLReport$convertToReportString)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GNLReport$description)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GNLReport$reportUploadingNumber)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setReportUploadingNumber$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$sdkVersion)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setSdkVersion$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$openIDOrUIN)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setOpenIDOrUIN$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$payFrom)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setPayFrom$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$resultInfo)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setResultInfo$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static long long (*_logos_orig$_ungrouped$GNLReport$errorCode)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setErrorCode$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, long long);static id (*_logos_orig$_ungrouped$GNLReport$errorInfo)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setErrorInfo$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$serviceCode)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setServiceCode$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$action)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setAction$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$format)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GNLReport$offerID)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setOfferID$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$pf)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setFormat$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GNLReport$setPf$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$billNo)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setBillNo$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$orderUUID)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setOrderUUID$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$sessionID)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setSessionID$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$sessionType)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setSessionType$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$productID)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setProductID$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$amount)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setAmount$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static long long (*_logos_orig$_ungrouped$GNLReport$quantity)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setQuantity$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, long long);static id (*_logos_orig$_ungrouped$GNLReport$aid)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setAid$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReport$processUUID)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setProcessUUID$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$GNLReport$isErrorReport)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReport$setIsErrorReport$)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL, bool);static float (*_logos_orig$_ungrouped$GNLReport$createdTs)(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST, SEL);static id (*_logos_meta_orig$_ungrouped$GNLReport$_platform)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$GNLReportContainer; static GNLReportContainer*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GNLReportContainer$init)(_LOGOS_SELF_TYPE_INIT GNLReportContainer*, SEL);static void (*_logos_orig$_ungrouped$GNLReportContainer$insertReport$)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GNLReportContainer$removeReport$)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GNLReportContainer$setReportDomains$offerID$)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$GNLReportContainer$_joinAllReportsIntoARecord$)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReportContainer$processUUID)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_orig$_ungrouped$GNLReportContainer$currentUploadingNumber)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReportContainer$setProcessUUID$)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReportContainer$reportDomains)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReportContainer$setReportDomains$)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReportContainer$offerID)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReportContainer$setOfferID$)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReportContainer$preSendingReports)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReportContainer$setPreSendingReports$)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GNLReportContainer$setCurrentUploadingNumber$)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL, unsigned long long);static id (*_logos_orig$_ungrouped$GNLReportContainer$originalUUID)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReportContainer$setOriginalUUID$)(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$GNLReportManager; static Class _logos_supermetaclass$_ungrouped$GNLReportManager; static id (*_logos_orig$_ungrouped$GNLReportManager$processUUID)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReportManager$insertReport$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GNLReportManager$removeReport$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GNLReportManager$setDataReportQueue$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GNLReportManager$addReportListener$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GNLReportManager$removeReportListener$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GNLReportManager$appendToNextReport$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GNLReportManager$notify$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GNLReportManager$processReportQueue$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, id);static GNLReportManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GNLReportManager$init)(_LOGOS_SELF_TYPE_INIT GNLReportManager*, SEL);static GNLReportManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GNLReportManager$initMethod)(_LOGOS_SELF_TYPE_INIT GNLReportManager*, SEL);static GNLReportManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GNLReportManager$copyWithZone$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, struct _NSZone *);static GNLReportManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GNLReportManager$mutableCopyWithZone$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, struct _NSZone *);static id (*_logos_orig$_ungrouped$GNLReportManager$container)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReportManager$setContainer$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GNLReportManager$listeners)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL);static bool (*_logos_meta_orig$_ungrouped$GNLReportManager$isSingleton)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLReportManager$setReportDomains$offerID$ignoringFormats$)(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST, SEL, id, id, id);static Class _logos_superclass$_ungrouped$VLEventReportRequest; static bool (*_logos_orig$_ungrouped$VLEventReportRequest$needCertParam)(_LOGOS_SELF_TYPE_NORMAL VLEventReportRequest* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$IMSDKReport; static bool (*_logos_orig$_ungrouped$IMSDKReport$isThirdPlatformInitialized)(_LOGOS_SELF_TYPE_NORMAL IMSDKReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$IMSDKReport$setIsThirdPlatformInitialized$)(_LOGOS_SELF_TYPE_NORMAL IMSDKReport* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$IMSDKToolStat; static void (*_logos_orig$_ungrouped$IMSDKToolStat$reportLogin$openID$channelID$)(_LOGOS_SELF_TYPE_NORMAL IMSDKToolStat* _LOGOS_SELF_CONST, SEL, bool, id, id);static Class _logos_supermetaclass$_ungrouped$IMSDKStatBuglyManager; static void (*_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportEvent$eventBody$isRealtime$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportEvent$params$isRealtime$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportPurchase$currentCode$expense$isRealTime$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, id, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportCrash$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportAutoExceptionReport$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, bool);static Class _logos_supermetaclass$_ungrouped$IMSDKStatAdjustManager; static void (*_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportEvent$eventBody$isRealtime$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportEvent$params$isRealtime$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportPurchase$currentCode$expense$isRealTime$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, id, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportCrash$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportAutoExceptionReport$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, bool);static Class _logos_supermetaclass$_ungrouped$IMSDKStatFacebookManager; static void (*_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportEvent$eventBody$isRealtime$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportEvent$params$isRealtime$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportCrash$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportAutoExceptionReport$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, bool);static Class _logos_supermetaclass$_ungrouped$IMSDKStatFirebaseManager; static void (*_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportEvent$eventBody$isRealtime$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportEvent$params$isRealtime$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportPurchase$currentCode$expense$isRealTime$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, id, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportCrash$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportAutoExceptionReport$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, bool);static Class _logos_supermetaclass$_ungrouped$FBSDKSKAdNetworkReporter; static bool (*_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_shouldCutoff)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static bool (*_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_isConfigRefreshTimestampValid)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$recordAndUpdateEvent$currency$value$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_recordAndUpdateEvent$currency$value$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_loadConfigurationWithBlock$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static void (*_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_updateConversionValue$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, long long);static Class _logos_supermetaclass$_ungrouped$FBSDKSettings; static bool (*_logos_meta_orig$_ungrouped$FBSDKSettings$isSKAdNetworkReportEnabled)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_meta_orig$_ungrouped$FBSDKSettings$setSKAdNetworkReportEnabled$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$BLYBlockLogic; static void (*_logos_orig$_ungrouped$BLYBlockLogic$reportSuccessed$)(_LOGOS_SELF_TYPE_NORMAL BLYBlockLogic* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_supermetaclass$_ungrouped$Bugly; static void (*_logos_meta_orig$_ungrouped$Bugly$reportExceptionWithCategory$name$reason$callStack$extraInfo$terminateApp$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, unsigned long long, id, id, id, id, bool);static Class _logos_superclass$_ungrouped$BLYCrashReport; static bool (*_logos_orig$_ungrouped$BLYCrashReport$isHandlingCrash)(_LOGOS_SELF_TYPE_NORMAL BLYCrashReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$BLYCrashReport$setCrashHandling$)(_LOGOS_SELF_TYPE_NORMAL BLYCrashReport* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$BLYCrashReport$isCrashedDuringCrashHandling)(_LOGOS_SELF_TYPE_NORMAL BLYCrashReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$BLYCrashReport$setCrashedDuringCrashHandling$)(_LOGOS_SELF_TYPE_NORMAL BLYCrashReport* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$BLYAnalyticsLogic; static void (*_logos_orig$_ungrouped$BLYAnalyticsLogic$reportSuccessed$)(_LOGOS_SELF_TYPE_NORMAL BLYAnalyticsLogic* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$BLYSDKManager; static void (*_logos_orig$_ungrouped$BLYSDKManager$reportCustomizedException$name$reason$callStack$extraInfo$terminateApp$)(_LOGOS_SELF_TYPE_NORMAL BLYSDKManager* _LOGOS_SELF_CONST, SEL, unsigned long long, id, id, id, id, bool);static Class _logos_superclass$_ungrouped$BLYCommonUploadLogic; static void (*_logos_orig$_ungrouped$BLYCommonUploadLogic$reportSuccessed$)(_LOGOS_SELF_TYPE_NORMAL BLYCommonUploadLogic* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$BLYCrashReporter; static void (*_logos_orig$_ungrouped$BLYCrashReporter$setCrashIncident$)(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$BLYCrashReporter$enableCrashReporter$)(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST, SEL, id *);static bool (*_logos_orig$_ungrouped$BLYCrashReporter$disableCrashReporter$)(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST, SEL, id *);static bool (*_logos_orig$_ungrouped$BLYCrashReporter$hasPendingCrashReport)(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$BLYCrashReporter$detectiveCrashReporterRunning)(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$BLYCrashReporter$hasCrashIncident)(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$BLYCrashLogic; static void (*_logos_orig$_ungrouped$BLYCrashLogic$reportSuccessed$)(_LOGOS_SELF_TYPE_NORMAL BLYCrashLogic* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$BLYUnexpectedExitManager; static void (*_logos_orig$_ungrouped$BLYUnexpectedExitManager$reportUnexpectExit$)(_LOGOS_SELF_TYPE_NORMAL BLYUnexpectedExitManager* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_supermetaclass$_ungrouped$RqdCrashReporterLiteException; static bool (*_logos_meta_orig$_ungrouped$RqdCrashReporterLiteException$supportsSecureCoding)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$APMAdExposureReporter; static bool (*_logos_orig$_ungrouped$APMAdExposureReporter$isReportingEnabled)(_LOGOS_SELF_TYPE_NORMAL APMAdExposureReporter* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$APMAdExposureReporter$setReportingEnabled$)(_LOGOS_SELF_TYPE_NORMAL APMAdExposureReporter* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$APMMeasurement; static void (*_logos_orig$_ungrouped$APMMeasurement$reportSessionStartOnWorkerQueueWithTimestamp$appInBackground$)(_LOGOS_SELF_TYPE_NORMAL APMMeasurement* _LOGOS_SELF_CONST, SEL, float, bool);static Class _logos_superclass$_ungrouped$APMRemoteConfig; static bool (*_logos_orig$_ungrouped$APMRemoteConfig$efficientEngagementReportingEnabled)(_LOGOS_SELF_TYPE_NORMAL APMRemoteConfig* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$APMScreenViewReporter; static bool (*_logos_orig$_ungrouped$APMScreenViewReporter$isAppActive)(_LOGOS_SELF_TYPE_NORMAL APMScreenViewReporter* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$APMSearchAdReporter; static void (*_logos_orig$_ungrouped$APMSearchAdReporter$logCampaignEventWithSearchAdCampaign$campaign$term$)(_LOGOS_SELF_TYPE_NORMAL APMSearchAdReporter* _LOGOS_SELF_CONST, SEL, bool, id, id);static bool (*_logos_orig$_ungrouped$APMSearchAdReporter$isSearchAdReporterEnabled)(_LOGOS_SELF_TYPE_NORMAL APMSearchAdReporter* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$APMSearchAdReporter$setSearchAdReporterEnabled$)(_LOGOS_SELF_TYPE_NORMAL APMSearchAdReporter* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$APMSessionReporter; static void (*_logos_orig$_ungrouped$APMSessionReporter$setReportingEnabled$)(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$APMSessionReporter$shouldStartNewSession)(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$APMSessionReporter$isSessionExpired)(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$APMSessionReporter$extendSession)(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST, SEL);static long long (*_logos_orig$_ungrouped$APMSessionReporter$logEngagementEventAndReturnTimeWithScreen$isRedundant$)(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST, SEL, id, bool);static bool (*_logos_orig$_ungrouped$APMSessionReporter$isReportingEnabled)(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$GADNativeAdFeatures; static bool (*_logos_orig$_ungrouped$GADNativeAdFeatures$publisherClickReportingAllowed)(_LOGOS_SELF_TYPE_NORMAL GADNativeAdFeatures* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$GADNativeAdFeatures$publisherTouchReportingAllowed)(_LOGOS_SELF_TYPE_NORMAL GADNativeAdFeatures* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$GADNativeAdFeatures$publisherImpressionReportingAllowed)(_LOGOS_SELF_TYPE_NORMAL GADNativeAdFeatures* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$GADActiveViewReporter; static GADActiveViewReporter*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GADActiveViewReporter$initWithAdFormat$activeViewConfiguration$reportingAdView$adEventContextIdentifier$analyticsLoggingEnabled$)(_LOGOS_SELF_TYPE_INIT GADActiveViewReporter*, SEL, id, id, id, id, bool);static void (*_logos_orig$_ungrouped$GADActiveViewReporter$setAdViewNeedsActiveViewUpdates$)(_LOGOS_SELF_TYPE_NORMAL GADActiveViewReporter* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$GADActiveViewReporter$setAdDidMakeImpression$)(_LOGOS_SELF_TYPE_NORMAL GADActiveViewReporter* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$GADActiveViewReporter$updateActiveViewStatusWithUnloaded$)(_LOGOS_SELF_TYPE_NORMAL GADActiveViewReporter* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$GADActiveViewReporter$activeViewStateWithUnloaded$userInfo$)(_LOGOS_SELF_TYPE_NORMAL GADActiveViewReporter* _LOGOS_SELF_CONST, SEL, bool, id);static Class _logos_superclass$_ungrouped$GADNativeAd; static void (*_logos_orig$_ungrouped$GADNativeAd$reportIsMediaContentRendered$)(_LOGOS_SELF_TYPE_NORMAL GADNativeAd* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$GADSafeBrowsingReport; static bool (*_logos_orig$_ungrouped$GADSafeBrowsingReport$malicious)(_LOGOS_SELF_TYPE_NORMAL GADSafeBrowsingReport* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$GADCustomNativeAd; static void (*_logos_orig$_ungrouped$GADCustomNativeAd$reportIsMediaContentRendered$)(_LOGOS_SELF_TYPE_NORMAL GADCustomNativeAd* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$VNGSendReportAdsOperation; static void (*_logos_orig$_ungrouped$VNGSendReportAdsOperation$setIsExecuting$)(_LOGOS_SELF_TYPE_NORMAL VNGSendReportAdsOperation* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$VNGSendReportAdsOperation$isFinished$)(_LOGOS_SELF_TYPE_NORMAL VNGSendReportAdsOperation* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$VNGSendReportAdsOperation$isFinished)(_LOGOS_SELF_TYPE_NORMAL VNGSendReportAdsOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VNGSendReportAdsOperation$setIsFinished$)(_LOGOS_SELF_TYPE_NORMAL VNGSendReportAdsOperation* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$VNGSendReportAdsOperation$isExecuting)(_LOGOS_SELF_TYPE_NORMAL VNGSendReportAdsOperation* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$VungleLegacyAdReport; static bool (*_logos_orig$_ungrouped$VungleLegacyAdReport$incentivized)(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$VungleLegacyAdReport$isAdExperienceSuccessful)(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$VungleLegacyAdReport$didTapCTAButton)(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VungleLegacyAdReport$setDidTapCTAButton$)(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$VungleLegacyAdReport$internalIncentivized)(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VungleLegacyAdReport$setInternalIncentivized$)(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$VungleReportAdController; static bool (*_logos_orig$_ungrouped$VungleReportAdController$saveReport$error$)(_LOGOS_SELF_TYPE_NORMAL VungleReportAdController* _LOGOS_SELF_CONST, SEL, id, id *);static bool (*_logos_orig$_ungrouped$VungleReportAdController$isSendingReports)(_LOGOS_SELF_TYPE_NORMAL VungleReportAdController* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VungleReportAdController$setIsSendingReports$)(_LOGOS_SELF_TYPE_NORMAL VungleReportAdController* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$VungleCustomMRAIDViewController; static void (*_logos_orig$_ungrouped$VungleCustomMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$)(_LOGOS_SELF_TYPE_NORMAL VungleCustomMRAIDViewController* _LOGOS_SELF_CONST, SEL, bool, id);static Class _logos_superclass$_ungrouped$VungleConfigController; static bool (*_logos_orig$_ungrouped$VungleConfigController$isReportIncentivizedEnabled)(_LOGOS_SELF_TYPE_NORMAL VungleConfigController* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$VungleConfigController$reportIncentivizedEnabled)(_LOGOS_SELF_TYPE_NORMAL VungleConfigController* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VungleConfigController$setReportIncentivizedEnabled$)(_LOGOS_SELF_TYPE_NORMAL VungleConfigController* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$VungleInternalMRAIDViewController; static void (*_logos_orig$_ungrouped$VungleInternalMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$)(_LOGOS_SELF_TYPE_NORMAL VungleInternalMRAIDViewController* _LOGOS_SELF_CONST, SEL, bool, id);static Class _logos_superclass$_ungrouped$VungleMRAIDAdReport; static bool (*_logos_orig$_ungrouped$VungleMRAIDAdReport$isAdExperienceSuccessful)(_LOGOS_SELF_TYPE_NORMAL VungleMRAIDAdReport* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$VungleMRAIDAdReport$incentivized)(_LOGOS_SELF_TYPE_NORMAL VungleMRAIDAdReport* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$VungleMRAIDAdReport$internalIncentivized)(_LOGOS_SELF_TYPE_NORMAL VungleMRAIDAdReport* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VungleMRAIDAdReport$setInternalIncentivized$)(_LOGOS_SELF_TYPE_NORMAL VungleMRAIDAdReport* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$VungleAdReport; static bool (*_logos_orig$_ungrouped$VungleAdReport$incentivized)(_LOGOS_SELF_TYPE_NORMAL VungleAdReport* _LOGOS_SELF_CONST, SEL);static Class _logos_supermetaclass$_ungrouped$QQApiInterface; static void (*_logos_meta_orig$_ungrouped$QQApiInterface$reportSDKCheck$cmd$isQzone$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, long long, id, bool);static Class _logos_superclass$_ungrouped$TXCVideoPreprocessorHT; static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$beautyReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setBeautyReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$whiteReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setWhiteReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$ruddyReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setRuddyReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$eyeScaleReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setEyeScaleReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$faceSlimReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceSlimReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$faceBeautyReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceBeautyReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$faceVReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceVReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$chinReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setChinReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$faceShortReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceShortReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$noseSlimReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setNoseSlimReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$filterTypeReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFilterTypeReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$filterImageReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFilterImageReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$greenReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setGreenReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$templateReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setTemplateReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$watermarkReport)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setWatermarkReport$)(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$TXExtInfoHT; static bool (*_logos_orig$_ungrouped$TXExtInfoHT$report_common)(_LOGOS_SELF_TYPE_NORMAL TXExtInfoHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXExtInfoHT$setReport_common$)(_LOGOS_SELF_TYPE_NORMAL TXExtInfoHT* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$TXExtInfoHT$report_status)(_LOGOS_SELF_TYPE_NORMAL TXExtInfoHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXExtInfoHT$setReport_status$)(_LOGOS_SELF_TYPE_NORMAL TXExtInfoHT* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_supermetaclass$_ungrouped$BuglyAgentV2; static void (*_logos_meta_orig$_ungrouped$BuglyAgentV2$startWithAppId$inDebugMode$reportLogLevel$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, bool, unsigned long long);static void (*_logos_meta_orig$_ungrouped$BuglyAgentV2$reportException$name$message$stackTrace$userInfo$terminateApp$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, unsigned long long, id, id, id, id, bool);static Class _logos_supermetaclass$_ungrouped$BuglyAgent; static void (*_logos_meta_orig$_ungrouped$BuglyAgent$reportException$name$message$stackTrace$userInfo$terminateApp$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, unsigned long long, id, id, id, id, bool);static Class _logos_superclass$_ungrouped$PLCrashReporter; static bool (*_logos_orig$_ungrouped$PLCrashReporter$populateCrashReportDirectoryAndReturnError$)(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST, SEL, id *);static bool (*_logos_orig$_ungrouped$PLCrashReporter$hasPendingCrashReport)(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$PLCrashReporter$purgePendingCrashReport)(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$PLCrashReporter$purgePendingCrashReportAndReturnError$)(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST, SEL, id *);static bool (*_logos_orig$_ungrouped$PLCrashReporter$enableCrashReporter)(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$PLCrashReporter$enableCrashReporterAndReturnError$)(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST, SEL, id *);static Class _logos_superclass$_ungrouped$PLCrashReport; static bool (*_logos_orig$_ungrouped$PLCrashReport$hasMachineInfo)(_LOGOS_SELF_TYPE_NORMAL PLCrashReport* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$PLCrashReport$hasProcessInfo)(_LOGOS_SELF_TYPE_NORMAL PLCrashReport* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$PLCrashReport$hasExceptionInfo)(_LOGOS_SELF_TYPE_NORMAL PLCrashReport* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$PLCrashReportThreadInfo; static PLCrashReportThreadInfo*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$PLCrashReportThreadInfo$initWithThreadNumber$stackFrames$crashed$registers$)(_LOGOS_SELF_TYPE_INIT PLCrashReportThreadInfo*, SEL, long long, id, bool, id);static bool (*_logos_orig$_ungrouped$PLCrashReportThreadInfo$crashed)(_LOGOS_SELF_TYPE_NORMAL PLCrashReportThreadInfo* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$PLCrashReportBinaryImageInfo; static bool (*_logos_orig$_ungrouped$PLCrashReportBinaryImageInfo$hasImageUUID)(_LOGOS_SELF_TYPE_NORMAL PLCrashReportBinaryImageInfo* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$PLCrashReportProcessInfo; static PLCrashReportProcessInfo*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$PLCrashReportProcessInfo$initWithProcessName$processID$processPath$processStartTime$parentProcessName$parentProcessID$native$)(_LOGOS_SELF_TYPE_INIT PLCrashReportProcessInfo*, SEL, id, unsigned long long, id, id, id, unsigned long long, bool);static bool (*_logos_orig$_ungrouped$PLCrashReportProcessInfo$native)(_LOGOS_SELF_TYPE_NORMAL PLCrashReportProcessInfo* _LOGOS_SELF_CONST, SEL);static Class _logos_supermetaclass$_ungrouped$PLCrashReportTextFormatter; static id (*_logos_meta_orig$_ungrouped$PLCrashReportTextFormatter$formatStackFrame$frameIndex$report$lp64$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, unsigned long long, id, bool);static Class _logos_superclass$_ungrouped$FBAdConfigManager; static bool (*_logos_orig$_ungrouped$FBAdConfigManager$isInlineAdReportingFlowEnabled)(_LOGOS_SELF_TYPE_NORMAL FBAdConfigManager* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$FBAdConfigManager$shouldKillCrashReporting)(_LOGOS_SELF_TYPE_NORMAL FBAdConfigManager* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$FBAdConfigManager$isCrashReportingEnabledForAN)(_LOGOS_SELF_TYPE_NORMAL FBAdConfigManager* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$FBAdConfigManager$isCrashReportingEnabledForBK)(_LOGOS_SELF_TYPE_NORMAL FBAdConfigManager* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$FBAdConfigManager$woNativeSignalsJailbrokenSignalEnabled)(_LOGOS_SELF_TYPE_NORMAL FBAdConfigManager* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$FBAdCrashManagerImpl; static bool (*_logos_orig$_ungrouped$FBAdCrashManagerImpl$isCrashReportingDisabled)(_LOGOS_SELF_TYPE_NORMAL FBAdCrashManagerImpl* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBAdCrashManagerImpl$setCrashReportingDisabled$)(_LOGOS_SELF_TYPE_NORMAL FBAdCrashManagerImpl* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$FBAdReportingConfig; static Class _logos_supermetaclass$_ungrouped$FBAdReportingConfig; static bool (*_logos_orig$_ungrouped$FBAdReportingConfig$isLoaded)(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$FBAdReportingConfig$isReadyForFullscreen)(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$FBAdReportingConfig$isReadyForNonFullscreen)(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST, SEL);static FBAdReportingConfig*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$FBAdReportingConfig$initWithAsyncLoad$)(_LOGOS_SELF_TYPE_INIT FBAdReportingConfig*, SEL, bool);static bool (*_logos_orig$_ungrouped$FBAdReportingConfig$validateConfigDict$)(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$FBAdReportingConfig$loadFromDiskAsync$)(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$FBAdReportingConfig$saveAsync$)(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_meta_orig$_ungrouped$FBAdReportingConfig$sharedConfigAsync$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, bool);static Class _logos_supermetaclass$_ungrouped$FBAdReportingCoordinator; static bool (*_logos_meta_orig$_ungrouped$FBAdReportingCoordinator$canPresentInView$layoutType$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, long long);static Class _logos_superclass$_ungrouped$FBAdReportingOptionCollectionViewCell; static void (*_logos_orig$_ungrouped$FBAdReportingOptionCollectionViewCell$setSelected$)(_LOGOS_SELF_TYPE_NORMAL FBAdReportingOptionCollectionViewCell* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$FBAdDSLViewController; static bool (*_logos_orig$_ungrouped$FBAdDSLViewController$dslReportedCriticalError)(_LOGOS_SELF_TYPE_NORMAL FBAdDSLViewController* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBAdDSLViewController$setDslReportedCriticalError$)(_LOGOS_SELF_TYPE_NORMAL FBAdDSLViewController* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$BLYDevice; static Class _logos_supermetaclass$_ungrouped$BLYDevice; static void (*_logos_orig$_ungrouped$BLYDevice$setJailbrokenStatus$)(_LOGOS_SELF_TYPE_NORMAL BLYDevice* _LOGOS_SELF_CONST, SEL, unsigned long long);static unsigned long long (*_logos_orig$_ungrouped$BLYDevice$jailbrokenStatus)(_LOGOS_SELF_TYPE_NORMAL BLYDevice* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$BLYDevice$isJailbroken)(_LOGOS_SELF_TYPE_NORMAL BLYDevice* _LOGOS_SELF_CONST, SEL);static bool (*_logos_meta_orig$_ungrouped$BLYDevice$isJailBreak)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$FBAdBotDetector; static bool (*_logos_orig$_ungrouped$FBAdBotDetector$isNativeSignalJailbrokenEnabled)(_LOGOS_SELF_TYPE_NORMAL FBAdBotDetector* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$FBAdBotDetector$isJailBrokenDevice)(_LOGOS_SELF_TYPE_NORMAL FBAdBotDetector* _LOGOS_SELF_CONST, SEL);



static IMSDKLocalLog* _logos_meta_method$_ungrouped$IMSDKLocalLog$allocWithZone$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, struct _NSZone * arg1) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_meta_method$_ungrouped$IMSDKLocalLog$sharedInstance(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IMSDKLocalLog$setLogFileHandle$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$setLogFileHandle$ ? _logos_orig$_ungrouped$IMSDKLocalLog$setLogFileHandle$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$setLogFileHandle$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(setLogFileHandle:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$IMSDKLocalLog$logFileHandle(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IMSDKLocalLog$setEndDate$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$setEndDate$ ? _logos_orig$_ungrouped$IMSDKLocalLog$setEndDate$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$setEndDate$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(setEndDate:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$IMSDKLocalLog$endDate(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IMSDKLocalLog$setBeginDate$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$setBeginDate$ ? _logos_orig$_ungrouped$IMSDKLocalLog$setBeginDate$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$setBeginDate$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(setBeginDate:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$IMSDKLocalLog$beginDate(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IMSDKLocalLog$setLogfile$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$setLogfile$ ? _logos_orig$_ungrouped$IMSDKLocalLog$setLogfile$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$setLogfile$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(setLogfile:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$IMSDKLocalLog$logfile(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IMSDKLocalLog$setRetry$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$setRetry$ ? _logos_orig$_ungrouped$IMSDKLocalLog$setRetry$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$setRetry$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(setRetry:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$IMSDKLocalLog$retry(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$IMSDKLocalLog$setMaxFileSize$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    return (_logos_orig$_ungrouped$IMSDKLocalLog$setMaxFileSize$ ? _logos_orig$_ungrouped$IMSDKLocalLog$setMaxFileSize$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$setMaxFileSize$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(setMaxFileSize:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$IMSDKLocalLog$maxFileSize(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_orig$_ungrouped$IMSDKLocalLog$maxFileSize ? _logos_orig$_ungrouped$IMSDKLocalLog$maxFileSize : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$maxFileSize))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(maxFileSize)))(self, _cmd);
}



static void _logos_method$_ungrouped$IMSDKLocalLog$setMaxLogSize$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$setMaxLogSize$ ? _logos_orig$_ungrouped$IMSDKLocalLog$setMaxLogSize$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$setMaxLogSize$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(setMaxLogSize:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$IMSDKLocalLog$maxLogSize(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$IMSDKLocalLog$setIsCreating$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$setIsCreating$ ? _logos_orig$_ungrouped$IMSDKLocalLog$setIsCreating$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$setIsCreating$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(setIsCreating:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$IMSDKLocalLog$isCreating(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$IMSDKLocalLog$setIsUploading$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$setIsUploading$ ? _logos_orig$_ungrouped$IMSDKLocalLog$setIsUploading$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$setIsUploading$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(setIsUploading:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$IMSDKLocalLog$isUploading(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$IMSDKLocalLog$setIsLocalLogEnable$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$setIsLocalLogEnable$ ? _logos_orig$_ungrouped$IMSDKLocalLog$setIsLocalLogEnable$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$setIsLocalLogEnable$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(setIsLocalLogEnable:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$IMSDKLocalLog$isLocalLogEnable(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$IMSDKLocalLog$writeData$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$writeData$ ? _logos_orig$_ungrouped$IMSDKLocalLog$writeData$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$writeData$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(writeData:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$IMSDKLocalLog$compress$dest$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    return 0;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$compress$dest$ ? _logos_orig$_ungrouped$IMSDKLocalLog$compress$dest$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$compress$dest$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(compress:dest:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$IMSDKLocalLog$getNetworkStatus$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$getNetworkStatus$ ? _logos_orig$_ungrouped$IMSDKLocalLog$getNetworkStatus$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$getNetworkStatus$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(getNetworkStatus:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$IMSDKLocalLog$isValidDate$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return 0;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$isValidDate$ ? _logos_orig$_ungrouped$IMSDKLocalLog$isValidDate$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$isValidDate$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(isValidDate:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$IMSDKLocalLog$getFileSize$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return 0;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$getFileSize$ ? _logos_orig$_ungrouped$IMSDKLocalLog$getFileSize$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$getFileSize$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(getFileSize:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$IMSDKLocalLog$getLogSize(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$IMSDKLocalLog$uploadFile$counter$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, long long arg2) {
    arg2 = 0;
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$uploadFile$counter$ ? _logos_orig$_ungrouped$IMSDKLocalLog$uploadFile$counter$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$uploadFile$counter$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(uploadFile:counter:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$IMSDKLocalLog$createLogFile$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$createLogFile$ ? _logos_orig$_ungrouped$IMSDKLocalLog$createLogFile$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$createLogFile$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(createLogFile:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$IMSDKLocalLog$writeLog2Local$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IMSDKLocalLog$writeLog2Local$ ? _logos_orig$_ungrouped$IMSDKLocalLog$writeLog2Local$ : (__typeof__(_logos_orig$_ungrouped$IMSDKLocalLog$writeLog2Local$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKLocalLog, @selector(writeLog2Local:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$IMSDKLocalLog$mutablecopyWithZone$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, struct _NSZone * arg1) {
    return NULL;
}



static IMSDKLocalLog* _logos_method$_ungrouped$IMSDKLocalLog$copyWithZone$(_LOGOS_SELF_TYPE_NORMAL IMSDKLocalLog* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, struct _NSZone * arg1) _LOGOS_RETURN_RETAINED {
    return NULL;
}









static bool _logos_method$_ungrouped$IOSBGDownloadPufferManager$PrepareBackgroundDownload$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadPufferManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return 0;
    return (_logos_orig$_ungrouped$IOSBGDownloadPufferManager$PrepareBackgroundDownload$ ? _logos_orig$_ungrouped$IOSBGDownloadPufferManager$PrepareBackgroundDownload$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadPufferManager$PrepareBackgroundDownload$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadPufferManager, @selector(PrepareBackgroundDownload:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$IOSBGDownloadPufferManager$SetBGApplication$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadPufferManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IOSBGDownloadPufferManager$SetBGApplication$ ? _logos_orig$_ungrouped$IOSBGDownloadPufferManager$SetBGApplication$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadPufferManager$SetBGApplication$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadPufferManager, @selector(SetBGApplication:)))(self, _cmd, arg1);
}



static IOSBGDownloadPufferManager* _logos_method$_ungrouped$IOSBGDownloadPufferManager$init(_LOGOS_SELF_TYPE_INIT IOSBGDownloadPufferManager* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_meta_method$_ungrouped$IOSBGDownloadManager$sharedInstance(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IOSBGDownloadManager$setTaskArray$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$setTaskArray$ ? _logos_orig$_ungrouped$IOSBGDownloadManager$setTaskArray$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$setTaskArray$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, @selector(setTaskArray:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$IOSBGDownloadManager$taskArray(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IOSBGDownloadManager$setTheApp$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$setTheApp$ ? _logos_orig$_ungrouped$IOSBGDownloadManager$setTheApp$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$setTheApp$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, @selector(setTheApp:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$IOSBGDownloadManager$theApp(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IOSBGDownloadManager$RemoveAllDownloadTask(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$RemoveAllDownloadTask ? _logos_orig$_ungrouped$IOSBGDownloadManager$RemoveAllDownloadTask : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$RemoveAllDownloadTask))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, @selector(RemoveAllDownloadTask)))(self, _cmd);
}



static bool _logos_method$_ungrouped$IOSBGDownloadManager$AddRetryTasks(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$AddRetryTasks ? _logos_orig$_ungrouped$IOSBGDownloadManager$AddRetryTasks : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$AddRetryTasks))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, @selector(AddRetryTasks)))(self, _cmd);
}



static void _logos_method$_ungrouped$IOSBGDownloadManager$CancalIOSBGTask(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$CancalIOSBGTask ? _logos_orig$_ungrouped$IOSBGDownloadManager$CancalIOSBGTask : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$CancalIOSBGTask))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, @selector(CancalIOSBGTask)))(self, _cmd);
}



static void _logos_method$_ungrouped$IOSBGDownloadManager$RepairBackgroundDownloadDirectory(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$RepairBackgroundDownloadDirectory ? _logos_orig$_ungrouped$IOSBGDownloadManager$RepairBackgroundDownloadDirectory : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$RepairBackgroundDownloadDirectory))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, @selector(RepairBackgroundDownloadDirectory)))(self, _cmd);
}



static bool _logos_method$_ungrouped$IOSBGDownloadManager$StartMoreTask_MultiRange$withDownloadTask$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1, id arg2) {
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$StartMoreTask_MultiRange$withDownloadTask$ ? _logos_orig$_ungrouped$IOSBGDownloadManager$StartMoreTask_MultiRange$withDownloadTask$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$StartMoreTask_MultiRange$withDownloadTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, @selector(StartMoreTask_MultiRange:withDownloadTask:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$IOSBGDownloadManager$StartMoreTask$withDownloadTask$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1, id arg2) {
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$StartMoreTask$withDownloadTask$ ? _logos_orig$_ungrouped$IOSBGDownloadManager$StartMoreTask$withDownloadTask$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$StartMoreTask$withDownloadTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, @selector(StartMoreTask:withDownloadTask:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$IOSBGDownloadManager$PrepareBackgroundDownload(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$PrepareBackgroundDownload ? _logos_orig$_ungrouped$IOSBGDownloadManager$PrepareBackgroundDownload : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$PrepareBackgroundDownload))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, @selector(PrepareBackgroundDownload)))(self, _cmd);
}



static void _logos_method$_ungrouped$IOSBGDownloadManager$SetBGApplication$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$SetBGApplication$ ? _logos_orig$_ungrouped$IOSBGDownloadManager$SetBGApplication$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$SetBGApplication$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, @selector(SetBGApplication:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$IOSBGDownloadManager$dealloc(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$dealloc ? _logos_orig$_ungrouped$IOSBGDownloadManager$dealloc : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$dealloc))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, sel_registerName("dealloc")))(self, _cmd);
}



static IOSBGDownloadManager* _logos_method$_ungrouped$IOSBGDownloadManager$init(_LOGOS_SELF_TYPE_INIT IOSBGDownloadManager* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return (_logos_orig$_ungrouped$IOSBGDownloadManager$init ? _logos_orig$_ungrouped$IOSBGDownloadManager$init : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadManager$init))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadManager, @selector(init)))(self, _cmd);
}



static id _logos_meta_method$_ungrouped$IOSBGDownloadCommonManager$sharedInstance(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_meta_orig$_ungrouped$IOSBGDownloadCommonManager$sharedInstance ? _logos_meta_orig$_ungrouped$IOSBGDownloadCommonManager$sharedInstance : (__typeof__(_logos_meta_orig$_ungrouped$IOSBGDownloadCommonManager$sharedInstance))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IOSBGDownloadCommonManager, @selector(sharedInstance)))(self, _cmd);
}



static void _logos_method$_ungrouped$IOSBGDownloadCommonManager$setTheApp$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadCommonManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return (_logos_orig$_ungrouped$IOSBGDownloadCommonManager$setTheApp$ ? _logos_orig$_ungrouped$IOSBGDownloadCommonManager$setTheApp$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadCommonManager$setTheApp$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadCommonManager, @selector(setTheApp:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$IOSBGDownloadCommonManager$theApp(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadCommonManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_orig$_ungrouped$IOSBGDownloadCommonManager$theApp ? _logos_orig$_ungrouped$IOSBGDownloadCommonManager$theApp : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadCommonManager$theApp))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadCommonManager, @selector(theApp)))(self, _cmd);
}



static bool _logos_method$_ungrouped$IOSBGDownloadCommonManager$RecreateSpecifiedTaskSession$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadCommonManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return 0;
    return (_logos_orig$_ungrouped$IOSBGDownloadCommonManager$RecreateSpecifiedTaskSession$ ? _logos_orig$_ungrouped$IOSBGDownloadCommonManager$RecreateSpecifiedTaskSession$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadCommonManager$RecreateSpecifiedTaskSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadCommonManager, @selector(RecreateSpecifiedTaskSession:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$IOSBGDownloadCommonManager$SetBGApplication$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadCommonManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IOSBGDownloadCommonManager$SetBGApplication$ ? _logos_orig$_ungrouped$IOSBGDownloadCommonManager$SetBGApplication$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadCommonManager$SetBGApplication$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadCommonManager, @selector(SetBGApplication:)))(self, _cmd, arg1);
}



static IOSBGDownloadCommonManager* _logos_method$_ungrouped$IOSBGDownloadCommonManager$init(_LOGOS_SELF_TYPE_INIT IOSBGDownloadCommonManager* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_meta_method$_ungrouped$IOSBGDownloadResumeDataManager$sharedInstance(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IOSBGDownloadResumeDataManager$setResumeDataInfos$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$setResumeDataInfos$ ? _logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$setResumeDataInfos$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$setResumeDataInfos$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadResumeDataManager, @selector(setResumeDataInfos:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$IOSBGDownloadResumeDataManager$resumeDataInfos(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IOSBGDownloadResumeDataManager$setStoredResumeData$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$setStoredResumeData$ ? _logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$setStoredResumeData$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$setStoredResumeData$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadResumeDataManager, @selector(setStoredResumeData:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$IOSBGDownloadResumeDataManager$GetResumeData$withOffset$withLength$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, long long arg2, long long arg3) {
    arg3 = 0;
    arg2 = 0;
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$GetResumeData$withOffset$withLength$ ? _logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$GetResumeData$withOffset$withLength$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$GetResumeData$withOffset$withLength$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadResumeDataManager, @selector(GetResumeData:withOffset:withLength:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$IOSBGDownloadResumeDataManager$StoreResumeData$withResuemData$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$StoreResumeData$withResuemData$ ? _logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$StoreResumeData$withResuemData$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$StoreResumeData$withResuemData$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownloadResumeDataManager, @selector(StoreResumeData:withResuemData:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$IOSBGDownloadResumeDataManager$storedResumeData(_LOGOS_SELF_TYPE_NORMAL IOSBGDownloadResumeDataManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static IOSBGDownloadResumeDataManager* _logos_method$_ungrouped$IOSBGDownloadResumeDataManager$init(_LOGOS_SELF_TYPE_INIT IOSBGDownloadResumeDataManager* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}





static void _logos_method$_ungrouped$IOSBGDownload_Report_Helper$AddSuccessTask$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$AddSuccessTask$ ? _logos_orig$_ungrouped$IOSBGDownload_Report_Helper$AddSuccessTask$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$AddSuccessTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownload_Report_Helper, @selector(AddSuccessTask:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$IOSBGDownload_Report_Helper$AddFailTask$withErrorCode$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1, long long arg2) {
    arg2 = 0;
    arg1 = 0;
    return (_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$AddFailTask$withErrorCode$ ? _logos_orig$_ungrouped$IOSBGDownload_Report_Helper$AddFailTask$withErrorCode$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$AddFailTask$withErrorCode$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownload_Report_Helper, @selector(AddFailTask:withErrorCode:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$IOSBGDownload_Report_Helper$SetActionImpletement$withKey$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$SetActionImpletement$withKey$ ? _logos_orig$_ungrouped$IOSBGDownload_Report_Helper$SetActionImpletement$withKey$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$SetActionImpletement$withKey$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownload_Report_Helper, @selector(SetActionImpletement:withKey:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$IOSBGDownload_Report_Helper$SaveReportFile(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$IOSBGDownload_Report_Helper$GetReportDictionary(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$IOSBGDownload_Report_Helper$reportDictionary(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IOSBGDownload_Report_Helper$setReportDictionary$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$setReportDictionary$ ? _logos_orig$_ungrouped$IOSBGDownload_Report_Helper$setReportDictionary$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$setReportDictionary$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownload_Report_Helper, @selector(setReportDictionary:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$IOSBGDownload_Report_Helper$reportFilePath(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$IOSBGDownload_Report_Helper$setReportFilePath$(_LOGOS_SELF_TYPE_NORMAL IOSBGDownload_Report_Helper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$setReportFilePath$ ? _logos_orig$_ungrouped$IOSBGDownload_Report_Helper$setReportFilePath$ : (__typeof__(_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$setReportFilePath$))class_getMethodImplementation(_logos_superclass$_ungrouped$IOSBGDownload_Report_Helper, @selector(setReportFilePath:)))(self, _cmd, arg1);
}



static id _logos_meta_method$_ungrouped$IOSBGDownload_Report_Helper$sharedInstance(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GCloudBGApplication$resetPufferActionReport$withNewPath$(_LOGOS_SELF_TYPE_NORMAL GCloudBGApplication* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GCloudBGApplication$resetPufferActionReport$withNewPath$ ? _logos_orig$_ungrouped$GCloudBGApplication$resetPufferActionReport$withNewPath$ : (__typeof__(_logos_orig$_ungrouped$GCloudBGApplication$resetPufferActionReport$withNewPath$))class_getMethodImplementation(_logos_superclass$_ungrouped$GCloudBGApplication, @selector(resetPufferActionReport:withNewPath:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$GSDKInGameSystem$reportDotsToBeacon$(_LOGOS_SELF_TYPE_NORMAL GSDKInGameSystem* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GSDKInGameSystem$reportDotsToBeacon$ ? _logos_orig$_ungrouped$GSDKInGameSystem$reportDotsToBeacon$ : (__typeof__(_logos_orig$_ungrouped$GSDKInGameSystem$reportDotsToBeacon$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKInGameSystem, @selector(reportDotsToBeacon:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GSDKInGameSystem$reportBaseDict(_LOGOS_SELF_TYPE_NORMAL GSDKInGameSystem* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GSDKInGameSystem$setReportBaseDict$(_LOGOS_SELF_TYPE_NORMAL GSDKInGameSystem* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GSDKInGameSystem$setReportBaseDict$ ? _logos_orig$_ungrouped$GSDKInGameSystem$setReportBaseDict$ : (__typeof__(_logos_orig$_ungrouped$GSDKInGameSystem$setReportBaseDict$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKInGameSystem, @selector(setReportBaseDict:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GSDKReporter$setGSDKReportPlatform$(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GSDKReporter$setGSDKReportPlatform$ ? _logos_orig$_ungrouped$GSDKReporter$setGSDKReportPlatform$ : (__typeof__(_logos_orig$_ungrouped$GSDKReporter$setGSDKReportPlatform$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKReporter, @selector(setGSDKReportPlatform:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GSDKReporter$gsdkReport$Params$(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GSDKReporter$gsdkReport$Params$ ? _logos_orig$_ungrouped$GSDKReporter$gsdkReport$Params$ : (__typeof__(_logos_orig$_ungrouped$GSDKReporter$gsdkReport$Params$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKReporter, @selector(gsdkReport:Params:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$GSDKReporter$gsdkReportTdm$Params$(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GSDKReporter$gsdkReportTdm$Params$ ? _logos_orig$_ungrouped$GSDKReporter$gsdkReportTdm$Params$ : (__typeof__(_logos_orig$_ungrouped$GSDKReporter$gsdkReportTdm$Params$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKReporter, @selector(gsdkReportTdm:Params:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$GSDKReporter$gsdkReportBeacon$params$(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    return 0;
    return (_logos_orig$_ungrouped$GSDKReporter$gsdkReportBeacon$params$ ? _logos_orig$_ungrouped$GSDKReporter$gsdkReportBeacon$params$ : (__typeof__(_logos_orig$_ungrouped$GSDKReporter$gsdkReportBeacon$params$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKReporter, @selector(gsdkReportBeacon:params:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$GSDKReporter$initBeaconInGSDK$(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GSDKReporter$initBeaconInGSDK$ ? _logos_orig$_ungrouped$GSDKReporter$initBeaconInGSDK$ : (__typeof__(_logos_orig$_ungrouped$GSDKReporter$initBeaconInGSDK$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKReporter, @selector(initBeaconInGSDK:)))(self, _cmd, arg1);
}



static int _logos_method$_ungrouped$GSDKReporter$reportPlatform(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GSDKReporter$setReportPlatform$(_LOGOS_SELF_TYPE_NORMAL GSDKReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GSDKReporter$setReportPlatform$ ? _logos_orig$_ungrouped$GSDKReporter$setReportPlatform$ : (__typeof__(_logos_orig$_ungrouped$GSDKReporter$setReportPlatform$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKReporter, @selector(setReportPlatform:)))(self, _cmd, arg1);
}



static id _logos_meta_method$_ungrouped$GSDKReporter$sharedInstance(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static bool _logos_method$_ungrouped$GSDKLoginEvent$report_flag(_LOGOS_SELF_TYPE_NORMAL GSDKLoginEvent* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GSDKLoginEvent$setReport_flag$(_LOGOS_SELF_TYPE_NORMAL GSDKLoginEvent* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GSDKLoginEvent$setReport_flag$ ? _logos_orig$_ungrouped$GSDKLoginEvent$setReport_flag$ : (__typeof__(_logos_orig$_ungrouped$GSDKLoginEvent$setReport_flag$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKLoginEvent, @selector(setReport_flag:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$MidasIAPReportEventListener$processEvent$(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return 0;
    return (_logos_orig$_ungrouped$MidasIAPReportEventListener$processEvent$ ? _logos_orig$_ungrouped$MidasIAPReportEventListener$processEvent$ : (__typeof__(_logos_orig$_ungrouped$MidasIAPReportEventListener$processEvent$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasIAPReportEventListener, @selector(processEvent:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$MidasIAPReportEventListener$removeAfterEnd(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static unsigned long long _logos_method$_ungrouped$MidasIAPReportEventListener$beginType(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$MidasIAPReportEventListener$beginEvent(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static unsigned long long _logos_method$_ungrouped$MidasIAPReportEventListener$endType(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$MidasIAPReportEventListener$endEvent(_LOGOS_SELF_TYPE_NORMAL MidasIAPReportEventListener* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}






static id _logos_meta_method$_ungrouped$MidasIAPReportHelper$misDictionary$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_meta_orig$_ungrouped$MidasIAPReportHelper$misDictionary$ ? _logos_meta_orig$_ungrouped$MidasIAPReportHelper$misDictionary$ : (__typeof__(_logos_meta_orig$_ungrouped$MidasIAPReportHelper$misDictionary$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$MidasIAPReportHelper, @selector(misDictionary:)))(self, _cmd, arg1);
}




static id _logos_meta_method$_ungrouped$MidasIAPReportHelper$formatResultInfo$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_meta_orig$_ungrouped$MidasIAPReportHelper$formatResultInfo$ ? _logos_meta_orig$_ungrouped$MidasIAPReportHelper$formatResultInfo$ : (__typeof__(_logos_meta_orig$_ungrouped$MidasIAPReportHelper$formatResultInfo$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$MidasIAPReportHelper, @selector(formatResultInfo:)))(self, _cmd, arg1);
}




static void _logos_meta_method$_ungrouped$MidasIAPReportHelper$addReportListener$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$MidasIAPReportHelper$addReportListener$ ? _logos_meta_orig$_ungrouped$MidasIAPReportHelper$addReportListener$ : (__typeof__(_logos_meta_orig$_ungrouped$MidasIAPReportHelper$addReportListener$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$MidasIAPReportHelper, @selector(addReportListener:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$MidasIAPReportHelper$removeReportListener$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$MidasIAPReportHelper$removeReportListener$ ? _logos_meta_orig$_ungrouped$MidasIAPReportHelper$removeReportListener$ : (__typeof__(_logos_meta_orig$_ungrouped$MidasIAPReportHelper$removeReportListener$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$MidasIAPReportHelper, @selector(removeReportListener:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$MidasIAPReportHelper$appendToNextReport$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$MidasIAPReportHelper$appendToNextReport$ ? _logos_meta_orig$_ungrouped$MidasIAPReportHelper$appendToNextReport$ : (__typeof__(_logos_meta_orig$_ungrouped$MidasIAPReportHelper$appendToNextReport$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$MidasIAPReportHelper, @selector(appendToNextReport:)))(self, _cmd, arg1);
}



static id _logos_meta_method$_ungrouped$MidasIAPReportHelper$processUUID(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static APMidasCommReportHelper* _logos_method$_ungrouped$APMidasCommReportHelper$init(_LOGOS_SELF_TYPE_INIT APMidasCommReportHelper* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$APMidasCommReportHelper$enqueueRequestName$reqTag$(_LOGOS_SELF_TYPE_NORMAL APMidasCommReportHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, unsigned long long arg2) {
    arg2 = 0;
    arg1 = NULL;
    return (_logos_orig$_ungrouped$APMidasCommReportHelper$enqueueRequestName$reqTag$ ? _logos_orig$_ungrouped$APMidasCommReportHelper$enqueueRequestName$reqTag$ : (__typeof__(_logos_orig$_ungrouped$APMidasCommReportHelper$enqueueRequestName$reqTag$))class_getMethodImplementation(_logos_superclass$_ungrouped$APMidasCommReportHelper, @selector(enqueueRequestName:reqTag:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$APMidasCommReportHelper$dequeueRequestName$reqTag$success$httpRespCode$errorMsg$action$resultInfoDict$orderInfo$userInfo$(_LOGOS_SELF_TYPE_NORMAL APMidasCommReportHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, unsigned long long arg2, bool arg3, long long arg4, id arg5, id arg6, id arg7, id arg8, id arg9) {
    arg9 = NULL;
    arg8 = NULL;
    arg7 = NULL;
    arg6 = NULL;
    arg5 = NULL;
    arg4 = 0;
    arg3 = 0;
    arg2 = 0;
    arg1 = NULL;
    return (_logos_orig$_ungrouped$APMidasCommReportHelper$dequeueRequestName$reqTag$success$httpRespCode$errorMsg$action$resultInfoDict$orderInfo$userInfo$ ? _logos_orig$_ungrouped$APMidasCommReportHelper$dequeueRequestName$reqTag$success$httpRespCode$errorMsg$action$resultInfoDict$orderInfo$userInfo$ : (__typeof__(_logos_orig$_ungrouped$APMidasCommReportHelper$dequeueRequestName$reqTag$success$httpRespCode$errorMsg$action$resultInfoDict$orderInfo$userInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$APMidasCommReportHelper, @selector(dequeueRequestName:reqTag:success:httpRespCode:errorMsg:action:resultInfoDict:orderInfo:userInfo:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}



static id _logos_meta_method$_ungrouped$APMidasCommReportHelper$sharedInstance(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static MidasAddrReporter* _logos_method$_ungrouped$MidasAddrReporter$initWithOrderInfo$userInfo$(_LOGOS_SELF_TYPE_INIT MidasAddrReporter* __unused self, SEL __unused _cmd, id arg1, id arg2) _LOGOS_RETURN_RETAINED {
    arg2 = NULL;
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrReporter$initWithOrderInfo$userInfo$ ? _logos_orig$_ungrouped$MidasAddrReporter$initWithOrderInfo$userInfo$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrReporter$initWithOrderInfo$userInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrReporter, @selector(initWithOrderInfo:userInfo:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$MidasAddrReporter$reportSpeed$qDiaoType$delay$isIPv6$(_LOGOS_SELF_TYPE_NORMAL MidasAddrReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, float arg3, bool arg4) {
    arg4 = 0;
    arg3 = 0;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_orig$_ungrouped$MidasAddrReporter$reportSpeed$qDiaoType$delay$isIPv6$ ? _logos_orig$_ungrouped$MidasAddrReporter$reportSpeed$qDiaoType$delay$isIPv6$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrReporter$reportSpeed$qDiaoType$delay$isIPv6$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrReporter, @selector(reportSpeed:qDiaoType:delay:isIPv6:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static id _logos_method$_ungrouped$MidasAddrReporter$orderInfo(_LOGOS_SELF_TYPE_NORMAL MidasAddrReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$MidasAddrReporter$setOrderInfo$(_LOGOS_SELF_TYPE_NORMAL MidasAddrReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$MidasAddrReporter$setOrderInfo$ ? _logos_orig$_ungrouped$MidasAddrReporter$setOrderInfo$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrReporter$setOrderInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrReporter, @selector(setOrderInfo:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrReporter$userInfo(_LOGOS_SELF_TYPE_NORMAL MidasAddrReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$MidasAddrReporter$setUserInfo$(_LOGOS_SELF_TYPE_NORMAL MidasAddrReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$MidasAddrReporter$setUserInfo$ ? _logos_orig$_ungrouped$MidasAddrReporter$setUserInfo$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrReporter$setUserInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrReporter, @selector(setUserInfo:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasIAPPayOperation$reportGotoAppStore$errorInfo$(_LOGOS_SELF_TYPE_NORMAL MidasIAPPayOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1, id arg2) {
    arg2 = NULL;
    arg1 = 0;
    return (_logos_orig$_ungrouped$MidasIAPPayOperation$reportGotoAppStore$errorInfo$ ? _logos_orig$_ungrouped$MidasIAPPayOperation$reportGotoAppStore$errorInfo$ : (__typeof__(_logos_orig$_ungrouped$MidasIAPPayOperation$reportGotoAppStore$errorInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasIAPPayOperation, @selector(reportGotoAppStore:errorInfo:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$MidasIAPStatics$onReport$(_LOGOS_SELF_TYPE_NORMAL MidasIAPStatics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$MidasIAPStatics$onReport$ ? _logos_orig$_ungrouped$MidasIAPStatics$onReport$ : (__typeof__(_logos_orig$_ungrouped$MidasIAPStatics$onReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasIAPStatics, @selector(onReport:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasIAPProductInfoRequester$reportAppleSystemErrorWithCode$msg$(_LOGOS_SELF_TYPE_NORMAL MidasIAPProductInfoRequester* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1, id arg2) {
    arg2 = NULL;
    arg1 = 0;
    return (_logos_orig$_ungrouped$MidasIAPProductInfoRequester$reportAppleSystemErrorWithCode$msg$ ? _logos_orig$_ungrouped$MidasIAPProductInfoRequester$reportAppleSystemErrorWithCode$msg$ : (__typeof__(_logos_orig$_ungrouped$MidasIAPProductInfoRequester$reportAppleSystemErrorWithCode$msg$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasIAPProductInfoRequester, @selector(reportAppleSystemErrorWithCode:msg:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$MidasAddrHelper$reporter(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$MidasAddrHelper$setReporter$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$setReporter$ ? _logos_orig$_ungrouped$MidasAddrHelper$setReporter$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$setReporter$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(setReporter:)))(self, _cmd, arg1);
}



static id _logos_meta_method$_ungrouped$GNLRecord$recordWithReports$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_meta_orig$_ungrouped$GNLRecord$recordWithReports$ ? _logos_meta_orig$_ungrouped$GNLRecord$recordWithReports$ : (__typeof__(_logos_meta_orig$_ungrouped$GNLRecord$recordWithReports$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$GNLRecord, @selector(recordWithReports:)))(self, _cmd, arg1);
}



static GNLReport* _logos_method$_ungrouped$GNLReport$init(_LOGOS_SELF_TYPE_INIT GNLReport* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static bool _logos_method$_ungrouped$GNLReport$isReportValidated(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$GNLReport$convertToReportString(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$GNLReport$description(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$GNLReport$reportUploadingNumber(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setReportUploadingNumber$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setReportUploadingNumber$ ? _logos_orig$_ungrouped$GNLReport$setReportUploadingNumber$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setReportUploadingNumber$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setReportUploadingNumber:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$sdkVersion(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setSdkVersion$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setSdkVersion$ ? _logos_orig$_ungrouped$GNLReport$setSdkVersion$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setSdkVersion$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setSdkVersion:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$openIDOrUIN(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setOpenIDOrUIN$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setOpenIDOrUIN$ ? _logos_orig$_ungrouped$GNLReport$setOpenIDOrUIN$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setOpenIDOrUIN$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setOpenIDOrUIN:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$payFrom(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setPayFrom$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setPayFrom$ ? _logos_orig$_ungrouped$GNLReport$setPayFrom$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setPayFrom$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setPayFrom:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$resultInfo(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setResultInfo$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setResultInfo$ ? _logos_orig$_ungrouped$GNLReport$setResultInfo$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setResultInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setResultInfo:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$GNLReport$errorCode(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GNLReport$setErrorCode$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GNLReport$setErrorCode$ ? _logos_orig$_ungrouped$GNLReport$setErrorCode$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setErrorCode$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setErrorCode:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$errorInfo(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setErrorInfo$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setErrorInfo$ ? _logos_orig$_ungrouped$GNLReport$setErrorInfo$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setErrorInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setErrorInfo:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$serviceCode(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setServiceCode$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setServiceCode$ ? _logos_orig$_ungrouped$GNLReport$setServiceCode$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setServiceCode$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setServiceCode:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$action(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setAction$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setAction$ ? _logos_orig$_ungrouped$GNLReport$setAction$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setAction$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setAction:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$format(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$GNLReport$offerID(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setOfferID$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setOfferID$ ? _logos_orig$_ungrouped$GNLReport$setOfferID$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setOfferID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setOfferID:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$pf(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setFormat$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setFormat$ ? _logos_orig$_ungrouped$GNLReport$setFormat$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setFormat$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setFormat:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GNLReport$setPf$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setPf$ ? _logos_orig$_ungrouped$GNLReport$setPf$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setPf$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setPf:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$billNo(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setBillNo$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setBillNo$ ? _logos_orig$_ungrouped$GNLReport$setBillNo$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setBillNo$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setBillNo:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$orderUUID(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setOrderUUID$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setOrderUUID$ ? _logos_orig$_ungrouped$GNLReport$setOrderUUID$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setOrderUUID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setOrderUUID:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$sessionID(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setSessionID$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setSessionID$ ? _logos_orig$_ungrouped$GNLReport$setSessionID$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setSessionID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setSessionID:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$sessionType(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setSessionType$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setSessionType$ ? _logos_orig$_ungrouped$GNLReport$setSessionType$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setSessionType$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setSessionType:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$productID(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setProductID$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setProductID$ ? _logos_orig$_ungrouped$GNLReport$setProductID$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setProductID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setProductID:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$amount(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setAmount$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setAmount$ ? _logos_orig$_ungrouped$GNLReport$setAmount$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setAmount$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setAmount:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$GNLReport$quantity(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GNLReport$setQuantity$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GNLReport$setQuantity$ ? _logos_orig$_ungrouped$GNLReport$setQuantity$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setQuantity$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setQuantity:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$aid(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setAid$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setAid$ ? _logos_orig$_ungrouped$GNLReport$setAid$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setAid$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setAid:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReport$processUUID(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReport$setProcessUUID$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReport$setProcessUUID$ ? _logos_orig$_ungrouped$GNLReport$setProcessUUID$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setProcessUUID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setProcessUUID:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$GNLReport$isErrorReport(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GNLReport$setIsErrorReport$(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GNLReport$setIsErrorReport$ ? _logos_orig$_ungrouped$GNLReport$setIsErrorReport$ : (__typeof__(_logos_orig$_ungrouped$GNLReport$setIsErrorReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReport, @selector(setIsErrorReport:)))(self, _cmd, arg1);
}



static float _logos_method$_ungrouped$GNLReport$createdTs(_LOGOS_SELF_TYPE_NORMAL GNLReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_meta_method$_ungrouped$GNLReport$_platform(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static GNLReportContainer* _logos_method$_ungrouped$GNLReportContainer$init(_LOGOS_SELF_TYPE_INIT GNLReportContainer* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReportContainer$insertReport$(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportContainer$insertReport$ ? _logos_orig$_ungrouped$GNLReportContainer$insertReport$ : (__typeof__(_logos_orig$_ungrouped$GNLReportContainer$insertReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportContainer, @selector(insertReport:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GNLReportContainer$removeReport$(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportContainer$removeReport$ ? _logos_orig$_ungrouped$GNLReportContainer$removeReport$ : (__typeof__(_logos_orig$_ungrouped$GNLReportContainer$removeReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportContainer, @selector(removeReport:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GNLReportContainer$setReportDomains$offerID$(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportContainer$setReportDomains$offerID$ ? _logos_orig$_ungrouped$GNLReportContainer$setReportDomains$offerID$ : (__typeof__(_logos_orig$_ungrouped$GNLReportContainer$setReportDomains$offerID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportContainer, @selector(setReportDomains:offerID:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$GNLReportContainer$_joinAllReportsIntoARecord$(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$GNLReportContainer$_joinAllReportsIntoARecord$ ? _logos_orig$_ungrouped$GNLReportContainer$_joinAllReportsIntoARecord$ : (__typeof__(_logos_orig$_ungrouped$GNLReportContainer$_joinAllReportsIntoARecord$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportContainer, @selector(_joinAllReportsIntoARecord:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReportContainer$processUUID(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static unsigned long long _logos_method$_ungrouped$GNLReportContainer$currentUploadingNumber(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GNLReportContainer$setProcessUUID$(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportContainer$setProcessUUID$ ? _logos_orig$_ungrouped$GNLReportContainer$setProcessUUID$ : (__typeof__(_logos_orig$_ungrouped$GNLReportContainer$setProcessUUID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportContainer, @selector(setProcessUUID:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReportContainer$reportDomains(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReportContainer$setReportDomains$(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportContainer$setReportDomains$ ? _logos_orig$_ungrouped$GNLReportContainer$setReportDomains$ : (__typeof__(_logos_orig$_ungrouped$GNLReportContainer$setReportDomains$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportContainer, @selector(setReportDomains:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReportContainer$offerID(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReportContainer$setOfferID$(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportContainer$setOfferID$ ? _logos_orig$_ungrouped$GNLReportContainer$setOfferID$ : (__typeof__(_logos_orig$_ungrouped$GNLReportContainer$setOfferID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportContainer, @selector(setOfferID:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReportContainer$preSendingReports(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReportContainer$setPreSendingReports$(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportContainer$setPreSendingReports$ ? _logos_orig$_ungrouped$GNLReportContainer$setPreSendingReports$ : (__typeof__(_logos_orig$_ungrouped$GNLReportContainer$setPreSendingReports$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportContainer, @selector(setPreSendingReports:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GNLReportContainer$setCurrentUploadingNumber$(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GNLReportContainer$setCurrentUploadingNumber$ ? _logos_orig$_ungrouped$GNLReportContainer$setCurrentUploadingNumber$ : (__typeof__(_logos_orig$_ungrouped$GNLReportContainer$setCurrentUploadingNumber$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportContainer, @selector(setCurrentUploadingNumber:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReportContainer$originalUUID(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReportContainer$setOriginalUUID$(_LOGOS_SELF_TYPE_NORMAL GNLReportContainer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportContainer$setOriginalUUID$ ? _logos_orig$_ungrouped$GNLReportContainer$setOriginalUUID$ : (__typeof__(_logos_orig$_ungrouped$GNLReportContainer$setOriginalUUID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportContainer, @selector(setOriginalUUID:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReportManager$processUUID(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReportManager$insertReport$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportManager$insertReport$ ? _logos_orig$_ungrouped$GNLReportManager$insertReport$ : (__typeof__(_logos_orig$_ungrouped$GNLReportManager$insertReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportManager, @selector(insertReport:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GNLReportManager$removeReport$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportManager$removeReport$ ? _logos_orig$_ungrouped$GNLReportManager$removeReport$ : (__typeof__(_logos_orig$_ungrouped$GNLReportManager$removeReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportManager, @selector(removeReport:)))(self, _cmd, arg1);
}




static void _logos_method$_ungrouped$GNLReportManager$setDataReportQueue$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportManager$setDataReportQueue$ ? _logos_orig$_ungrouped$GNLReportManager$setDataReportQueue$ : (__typeof__(_logos_orig$_ungrouped$GNLReportManager$setDataReportQueue$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportManager, @selector(setDataReportQueue:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GNLReportManager$addReportListener$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportManager$addReportListener$ ? _logos_orig$_ungrouped$GNLReportManager$addReportListener$ : (__typeof__(_logos_orig$_ungrouped$GNLReportManager$addReportListener$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportManager, @selector(addReportListener:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GNLReportManager$removeReportListener$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportManager$removeReportListener$ ? _logos_orig$_ungrouped$GNLReportManager$removeReportListener$ : (__typeof__(_logos_orig$_ungrouped$GNLReportManager$removeReportListener$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportManager, @selector(removeReportListener:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GNLReportManager$appendToNextReport$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportManager$appendToNextReport$ ? _logos_orig$_ungrouped$GNLReportManager$appendToNextReport$ : (__typeof__(_logos_orig$_ungrouped$GNLReportManager$appendToNextReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportManager, @selector(appendToNextReport:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GNLReportManager$notify$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportManager$notify$ ? _logos_orig$_ungrouped$GNLReportManager$notify$ : (__typeof__(_logos_orig$_ungrouped$GNLReportManager$notify$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportManager, @selector(notify:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GNLReportManager$processReportQueue$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportManager$processReportQueue$ ? _logos_orig$_ungrouped$GNLReportManager$processReportQueue$ : (__typeof__(_logos_orig$_ungrouped$GNLReportManager$processReportQueue$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportManager, @selector(processReportQueue:)))(self, _cmd, arg1);
}



static GNLReportManager* _logos_method$_ungrouped$GNLReportManager$init(_LOGOS_SELF_TYPE_INIT GNLReportManager* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static GNLReportManager* _logos_method$_ungrouped$GNLReportManager$initMethod(_LOGOS_SELF_TYPE_INIT GNLReportManager* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static GNLReportManager* _logos_method$_ungrouped$GNLReportManager$copyWithZone$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, struct _NSZone * arg1) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static GNLReportManager* _logos_method$_ungrouped$GNLReportManager$mutableCopyWithZone$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, struct _NSZone * arg1) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_method$_ungrouped$GNLReportManager$container(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GNLReportManager$setContainer$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportManager$setContainer$ ? _logos_orig$_ungrouped$GNLReportManager$setContainer$ : (__typeof__(_logos_orig$_ungrouped$GNLReportManager$setContainer$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportManager, @selector(setContainer:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GNLReportManager$listeners(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static bool _logos_meta_method$_ungrouped$GNLReportManager$isSingleton(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$VLEventReportRequest$needCertParam(_LOGOS_SELF_TYPE_NORMAL VLEventReportRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}





static bool _logos_method$_ungrouped$IMSDKReport$isThirdPlatformInitialized(_LOGOS_SELF_TYPE_NORMAL IMSDKReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$IMSDKReport$setIsThirdPlatformInitialized$(_LOGOS_SELF_TYPE_NORMAL IMSDKReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$IMSDKReport$setIsThirdPlatformInitialized$ ? _logos_orig$_ungrouped$IMSDKReport$setIsThirdPlatformInitialized$ : (__typeof__(_logos_orig$_ungrouped$IMSDKReport$setIsThirdPlatformInitialized$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKReport, @selector(setIsThirdPlatformInitialized:)))(self, _cmd, arg1);
}




static void _logos_method$_ungrouped$IMSDKToolStat$reportLogin$openID$channelID$(_LOGOS_SELF_TYPE_NORMAL IMSDKToolStat* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1, id arg2, id arg3) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = 0;
    return (_logos_orig$_ungrouped$IMSDKToolStat$reportLogin$openID$channelID$ ? _logos_orig$_ungrouped$IMSDKToolStat$reportLogin$openID$channelID$ : (__typeof__(_logos_orig$_ungrouped$IMSDKToolStat$reportLogin$openID$channelID$))class_getMethodImplementation(_logos_superclass$_ungrouped$IMSDKToolStat, @selector(reportLogin:openID:channelID:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$IMSDKStatBuglyManager$reportEvent$eventBody$isRealtime$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3) {
    arg3 = 0;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportEvent$eventBody$isRealtime$ ? _logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportEvent$eventBody$isRealtime$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportEvent$eventBody$isRealtime$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatBuglyManager, @selector(reportEvent:eventBody:isRealtime:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$IMSDKStatBuglyManager$reportEvent$params$isRealtime$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3) {
    arg3 = 0;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportEvent$params$isRealtime$ ? _logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportEvent$params$isRealtime$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportEvent$params$isRealtime$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatBuglyManager, @selector(reportEvent:params:isRealtime:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$IMSDKStatBuglyManager$reportPurchase$currentCode$expense$isRealTime$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, bool arg4) {
    arg4 = 0;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportPurchase$currentCode$expense$isRealTime$ ? _logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportPurchase$currentCode$expense$isRealTime$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportPurchase$currentCode$expense$isRealTime$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatBuglyManager, @selector(reportPurchase:currentCode:expense:isRealTime:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_meta_method$_ungrouped$IMSDKStatBuglyManager$reportCrash$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportCrash$ ? _logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportCrash$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportCrash$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatBuglyManager, @selector(reportCrash:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$IMSDKStatBuglyManager$reportAutoExceptionReport$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportAutoExceptionReport$ ? _logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportAutoExceptionReport$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportAutoExceptionReport$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatBuglyManager, @selector(reportAutoExceptionReport:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$IMSDKStatAdjustManager$reportEvent$eventBody$isRealtime$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3) {
    arg3 = 0;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportEvent$eventBody$isRealtime$ ? _logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportEvent$eventBody$isRealtime$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportEvent$eventBody$isRealtime$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatAdjustManager, @selector(reportEvent:eventBody:isRealtime:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$IMSDKStatAdjustManager$reportEvent$params$isRealtime$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3) {
    arg3 = 0;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportEvent$params$isRealtime$ ? _logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportEvent$params$isRealtime$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportEvent$params$isRealtime$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatAdjustManager, @selector(reportEvent:params:isRealtime:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$IMSDKStatAdjustManager$reportPurchase$currentCode$expense$isRealTime$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, bool arg4) {
    arg4 = 0;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportPurchase$currentCode$expense$isRealTime$ ? _logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportPurchase$currentCode$expense$isRealTime$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportPurchase$currentCode$expense$isRealTime$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatAdjustManager, @selector(reportPurchase:currentCode:expense:isRealTime:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_meta_method$_ungrouped$IMSDKStatAdjustManager$reportCrash$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportCrash$ ? _logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportCrash$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportCrash$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatAdjustManager, @selector(reportCrash:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$IMSDKStatAdjustManager$reportAutoExceptionReport$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportAutoExceptionReport$ ? _logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportAutoExceptionReport$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportAutoExceptionReport$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatAdjustManager, @selector(reportAutoExceptionReport:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$IMSDKStatFacebookManager$reportEvent$eventBody$isRealtime$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3) {
    arg3 = 0;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportEvent$eventBody$isRealtime$ ? _logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportEvent$eventBody$isRealtime$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportEvent$eventBody$isRealtime$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatFacebookManager, @selector(reportEvent:eventBody:isRealtime:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$IMSDKStatFacebookManager$reportEvent$params$isRealtime$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3) {
    arg3 = 0;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportEvent$params$isRealtime$ ? _logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportEvent$params$isRealtime$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportEvent$params$isRealtime$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatFacebookManager, @selector(reportEvent:params:isRealtime:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$IMSDKStatFacebookManager$reportCrash$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportCrash$ ? _logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportCrash$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportCrash$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatFacebookManager, @selector(reportCrash:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$IMSDKStatFacebookManager$reportAutoExceptionReport$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportAutoExceptionReport$ ? _logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportAutoExceptionReport$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportAutoExceptionReport$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatFacebookManager, @selector(reportAutoExceptionReport:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$IMSDKStatFirebaseManager$reportEvent$eventBody$isRealtime$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3) {
    arg3 = 0;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportEvent$eventBody$isRealtime$ ? _logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportEvent$eventBody$isRealtime$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportEvent$eventBody$isRealtime$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatFirebaseManager, @selector(reportEvent:eventBody:isRealtime:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$IMSDKStatFirebaseManager$reportEvent$params$isRealtime$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3) {
    arg3 = 0;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportEvent$params$isRealtime$ ? _logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportEvent$params$isRealtime$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportEvent$params$isRealtime$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatFirebaseManager, @selector(reportEvent:params:isRealtime:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$IMSDKStatFirebaseManager$reportPurchase$currentCode$expense$isRealTime$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, bool arg4) {
    arg4 = 0;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportPurchase$currentCode$expense$isRealTime$ ? _logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportPurchase$currentCode$expense$isRealTime$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportPurchase$currentCode$expense$isRealTime$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatFirebaseManager, @selector(reportPurchase:currentCode:expense:isRealTime:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_meta_method$_ungrouped$IMSDKStatFirebaseManager$reportCrash$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportCrash$ ? _logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportCrash$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportCrash$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatFirebaseManager, @selector(reportCrash:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$IMSDKStatFirebaseManager$reportAutoExceptionReport$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportAutoExceptionReport$ ? _logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportAutoExceptionReport$ : (__typeof__(_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportAutoExceptionReport$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$IMSDKStatFirebaseManager, @selector(reportAutoExceptionReport:)))(self, _cmd, arg1);
}



static bool _logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$_shouldCutoff(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$_isConfigRefreshTimestampValid(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_meta_method$_ungrouped$FBSDKSettings$isSKAdNetworkReportEnabled(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_meta_method$_ungrouped$FBSDKSettings$setSKAdNetworkReportEnabled$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$FBSDKSettings$setSKAdNetworkReportEnabled$ ? _logos_meta_orig$_ungrouped$FBSDKSettings$setSKAdNetworkReportEnabled$ : (__typeof__(_logos_meta_orig$_ungrouped$FBSDKSettings$setSKAdNetworkReportEnabled$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$FBSDKSettings, @selector(setSKAdNetworkReportEnabled:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$BLYBlockLogic$reportSuccessed$(_LOGOS_SELF_TYPE_NORMAL BLYBlockLogic* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$BLYBlockLogic$reportSuccessed$ ? _logos_orig$_ungrouped$BLYBlockLogic$reportSuccessed$ : (__typeof__(_logos_orig$_ungrouped$BLYBlockLogic$reportSuccessed$))class_getMethodImplementation(_logos_superclass$_ungrouped$BLYBlockLogic, @selector(reportSuccessed:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$Bugly$reportExceptionWithCategory$name$reason$callStack$extraInfo$terminateApp$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1, id arg2, id arg3, id arg4, id arg5, bool arg6) {
    arg6 = 0;
    arg5 = NULL;
    arg4 = NULL;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$Bugly$reportExceptionWithCategory$name$reason$callStack$extraInfo$terminateApp$ ? _logos_meta_orig$_ungrouped$Bugly$reportExceptionWithCategory$name$reason$callStack$extraInfo$terminateApp$ : (__typeof__(_logos_meta_orig$_ungrouped$Bugly$reportExceptionWithCategory$name$reason$callStack$extraInfo$terminateApp$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$Bugly, @selector(reportExceptionWithCategory:name:reason:callStack:extraInfo:terminateApp:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6);
}



static bool _logos_method$_ungrouped$BLYCrashReport$isHandlingCrash(_LOGOS_SELF_TYPE_NORMAL BLYCrashReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$BLYCrashReport$setCrashHandling$(_LOGOS_SELF_TYPE_NORMAL BLYCrashReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$BLYCrashReport$setCrashHandling$ ? _logos_orig$_ungrouped$BLYCrashReport$setCrashHandling$ : (__typeof__(_logos_orig$_ungrouped$BLYCrashReport$setCrashHandling$))class_getMethodImplementation(_logos_superclass$_ungrouped$BLYCrashReport, @selector(setCrashHandling:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$BLYCrashReport$isCrashedDuringCrashHandling(_LOGOS_SELF_TYPE_NORMAL BLYCrashReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$BLYCrashReport$setCrashedDuringCrashHandling$(_LOGOS_SELF_TYPE_NORMAL BLYCrashReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$BLYCrashReport$setCrashedDuringCrashHandling$ ? _logos_orig$_ungrouped$BLYCrashReport$setCrashedDuringCrashHandling$ : (__typeof__(_logos_orig$_ungrouped$BLYCrashReport$setCrashedDuringCrashHandling$))class_getMethodImplementation(_logos_superclass$_ungrouped$BLYCrashReport, @selector(setCrashedDuringCrashHandling:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$BLYAnalyticsLogic$reportSuccessed$(_LOGOS_SELF_TYPE_NORMAL BLYAnalyticsLogic* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$BLYAnalyticsLogic$reportSuccessed$ ? _logos_orig$_ungrouped$BLYAnalyticsLogic$reportSuccessed$ : (__typeof__(_logos_orig$_ungrouped$BLYAnalyticsLogic$reportSuccessed$))class_getMethodImplementation(_logos_superclass$_ungrouped$BLYAnalyticsLogic, @selector(reportSuccessed:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$BLYSDKManager$reportCustomizedException$name$reason$callStack$extraInfo$terminateApp$(_LOGOS_SELF_TYPE_NORMAL BLYSDKManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1, id arg2, id arg3, id arg4, id arg5, bool arg6) {
    arg6 = 0;
    arg5 = NULL;
    arg4 = NULL;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = 0;
    return (_logos_orig$_ungrouped$BLYSDKManager$reportCustomizedException$name$reason$callStack$extraInfo$terminateApp$ ? _logos_orig$_ungrouped$BLYSDKManager$reportCustomizedException$name$reason$callStack$extraInfo$terminateApp$ : (__typeof__(_logos_orig$_ungrouped$BLYSDKManager$reportCustomizedException$name$reason$callStack$extraInfo$terminateApp$))class_getMethodImplementation(_logos_superclass$_ungrouped$BLYSDKManager, @selector(reportCustomizedException:name:reason:callStack:extraInfo:terminateApp:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6);
}



static void _logos_method$_ungrouped$BLYCommonUploadLogic$reportSuccessed$(_LOGOS_SELF_TYPE_NORMAL BLYCommonUploadLogic* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$BLYCommonUploadLogic$reportSuccessed$ ? _logos_orig$_ungrouped$BLYCommonUploadLogic$reportSuccessed$ : (__typeof__(_logos_orig$_ungrouped$BLYCommonUploadLogic$reportSuccessed$))class_getMethodImplementation(_logos_superclass$_ungrouped$BLYCommonUploadLogic, @selector(reportSuccessed:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$BLYCrashReporter$setCrashIncident$(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$BLYCrashReporter$setCrashIncident$ ? _logos_orig$_ungrouped$BLYCrashReporter$setCrashIncident$ : (__typeof__(_logos_orig$_ungrouped$BLYCrashReporter$setCrashIncident$))class_getMethodImplementation(_logos_superclass$_ungrouped$BLYCrashReporter, @selector(setCrashIncident:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$BLYCrashReporter$enableCrashReporter$(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id * arg1) {
    return 0;
}



static bool _logos_method$_ungrouped$BLYCrashReporter$disableCrashReporter$(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id * arg1) {
    return 0;
}



static bool _logos_method$_ungrouped$BLYCrashReporter$hasPendingCrashReport(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$BLYCrashReporter$detectiveCrashReporterRunning(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$BLYCrashLogic$reportSuccessed$(_LOGOS_SELF_TYPE_NORMAL BLYCrashLogic* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$BLYCrashLogic$reportSuccessed$ ? _logos_orig$_ungrouped$BLYCrashLogic$reportSuccessed$ : (__typeof__(_logos_orig$_ungrouped$BLYCrashLogic$reportSuccessed$))class_getMethodImplementation(_logos_superclass$_ungrouped$BLYCrashLogic, @selector(reportSuccessed:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$BLYUnexpectedExitManager$reportUnexpectExit$(_LOGOS_SELF_TYPE_NORMAL BLYUnexpectedExitManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$BLYUnexpectedExitManager$reportUnexpectExit$ ? _logos_orig$_ungrouped$BLYUnexpectedExitManager$reportUnexpectExit$ : (__typeof__(_logos_orig$_ungrouped$BLYUnexpectedExitManager$reportUnexpectExit$))class_getMethodImplementation(_logos_superclass$_ungrouped$BLYUnexpectedExitManager, @selector(reportUnexpectExit:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$BLYCrashReporter$hasCrashIncident(_LOGOS_SELF_TYPE_NORMAL BLYCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_meta_method$_ungrouped$RqdCrashReporterLiteException$supportsSecureCoding(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$APMAdExposureReporter$isReportingEnabled(_LOGOS_SELF_TYPE_NORMAL APMAdExposureReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$APMAdExposureReporter$setReportingEnabled$(_LOGOS_SELF_TYPE_NORMAL APMAdExposureReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$APMAdExposureReporter$setReportingEnabled$ ? _logos_orig$_ungrouped$APMAdExposureReporter$setReportingEnabled$ : (__typeof__(_logos_orig$_ungrouped$APMAdExposureReporter$setReportingEnabled$))class_getMethodImplementation(_logos_superclass$_ungrouped$APMAdExposureReporter, @selector(setReportingEnabled:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$APMMeasurement$reportSessionStartOnWorkerQueueWithTimestamp$appInBackground$(_LOGOS_SELF_TYPE_NORMAL APMMeasurement* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, float arg1, bool arg2) {
    arg2 = 0;
    arg1 = 0;
    return (_logos_orig$_ungrouped$APMMeasurement$reportSessionStartOnWorkerQueueWithTimestamp$appInBackground$ ? _logos_orig$_ungrouped$APMMeasurement$reportSessionStartOnWorkerQueueWithTimestamp$appInBackground$ : (__typeof__(_logos_orig$_ungrouped$APMMeasurement$reportSessionStartOnWorkerQueueWithTimestamp$appInBackground$))class_getMethodImplementation(_logos_superclass$_ungrouped$APMMeasurement, @selector(reportSessionStartOnWorkerQueueWithTimestamp:appInBackground:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$APMRemoteConfig$efficientEngagementReportingEnabled(_LOGOS_SELF_TYPE_NORMAL APMRemoteConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$APMScreenViewReporter$isAppActive(_LOGOS_SELF_TYPE_NORMAL APMScreenViewReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$APMSearchAdReporter$logCampaignEventWithSearchAdCampaign$campaign$term$(_LOGOS_SELF_TYPE_NORMAL APMSearchAdReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1, id arg2, id arg3) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = 0;
    return (_logos_orig$_ungrouped$APMSearchAdReporter$logCampaignEventWithSearchAdCampaign$campaign$term$ ? _logos_orig$_ungrouped$APMSearchAdReporter$logCampaignEventWithSearchAdCampaign$campaign$term$ : (__typeof__(_logos_orig$_ungrouped$APMSearchAdReporter$logCampaignEventWithSearchAdCampaign$campaign$term$))class_getMethodImplementation(_logos_superclass$_ungrouped$APMSearchAdReporter, @selector(logCampaignEventWithSearchAdCampaign:campaign:term:)))(self, _cmd, arg1, arg2, arg3);
}



static bool _logos_method$_ungrouped$APMSearchAdReporter$isSearchAdReporterEnabled(_LOGOS_SELF_TYPE_NORMAL APMSearchAdReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$APMSearchAdReporter$setSearchAdReporterEnabled$(_LOGOS_SELF_TYPE_NORMAL APMSearchAdReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$APMSearchAdReporter$setSearchAdReporterEnabled$ ? _logos_orig$_ungrouped$APMSearchAdReporter$setSearchAdReporterEnabled$ : (__typeof__(_logos_orig$_ungrouped$APMSearchAdReporter$setSearchAdReporterEnabled$))class_getMethodImplementation(_logos_superclass$_ungrouped$APMSearchAdReporter, @selector(setSearchAdReporterEnabled:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$APMSessionReporter$setReportingEnabled$(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$APMSessionReporter$setReportingEnabled$ ? _logos_orig$_ungrouped$APMSessionReporter$setReportingEnabled$ : (__typeof__(_logos_orig$_ungrouped$APMSessionReporter$setReportingEnabled$))class_getMethodImplementation(_logos_superclass$_ungrouped$APMSessionReporter, @selector(setReportingEnabled:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$APMSessionReporter$shouldStartNewSession(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$APMSessionReporter$isSessionExpired(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$APMSessionReporter$extendSession(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static long long _logos_method$_ungrouped$APMSessionReporter$logEngagementEventAndReturnTimeWithScreen$isRedundant$(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, bool arg2) {
    arg2 = 0;
    arg1 = NULL;
    return 0;
    return (_logos_orig$_ungrouped$APMSessionReporter$logEngagementEventAndReturnTimeWithScreen$isRedundant$ ? _logos_orig$_ungrouped$APMSessionReporter$logEngagementEventAndReturnTimeWithScreen$isRedundant$ : (__typeof__(_logos_orig$_ungrouped$APMSessionReporter$logEngagementEventAndReturnTimeWithScreen$isRedundant$))class_getMethodImplementation(_logos_superclass$_ungrouped$APMSessionReporter, @selector(logEngagementEventAndReturnTimeWithScreen:isRedundant:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$APMSessionReporter$isReportingEnabled(_LOGOS_SELF_TYPE_NORMAL APMSessionReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$GADNativeAdFeatures$publisherClickReportingAllowed(_LOGOS_SELF_TYPE_NORMAL GADNativeAdFeatures* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$GADNativeAdFeatures$publisherTouchReportingAllowed(_LOGOS_SELF_TYPE_NORMAL GADNativeAdFeatures* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$GADNativeAdFeatures$publisherImpressionReportingAllowed(_LOGOS_SELF_TYPE_NORMAL GADNativeAdFeatures* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static GADActiveViewReporter* _logos_method$_ungrouped$GADActiveViewReporter$initWithAdFormat$activeViewConfiguration$reportingAdView$adEventContextIdentifier$analyticsLoggingEnabled$(_LOGOS_SELF_TYPE_INIT GADActiveViewReporter* __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4, bool arg5) _LOGOS_RETURN_RETAINED {
    arg5 = 0;
    arg4 = NULL;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$GADActiveViewReporter$initWithAdFormat$activeViewConfiguration$reportingAdView$adEventContextIdentifier$analyticsLoggingEnabled$ ? _logos_orig$_ungrouped$GADActiveViewReporter$initWithAdFormat$activeViewConfiguration$reportingAdView$adEventContextIdentifier$analyticsLoggingEnabled$ : (__typeof__(_logos_orig$_ungrouped$GADActiveViewReporter$initWithAdFormat$activeViewConfiguration$reportingAdView$adEventContextIdentifier$analyticsLoggingEnabled$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADActiveViewReporter, @selector(initWithAdFormat:activeViewConfiguration:reportingAdView:adEventContextIdentifier:analyticsLoggingEnabled:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$GADActiveViewReporter$setAdViewNeedsActiveViewUpdates$(_LOGOS_SELF_TYPE_NORMAL GADActiveViewReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GADActiveViewReporter$setAdViewNeedsActiveViewUpdates$ ? _logos_orig$_ungrouped$GADActiveViewReporter$setAdViewNeedsActiveViewUpdates$ : (__typeof__(_logos_orig$_ungrouped$GADActiveViewReporter$setAdViewNeedsActiveViewUpdates$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADActiveViewReporter, @selector(setAdViewNeedsActiveViewUpdates:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GADActiveViewReporter$setAdDidMakeImpression$(_LOGOS_SELF_TYPE_NORMAL GADActiveViewReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GADActiveViewReporter$setAdDidMakeImpression$ ? _logos_orig$_ungrouped$GADActiveViewReporter$setAdDidMakeImpression$ : (__typeof__(_logos_orig$_ungrouped$GADActiveViewReporter$setAdDidMakeImpression$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADActiveViewReporter, @selector(setAdDidMakeImpression:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GADActiveViewReporter$updateActiveViewStatusWithUnloaded$(_LOGOS_SELF_TYPE_NORMAL GADActiveViewReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GADActiveViewReporter$updateActiveViewStatusWithUnloaded$ ? _logos_orig$_ungrouped$GADActiveViewReporter$updateActiveViewStatusWithUnloaded$ : (__typeof__(_logos_orig$_ungrouped$GADActiveViewReporter$updateActiveViewStatusWithUnloaded$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADActiveViewReporter, @selector(updateActiveViewStatusWithUnloaded:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GADActiveViewReporter$activeViewStateWithUnloaded$userInfo$(_LOGOS_SELF_TYPE_NORMAL GADActiveViewReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1, id arg2) {
    arg2 = NULL;
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$GADActiveViewReporter$activeViewStateWithUnloaded$userInfo$ ? _logos_orig$_ungrouped$GADActiveViewReporter$activeViewStateWithUnloaded$userInfo$ : (__typeof__(_logos_orig$_ungrouped$GADActiveViewReporter$activeViewStateWithUnloaded$userInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADActiveViewReporter, @selector(activeViewStateWithUnloaded:userInfo:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$GADNativeAd$reportIsMediaContentRendered$(_LOGOS_SELF_TYPE_NORMAL GADNativeAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GADNativeAd$reportIsMediaContentRendered$ ? _logos_orig$_ungrouped$GADNativeAd$reportIsMediaContentRendered$ : (__typeof__(_logos_orig$_ungrouped$GADNativeAd$reportIsMediaContentRendered$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADNativeAd, @selector(reportIsMediaContentRendered:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$GADSafeBrowsingReport$malicious(_LOGOS_SELF_TYPE_NORMAL GADSafeBrowsingReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GADCustomNativeAd$reportIsMediaContentRendered$(_LOGOS_SELF_TYPE_NORMAL GADCustomNativeAd* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$GADCustomNativeAd$reportIsMediaContentRendered$ ? _logos_orig$_ungrouped$GADCustomNativeAd$reportIsMediaContentRendered$ : (__typeof__(_logos_orig$_ungrouped$GADCustomNativeAd$reportIsMediaContentRendered$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADCustomNativeAd, @selector(reportIsMediaContentRendered:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VNGSendReportAdsOperation$setIsExecuting$(_LOGOS_SELF_TYPE_NORMAL VNGSendReportAdsOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$VNGSendReportAdsOperation$setIsExecuting$ ? _logos_orig$_ungrouped$VNGSendReportAdsOperation$setIsExecuting$ : (__typeof__(_logos_orig$_ungrouped$VNGSendReportAdsOperation$setIsExecuting$))class_getMethodImplementation(_logos_superclass$_ungrouped$VNGSendReportAdsOperation, @selector(setIsExecuting:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VNGSendReportAdsOperation$isFinished$(_LOGOS_SELF_TYPE_NORMAL VNGSendReportAdsOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$VNGSendReportAdsOperation$isFinished$ ? _logos_orig$_ungrouped$VNGSendReportAdsOperation$isFinished$ : (__typeof__(_logos_orig$_ungrouped$VNGSendReportAdsOperation$isFinished$))class_getMethodImplementation(_logos_superclass$_ungrouped$VNGSendReportAdsOperation, @selector(isFinished:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$VNGSendReportAdsOperation$isFinished(_LOGOS_SELF_TYPE_NORMAL VNGSendReportAdsOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VNGSendReportAdsOperation$setIsFinished$(_LOGOS_SELF_TYPE_NORMAL VNGSendReportAdsOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$VNGSendReportAdsOperation$setIsFinished$ ? _logos_orig$_ungrouped$VNGSendReportAdsOperation$setIsFinished$ : (__typeof__(_logos_orig$_ungrouped$VNGSendReportAdsOperation$setIsFinished$))class_getMethodImplementation(_logos_superclass$_ungrouped$VNGSendReportAdsOperation, @selector(setIsFinished:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$VNGSendReportAdsOperation$isExecuting(_LOGOS_SELF_TYPE_NORMAL VNGSendReportAdsOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$VungleLegacyAdReport$incentivized(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$VungleLegacyAdReport$isAdExperienceSuccessful(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$VungleLegacyAdReport$didTapCTAButton(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VungleLegacyAdReport$setDidTapCTAButton$(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$VungleLegacyAdReport$setDidTapCTAButton$ ? _logos_orig$_ungrouped$VungleLegacyAdReport$setDidTapCTAButton$ : (__typeof__(_logos_orig$_ungrouped$VungleLegacyAdReport$setDidTapCTAButton$))class_getMethodImplementation(_logos_superclass$_ungrouped$VungleLegacyAdReport, @selector(setDidTapCTAButton:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$VungleLegacyAdReport$internalIncentivized(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VungleLegacyAdReport$setInternalIncentivized$(_LOGOS_SELF_TYPE_NORMAL VungleLegacyAdReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$VungleLegacyAdReport$setInternalIncentivized$ ? _logos_orig$_ungrouped$VungleLegacyAdReport$setInternalIncentivized$ : (__typeof__(_logos_orig$_ungrouped$VungleLegacyAdReport$setInternalIncentivized$))class_getMethodImplementation(_logos_superclass$_ungrouped$VungleLegacyAdReport, @selector(setInternalIncentivized:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$VungleReportAdController$saveReport$error$(_LOGOS_SELF_TYPE_NORMAL VungleReportAdController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id * arg2) {
    arg1 = NULL;
    return 0;
    return (_logos_orig$_ungrouped$VungleReportAdController$saveReport$error$ ? _logos_orig$_ungrouped$VungleReportAdController$saveReport$error$ : (__typeof__(_logos_orig$_ungrouped$VungleReportAdController$saveReport$error$))class_getMethodImplementation(_logos_superclass$_ungrouped$VungleReportAdController, @selector(saveReport:error:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$VungleReportAdController$isSendingReports(_LOGOS_SELF_TYPE_NORMAL VungleReportAdController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VungleReportAdController$setIsSendingReports$(_LOGOS_SELF_TYPE_NORMAL VungleReportAdController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$VungleReportAdController$setIsSendingReports$ ? _logos_orig$_ungrouped$VungleReportAdController$setIsSendingReports$ : (__typeof__(_logos_orig$_ungrouped$VungleReportAdController$setIsSendingReports$))class_getMethodImplementation(_logos_superclass$_ungrouped$VungleReportAdController, @selector(setIsSendingReports:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VungleCustomMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$(_LOGOS_SELF_TYPE_NORMAL VungleCustomMRAIDViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1, id arg2) {
    arg2 = NULL;
    arg1 = 0;
    return (_logos_orig$_ungrouped$VungleCustomMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$ ? _logos_orig$_ungrouped$VungleCustomMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$ : (__typeof__(_logos_orig$_ungrouped$VungleCustomMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$))class_getMethodImplementation(_logos_superclass$_ungrouped$VungleCustomMRAIDViewController, @selector(vungleMRAIDControllerSuccessfulView:reportable:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$VungleConfigController$isReportIncentivizedEnabled(_LOGOS_SELF_TYPE_NORMAL VungleConfigController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$VungleConfigController$reportIncentivizedEnabled(_LOGOS_SELF_TYPE_NORMAL VungleConfigController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VungleConfigController$setReportIncentivizedEnabled$(_LOGOS_SELF_TYPE_NORMAL VungleConfigController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$VungleConfigController$setReportIncentivizedEnabled$ ? _logos_orig$_ungrouped$VungleConfigController$setReportIncentivizedEnabled$ : (__typeof__(_logos_orig$_ungrouped$VungleConfigController$setReportIncentivizedEnabled$))class_getMethodImplementation(_logos_superclass$_ungrouped$VungleConfigController, @selector(setReportIncentivizedEnabled:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VungleInternalMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$(_LOGOS_SELF_TYPE_NORMAL VungleInternalMRAIDViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1, id arg2) {
    arg2 = NULL;
    arg1 = 0;
    return (_logos_orig$_ungrouped$VungleInternalMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$ ? _logos_orig$_ungrouped$VungleInternalMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$ : (__typeof__(_logos_orig$_ungrouped$VungleInternalMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$))class_getMethodImplementation(_logos_superclass$_ungrouped$VungleInternalMRAIDViewController, @selector(vungleMRAIDControllerSuccessfulView:reportable:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$VungleMRAIDAdReport$isAdExperienceSuccessful(_LOGOS_SELF_TYPE_NORMAL VungleMRAIDAdReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$VungleMRAIDAdReport$incentivized(_LOGOS_SELF_TYPE_NORMAL VungleMRAIDAdReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$VungleMRAIDAdReport$internalIncentivized(_LOGOS_SELF_TYPE_NORMAL VungleMRAIDAdReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VungleMRAIDAdReport$setInternalIncentivized$(_LOGOS_SELF_TYPE_NORMAL VungleMRAIDAdReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$VungleMRAIDAdReport$setInternalIncentivized$ ? _logos_orig$_ungrouped$VungleMRAIDAdReport$setInternalIncentivized$ : (__typeof__(_logos_orig$_ungrouped$VungleMRAIDAdReport$setInternalIncentivized$))class_getMethodImplementation(_logos_superclass$_ungrouped$VungleMRAIDAdReport, @selector(setInternalIncentivized:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$VungleAdReport$incentivized(_LOGOS_SELF_TYPE_NORMAL VungleAdReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_meta_method$_ungrouped$QQApiInterface$reportSDKCheck$cmd$isQzone$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1, id arg2, bool arg3) {
    arg3 = 0;
    arg2 = NULL;
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$QQApiInterface$reportSDKCheck$cmd$isQzone$ ? _logos_meta_orig$_ungrouped$QQApiInterface$reportSDKCheck$cmd$isQzone$ : (__typeof__(_logos_meta_orig$_ungrouped$QQApiInterface$reportSDKCheck$cmd$isQzone$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$QQApiInterface, @selector(reportSDKCheck:cmd:isQzone:)))(self, _cmd, arg1, arg2, arg3);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$beautyReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setBeautyReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setBeautyReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setBeautyReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setBeautyReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setBeautyReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$whiteReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setWhiteReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setWhiteReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setWhiteReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setWhiteReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setWhiteReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$ruddyReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setRuddyReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setRuddyReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setRuddyReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setRuddyReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setRuddyReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$eyeScaleReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setEyeScaleReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setEyeScaleReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setEyeScaleReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setEyeScaleReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setEyeScaleReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$faceSlimReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setFaceSlimReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceSlimReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceSlimReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceSlimReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setFaceSlimReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$faceBeautyReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setFaceBeautyReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceBeautyReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceBeautyReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceBeautyReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setFaceBeautyReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$faceVReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setFaceVReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceVReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceVReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceVReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setFaceVReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$chinReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setChinReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setChinReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setChinReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setChinReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setChinReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$faceShortReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setFaceShortReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceShortReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceShortReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceShortReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setFaceShortReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$noseSlimReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setNoseSlimReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setNoseSlimReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setNoseSlimReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setNoseSlimReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setNoseSlimReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$filterTypeReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setFilterTypeReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFilterTypeReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFilterTypeReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFilterTypeReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setFilterTypeReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$filterImageReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setFilterImageReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFilterImageReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFilterImageReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFilterImageReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setFilterImageReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$greenReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setGreenReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setGreenReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setGreenReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setGreenReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setGreenReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$templateReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setTemplateReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setTemplateReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setTemplateReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setTemplateReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setTemplateReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXCVideoPreprocessorHT$watermarkReport(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXCVideoPreprocessorHT$setWatermarkReport$(_LOGOS_SELF_TYPE_NORMAL TXCVideoPreprocessorHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setWatermarkReport$ ? _logos_orig$_ungrouped$TXCVideoPreprocessorHT$setWatermarkReport$ : (__typeof__(_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setWatermarkReport$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXCVideoPreprocessorHT, @selector(setWatermarkReport:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXExtInfoHT$report_common(_LOGOS_SELF_TYPE_NORMAL TXExtInfoHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXExtInfoHT$setReport_common$(_LOGOS_SELF_TYPE_NORMAL TXExtInfoHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXExtInfoHT$setReport_common$ ? _logos_orig$_ungrouped$TXExtInfoHT$setReport_common$ : (__typeof__(_logos_orig$_ungrouped$TXExtInfoHT$setReport_common$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXExtInfoHT, @selector(setReport_common:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXExtInfoHT$report_status(_LOGOS_SELF_TYPE_NORMAL TXExtInfoHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXExtInfoHT$setReport_status$(_LOGOS_SELF_TYPE_NORMAL TXExtInfoHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$TXExtInfoHT$setReport_status$ ? _logos_orig$_ungrouped$TXExtInfoHT$setReport_status$ : (__typeof__(_logos_orig$_ungrouped$TXExtInfoHT$setReport_status$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXExtInfoHT, @selector(setReport_status:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$BuglyAgentV2$startWithAppId$inDebugMode$reportLogLevel$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, bool arg2, unsigned long long arg3) {
    arg3 = 0;
    arg2 = 0;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$BuglyAgentV2$startWithAppId$inDebugMode$reportLogLevel$ ? _logos_meta_orig$_ungrouped$BuglyAgentV2$startWithAppId$inDebugMode$reportLogLevel$ : (__typeof__(_logos_meta_orig$_ungrouped$BuglyAgentV2$startWithAppId$inDebugMode$reportLogLevel$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$BuglyAgentV2, @selector(startWithAppId:inDebugMode:reportLogLevel:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$BuglyAgentV2$reportException$name$message$stackTrace$userInfo$terminateApp$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1, id arg2, id arg3, id arg4, id arg5, bool arg6) {
    arg6 = 0;
    arg5 = NULL;
    arg4 = NULL;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$BuglyAgentV2$reportException$name$message$stackTrace$userInfo$terminateApp$ ? _logos_meta_orig$_ungrouped$BuglyAgentV2$reportException$name$message$stackTrace$userInfo$terminateApp$ : (__typeof__(_logos_meta_orig$_ungrouped$BuglyAgentV2$reportException$name$message$stackTrace$userInfo$terminateApp$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$BuglyAgentV2, @selector(reportException:name:message:stackTrace:userInfo:terminateApp:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6);
}



static void _logos_meta_method$_ungrouped$BuglyAgent$reportException$name$message$stackTrace$userInfo$terminateApp$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1, id arg2, id arg3, id arg4, id arg5, bool arg6) {
    arg6 = 0;
    arg5 = NULL;
    arg4 = NULL;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$BuglyAgent$reportException$name$message$stackTrace$userInfo$terminateApp$ ? _logos_meta_orig$_ungrouped$BuglyAgent$reportException$name$message$stackTrace$userInfo$terminateApp$ : (__typeof__(_logos_meta_orig$_ungrouped$BuglyAgent$reportException$name$message$stackTrace$userInfo$terminateApp$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$BuglyAgent, @selector(reportException:name:message:stackTrace:userInfo:terminateApp:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6);
}



static bool _logos_method$_ungrouped$PLCrashReporter$populateCrashReportDirectoryAndReturnError$(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id * arg1) {
    return 0;
}



static bool _logos_method$_ungrouped$PLCrashReporter$hasPendingCrashReport(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$PLCrashReporter$purgePendingCrashReport(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$PLCrashReporter$purgePendingCrashReportAndReturnError$(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id * arg1) {
    return 0;
}



static bool _logos_method$_ungrouped$PLCrashReporter$enableCrashReporter(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$PLCrashReporter$enableCrashReporterAndReturnError$(_LOGOS_SELF_TYPE_NORMAL PLCrashReporter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id * arg1) {
    return 0;
}



static bool _logos_method$_ungrouped$PLCrashReport$hasMachineInfo(_LOGOS_SELF_TYPE_NORMAL PLCrashReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$PLCrashReport$hasProcessInfo(_LOGOS_SELF_TYPE_NORMAL PLCrashReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$PLCrashReport$hasExceptionInfo(_LOGOS_SELF_TYPE_NORMAL PLCrashReport* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static PLCrashReportThreadInfo* _logos_method$_ungrouped$PLCrashReportThreadInfo$initWithThreadNumber$stackFrames$crashed$registers$(_LOGOS_SELF_TYPE_INIT PLCrashReportThreadInfo* __unused self, SEL __unused _cmd, long long arg1, id arg2, bool arg3, id arg4) _LOGOS_RETURN_RETAINED {
    arg4 = NULL;
    arg3 = 0;
    arg2 = NULL;
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$PLCrashReportThreadInfo$initWithThreadNumber$stackFrames$crashed$registers$ ? _logos_orig$_ungrouped$PLCrashReportThreadInfo$initWithThreadNumber$stackFrames$crashed$registers$ : (__typeof__(_logos_orig$_ungrouped$PLCrashReportThreadInfo$initWithThreadNumber$stackFrames$crashed$registers$))class_getMethodImplementation(_logos_superclass$_ungrouped$PLCrashReportThreadInfo, @selector(initWithThreadNumber:stackFrames:crashed:registers:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static bool _logos_method$_ungrouped$PLCrashReportThreadInfo$crashed(_LOGOS_SELF_TYPE_NORMAL PLCrashReportThreadInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$PLCrashReportBinaryImageInfo$hasImageUUID(_LOGOS_SELF_TYPE_NORMAL PLCrashReportBinaryImageInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static PLCrashReportProcessInfo* _logos_method$_ungrouped$PLCrashReportProcessInfo$initWithProcessName$processID$processPath$processStartTime$parentProcessName$parentProcessID$native$(_LOGOS_SELF_TYPE_INIT PLCrashReportProcessInfo* __unused self, SEL __unused _cmd, id arg1, unsigned long long arg2, id arg3, id arg4, id arg5, unsigned long long arg6, bool arg7) _LOGOS_RETURN_RETAINED {
    arg7 = 0;
    arg6 = 0;
    arg5 = NULL;
    arg4 = NULL;
    arg3 = NULL;
    arg2 = 0;
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$PLCrashReportProcessInfo$initWithProcessName$processID$processPath$processStartTime$parentProcessName$parentProcessID$native$ ? _logos_orig$_ungrouped$PLCrashReportProcessInfo$initWithProcessName$processID$processPath$processStartTime$parentProcessName$parentProcessID$native$ : (__typeof__(_logos_orig$_ungrouped$PLCrashReportProcessInfo$initWithProcessName$processID$processPath$processStartTime$parentProcessName$parentProcessID$native$))class_getMethodImplementation(_logos_superclass$_ungrouped$PLCrashReportProcessInfo, @selector(initWithProcessName:processID:processPath:processStartTime:parentProcessName:parentProcessID:native:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}



static bool _logos_method$_ungrouped$PLCrashReportProcessInfo$native(_LOGOS_SELF_TYPE_NORMAL PLCrashReportProcessInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_meta_method$_ungrouped$PLCrashReportTextFormatter$formatStackFrame$frameIndex$report$lp64$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, unsigned long long arg2, id arg3, bool arg4) {
    arg4 = 0;
    arg3 = NULL;
    arg2 = 0;
    arg1 = NULL;
    return NULL;
    return (_logos_meta_orig$_ungrouped$PLCrashReportTextFormatter$formatStackFrame$frameIndex$report$lp64$ ? _logos_meta_orig$_ungrouped$PLCrashReportTextFormatter$formatStackFrame$frameIndex$report$lp64$ : (__typeof__(_logos_meta_orig$_ungrouped$PLCrashReportTextFormatter$formatStackFrame$frameIndex$report$lp64$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$PLCrashReportTextFormatter, @selector(formatStackFrame:frameIndex:report:lp64:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static bool _logos_method$_ungrouped$FBAdConfigManager$isInlineAdReportingFlowEnabled(_LOGOS_SELF_TYPE_NORMAL FBAdConfigManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$FBAdConfigManager$shouldKillCrashReporting(_LOGOS_SELF_TYPE_NORMAL FBAdConfigManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$FBAdConfigManager$isCrashReportingEnabledForAN(_LOGOS_SELF_TYPE_NORMAL FBAdConfigManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$FBAdConfigManager$isCrashReportingEnabledForBK(_LOGOS_SELF_TYPE_NORMAL FBAdConfigManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$FBAdCrashManagerImpl$isCrashReportingDisabled(_LOGOS_SELF_TYPE_NORMAL FBAdCrashManagerImpl* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$FBAdCrashManagerImpl$setCrashReportingDisabled$(_LOGOS_SELF_TYPE_NORMAL FBAdCrashManagerImpl* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$FBAdCrashManagerImpl$setCrashReportingDisabled$ ? _logos_orig$_ungrouped$FBAdCrashManagerImpl$setCrashReportingDisabled$ : (__typeof__(_logos_orig$_ungrouped$FBAdCrashManagerImpl$setCrashReportingDisabled$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdCrashManagerImpl, @selector(setCrashReportingDisabled:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$FBAdReportingConfig$isLoaded(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$FBAdReportingConfig$isReadyForFullscreen(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$FBAdReportingConfig$isReadyForNonFullscreen(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static FBAdReportingConfig* _logos_method$_ungrouped$FBAdReportingConfig$initWithAsyncLoad$(_LOGOS_SELF_TYPE_INIT FBAdReportingConfig* __unused self, SEL __unused _cmd, bool arg1) _LOGOS_RETURN_RETAINED {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$FBAdReportingConfig$initWithAsyncLoad$ ? _logos_orig$_ungrouped$FBAdReportingConfig$initWithAsyncLoad$ : (__typeof__(_logos_orig$_ungrouped$FBAdReportingConfig$initWithAsyncLoad$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdReportingConfig, @selector(initWithAsyncLoad:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$FBAdReportingConfig$validateConfigDict$(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return 0;
    return (_logos_orig$_ungrouped$FBAdReportingConfig$validateConfigDict$ ? _logos_orig$_ungrouped$FBAdReportingConfig$validateConfigDict$ : (__typeof__(_logos_orig$_ungrouped$FBAdReportingConfig$validateConfigDict$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdReportingConfig, @selector(validateConfigDict:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FBAdReportingConfig$loadFromDiskAsync$(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$FBAdReportingConfig$loadFromDiskAsync$ ? _logos_orig$_ungrouped$FBAdReportingConfig$loadFromDiskAsync$ : (__typeof__(_logos_orig$_ungrouped$FBAdReportingConfig$loadFromDiskAsync$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdReportingConfig, @selector(loadFromDiskAsync:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FBAdReportingConfig$saveAsync$(_LOGOS_SELF_TYPE_NORMAL FBAdReportingConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$FBAdReportingConfig$saveAsync$ ? _logos_orig$_ungrouped$FBAdReportingConfig$saveAsync$ : (__typeof__(_logos_orig$_ungrouped$FBAdReportingConfig$saveAsync$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdReportingConfig, @selector(saveAsync:)))(self, _cmd, arg1);
}



static id _logos_meta_method$_ungrouped$FBAdReportingConfig$sharedConfigAsync$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_meta_orig$_ungrouped$FBAdReportingConfig$sharedConfigAsync$ ? _logos_meta_orig$_ungrouped$FBAdReportingConfig$sharedConfigAsync$ : (__typeof__(_logos_meta_orig$_ungrouped$FBAdReportingConfig$sharedConfigAsync$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$FBAdReportingConfig, @selector(sharedConfigAsync:)))(self, _cmd, arg1);
}



static bool _logos_meta_method$_ungrouped$FBAdReportingCoordinator$canPresentInView$layoutType$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, long long arg2) {
    arg2 = 0;
    arg1 = NULL;
    return 0;
    return (_logos_meta_orig$_ungrouped$FBAdReportingCoordinator$canPresentInView$layoutType$ ? _logos_meta_orig$_ungrouped$FBAdReportingCoordinator$canPresentInView$layoutType$ : (__typeof__(_logos_meta_orig$_ungrouped$FBAdReportingCoordinator$canPresentInView$layoutType$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$FBAdReportingCoordinator, @selector(canPresentInView:layoutType:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$FBAdReportingOptionCollectionViewCell$setSelected$(_LOGOS_SELF_TYPE_NORMAL FBAdReportingOptionCollectionViewCell* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$FBAdReportingOptionCollectionViewCell$setSelected$ ? _logos_orig$_ungrouped$FBAdReportingOptionCollectionViewCell$setSelected$ : (__typeof__(_logos_orig$_ungrouped$FBAdReportingOptionCollectionViewCell$setSelected$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdReportingOptionCollectionViewCell, @selector(setSelected:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$FBAdDSLViewController$dslReportedCriticalError(_LOGOS_SELF_TYPE_NORMAL FBAdDSLViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$FBAdDSLViewController$setDslReportedCriticalError$(_LOGOS_SELF_TYPE_NORMAL FBAdDSLViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return (_logos_orig$_ungrouped$FBAdDSLViewController$setDslReportedCriticalError$ ? _logos_orig$_ungrouped$FBAdDSLViewController$setDslReportedCriticalError$ : (__typeof__(_logos_orig$_ungrouped$FBAdDSLViewController$setDslReportedCriticalError$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdDSLViewController, @selector(setDslReportedCriticalError:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$recordAndUpdateEvent$currency$value$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$recordAndUpdateEvent$currency$value$ ? _logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$recordAndUpdateEvent$currency$value$ : (__typeof__(_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$recordAndUpdateEvent$currency$value$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$FBSDKSKAdNetworkReporter, @selector(recordAndUpdateEvent:currency:value:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$_recordAndUpdateEvent$currency$value$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_recordAndUpdateEvent$currency$value$ ? _logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_recordAndUpdateEvent$currency$value$ : (__typeof__(_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_recordAndUpdateEvent$currency$value$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$FBSDKSKAdNetworkReporter, @selector(_recordAndUpdateEvent:currency:value:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$_loadConfigurationWithBlock$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_loadConfigurationWithBlock$ ? _logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_loadConfigurationWithBlock$ : (__typeof__(_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_loadConfigurationWithBlock$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$FBSDKSKAdNetworkReporter, @selector(_loadConfigurationWithBlock:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$_updateConversionValue$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_updateConversionValue$ ? _logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_updateConversionValue$ : (__typeof__(_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_updateConversionValue$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$FBSDKSKAdNetworkReporter, @selector(_updateConversionValue:)))(self, _cmd, arg1);
}




static void _logos_method$_ungrouped$GNLReportManager$setReportDomains$offerID$ignoringFormats$(_LOGOS_SELF_TYPE_NORMAL GNLReportManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_orig$_ungrouped$GNLReportManager$setReportDomains$offerID$ignoringFormats$ ? _logos_orig$_ungrouped$GNLReportManager$setReportDomains$offerID$ignoringFormats$ : (__typeof__(_logos_orig$_ungrouped$GNLReportManager$setReportDomains$offerID$ignoringFormats$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLReportManager, @selector(setReportDomains:offerID:ignoringFormats:)))(self, _cmd, arg1, arg2, arg3);
}










static id _logos_meta_method$_ungrouped$MidasIAPReportHelper$formatErrorInfo$code$msg$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, long long arg2, id arg3) {
    arg3 = NULL;
    arg2 = 0;
    arg1 = NULL;
    return NULL;
    return (_logos_meta_orig$_ungrouped$MidasIAPReportHelper$formatErrorInfo$code$msg$ ? _logos_meta_orig$_ungrouped$MidasIAPReportHelper$formatErrorInfo$code$msg$ : (__typeof__(_logos_meta_orig$_ungrouped$MidasIAPReportHelper$formatErrorInfo$code$msg$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$MidasIAPReportHelper, @selector(formatErrorInfo:code:msg:)))(self, _cmd, arg1, arg2, arg3);
}





static void _logos_meta_method$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$orderInfo$userInfo$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4, id arg5) {
    arg5 = NULL;
    arg4 = NULL;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$orderInfo$userInfo$ ? _logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$orderInfo$userInfo$ : (__typeof__(_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$orderInfo$userInfo$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$MidasIAPReportHelper, @selector(insertReportWithFormat:action:resultInfo:orderInfo:userInfo:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}




static void _logos_meta_method$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$orderInfo$userInfo$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg4 = NULL;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$orderInfo$userInfo$ ? _logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$orderInfo$userInfo$ : (__typeof__(_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$orderInfo$userInfo$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$MidasIAPReportHelper, @selector(insertReportWithFormat:action:orderInfo:userInfo:)))(self, _cmd, arg1, arg2, arg3, arg4);
}




static void _logos_meta_method$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$orderInfo$userInfo$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$orderInfo$userInfo$ ? _logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$orderInfo$userInfo$ : (__typeof__(_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$orderInfo$userInfo$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$MidasIAPReportHelper, @selector(insertReportWithFormat:orderInfo:userInfo:)))(self, _cmd, arg1, arg2, arg3);
}




static id _logos_meta_method$_ungrouped$MidasIAPReportEventListener$listenerWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, unsigned long long arg2, id arg3, unsigned long long arg4, id arg5, bool arg6) {
    arg6 = 0;
    arg5 = NULL;
    arg4 = 0;
    arg3 = NULL;
    arg2 = 0;
    arg1 = NULL;
    return NULL;
    return (_logos_meta_orig$_ungrouped$MidasIAPReportEventListener$listenerWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$ ? _logos_meta_orig$_ungrouped$MidasIAPReportEventListener$listenerWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$ : (__typeof__(_logos_meta_orig$_ungrouped$MidasIAPReportEventListener$listenerWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$MidasIAPReportEventListener, @selector(listenerWithTag:beginEventType:beginEvent:endEventType:endEvent:removeAfterEnd:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6);
}




static MidasIAPReportEventListener* _logos_method$_ungrouped$MidasIAPReportEventListener$initWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$(_LOGOS_SELF_TYPE_INIT MidasIAPReportEventListener* __unused self, SEL __unused _cmd, id arg1, unsigned long long arg2, id arg3, unsigned long long arg4, id arg5, bool arg6) _LOGOS_RETURN_RETAINED {
    arg6 = 0;
    arg5 = NULL;
    arg4 = 0;
    arg3 = NULL;
    arg2 = 0;
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$MidasIAPReportEventListener$initWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$ ? _logos_orig$_ungrouped$MidasIAPReportEventListener$initWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$ : (__typeof__(_logos_orig$_ungrouped$MidasIAPReportEventListener$initWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasIAPReportEventListener, @selector(initWithTag:beginEventType:beginEvent:endEventType:endEvent:removeAfterEnd:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6);
}




static void _logos_meta_method$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$isErrorReport$errorCode$errorInfo$orderInfo$userInfo$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, bool arg4, long long arg5, id arg6, id arg7, id arg8) {
    arg8 = NULL;
    arg7 = NULL;
    arg6 = NULL;
    arg5 = 0;
    arg4 = 0;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$isErrorReport$errorCode$errorInfo$orderInfo$userInfo$ ? _logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$isErrorReport$errorCode$errorInfo$orderInfo$userInfo$ : (__typeof__(_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$isErrorReport$errorCode$errorInfo$orderInfo$userInfo$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$MidasIAPReportHelper, @selector(insertReportWithFormat:action:resultInfo:isErrorReport:errorCode:errorInfo:orderInfo:userInfo:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}







static void _logos_method$_ungrouped$BLYDevice$setJailbrokenStatus$(_LOGOS_SELF_TYPE_NORMAL BLYDevice* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$BLYDevice$setJailbrokenStatus$ ? _logos_orig$_ungrouped$BLYDevice$setJailbrokenStatus$ : (__typeof__(_logos_orig$_ungrouped$BLYDevice$setJailbrokenStatus$))class_getMethodImplementation(_logos_superclass$_ungrouped$BLYDevice, @selector(setJailbrokenStatus:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$BLYDevice$jailbrokenStatus(_LOGOS_SELF_TYPE_NORMAL BLYDevice* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$BLYDevice$isJailbroken(_LOGOS_SELF_TYPE_NORMAL BLYDevice* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_meta_method$_ungrouped$BLYDevice$isJailBreak(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$FBAdBotDetector$isNativeSignalJailbrokenEnabled(_LOGOS_SELF_TYPE_NORMAL FBAdBotDetector* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$FBAdBotDetector$isJailBrokenDevice(_LOGOS_SELF_TYPE_NORMAL FBAdBotDetector* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$FBAdConfigManager$woNativeSignalsJailbrokenSignalEnabled(_LOGOS_SELF_TYPE_NORMAL FBAdConfigManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}

static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$IMSDKLocalLog = objc_getClass("IMSDKLocalLog"); Class _logos_metaclass$_ungrouped$IMSDKLocalLog = object_getClass(_logos_class$_ungrouped$IMSDKLocalLog); _logos_superclass$_ungrouped$IMSDKLocalLog = class_getSuperclass(_logos_class$_ungrouped$IMSDKLocalLog); _logos_supermetaclass$_ungrouped$IMSDKLocalLog = class_getSuperclass(_logos_metaclass$_ungrouped$IMSDKLocalLog); { _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKLocalLog, @selector(allocWithZone:), (IMP)&_logos_meta_method$_ungrouped$IMSDKLocalLog$allocWithZone$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKLocalLog$allocWithZone$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKLocalLog, @selector(sharedInstance), (IMP)&_logos_meta_method$_ungrouped$IMSDKLocalLog$sharedInstance, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKLocalLog$sharedInstance);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(setLogFileHandle:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$setLogFileHandle$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$setLogFileHandle$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(logFileHandle), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$logFileHandle, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$logFileHandle);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(setEndDate:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$setEndDate$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$setEndDate$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(endDate), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$endDate, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$endDate);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(setBeginDate:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$setBeginDate$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$setBeginDate$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(beginDate), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$beginDate, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$beginDate);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(setLogfile:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$setLogfile$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$setLogfile$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(logfile), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$logfile, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$logfile);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(setRetry:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$setRetry$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$setRetry$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(retry), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$retry, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$retry);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(setMaxFileSize:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$setMaxFileSize$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$setMaxFileSize$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(maxFileSize), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$maxFileSize, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$maxFileSize);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(setMaxLogSize:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$setMaxLogSize$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$setMaxLogSize$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(maxLogSize), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$maxLogSize, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$maxLogSize);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(setIsCreating:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$setIsCreating$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$setIsCreating$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(isCreating), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$isCreating, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$isCreating);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(setIsUploading:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$setIsUploading$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$setIsUploading$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(isUploading), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$isUploading, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$isUploading);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(setIsLocalLogEnable:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$setIsLocalLogEnable$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$setIsLocalLogEnable$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(isLocalLogEnable), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$isLocalLogEnable, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$isLocalLogEnable);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(writeData:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$writeData$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$writeData$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(compress:dest:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$compress$dest$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$compress$dest$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(getNetworkStatus:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$getNetworkStatus$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$getNetworkStatus$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(isValidDate:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$isValidDate$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$isValidDate$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(getFileSize:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$getFileSize$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$getFileSize$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(getLogSize), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$getLogSize, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$getLogSize);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(uploadFile:counter:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$uploadFile$counter$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$uploadFile$counter$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(createLogFile:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$createLogFile$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$createLogFile$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(writeLog2Local:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$writeLog2Local$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$writeLog2Local$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(mutablecopyWithZone:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$mutablecopyWithZone$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$mutablecopyWithZone$);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKLocalLog, @selector(copyWithZone:), (IMP)&_logos_method$_ungrouped$IMSDKLocalLog$copyWithZone$, (IMP *)&_logos_orig$_ungrouped$IMSDKLocalLog$copyWithZone$);}Class _logos_class$_ungrouped$IOSBGDownloadPufferManager = objc_getClass("IOSBGDownloadPufferManager"); _logos_superclass$_ungrouped$IOSBGDownloadPufferManager = class_getSuperclass(_logos_class$_ungrouped$IOSBGDownloadPufferManager); { _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadPufferManager, @selector(PrepareBackgroundDownload:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadPufferManager$PrepareBackgroundDownload$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadPufferManager$PrepareBackgroundDownload$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadPufferManager, @selector(SetBGApplication:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadPufferManager$SetBGApplication$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadPufferManager$SetBGApplication$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadPufferManager, @selector(init), (IMP)&_logos_method$_ungrouped$IOSBGDownloadPufferManager$init, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadPufferManager$init);}Class _logos_class$_ungrouped$IOSBGDownloadManager = objc_getClass("IOSBGDownloadManager"); Class _logos_metaclass$_ungrouped$IOSBGDownloadManager = object_getClass(_logos_class$_ungrouped$IOSBGDownloadManager); _logos_superclass$_ungrouped$IOSBGDownloadManager = class_getSuperclass(_logos_class$_ungrouped$IOSBGDownloadManager); _logos_supermetaclass$_ungrouped$IOSBGDownloadManager = class_getSuperclass(_logos_metaclass$_ungrouped$IOSBGDownloadManager); { _logos_register_hook(_logos_metaclass$_ungrouped$IOSBGDownloadManager, @selector(sharedInstance), (IMP)&_logos_meta_method$_ungrouped$IOSBGDownloadManager$sharedInstance, (IMP *)&_logos_meta_orig$_ungrouped$IOSBGDownloadManager$sharedInstance);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(setTaskArray:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$setTaskArray$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$setTaskArray$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(taskArray), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$taskArray, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$taskArray);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(setTheApp:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$setTheApp$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$setTheApp$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(theApp), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$theApp, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$theApp);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(RemoveAllDownloadTask), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$RemoveAllDownloadTask, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$RemoveAllDownloadTask);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(AddRetryTasks), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$AddRetryTasks, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$AddRetryTasks);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(CancalIOSBGTask), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$CancalIOSBGTask, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$CancalIOSBGTask);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(RepairBackgroundDownloadDirectory), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$RepairBackgroundDownloadDirectory, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$RepairBackgroundDownloadDirectory);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(StartMoreTask_MultiRange:withDownloadTask:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$StartMoreTask_MultiRange$withDownloadTask$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$StartMoreTask_MultiRange$withDownloadTask$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(StartMoreTask:withDownloadTask:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$StartMoreTask$withDownloadTask$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$StartMoreTask$withDownloadTask$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(PrepareBackgroundDownload), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$PrepareBackgroundDownload, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$PrepareBackgroundDownload);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(SetBGApplication:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$SetBGApplication$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$SetBGApplication$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$dealloc, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadManager, @selector(init), (IMP)&_logos_method$_ungrouped$IOSBGDownloadManager$init, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadManager$init);}Class _logos_class$_ungrouped$IOSBGDownloadCommonManager = objc_getClass("IOSBGDownloadCommonManager"); Class _logos_metaclass$_ungrouped$IOSBGDownloadCommonManager = object_getClass(_logos_class$_ungrouped$IOSBGDownloadCommonManager); _logos_superclass$_ungrouped$IOSBGDownloadCommonManager = class_getSuperclass(_logos_class$_ungrouped$IOSBGDownloadCommonManager); _logos_supermetaclass$_ungrouped$IOSBGDownloadCommonManager = class_getSuperclass(_logos_metaclass$_ungrouped$IOSBGDownloadCommonManager); { _logos_register_hook(_logos_metaclass$_ungrouped$IOSBGDownloadCommonManager, @selector(sharedInstance), (IMP)&_logos_meta_method$_ungrouped$IOSBGDownloadCommonManager$sharedInstance, (IMP *)&_logos_meta_orig$_ungrouped$IOSBGDownloadCommonManager$sharedInstance);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadCommonManager, @selector(setTheApp:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadCommonManager$setTheApp$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadCommonManager$setTheApp$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadCommonManager, @selector(theApp), (IMP)&_logos_method$_ungrouped$IOSBGDownloadCommonManager$theApp, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadCommonManager$theApp);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadCommonManager, @selector(RecreateSpecifiedTaskSession:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadCommonManager$RecreateSpecifiedTaskSession$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadCommonManager$RecreateSpecifiedTaskSession$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadCommonManager, @selector(SetBGApplication:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadCommonManager$SetBGApplication$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadCommonManager$SetBGApplication$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadCommonManager, @selector(init), (IMP)&_logos_method$_ungrouped$IOSBGDownloadCommonManager$init, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadCommonManager$init);}Class _logos_class$_ungrouped$IOSBGDownloadResumeDataManager = objc_getClass("IOSBGDownloadResumeDataManager"); Class _logos_metaclass$_ungrouped$IOSBGDownloadResumeDataManager = object_getClass(_logos_class$_ungrouped$IOSBGDownloadResumeDataManager); _logos_superclass$_ungrouped$IOSBGDownloadResumeDataManager = class_getSuperclass(_logos_class$_ungrouped$IOSBGDownloadResumeDataManager); _logos_supermetaclass$_ungrouped$IOSBGDownloadResumeDataManager = class_getSuperclass(_logos_metaclass$_ungrouped$IOSBGDownloadResumeDataManager); { _logos_register_hook(_logos_metaclass$_ungrouped$IOSBGDownloadResumeDataManager, @selector(sharedInstance), (IMP)&_logos_meta_method$_ungrouped$IOSBGDownloadResumeDataManager$sharedInstance, (IMP *)&_logos_meta_orig$_ungrouped$IOSBGDownloadResumeDataManager$sharedInstance);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadResumeDataManager, @selector(setResumeDataInfos:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadResumeDataManager$setResumeDataInfos$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$setResumeDataInfos$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadResumeDataManager, @selector(resumeDataInfos), (IMP)&_logos_method$_ungrouped$IOSBGDownloadResumeDataManager$resumeDataInfos, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$resumeDataInfos);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadResumeDataManager, @selector(setStoredResumeData:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadResumeDataManager$setStoredResumeData$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$setStoredResumeData$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadResumeDataManager, @selector(GetResumeData:withOffset:withLength:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadResumeDataManager$GetResumeData$withOffset$withLength$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$GetResumeData$withOffset$withLength$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadResumeDataManager, @selector(StoreResumeData:withResuemData:), (IMP)&_logos_method$_ungrouped$IOSBGDownloadResumeDataManager$StoreResumeData$withResuemData$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$StoreResumeData$withResuemData$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadResumeDataManager, @selector(storedResumeData), (IMP)&_logos_method$_ungrouped$IOSBGDownloadResumeDataManager$storedResumeData, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$storedResumeData);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownloadResumeDataManager, @selector(init), (IMP)&_logos_method$_ungrouped$IOSBGDownloadResumeDataManager$init, (IMP *)&_logos_orig$_ungrouped$IOSBGDownloadResumeDataManager$init);}Class _logos_class$_ungrouped$IOSBGDownload_Report_Helper = objc_getClass("IOSBGDownload_Report_Helper"); Class _logos_metaclass$_ungrouped$IOSBGDownload_Report_Helper = object_getClass(_logos_class$_ungrouped$IOSBGDownload_Report_Helper); _logos_superclass$_ungrouped$IOSBGDownload_Report_Helper = class_getSuperclass(_logos_class$_ungrouped$IOSBGDownload_Report_Helper); _logos_supermetaclass$_ungrouped$IOSBGDownload_Report_Helper = class_getSuperclass(_logos_metaclass$_ungrouped$IOSBGDownload_Report_Helper); { _logos_register_hook(_logos_class$_ungrouped$IOSBGDownload_Report_Helper, @selector(AddSuccessTask:), (IMP)&_logos_method$_ungrouped$IOSBGDownload_Report_Helper$AddSuccessTask$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$AddSuccessTask$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownload_Report_Helper, @selector(AddFailTask:withErrorCode:), (IMP)&_logos_method$_ungrouped$IOSBGDownload_Report_Helper$AddFailTask$withErrorCode$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$AddFailTask$withErrorCode$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownload_Report_Helper, @selector(SetActionImpletement:withKey:), (IMP)&_logos_method$_ungrouped$IOSBGDownload_Report_Helper$SetActionImpletement$withKey$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$SetActionImpletement$withKey$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownload_Report_Helper, @selector(SaveReportFile), (IMP)&_logos_method$_ungrouped$IOSBGDownload_Report_Helper$SaveReportFile, (IMP *)&_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$SaveReportFile);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownload_Report_Helper, @selector(GetReportDictionary), (IMP)&_logos_method$_ungrouped$IOSBGDownload_Report_Helper$GetReportDictionary, (IMP *)&_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$GetReportDictionary);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownload_Report_Helper, @selector(reportDictionary), (IMP)&_logos_method$_ungrouped$IOSBGDownload_Report_Helper$reportDictionary, (IMP *)&_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$reportDictionary);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownload_Report_Helper, @selector(setReportDictionary:), (IMP)&_logos_method$_ungrouped$IOSBGDownload_Report_Helper$setReportDictionary$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$setReportDictionary$);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownload_Report_Helper, @selector(reportFilePath), (IMP)&_logos_method$_ungrouped$IOSBGDownload_Report_Helper$reportFilePath, (IMP *)&_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$reportFilePath);}{ _logos_register_hook(_logos_class$_ungrouped$IOSBGDownload_Report_Helper, @selector(setReportFilePath:), (IMP)&_logos_method$_ungrouped$IOSBGDownload_Report_Helper$setReportFilePath$, (IMP *)&_logos_orig$_ungrouped$IOSBGDownload_Report_Helper$setReportFilePath$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IOSBGDownload_Report_Helper, @selector(sharedInstance), (IMP)&_logos_meta_method$_ungrouped$IOSBGDownload_Report_Helper$sharedInstance, (IMP *)&_logos_meta_orig$_ungrouped$IOSBGDownload_Report_Helper$sharedInstance);}Class _logos_class$_ungrouped$GCloudBGApplication = objc_getClass("GCloudBGApplication"); _logos_superclass$_ungrouped$GCloudBGApplication = class_getSuperclass(_logos_class$_ungrouped$GCloudBGApplication); { _logos_register_hook(_logos_class$_ungrouped$GCloudBGApplication, @selector(resetPufferActionReport:withNewPath:), (IMP)&_logos_method$_ungrouped$GCloudBGApplication$resetPufferActionReport$withNewPath$, (IMP *)&_logos_orig$_ungrouped$GCloudBGApplication$resetPufferActionReport$withNewPath$);}Class _logos_class$_ungrouped$GSDKInGameSystem = objc_getClass("GSDKInGameSystem"); _logos_superclass$_ungrouped$GSDKInGameSystem = class_getSuperclass(_logos_class$_ungrouped$GSDKInGameSystem); { _logos_register_hook(_logos_class$_ungrouped$GSDKInGameSystem, @selector(reportDotsToBeacon:), (IMP)&_logos_method$_ungrouped$GSDKInGameSystem$reportDotsToBeacon$, (IMP *)&_logos_orig$_ungrouped$GSDKInGameSystem$reportDotsToBeacon$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKInGameSystem, @selector(reportBaseDict), (IMP)&_logos_method$_ungrouped$GSDKInGameSystem$reportBaseDict, (IMP *)&_logos_orig$_ungrouped$GSDKInGameSystem$reportBaseDict);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKInGameSystem, @selector(setReportBaseDict:), (IMP)&_logos_method$_ungrouped$GSDKInGameSystem$setReportBaseDict$, (IMP *)&_logos_orig$_ungrouped$GSDKInGameSystem$setReportBaseDict$);}Class _logos_class$_ungrouped$GSDKReporter = objc_getClass("GSDKReporter"); Class _logos_metaclass$_ungrouped$GSDKReporter = object_getClass(_logos_class$_ungrouped$GSDKReporter); _logos_superclass$_ungrouped$GSDKReporter = class_getSuperclass(_logos_class$_ungrouped$GSDKReporter); _logos_supermetaclass$_ungrouped$GSDKReporter = class_getSuperclass(_logos_metaclass$_ungrouped$GSDKReporter); { _logos_register_hook(_logos_class$_ungrouped$GSDKReporter, @selector(setGSDKReportPlatform:), (IMP)&_logos_method$_ungrouped$GSDKReporter$setGSDKReportPlatform$, (IMP *)&_logos_orig$_ungrouped$GSDKReporter$setGSDKReportPlatform$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKReporter, @selector(gsdkReport:Params:), (IMP)&_logos_method$_ungrouped$GSDKReporter$gsdkReport$Params$, (IMP *)&_logos_orig$_ungrouped$GSDKReporter$gsdkReport$Params$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKReporter, @selector(gsdkReportTdm:Params:), (IMP)&_logos_method$_ungrouped$GSDKReporter$gsdkReportTdm$Params$, (IMP *)&_logos_orig$_ungrouped$GSDKReporter$gsdkReportTdm$Params$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKReporter, @selector(gsdkReportBeacon:params:), (IMP)&_logos_method$_ungrouped$GSDKReporter$gsdkReportBeacon$params$, (IMP *)&_logos_orig$_ungrouped$GSDKReporter$gsdkReportBeacon$params$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKReporter, @selector(initBeaconInGSDK:), (IMP)&_logos_method$_ungrouped$GSDKReporter$initBeaconInGSDK$, (IMP *)&_logos_orig$_ungrouped$GSDKReporter$initBeaconInGSDK$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKReporter, @selector(reportPlatform), (IMP)&_logos_method$_ungrouped$GSDKReporter$reportPlatform, (IMP *)&_logos_orig$_ungrouped$GSDKReporter$reportPlatform);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKReporter, @selector(setReportPlatform:), (IMP)&_logos_method$_ungrouped$GSDKReporter$setReportPlatform$, (IMP *)&_logos_orig$_ungrouped$GSDKReporter$setReportPlatform$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$GSDKReporter, @selector(sharedInstance), (IMP)&_logos_meta_method$_ungrouped$GSDKReporter$sharedInstance, (IMP *)&_logos_meta_orig$_ungrouped$GSDKReporter$sharedInstance);}Class _logos_class$_ungrouped$GSDKLoginEvent = objc_getClass("GSDKLoginEvent"); _logos_superclass$_ungrouped$GSDKLoginEvent = class_getSuperclass(_logos_class$_ungrouped$GSDKLoginEvent); { _logos_register_hook(_logos_class$_ungrouped$GSDKLoginEvent, @selector(report_flag), (IMP)&_logos_method$_ungrouped$GSDKLoginEvent$report_flag, (IMP *)&_logos_orig$_ungrouped$GSDKLoginEvent$report_flag);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKLoginEvent, @selector(setReport_flag:), (IMP)&_logos_method$_ungrouped$GSDKLoginEvent$setReport_flag$, (IMP *)&_logos_orig$_ungrouped$GSDKLoginEvent$setReport_flag$);}Class _logos_class$_ungrouped$MidasIAPReportEventListener = objc_getClass("MidasIAPReportEventListener"); Class _logos_metaclass$_ungrouped$MidasIAPReportEventListener = object_getClass(_logos_class$_ungrouped$MidasIAPReportEventListener); _logos_superclass$_ungrouped$MidasIAPReportEventListener = class_getSuperclass(_logos_class$_ungrouped$MidasIAPReportEventListener); _logos_supermetaclass$_ungrouped$MidasIAPReportEventListener = class_getSuperclass(_logos_metaclass$_ungrouped$MidasIAPReportEventListener); { _logos_register_hook(_logos_class$_ungrouped$MidasIAPReportEventListener, @selector(processEvent:), (IMP)&_logos_method$_ungrouped$MidasIAPReportEventListener$processEvent$, (IMP *)&_logos_orig$_ungrouped$MidasIAPReportEventListener$processEvent$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasIAPReportEventListener, @selector(removeAfterEnd), (IMP)&_logos_method$_ungrouped$MidasIAPReportEventListener$removeAfterEnd, (IMP *)&_logos_orig$_ungrouped$MidasIAPReportEventListener$removeAfterEnd);}{ _logos_register_hook(_logos_class$_ungrouped$MidasIAPReportEventListener, @selector(beginType), (IMP)&_logos_method$_ungrouped$MidasIAPReportEventListener$beginType, (IMP *)&_logos_orig$_ungrouped$MidasIAPReportEventListener$beginType);}{ _logos_register_hook(_logos_class$_ungrouped$MidasIAPReportEventListener, @selector(beginEvent), (IMP)&_logos_method$_ungrouped$MidasIAPReportEventListener$beginEvent, (IMP *)&_logos_orig$_ungrouped$MidasIAPReportEventListener$beginEvent);}{ _logos_register_hook(_logos_class$_ungrouped$MidasIAPReportEventListener, @selector(endType), (IMP)&_logos_method$_ungrouped$MidasIAPReportEventListener$endType, (IMP *)&_logos_orig$_ungrouped$MidasIAPReportEventListener$endType);}{ _logos_register_hook(_logos_class$_ungrouped$MidasIAPReportEventListener, @selector(endEvent), (IMP)&_logos_method$_ungrouped$MidasIAPReportEventListener$endEvent, (IMP *)&_logos_orig$_ungrouped$MidasIAPReportEventListener$endEvent);}{ _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportEventListener, @selector(listenerWithTag:beginEventType:beginEvent:endEventType:endEvent:removeAfterEnd:), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportEventListener$listenerWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportEventListener$listenerWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasIAPReportEventListener, @selector(initWithTag:beginEventType:beginEvent:endEventType:endEvent:removeAfterEnd:), (IMP)&_logos_method$_ungrouped$MidasIAPReportEventListener$initWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$, (IMP *)&_logos_orig$_ungrouped$MidasIAPReportEventListener$initWithTag$beginEventType$beginEvent$endEventType$endEvent$removeAfterEnd$);}Class _logos_class$_ungrouped$MidasIAPReportHelper = objc_getClass("MidasIAPReportHelper"); Class _logos_metaclass$_ungrouped$MidasIAPReportHelper = object_getClass(_logos_class$_ungrouped$MidasIAPReportHelper); _logos_supermetaclass$_ungrouped$MidasIAPReportHelper = class_getSuperclass(_logos_metaclass$_ungrouped$MidasIAPReportHelper); { _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportHelper, @selector(misDictionary:), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportHelper$misDictionary$, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportHelper$misDictionary$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportHelper, @selector(formatResultInfo:), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportHelper$formatResultInfo$, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportHelper$formatResultInfo$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportHelper, @selector(addReportListener:), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportHelper$addReportListener$, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportHelper$addReportListener$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportHelper, @selector(removeReportListener:), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportHelper$removeReportListener$, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportHelper$removeReportListener$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportHelper, @selector(appendToNextReport:), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportHelper$appendToNextReport$, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportHelper$appendToNextReport$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportHelper, @selector(processUUID), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportHelper$processUUID, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportHelper$processUUID);}{ _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportHelper, @selector(formatErrorInfo:code:msg:), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportHelper$formatErrorInfo$code$msg$, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportHelper$formatErrorInfo$code$msg$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportHelper, @selector(insertReportWithFormat:action:resultInfo:orderInfo:userInfo:), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$orderInfo$userInfo$, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$orderInfo$userInfo$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportHelper, @selector(insertReportWithFormat:action:orderInfo:userInfo:), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$orderInfo$userInfo$, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$orderInfo$userInfo$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportHelper, @selector(insertReportWithFormat:orderInfo:userInfo:), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$orderInfo$userInfo$, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$orderInfo$userInfo$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$MidasIAPReportHelper, @selector(insertReportWithFormat:action:resultInfo:isErrorReport:errorCode:errorInfo:orderInfo:userInfo:), (IMP)&_logos_meta_method$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$isErrorReport$errorCode$errorInfo$orderInfo$userInfo$, (IMP *)&_logos_meta_orig$_ungrouped$MidasIAPReportHelper$insertReportWithFormat$action$resultInfo$isErrorReport$errorCode$errorInfo$orderInfo$userInfo$);}Class _logos_class$_ungrouped$APMidasCommReportHelper = objc_getClass("APMidasCommReportHelper"); Class _logos_metaclass$_ungrouped$APMidasCommReportHelper = object_getClass(_logos_class$_ungrouped$APMidasCommReportHelper); _logos_superclass$_ungrouped$APMidasCommReportHelper = class_getSuperclass(_logos_class$_ungrouped$APMidasCommReportHelper); _logos_supermetaclass$_ungrouped$APMidasCommReportHelper = class_getSuperclass(_logos_metaclass$_ungrouped$APMidasCommReportHelper); { _logos_register_hook(_logos_class$_ungrouped$APMidasCommReportHelper, @selector(init), (IMP)&_logos_method$_ungrouped$APMidasCommReportHelper$init, (IMP *)&_logos_orig$_ungrouped$APMidasCommReportHelper$init);}{ _logos_register_hook(_logos_class$_ungrouped$APMidasCommReportHelper, @selector(enqueueRequestName:reqTag:), (IMP)&_logos_method$_ungrouped$APMidasCommReportHelper$enqueueRequestName$reqTag$, (IMP *)&_logos_orig$_ungrouped$APMidasCommReportHelper$enqueueRequestName$reqTag$);}{ _logos_register_hook(_logos_class$_ungrouped$APMidasCommReportHelper, @selector(dequeueRequestName:reqTag:success:httpRespCode:errorMsg:action:resultInfoDict:orderInfo:userInfo:), (IMP)&_logos_method$_ungrouped$APMidasCommReportHelper$dequeueRequestName$reqTag$success$httpRespCode$errorMsg$action$resultInfoDict$orderInfo$userInfo$, (IMP *)&_logos_orig$_ungrouped$APMidasCommReportHelper$dequeueRequestName$reqTag$success$httpRespCode$errorMsg$action$resultInfoDict$orderInfo$userInfo$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$APMidasCommReportHelper, @selector(sharedInstance), (IMP)&_logos_meta_method$_ungrouped$APMidasCommReportHelper$sharedInstance, (IMP *)&_logos_meta_orig$_ungrouped$APMidasCommReportHelper$sharedInstance);}Class _logos_class$_ungrouped$MidasAddrReporter = objc_getClass("MidasAddrReporter"); _logos_superclass$_ungrouped$MidasAddrReporter = class_getSuperclass(_logos_class$_ungrouped$MidasAddrReporter); { _logos_register_hook(_logos_class$_ungrouped$MidasAddrReporter, @selector(initWithOrderInfo:userInfo:), (IMP)&_logos_method$_ungrouped$MidasAddrReporter$initWithOrderInfo$userInfo$, (IMP *)&_logos_orig$_ungrouped$MidasAddrReporter$initWithOrderInfo$userInfo$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrReporter, @selector(reportSpeed:qDiaoType:delay:isIPv6:), (IMP)&_logos_method$_ungrouped$MidasAddrReporter$reportSpeed$qDiaoType$delay$isIPv6$, (IMP *)&_logos_orig$_ungrouped$MidasAddrReporter$reportSpeed$qDiaoType$delay$isIPv6$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrReporter, @selector(orderInfo), (IMP)&_logos_method$_ungrouped$MidasAddrReporter$orderInfo, (IMP *)&_logos_orig$_ungrouped$MidasAddrReporter$orderInfo);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrReporter, @selector(setOrderInfo:), (IMP)&_logos_method$_ungrouped$MidasAddrReporter$setOrderInfo$, (IMP *)&_logos_orig$_ungrouped$MidasAddrReporter$setOrderInfo$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrReporter, @selector(userInfo), (IMP)&_logos_method$_ungrouped$MidasAddrReporter$userInfo, (IMP *)&_logos_orig$_ungrouped$MidasAddrReporter$userInfo);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrReporter, @selector(setUserInfo:), (IMP)&_logos_method$_ungrouped$MidasAddrReporter$setUserInfo$, (IMP *)&_logos_orig$_ungrouped$MidasAddrReporter$setUserInfo$);}Class _logos_class$_ungrouped$MidasIAPPayOperation = objc_getClass("MidasIAPPayOperation"); _logos_superclass$_ungrouped$MidasIAPPayOperation = class_getSuperclass(_logos_class$_ungrouped$MidasIAPPayOperation); { _logos_register_hook(_logos_class$_ungrouped$MidasIAPPayOperation, @selector(reportGotoAppStore:errorInfo:), (IMP)&_logos_method$_ungrouped$MidasIAPPayOperation$reportGotoAppStore$errorInfo$, (IMP *)&_logos_orig$_ungrouped$MidasIAPPayOperation$reportGotoAppStore$errorInfo$);}Class _logos_class$_ungrouped$MidasIAPStatics = objc_getClass("MidasIAPStatics"); _logos_superclass$_ungrouped$MidasIAPStatics = class_getSuperclass(_logos_class$_ungrouped$MidasIAPStatics); { _logos_register_hook(_logos_class$_ungrouped$MidasIAPStatics, @selector(onReport:), (IMP)&_logos_method$_ungrouped$MidasIAPStatics$onReport$, (IMP *)&_logos_orig$_ungrouped$MidasIAPStatics$onReport$);}Class _logos_class$_ungrouped$MidasIAPProductInfoRequester = objc_getClass("MidasIAPProductInfoRequester"); _logos_superclass$_ungrouped$MidasIAPProductInfoRequester = class_getSuperclass(_logos_class$_ungrouped$MidasIAPProductInfoRequester); { _logos_register_hook(_logos_class$_ungrouped$MidasIAPProductInfoRequester, @selector(reportAppleSystemErrorWithCode:msg:), (IMP)&_logos_method$_ungrouped$MidasIAPProductInfoRequester$reportAppleSystemErrorWithCode$msg$, (IMP *)&_logos_orig$_ungrouped$MidasIAPProductInfoRequester$reportAppleSystemErrorWithCode$msg$);}Class _logos_class$_ungrouped$MidasAddrHelper = objc_getClass("MidasAddrHelper"); _logos_superclass$_ungrouped$MidasAddrHelper = class_getSuperclass(_logos_class$_ungrouped$MidasAddrHelper); { _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(reporter), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$reporter, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$reporter);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(setReporter:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$setReporter$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$setReporter$);}Class _logos_class$_ungrouped$GNLRecord = objc_getClass("GNLRecord"); Class _logos_metaclass$_ungrouped$GNLRecord = object_getClass(_logos_class$_ungrouped$GNLRecord); _logos_supermetaclass$_ungrouped$GNLRecord = class_getSuperclass(_logos_metaclass$_ungrouped$GNLRecord); { _logos_register_hook(_logos_metaclass$_ungrouped$GNLRecord, @selector(recordWithReports:), (IMP)&_logos_meta_method$_ungrouped$GNLRecord$recordWithReports$, (IMP *)&_logos_meta_orig$_ungrouped$GNLRecord$recordWithReports$);}Class _logos_class$_ungrouped$GNLReport = objc_getClass("GNLReport"); Class _logos_metaclass$_ungrouped$GNLReport = object_getClass(_logos_class$_ungrouped$GNLReport); _logos_superclass$_ungrouped$GNLReport = class_getSuperclass(_logos_class$_ungrouped$GNLReport); _logos_supermetaclass$_ungrouped$GNLReport = class_getSuperclass(_logos_metaclass$_ungrouped$GNLReport); { _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(init), (IMP)&_logos_method$_ungrouped$GNLReport$init, (IMP *)&_logos_orig$_ungrouped$GNLReport$init);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(isReportValidated), (IMP)&_logos_method$_ungrouped$GNLReport$isReportValidated, (IMP *)&_logos_orig$_ungrouped$GNLReport$isReportValidated);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(convertToReportString), (IMP)&_logos_method$_ungrouped$GNLReport$convertToReportString, (IMP *)&_logos_orig$_ungrouped$GNLReport$convertToReportString);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(description), (IMP)&_logos_method$_ungrouped$GNLReport$description, (IMP *)&_logos_orig$_ungrouped$GNLReport$description);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(reportUploadingNumber), (IMP)&_logos_method$_ungrouped$GNLReport$reportUploadingNumber, (IMP *)&_logos_orig$_ungrouped$GNLReport$reportUploadingNumber);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setReportUploadingNumber:), (IMP)&_logos_method$_ungrouped$GNLReport$setReportUploadingNumber$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setReportUploadingNumber$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(sdkVersion), (IMP)&_logos_method$_ungrouped$GNLReport$sdkVersion, (IMP *)&_logos_orig$_ungrouped$GNLReport$sdkVersion);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setSdkVersion:), (IMP)&_logos_method$_ungrouped$GNLReport$setSdkVersion$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setSdkVersion$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(openIDOrUIN), (IMP)&_logos_method$_ungrouped$GNLReport$openIDOrUIN, (IMP *)&_logos_orig$_ungrouped$GNLReport$openIDOrUIN);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setOpenIDOrUIN:), (IMP)&_logos_method$_ungrouped$GNLReport$setOpenIDOrUIN$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setOpenIDOrUIN$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(payFrom), (IMP)&_logos_method$_ungrouped$GNLReport$payFrom, (IMP *)&_logos_orig$_ungrouped$GNLReport$payFrom);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setPayFrom:), (IMP)&_logos_method$_ungrouped$GNLReport$setPayFrom$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setPayFrom$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(resultInfo), (IMP)&_logos_method$_ungrouped$GNLReport$resultInfo, (IMP *)&_logos_orig$_ungrouped$GNLReport$resultInfo);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setResultInfo:), (IMP)&_logos_method$_ungrouped$GNLReport$setResultInfo$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setResultInfo$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(errorCode), (IMP)&_logos_method$_ungrouped$GNLReport$errorCode, (IMP *)&_logos_orig$_ungrouped$GNLReport$errorCode);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setErrorCode:), (IMP)&_logos_method$_ungrouped$GNLReport$setErrorCode$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setErrorCode$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(errorInfo), (IMP)&_logos_method$_ungrouped$GNLReport$errorInfo, (IMP *)&_logos_orig$_ungrouped$GNLReport$errorInfo);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setErrorInfo:), (IMP)&_logos_method$_ungrouped$GNLReport$setErrorInfo$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setErrorInfo$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(serviceCode), (IMP)&_logos_method$_ungrouped$GNLReport$serviceCode, (IMP *)&_logos_orig$_ungrouped$GNLReport$serviceCode);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setServiceCode:), (IMP)&_logos_method$_ungrouped$GNLReport$setServiceCode$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setServiceCode$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(action), (IMP)&_logos_method$_ungrouped$GNLReport$action, (IMP *)&_logos_orig$_ungrouped$GNLReport$action);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setAction:), (IMP)&_logos_method$_ungrouped$GNLReport$setAction$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setAction$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(format), (IMP)&_logos_method$_ungrouped$GNLReport$format, (IMP *)&_logos_orig$_ungrouped$GNLReport$format);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(offerID), (IMP)&_logos_method$_ungrouped$GNLReport$offerID, (IMP *)&_logos_orig$_ungrouped$GNLReport$offerID);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setOfferID:), (IMP)&_logos_method$_ungrouped$GNLReport$setOfferID$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setOfferID$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(pf), (IMP)&_logos_method$_ungrouped$GNLReport$pf, (IMP *)&_logos_orig$_ungrouped$GNLReport$pf);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setFormat:), (IMP)&_logos_method$_ungrouped$GNLReport$setFormat$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setFormat$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setPf:), (IMP)&_logos_method$_ungrouped$GNLReport$setPf$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setPf$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(billNo), (IMP)&_logos_method$_ungrouped$GNLReport$billNo, (IMP *)&_logos_orig$_ungrouped$GNLReport$billNo);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setBillNo:), (IMP)&_logos_method$_ungrouped$GNLReport$setBillNo$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setBillNo$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(orderUUID), (IMP)&_logos_method$_ungrouped$GNLReport$orderUUID, (IMP *)&_logos_orig$_ungrouped$GNLReport$orderUUID);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setOrderUUID:), (IMP)&_logos_method$_ungrouped$GNLReport$setOrderUUID$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setOrderUUID$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(sessionID), (IMP)&_logos_method$_ungrouped$GNLReport$sessionID, (IMP *)&_logos_orig$_ungrouped$GNLReport$sessionID);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setSessionID:), (IMP)&_logos_method$_ungrouped$GNLReport$setSessionID$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setSessionID$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(sessionType), (IMP)&_logos_method$_ungrouped$GNLReport$sessionType, (IMP *)&_logos_orig$_ungrouped$GNLReport$sessionType);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setSessionType:), (IMP)&_logos_method$_ungrouped$GNLReport$setSessionType$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setSessionType$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(productID), (IMP)&_logos_method$_ungrouped$GNLReport$productID, (IMP *)&_logos_orig$_ungrouped$GNLReport$productID);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setProductID:), (IMP)&_logos_method$_ungrouped$GNLReport$setProductID$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setProductID$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(amount), (IMP)&_logos_method$_ungrouped$GNLReport$amount, (IMP *)&_logos_orig$_ungrouped$GNLReport$amount);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setAmount:), (IMP)&_logos_method$_ungrouped$GNLReport$setAmount$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setAmount$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(quantity), (IMP)&_logos_method$_ungrouped$GNLReport$quantity, (IMP *)&_logos_orig$_ungrouped$GNLReport$quantity);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setQuantity:), (IMP)&_logos_method$_ungrouped$GNLReport$setQuantity$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setQuantity$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(aid), (IMP)&_logos_method$_ungrouped$GNLReport$aid, (IMP *)&_logos_orig$_ungrouped$GNLReport$aid);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setAid:), (IMP)&_logos_method$_ungrouped$GNLReport$setAid$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setAid$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(processUUID), (IMP)&_logos_method$_ungrouped$GNLReport$processUUID, (IMP *)&_logos_orig$_ungrouped$GNLReport$processUUID);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setProcessUUID:), (IMP)&_logos_method$_ungrouped$GNLReport$setProcessUUID$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setProcessUUID$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(isErrorReport), (IMP)&_logos_method$_ungrouped$GNLReport$isErrorReport, (IMP *)&_logos_orig$_ungrouped$GNLReport$isErrorReport);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(setIsErrorReport:), (IMP)&_logos_method$_ungrouped$GNLReport$setIsErrorReport$, (IMP *)&_logos_orig$_ungrouped$GNLReport$setIsErrorReport$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReport, @selector(createdTs), (IMP)&_logos_method$_ungrouped$GNLReport$createdTs, (IMP *)&_logos_orig$_ungrouped$GNLReport$createdTs);}{ _logos_register_hook(_logos_metaclass$_ungrouped$GNLReport, @selector(_platform), (IMP)&_logos_meta_method$_ungrouped$GNLReport$_platform, (IMP *)&_logos_meta_orig$_ungrouped$GNLReport$_platform);}Class _logos_class$_ungrouped$GNLReportContainer = objc_getClass("GNLReportContainer"); _logos_superclass$_ungrouped$GNLReportContainer = class_getSuperclass(_logos_class$_ungrouped$GNLReportContainer); { _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(init), (IMP)&_logos_method$_ungrouped$GNLReportContainer$init, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$init);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(insertReport:), (IMP)&_logos_method$_ungrouped$GNLReportContainer$insertReport$, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$insertReport$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(removeReport:), (IMP)&_logos_method$_ungrouped$GNLReportContainer$removeReport$, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$removeReport$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(setReportDomains:offerID:), (IMP)&_logos_method$_ungrouped$GNLReportContainer$setReportDomains$offerID$, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$setReportDomains$offerID$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(_joinAllReportsIntoARecord:), (IMP)&_logos_method$_ungrouped$GNLReportContainer$_joinAllReportsIntoARecord$, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$_joinAllReportsIntoARecord$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(processUUID), (IMP)&_logos_method$_ungrouped$GNLReportContainer$processUUID, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$processUUID);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(currentUploadingNumber), (IMP)&_logos_method$_ungrouped$GNLReportContainer$currentUploadingNumber, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$currentUploadingNumber);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(setProcessUUID:), (IMP)&_logos_method$_ungrouped$GNLReportContainer$setProcessUUID$, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$setProcessUUID$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(reportDomains), (IMP)&_logos_method$_ungrouped$GNLReportContainer$reportDomains, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$reportDomains);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(setReportDomains:), (IMP)&_logos_method$_ungrouped$GNLReportContainer$setReportDomains$, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$setReportDomains$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(offerID), (IMP)&_logos_method$_ungrouped$GNLReportContainer$offerID, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$offerID);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(setOfferID:), (IMP)&_logos_method$_ungrouped$GNLReportContainer$setOfferID$, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$setOfferID$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(preSendingReports), (IMP)&_logos_method$_ungrouped$GNLReportContainer$preSendingReports, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$preSendingReports);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(setPreSendingReports:), (IMP)&_logos_method$_ungrouped$GNLReportContainer$setPreSendingReports$, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$setPreSendingReports$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(setCurrentUploadingNumber:), (IMP)&_logos_method$_ungrouped$GNLReportContainer$setCurrentUploadingNumber$, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$setCurrentUploadingNumber$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(originalUUID), (IMP)&_logos_method$_ungrouped$GNLReportContainer$originalUUID, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$originalUUID);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportContainer, @selector(setOriginalUUID:), (IMP)&_logos_method$_ungrouped$GNLReportContainer$setOriginalUUID$, (IMP *)&_logos_orig$_ungrouped$GNLReportContainer$setOriginalUUID$);}Class _logos_class$_ungrouped$GNLReportManager = objc_getClass("GNLReportManager"); Class _logos_metaclass$_ungrouped$GNLReportManager = object_getClass(_logos_class$_ungrouped$GNLReportManager); _logos_superclass$_ungrouped$GNLReportManager = class_getSuperclass(_logos_class$_ungrouped$GNLReportManager); _logos_supermetaclass$_ungrouped$GNLReportManager = class_getSuperclass(_logos_metaclass$_ungrouped$GNLReportManager); { _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(processUUID), (IMP)&_logos_method$_ungrouped$GNLReportManager$processUUID, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$processUUID);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(insertReport:), (IMP)&_logos_method$_ungrouped$GNLReportManager$insertReport$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$insertReport$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(removeReport:), (IMP)&_logos_method$_ungrouped$GNLReportManager$removeReport$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$removeReport$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(setDataReportQueue:), (IMP)&_logos_method$_ungrouped$GNLReportManager$setDataReportQueue$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$setDataReportQueue$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(addReportListener:), (IMP)&_logos_method$_ungrouped$GNLReportManager$addReportListener$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$addReportListener$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(removeReportListener:), (IMP)&_logos_method$_ungrouped$GNLReportManager$removeReportListener$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$removeReportListener$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(appendToNextReport:), (IMP)&_logos_method$_ungrouped$GNLReportManager$appendToNextReport$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$appendToNextReport$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(notify:), (IMP)&_logos_method$_ungrouped$GNLReportManager$notify$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$notify$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(processReportQueue:), (IMP)&_logos_method$_ungrouped$GNLReportManager$processReportQueue$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$processReportQueue$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(init), (IMP)&_logos_method$_ungrouped$GNLReportManager$init, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$init);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(initMethod), (IMP)&_logos_method$_ungrouped$GNLReportManager$initMethod, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$initMethod);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(copyWithZone:), (IMP)&_logos_method$_ungrouped$GNLReportManager$copyWithZone$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$copyWithZone$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(mutableCopyWithZone:), (IMP)&_logos_method$_ungrouped$GNLReportManager$mutableCopyWithZone$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$mutableCopyWithZone$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(container), (IMP)&_logos_method$_ungrouped$GNLReportManager$container, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$container);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(setContainer:), (IMP)&_logos_method$_ungrouped$GNLReportManager$setContainer$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$setContainer$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(listeners), (IMP)&_logos_method$_ungrouped$GNLReportManager$listeners, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$listeners);}{ _logos_register_hook(_logos_metaclass$_ungrouped$GNLReportManager, @selector(isSingleton), (IMP)&_logos_meta_method$_ungrouped$GNLReportManager$isSingleton, (IMP *)&_logos_meta_orig$_ungrouped$GNLReportManager$isSingleton);}{ _logos_register_hook(_logos_class$_ungrouped$GNLReportManager, @selector(setReportDomains:offerID:ignoringFormats:), (IMP)&_logos_method$_ungrouped$GNLReportManager$setReportDomains$offerID$ignoringFormats$, (IMP *)&_logos_orig$_ungrouped$GNLReportManager$setReportDomains$offerID$ignoringFormats$);}Class _logos_class$_ungrouped$VLEventReportRequest = objc_getClass("VLEventReportRequest"); _logos_superclass$_ungrouped$VLEventReportRequest = class_getSuperclass(_logos_class$_ungrouped$VLEventReportRequest); { _logos_register_hook(_logos_class$_ungrouped$VLEventReportRequest, @selector(needCertParam), (IMP)&_logos_method$_ungrouped$VLEventReportRequest$needCertParam, (IMP *)&_logos_orig$_ungrouped$VLEventReportRequest$needCertParam);}Class _logos_class$_ungrouped$IMSDKReport = objc_getClass("IMSDKReport"); _logos_superclass$_ungrouped$IMSDKReport = class_getSuperclass(_logos_class$_ungrouped$IMSDKReport); { _logos_register_hook(_logos_class$_ungrouped$IMSDKReport, @selector(isThirdPlatformInitialized), (IMP)&_logos_method$_ungrouped$IMSDKReport$isThirdPlatformInitialized, (IMP *)&_logos_orig$_ungrouped$IMSDKReport$isThirdPlatformInitialized);}{ _logos_register_hook(_logos_class$_ungrouped$IMSDKReport, @selector(setIsThirdPlatformInitialized:), (IMP)&_logos_method$_ungrouped$IMSDKReport$setIsThirdPlatformInitialized$, (IMP *)&_logos_orig$_ungrouped$IMSDKReport$setIsThirdPlatformInitialized$);}Class _logos_class$_ungrouped$IMSDKToolStat = objc_getClass("IMSDKToolStat"); _logos_superclass$_ungrouped$IMSDKToolStat = class_getSuperclass(_logos_class$_ungrouped$IMSDKToolStat); { _logos_register_hook(_logos_class$_ungrouped$IMSDKToolStat, @selector(reportLogin:openID:channelID:), (IMP)&_logos_method$_ungrouped$IMSDKToolStat$reportLogin$openID$channelID$, (IMP *)&_logos_orig$_ungrouped$IMSDKToolStat$reportLogin$openID$channelID$);}Class _logos_class$_ungrouped$IMSDKStatBuglyManager = objc_getClass("IMSDKStatBuglyManager"); Class _logos_metaclass$_ungrouped$IMSDKStatBuglyManager = object_getClass(_logos_class$_ungrouped$IMSDKStatBuglyManager); _logos_supermetaclass$_ungrouped$IMSDKStatBuglyManager = class_getSuperclass(_logos_metaclass$_ungrouped$IMSDKStatBuglyManager); { _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatBuglyManager, @selector(reportEvent:eventBody:isRealtime:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatBuglyManager$reportEvent$eventBody$isRealtime$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportEvent$eventBody$isRealtime$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatBuglyManager, @selector(reportEvent:params:isRealtime:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatBuglyManager$reportEvent$params$isRealtime$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportEvent$params$isRealtime$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatBuglyManager, @selector(reportPurchase:currentCode:expense:isRealTime:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatBuglyManager$reportPurchase$currentCode$expense$isRealTime$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportPurchase$currentCode$expense$isRealTime$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatBuglyManager, @selector(reportCrash:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatBuglyManager$reportCrash$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportCrash$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatBuglyManager, @selector(reportAutoExceptionReport:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatBuglyManager$reportAutoExceptionReport$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatBuglyManager$reportAutoExceptionReport$);}Class _logos_class$_ungrouped$IMSDKStatAdjustManager = objc_getClass("IMSDKStatAdjustManager"); Class _logos_metaclass$_ungrouped$IMSDKStatAdjustManager = object_getClass(_logos_class$_ungrouped$IMSDKStatAdjustManager); _logos_supermetaclass$_ungrouped$IMSDKStatAdjustManager = class_getSuperclass(_logos_metaclass$_ungrouped$IMSDKStatAdjustManager); { _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatAdjustManager, @selector(reportEvent:eventBody:isRealtime:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatAdjustManager$reportEvent$eventBody$isRealtime$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportEvent$eventBody$isRealtime$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatAdjustManager, @selector(reportEvent:params:isRealtime:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatAdjustManager$reportEvent$params$isRealtime$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportEvent$params$isRealtime$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatAdjustManager, @selector(reportPurchase:currentCode:expense:isRealTime:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatAdjustManager$reportPurchase$currentCode$expense$isRealTime$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportPurchase$currentCode$expense$isRealTime$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatAdjustManager, @selector(reportCrash:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatAdjustManager$reportCrash$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportCrash$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatAdjustManager, @selector(reportAutoExceptionReport:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatAdjustManager$reportAutoExceptionReport$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatAdjustManager$reportAutoExceptionReport$);}Class _logos_class$_ungrouped$IMSDKStatFacebookManager = objc_getClass("IMSDKStatFacebookManager"); Class _logos_metaclass$_ungrouped$IMSDKStatFacebookManager = object_getClass(_logos_class$_ungrouped$IMSDKStatFacebookManager); _logos_supermetaclass$_ungrouped$IMSDKStatFacebookManager = class_getSuperclass(_logos_metaclass$_ungrouped$IMSDKStatFacebookManager); { _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatFacebookManager, @selector(reportEvent:eventBody:isRealtime:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatFacebookManager$reportEvent$eventBody$isRealtime$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportEvent$eventBody$isRealtime$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatFacebookManager, @selector(reportEvent:params:isRealtime:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatFacebookManager$reportEvent$params$isRealtime$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportEvent$params$isRealtime$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatFacebookManager, @selector(reportCrash:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatFacebookManager$reportCrash$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportCrash$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatFacebookManager, @selector(reportAutoExceptionReport:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatFacebookManager$reportAutoExceptionReport$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatFacebookManager$reportAutoExceptionReport$);}Class _logos_class$_ungrouped$IMSDKStatFirebaseManager = objc_getClass("IMSDKStatFirebaseManager"); Class _logos_metaclass$_ungrouped$IMSDKStatFirebaseManager = object_getClass(_logos_class$_ungrouped$IMSDKStatFirebaseManager); _logos_supermetaclass$_ungrouped$IMSDKStatFirebaseManager = class_getSuperclass(_logos_metaclass$_ungrouped$IMSDKStatFirebaseManager); { _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatFirebaseManager, @selector(reportEvent:eventBody:isRealtime:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatFirebaseManager$reportEvent$eventBody$isRealtime$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportEvent$eventBody$isRealtime$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatFirebaseManager, @selector(reportEvent:params:isRealtime:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatFirebaseManager$reportEvent$params$isRealtime$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportEvent$params$isRealtime$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatFirebaseManager, @selector(reportPurchase:currentCode:expense:isRealTime:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatFirebaseManager$reportPurchase$currentCode$expense$isRealTime$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportPurchase$currentCode$expense$isRealTime$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatFirebaseManager, @selector(reportCrash:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatFirebaseManager$reportCrash$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportCrash$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$IMSDKStatFirebaseManager, @selector(reportAutoExceptionReport:), (IMP)&_logos_meta_method$_ungrouped$IMSDKStatFirebaseManager$reportAutoExceptionReport$, (IMP *)&_logos_meta_orig$_ungrouped$IMSDKStatFirebaseManager$reportAutoExceptionReport$);}Class _logos_class$_ungrouped$FBSDKSKAdNetworkReporter = objc_getClass("FBSDKSKAdNetworkReporter"); Class _logos_metaclass$_ungrouped$FBSDKSKAdNetworkReporter = object_getClass(_logos_class$_ungrouped$FBSDKSKAdNetworkReporter); _logos_supermetaclass$_ungrouped$FBSDKSKAdNetworkReporter = class_getSuperclass(_logos_metaclass$_ungrouped$FBSDKSKAdNetworkReporter); { _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKSKAdNetworkReporter, @selector(_shouldCutoff), (IMP)&_logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$_shouldCutoff, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_shouldCutoff);}{ _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKSKAdNetworkReporter, @selector(_isConfigRefreshTimestampValid), (IMP)&_logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$_isConfigRefreshTimestampValid, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_isConfigRefreshTimestampValid);}{ _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKSKAdNetworkReporter, @selector(recordAndUpdateEvent:currency:value:), (IMP)&_logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$recordAndUpdateEvent$currency$value$, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$recordAndUpdateEvent$currency$value$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKSKAdNetworkReporter, @selector(_recordAndUpdateEvent:currency:value:), (IMP)&_logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$_recordAndUpdateEvent$currency$value$, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_recordAndUpdateEvent$currency$value$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKSKAdNetworkReporter, @selector(_loadConfigurationWithBlock:), (IMP)&_logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$_loadConfigurationWithBlock$, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_loadConfigurationWithBlock$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKSKAdNetworkReporter, @selector(_updateConversionValue:), (IMP)&_logos_meta_method$_ungrouped$FBSDKSKAdNetworkReporter$_updateConversionValue$, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKSKAdNetworkReporter$_updateConversionValue$);}Class _logos_class$_ungrouped$FBSDKSettings = objc_getClass("FBSDKSettings"); Class _logos_metaclass$_ungrouped$FBSDKSettings = object_getClass(_logos_class$_ungrouped$FBSDKSettings); _logos_supermetaclass$_ungrouped$FBSDKSettings = class_getSuperclass(_logos_metaclass$_ungrouped$FBSDKSettings); { _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKSettings, @selector(isSKAdNetworkReportEnabled), (IMP)&_logos_meta_method$_ungrouped$FBSDKSettings$isSKAdNetworkReportEnabled, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKSettings$isSKAdNetworkReportEnabled);}{ _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKSettings, @selector(setSKAdNetworkReportEnabled:), (IMP)&_logos_meta_method$_ungrouped$FBSDKSettings$setSKAdNetworkReportEnabled$, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKSettings$setSKAdNetworkReportEnabled$);}Class _logos_class$_ungrouped$BLYBlockLogic = objc_getClass("BLYBlockLogic"); _logos_superclass$_ungrouped$BLYBlockLogic = class_getSuperclass(_logos_class$_ungrouped$BLYBlockLogic); { _logos_register_hook(_logos_class$_ungrouped$BLYBlockLogic, @selector(reportSuccessed:), (IMP)&_logos_method$_ungrouped$BLYBlockLogic$reportSuccessed$, (IMP *)&_logos_orig$_ungrouped$BLYBlockLogic$reportSuccessed$);}Class _logos_class$_ungrouped$Bugly = objc_getClass("Bugly"); Class _logos_metaclass$_ungrouped$Bugly = object_getClass(_logos_class$_ungrouped$Bugly); _logos_supermetaclass$_ungrouped$Bugly = class_getSuperclass(_logos_metaclass$_ungrouped$Bugly); { _logos_register_hook(_logos_metaclass$_ungrouped$Bugly, @selector(reportExceptionWithCategory:name:reason:callStack:extraInfo:terminateApp:), (IMP)&_logos_meta_method$_ungrouped$Bugly$reportExceptionWithCategory$name$reason$callStack$extraInfo$terminateApp$, (IMP *)&_logos_meta_orig$_ungrouped$Bugly$reportExceptionWithCategory$name$reason$callStack$extraInfo$terminateApp$);}Class _logos_class$_ungrouped$BLYCrashReport = objc_getClass("BLYCrashReport"); _logos_superclass$_ungrouped$BLYCrashReport = class_getSuperclass(_logos_class$_ungrouped$BLYCrashReport); { _logos_register_hook(_logos_class$_ungrouped$BLYCrashReport, @selector(isHandlingCrash), (IMP)&_logos_method$_ungrouped$BLYCrashReport$isHandlingCrash, (IMP *)&_logos_orig$_ungrouped$BLYCrashReport$isHandlingCrash);}{ _logos_register_hook(_logos_class$_ungrouped$BLYCrashReport, @selector(setCrashHandling:), (IMP)&_logos_method$_ungrouped$BLYCrashReport$setCrashHandling$, (IMP *)&_logos_orig$_ungrouped$BLYCrashReport$setCrashHandling$);}{ _logos_register_hook(_logos_class$_ungrouped$BLYCrashReport, @selector(isCrashedDuringCrashHandling), (IMP)&_logos_method$_ungrouped$BLYCrashReport$isCrashedDuringCrashHandling, (IMP *)&_logos_orig$_ungrouped$BLYCrashReport$isCrashedDuringCrashHandling);}{ _logos_register_hook(_logos_class$_ungrouped$BLYCrashReport, @selector(setCrashedDuringCrashHandling:), (IMP)&_logos_method$_ungrouped$BLYCrashReport$setCrashedDuringCrashHandling$, (IMP *)&_logos_orig$_ungrouped$BLYCrashReport$setCrashedDuringCrashHandling$);}Class _logos_class$_ungrouped$BLYAnalyticsLogic = objc_getClass("BLYAnalyticsLogic"); _logos_superclass$_ungrouped$BLYAnalyticsLogic = class_getSuperclass(_logos_class$_ungrouped$BLYAnalyticsLogic); { _logos_register_hook(_logos_class$_ungrouped$BLYAnalyticsLogic, @selector(reportSuccessed:), (IMP)&_logos_method$_ungrouped$BLYAnalyticsLogic$reportSuccessed$, (IMP *)&_logos_orig$_ungrouped$BLYAnalyticsLogic$reportSuccessed$);}Class _logos_class$_ungrouped$BLYSDKManager = objc_getClass("BLYSDKManager"); _logos_superclass$_ungrouped$BLYSDKManager = class_getSuperclass(_logos_class$_ungrouped$BLYSDKManager); { _logos_register_hook(_logos_class$_ungrouped$BLYSDKManager, @selector(reportCustomizedException:name:reason:callStack:extraInfo:terminateApp:), (IMP)&_logos_method$_ungrouped$BLYSDKManager$reportCustomizedException$name$reason$callStack$extraInfo$terminateApp$, (IMP *)&_logos_orig$_ungrouped$BLYSDKManager$reportCustomizedException$name$reason$callStack$extraInfo$terminateApp$);}Class _logos_class$_ungrouped$BLYCommonUploadLogic = objc_getClass("BLYCommonUploadLogic"); _logos_superclass$_ungrouped$BLYCommonUploadLogic = class_getSuperclass(_logos_class$_ungrouped$BLYCommonUploadLogic); { _logos_register_hook(_logos_class$_ungrouped$BLYCommonUploadLogic, @selector(reportSuccessed:), (IMP)&_logos_method$_ungrouped$BLYCommonUploadLogic$reportSuccessed$, (IMP *)&_logos_orig$_ungrouped$BLYCommonUploadLogic$reportSuccessed$);}Class _logos_class$_ungrouped$BLYCrashReporter = objc_getClass("BLYCrashReporter"); _logos_superclass$_ungrouped$BLYCrashReporter = class_getSuperclass(_logos_class$_ungrouped$BLYCrashReporter); { _logos_register_hook(_logos_class$_ungrouped$BLYCrashReporter, @selector(setCrashIncident:), (IMP)&_logos_method$_ungrouped$BLYCrashReporter$setCrashIncident$, (IMP *)&_logos_orig$_ungrouped$BLYCrashReporter$setCrashIncident$);}{ _logos_register_hook(_logos_class$_ungrouped$BLYCrashReporter, @selector(enableCrashReporter:), (IMP)&_logos_method$_ungrouped$BLYCrashReporter$enableCrashReporter$, (IMP *)&_logos_orig$_ungrouped$BLYCrashReporter$enableCrashReporter$);}{ _logos_register_hook(_logos_class$_ungrouped$BLYCrashReporter, @selector(disableCrashReporter:), (IMP)&_logos_method$_ungrouped$BLYCrashReporter$disableCrashReporter$, (IMP *)&_logos_orig$_ungrouped$BLYCrashReporter$disableCrashReporter$);}{ _logos_register_hook(_logos_class$_ungrouped$BLYCrashReporter, @selector(hasPendingCrashReport), (IMP)&_logos_method$_ungrouped$BLYCrashReporter$hasPendingCrashReport, (IMP *)&_logos_orig$_ungrouped$BLYCrashReporter$hasPendingCrashReport);}{ _logos_register_hook(_logos_class$_ungrouped$BLYCrashReporter, @selector(detectiveCrashReporterRunning), (IMP)&_logos_method$_ungrouped$BLYCrashReporter$detectiveCrashReporterRunning, (IMP *)&_logos_orig$_ungrouped$BLYCrashReporter$detectiveCrashReporterRunning);}{ _logos_register_hook(_logos_class$_ungrouped$BLYCrashReporter, @selector(hasCrashIncident), (IMP)&_logos_method$_ungrouped$BLYCrashReporter$hasCrashIncident, (IMP *)&_logos_orig$_ungrouped$BLYCrashReporter$hasCrashIncident);}Class _logos_class$_ungrouped$BLYCrashLogic = objc_getClass("BLYCrashLogic"); _logos_superclass$_ungrouped$BLYCrashLogic = class_getSuperclass(_logos_class$_ungrouped$BLYCrashLogic); { _logos_register_hook(_logos_class$_ungrouped$BLYCrashLogic, @selector(reportSuccessed:), (IMP)&_logos_method$_ungrouped$BLYCrashLogic$reportSuccessed$, (IMP *)&_logos_orig$_ungrouped$BLYCrashLogic$reportSuccessed$);}Class _logos_class$_ungrouped$BLYUnexpectedExitManager = objc_getClass("BLYUnexpectedExitManager"); _logos_superclass$_ungrouped$BLYUnexpectedExitManager = class_getSuperclass(_logos_class$_ungrouped$BLYUnexpectedExitManager); { _logos_register_hook(_logos_class$_ungrouped$BLYUnexpectedExitManager, @selector(reportUnexpectExit:), (IMP)&_logos_method$_ungrouped$BLYUnexpectedExitManager$reportUnexpectExit$, (IMP *)&_logos_orig$_ungrouped$BLYUnexpectedExitManager$reportUnexpectExit$);}Class _logos_class$_ungrouped$RqdCrashReporterLiteException = objc_getClass("RqdCrashReporterLiteException"); Class _logos_metaclass$_ungrouped$RqdCrashReporterLiteException = object_getClass(_logos_class$_ungrouped$RqdCrashReporterLiteException); _logos_supermetaclass$_ungrouped$RqdCrashReporterLiteException = class_getSuperclass(_logos_metaclass$_ungrouped$RqdCrashReporterLiteException); { _logos_register_hook(_logos_metaclass$_ungrouped$RqdCrashReporterLiteException, @selector(supportsSecureCoding), (IMP)&_logos_meta_method$_ungrouped$RqdCrashReporterLiteException$supportsSecureCoding, (IMP *)&_logos_meta_orig$_ungrouped$RqdCrashReporterLiteException$supportsSecureCoding);}Class _logos_class$_ungrouped$APMAdExposureReporter = objc_getClass("APMAdExposureReporter"); _logos_superclass$_ungrouped$APMAdExposureReporter = class_getSuperclass(_logos_class$_ungrouped$APMAdExposureReporter); { _logos_register_hook(_logos_class$_ungrouped$APMAdExposureReporter, @selector(isReportingEnabled), (IMP)&_logos_method$_ungrouped$APMAdExposureReporter$isReportingEnabled, (IMP *)&_logos_orig$_ungrouped$APMAdExposureReporter$isReportingEnabled);}{ _logos_register_hook(_logos_class$_ungrouped$APMAdExposureReporter, @selector(setReportingEnabled:), (IMP)&_logos_method$_ungrouped$APMAdExposureReporter$setReportingEnabled$, (IMP *)&_logos_orig$_ungrouped$APMAdExposureReporter$setReportingEnabled$);}Class _logos_class$_ungrouped$APMMeasurement = objc_getClass("APMMeasurement"); _logos_superclass$_ungrouped$APMMeasurement = class_getSuperclass(_logos_class$_ungrouped$APMMeasurement); { _logos_register_hook(_logos_class$_ungrouped$APMMeasurement, @selector(reportSessionStartOnWorkerQueueWithTimestamp:appInBackground:), (IMP)&_logos_method$_ungrouped$APMMeasurement$reportSessionStartOnWorkerQueueWithTimestamp$appInBackground$, (IMP *)&_logos_orig$_ungrouped$APMMeasurement$reportSessionStartOnWorkerQueueWithTimestamp$appInBackground$);}Class _logos_class$_ungrouped$APMRemoteConfig = objc_getClass("APMRemoteConfig"); _logos_superclass$_ungrouped$APMRemoteConfig = class_getSuperclass(_logos_class$_ungrouped$APMRemoteConfig); { _logos_register_hook(_logos_class$_ungrouped$APMRemoteConfig, @selector(efficientEngagementReportingEnabled), (IMP)&_logos_method$_ungrouped$APMRemoteConfig$efficientEngagementReportingEnabled, (IMP *)&_logos_orig$_ungrouped$APMRemoteConfig$efficientEngagementReportingEnabled);}Class _logos_class$_ungrouped$APMScreenViewReporter = objc_getClass("APMScreenViewReporter"); _logos_superclass$_ungrouped$APMScreenViewReporter = class_getSuperclass(_logos_class$_ungrouped$APMScreenViewReporter); { _logos_register_hook(_logos_class$_ungrouped$APMScreenViewReporter, @selector(isAppActive), (IMP)&_logos_method$_ungrouped$APMScreenViewReporter$isAppActive, (IMP *)&_logos_orig$_ungrouped$APMScreenViewReporter$isAppActive);}Class _logos_class$_ungrouped$APMSearchAdReporter = objc_getClass("APMSearchAdReporter"); _logos_superclass$_ungrouped$APMSearchAdReporter = class_getSuperclass(_logos_class$_ungrouped$APMSearchAdReporter); { _logos_register_hook(_logos_class$_ungrouped$APMSearchAdReporter, @selector(logCampaignEventWithSearchAdCampaign:campaign:term:), (IMP)&_logos_method$_ungrouped$APMSearchAdReporter$logCampaignEventWithSearchAdCampaign$campaign$term$, (IMP *)&_logos_orig$_ungrouped$APMSearchAdReporter$logCampaignEventWithSearchAdCampaign$campaign$term$);}{ _logos_register_hook(_logos_class$_ungrouped$APMSearchAdReporter, @selector(isSearchAdReporterEnabled), (IMP)&_logos_method$_ungrouped$APMSearchAdReporter$isSearchAdReporterEnabled, (IMP *)&_logos_orig$_ungrouped$APMSearchAdReporter$isSearchAdReporterEnabled);}{ _logos_register_hook(_logos_class$_ungrouped$APMSearchAdReporter, @selector(setSearchAdReporterEnabled:), (IMP)&_logos_method$_ungrouped$APMSearchAdReporter$setSearchAdReporterEnabled$, (IMP *)&_logos_orig$_ungrouped$APMSearchAdReporter$setSearchAdReporterEnabled$);}Class _logos_class$_ungrouped$APMSessionReporter = objc_getClass("APMSessionReporter"); _logos_superclass$_ungrouped$APMSessionReporter = class_getSuperclass(_logos_class$_ungrouped$APMSessionReporter); { _logos_register_hook(_logos_class$_ungrouped$APMSessionReporter, @selector(setReportingEnabled:), (IMP)&_logos_method$_ungrouped$APMSessionReporter$setReportingEnabled$, (IMP *)&_logos_orig$_ungrouped$APMSessionReporter$setReportingEnabled$);}{ _logos_register_hook(_logos_class$_ungrouped$APMSessionReporter, @selector(shouldStartNewSession), (IMP)&_logos_method$_ungrouped$APMSessionReporter$shouldStartNewSession, (IMP *)&_logos_orig$_ungrouped$APMSessionReporter$shouldStartNewSession);}{ _logos_register_hook(_logos_class$_ungrouped$APMSessionReporter, @selector(isSessionExpired), (IMP)&_logos_method$_ungrouped$APMSessionReporter$isSessionExpired, (IMP *)&_logos_orig$_ungrouped$APMSessionReporter$isSessionExpired);}{ _logos_register_hook(_logos_class$_ungrouped$APMSessionReporter, @selector(extendSession), (IMP)&_logos_method$_ungrouped$APMSessionReporter$extendSession, (IMP *)&_logos_orig$_ungrouped$APMSessionReporter$extendSession);}{ _logos_register_hook(_logos_class$_ungrouped$APMSessionReporter, @selector(logEngagementEventAndReturnTimeWithScreen:isRedundant:), (IMP)&_logos_method$_ungrouped$APMSessionReporter$logEngagementEventAndReturnTimeWithScreen$isRedundant$, (IMP *)&_logos_orig$_ungrouped$APMSessionReporter$logEngagementEventAndReturnTimeWithScreen$isRedundant$);}{ _logos_register_hook(_logos_class$_ungrouped$APMSessionReporter, @selector(isReportingEnabled), (IMP)&_logos_method$_ungrouped$APMSessionReporter$isReportingEnabled, (IMP *)&_logos_orig$_ungrouped$APMSessionReporter$isReportingEnabled);}Class _logos_class$_ungrouped$GADNativeAdFeatures = objc_getClass("GADNativeAdFeatures"); _logos_superclass$_ungrouped$GADNativeAdFeatures = class_getSuperclass(_logos_class$_ungrouped$GADNativeAdFeatures); { _logos_register_hook(_logos_class$_ungrouped$GADNativeAdFeatures, @selector(publisherClickReportingAllowed), (IMP)&_logos_method$_ungrouped$GADNativeAdFeatures$publisherClickReportingAllowed, (IMP *)&_logos_orig$_ungrouped$GADNativeAdFeatures$publisherClickReportingAllowed);}{ _logos_register_hook(_logos_class$_ungrouped$GADNativeAdFeatures, @selector(publisherTouchReportingAllowed), (IMP)&_logos_method$_ungrouped$GADNativeAdFeatures$publisherTouchReportingAllowed, (IMP *)&_logos_orig$_ungrouped$GADNativeAdFeatures$publisherTouchReportingAllowed);}{ _logos_register_hook(_logos_class$_ungrouped$GADNativeAdFeatures, @selector(publisherImpressionReportingAllowed), (IMP)&_logos_method$_ungrouped$GADNativeAdFeatures$publisherImpressionReportingAllowed, (IMP *)&_logos_orig$_ungrouped$GADNativeAdFeatures$publisherImpressionReportingAllowed);}Class _logos_class$_ungrouped$GADActiveViewReporter = objc_getClass("GADActiveViewReporter"); _logos_superclass$_ungrouped$GADActiveViewReporter = class_getSuperclass(_logos_class$_ungrouped$GADActiveViewReporter); { _logos_register_hook(_logos_class$_ungrouped$GADActiveViewReporter, @selector(initWithAdFormat:activeViewConfiguration:reportingAdView:adEventContextIdentifier:analyticsLoggingEnabled:), (IMP)&_logos_method$_ungrouped$GADActiveViewReporter$initWithAdFormat$activeViewConfiguration$reportingAdView$adEventContextIdentifier$analyticsLoggingEnabled$, (IMP *)&_logos_orig$_ungrouped$GADActiveViewReporter$initWithAdFormat$activeViewConfiguration$reportingAdView$adEventContextIdentifier$analyticsLoggingEnabled$);}{ _logos_register_hook(_logos_class$_ungrouped$GADActiveViewReporter, @selector(setAdViewNeedsActiveViewUpdates:), (IMP)&_logos_method$_ungrouped$GADActiveViewReporter$setAdViewNeedsActiveViewUpdates$, (IMP *)&_logos_orig$_ungrouped$GADActiveViewReporter$setAdViewNeedsActiveViewUpdates$);}{ _logos_register_hook(_logos_class$_ungrouped$GADActiveViewReporter, @selector(setAdDidMakeImpression:), (IMP)&_logos_method$_ungrouped$GADActiveViewReporter$setAdDidMakeImpression$, (IMP *)&_logos_orig$_ungrouped$GADActiveViewReporter$setAdDidMakeImpression$);}{ _logos_register_hook(_logos_class$_ungrouped$GADActiveViewReporter, @selector(updateActiveViewStatusWithUnloaded:), (IMP)&_logos_method$_ungrouped$GADActiveViewReporter$updateActiveViewStatusWithUnloaded$, (IMP *)&_logos_orig$_ungrouped$GADActiveViewReporter$updateActiveViewStatusWithUnloaded$);}{ _logos_register_hook(_logos_class$_ungrouped$GADActiveViewReporter, @selector(activeViewStateWithUnloaded:userInfo:), (IMP)&_logos_method$_ungrouped$GADActiveViewReporter$activeViewStateWithUnloaded$userInfo$, (IMP *)&_logos_orig$_ungrouped$GADActiveViewReporter$activeViewStateWithUnloaded$userInfo$);}Class _logos_class$_ungrouped$GADNativeAd = objc_getClass("GADNativeAd"); _logos_superclass$_ungrouped$GADNativeAd = class_getSuperclass(_logos_class$_ungrouped$GADNativeAd); { _logos_register_hook(_logos_class$_ungrouped$GADNativeAd, @selector(reportIsMediaContentRendered:), (IMP)&_logos_method$_ungrouped$GADNativeAd$reportIsMediaContentRendered$, (IMP *)&_logos_orig$_ungrouped$GADNativeAd$reportIsMediaContentRendered$);}Class _logos_class$_ungrouped$GADSafeBrowsingReport = objc_getClass("GADSafeBrowsingReport"); _logos_superclass$_ungrouped$GADSafeBrowsingReport = class_getSuperclass(_logos_class$_ungrouped$GADSafeBrowsingReport); { _logos_register_hook(_logos_class$_ungrouped$GADSafeBrowsingReport, @selector(malicious), (IMP)&_logos_method$_ungrouped$GADSafeBrowsingReport$malicious, (IMP *)&_logos_orig$_ungrouped$GADSafeBrowsingReport$malicious);}Class _logos_class$_ungrouped$GADCustomNativeAd = objc_getClass("GADCustomNativeAd"); _logos_superclass$_ungrouped$GADCustomNativeAd = class_getSuperclass(_logos_class$_ungrouped$GADCustomNativeAd); { _logos_register_hook(_logos_class$_ungrouped$GADCustomNativeAd, @selector(reportIsMediaContentRendered:), (IMP)&_logos_method$_ungrouped$GADCustomNativeAd$reportIsMediaContentRendered$, (IMP *)&_logos_orig$_ungrouped$GADCustomNativeAd$reportIsMediaContentRendered$);}Class _logos_class$_ungrouped$VNGSendReportAdsOperation = objc_getClass("VNGSendReportAdsOperation"); _logos_superclass$_ungrouped$VNGSendReportAdsOperation = class_getSuperclass(_logos_class$_ungrouped$VNGSendReportAdsOperation); { _logos_register_hook(_logos_class$_ungrouped$VNGSendReportAdsOperation, @selector(setIsExecuting:), (IMP)&_logos_method$_ungrouped$VNGSendReportAdsOperation$setIsExecuting$, (IMP *)&_logos_orig$_ungrouped$VNGSendReportAdsOperation$setIsExecuting$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGSendReportAdsOperation, @selector(isFinished:), (IMP)&_logos_method$_ungrouped$VNGSendReportAdsOperation$isFinished$, (IMP *)&_logos_orig$_ungrouped$VNGSendReportAdsOperation$isFinished$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGSendReportAdsOperation, @selector(isFinished), (IMP)&_logos_method$_ungrouped$VNGSendReportAdsOperation$isFinished, (IMP *)&_logos_orig$_ungrouped$VNGSendReportAdsOperation$isFinished);}{ _logos_register_hook(_logos_class$_ungrouped$VNGSendReportAdsOperation, @selector(setIsFinished:), (IMP)&_logos_method$_ungrouped$VNGSendReportAdsOperation$setIsFinished$, (IMP *)&_logos_orig$_ungrouped$VNGSendReportAdsOperation$setIsFinished$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGSendReportAdsOperation, @selector(isExecuting), (IMP)&_logos_method$_ungrouped$VNGSendReportAdsOperation$isExecuting, (IMP *)&_logos_orig$_ungrouped$VNGSendReportAdsOperation$isExecuting);}Class _logos_class$_ungrouped$VungleLegacyAdReport = objc_getClass("VungleLegacyAdReport"); _logos_superclass$_ungrouped$VungleLegacyAdReport = class_getSuperclass(_logos_class$_ungrouped$VungleLegacyAdReport); { _logos_register_hook(_logos_class$_ungrouped$VungleLegacyAdReport, @selector(incentivized), (IMP)&_logos_method$_ungrouped$VungleLegacyAdReport$incentivized, (IMP *)&_logos_orig$_ungrouped$VungleLegacyAdReport$incentivized);}{ _logos_register_hook(_logos_class$_ungrouped$VungleLegacyAdReport, @selector(isAdExperienceSuccessful), (IMP)&_logos_method$_ungrouped$VungleLegacyAdReport$isAdExperienceSuccessful, (IMP *)&_logos_orig$_ungrouped$VungleLegacyAdReport$isAdExperienceSuccessful);}{ _logos_register_hook(_logos_class$_ungrouped$VungleLegacyAdReport, @selector(didTapCTAButton), (IMP)&_logos_method$_ungrouped$VungleLegacyAdReport$didTapCTAButton, (IMP *)&_logos_orig$_ungrouped$VungleLegacyAdReport$didTapCTAButton);}{ _logos_register_hook(_logos_class$_ungrouped$VungleLegacyAdReport, @selector(setDidTapCTAButton:), (IMP)&_logos_method$_ungrouped$VungleLegacyAdReport$setDidTapCTAButton$, (IMP *)&_logos_orig$_ungrouped$VungleLegacyAdReport$setDidTapCTAButton$);}{ _logos_register_hook(_logos_class$_ungrouped$VungleLegacyAdReport, @selector(internalIncentivized), (IMP)&_logos_method$_ungrouped$VungleLegacyAdReport$internalIncentivized, (IMP *)&_logos_orig$_ungrouped$VungleLegacyAdReport$internalIncentivized);}{ _logos_register_hook(_logos_class$_ungrouped$VungleLegacyAdReport, @selector(setInternalIncentivized:), (IMP)&_logos_method$_ungrouped$VungleLegacyAdReport$setInternalIncentivized$, (IMP *)&_logos_orig$_ungrouped$VungleLegacyAdReport$setInternalIncentivized$);}Class _logos_class$_ungrouped$VungleReportAdController = objc_getClass("VungleReportAdController"); _logos_superclass$_ungrouped$VungleReportAdController = class_getSuperclass(_logos_class$_ungrouped$VungleReportAdController); { _logos_register_hook(_logos_class$_ungrouped$VungleReportAdController, @selector(saveReport:error:), (IMP)&_logos_method$_ungrouped$VungleReportAdController$saveReport$error$, (IMP *)&_logos_orig$_ungrouped$VungleReportAdController$saveReport$error$);}{ _logos_register_hook(_logos_class$_ungrouped$VungleReportAdController, @selector(isSendingReports), (IMP)&_logos_method$_ungrouped$VungleReportAdController$isSendingReports, (IMP *)&_logos_orig$_ungrouped$VungleReportAdController$isSendingReports);}{ _logos_register_hook(_logos_class$_ungrouped$VungleReportAdController, @selector(setIsSendingReports:), (IMP)&_logos_method$_ungrouped$VungleReportAdController$setIsSendingReports$, (IMP *)&_logos_orig$_ungrouped$VungleReportAdController$setIsSendingReports$);}Class _logos_class$_ungrouped$VungleCustomMRAIDViewController = objc_getClass("VungleCustomMRAIDViewController"); _logos_superclass$_ungrouped$VungleCustomMRAIDViewController = class_getSuperclass(_logos_class$_ungrouped$VungleCustomMRAIDViewController); { _logos_register_hook(_logos_class$_ungrouped$VungleCustomMRAIDViewController, @selector(vungleMRAIDControllerSuccessfulView:reportable:), (IMP)&_logos_method$_ungrouped$VungleCustomMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$, (IMP *)&_logos_orig$_ungrouped$VungleCustomMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$);}Class _logos_class$_ungrouped$VungleConfigController = objc_getClass("VungleConfigController"); _logos_superclass$_ungrouped$VungleConfigController = class_getSuperclass(_logos_class$_ungrouped$VungleConfigController); { _logos_register_hook(_logos_class$_ungrouped$VungleConfigController, @selector(isReportIncentivizedEnabled), (IMP)&_logos_method$_ungrouped$VungleConfigController$isReportIncentivizedEnabled, (IMP *)&_logos_orig$_ungrouped$VungleConfigController$isReportIncentivizedEnabled);}{ _logos_register_hook(_logos_class$_ungrouped$VungleConfigController, @selector(reportIncentivizedEnabled), (IMP)&_logos_method$_ungrouped$VungleConfigController$reportIncentivizedEnabled, (IMP *)&_logos_orig$_ungrouped$VungleConfigController$reportIncentivizedEnabled);}{ _logos_register_hook(_logos_class$_ungrouped$VungleConfigController, @selector(setReportIncentivizedEnabled:), (IMP)&_logos_method$_ungrouped$VungleConfigController$setReportIncentivizedEnabled$, (IMP *)&_logos_orig$_ungrouped$VungleConfigController$setReportIncentivizedEnabled$);}Class _logos_class$_ungrouped$VungleInternalMRAIDViewController = objc_getClass("VungleInternalMRAIDViewController"); _logos_superclass$_ungrouped$VungleInternalMRAIDViewController = class_getSuperclass(_logos_class$_ungrouped$VungleInternalMRAIDViewController); { _logos_register_hook(_logos_class$_ungrouped$VungleInternalMRAIDViewController, @selector(vungleMRAIDControllerSuccessfulView:reportable:), (IMP)&_logos_method$_ungrouped$VungleInternalMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$, (IMP *)&_logos_orig$_ungrouped$VungleInternalMRAIDViewController$vungleMRAIDControllerSuccessfulView$reportable$);}Class _logos_class$_ungrouped$VungleMRAIDAdReport = objc_getClass("VungleMRAIDAdReport"); _logos_superclass$_ungrouped$VungleMRAIDAdReport = class_getSuperclass(_logos_class$_ungrouped$VungleMRAIDAdReport); { _logos_register_hook(_logos_class$_ungrouped$VungleMRAIDAdReport, @selector(isAdExperienceSuccessful), (IMP)&_logos_method$_ungrouped$VungleMRAIDAdReport$isAdExperienceSuccessful, (IMP *)&_logos_orig$_ungrouped$VungleMRAIDAdReport$isAdExperienceSuccessful);}{ _logos_register_hook(_logos_class$_ungrouped$VungleMRAIDAdReport, @selector(incentivized), (IMP)&_logos_method$_ungrouped$VungleMRAIDAdReport$incentivized, (IMP *)&_logos_orig$_ungrouped$VungleMRAIDAdReport$incentivized);}{ _logos_register_hook(_logos_class$_ungrouped$VungleMRAIDAdReport, @selector(internalIncentivized), (IMP)&_logos_method$_ungrouped$VungleMRAIDAdReport$internalIncentivized, (IMP *)&_logos_orig$_ungrouped$VungleMRAIDAdReport$internalIncentivized);}{ _logos_register_hook(_logos_class$_ungrouped$VungleMRAIDAdReport, @selector(setInternalIncentivized:), (IMP)&_logos_method$_ungrouped$VungleMRAIDAdReport$setInternalIncentivized$, (IMP *)&_logos_orig$_ungrouped$VungleMRAIDAdReport$setInternalIncentivized$);}Class _logos_class$_ungrouped$VungleAdReport = objc_getClass("VungleAdReport"); _logos_superclass$_ungrouped$VungleAdReport = class_getSuperclass(_logos_class$_ungrouped$VungleAdReport); { _logos_register_hook(_logos_class$_ungrouped$VungleAdReport, @selector(incentivized), (IMP)&_logos_method$_ungrouped$VungleAdReport$incentivized, (IMP *)&_logos_orig$_ungrouped$VungleAdReport$incentivized);}Class _logos_class$_ungrouped$QQApiInterface = objc_getClass("QQApiInterface"); Class _logos_metaclass$_ungrouped$QQApiInterface = object_getClass(_logos_class$_ungrouped$QQApiInterface); _logos_supermetaclass$_ungrouped$QQApiInterface = class_getSuperclass(_logos_metaclass$_ungrouped$QQApiInterface); { _logos_register_hook(_logos_metaclass$_ungrouped$QQApiInterface, @selector(reportSDKCheck:cmd:isQzone:), (IMP)&_logos_meta_method$_ungrouped$QQApiInterface$reportSDKCheck$cmd$isQzone$, (IMP *)&_logos_meta_orig$_ungrouped$QQApiInterface$reportSDKCheck$cmd$isQzone$);}Class _logos_class$_ungrouped$TXCVideoPreprocessorHT = objc_getClass("TXCVideoPreprocessorHT"); _logos_superclass$_ungrouped$TXCVideoPreprocessorHT = class_getSuperclass(_logos_class$_ungrouped$TXCVideoPreprocessorHT); { _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(beautyReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$beautyReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$beautyReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setBeautyReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setBeautyReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setBeautyReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(whiteReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$whiteReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$whiteReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setWhiteReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setWhiteReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setWhiteReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(ruddyReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$ruddyReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$ruddyReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setRuddyReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setRuddyReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setRuddyReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(eyeScaleReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$eyeScaleReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$eyeScaleReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setEyeScaleReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setEyeScaleReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setEyeScaleReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(faceSlimReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$faceSlimReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$faceSlimReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setFaceSlimReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setFaceSlimReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceSlimReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(faceBeautyReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$faceBeautyReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$faceBeautyReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setFaceBeautyReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setFaceBeautyReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceBeautyReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(faceVReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$faceVReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$faceVReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setFaceVReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setFaceVReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceVReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(chinReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$chinReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$chinReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setChinReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setChinReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setChinReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(faceShortReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$faceShortReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$faceShortReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setFaceShortReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setFaceShortReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFaceShortReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(noseSlimReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$noseSlimReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$noseSlimReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setNoseSlimReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setNoseSlimReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setNoseSlimReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(filterTypeReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$filterTypeReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$filterTypeReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setFilterTypeReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setFilterTypeReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFilterTypeReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(filterImageReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$filterImageReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$filterImageReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setFilterImageReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setFilterImageReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setFilterImageReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(greenReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$greenReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$greenReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setGreenReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setGreenReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setGreenReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(templateReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$templateReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$templateReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setTemplateReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setTemplateReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setTemplateReport$);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(watermarkReport), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$watermarkReport, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$watermarkReport);}{ _logos_register_hook(_logos_class$_ungrouped$TXCVideoPreprocessorHT, @selector(setWatermarkReport:), (IMP)&_logos_method$_ungrouped$TXCVideoPreprocessorHT$setWatermarkReport$, (IMP *)&_logos_orig$_ungrouped$TXCVideoPreprocessorHT$setWatermarkReport$);}Class _logos_class$_ungrouped$TXExtInfoHT = objc_getClass("TXExtInfoHT"); _logos_superclass$_ungrouped$TXExtInfoHT = class_getSuperclass(_logos_class$_ungrouped$TXExtInfoHT); { _logos_register_hook(_logos_class$_ungrouped$TXExtInfoHT, @selector(report_common), (IMP)&_logos_method$_ungrouped$TXExtInfoHT$report_common, (IMP *)&_logos_orig$_ungrouped$TXExtInfoHT$report_common);}{ _logos_register_hook(_logos_class$_ungrouped$TXExtInfoHT, @selector(setReport_common:), (IMP)&_logos_method$_ungrouped$TXExtInfoHT$setReport_common$, (IMP *)&_logos_orig$_ungrouped$TXExtInfoHT$setReport_common$);}{ _logos_register_hook(_logos_class$_ungrouped$TXExtInfoHT, @selector(report_status), (IMP)&_logos_method$_ungrouped$TXExtInfoHT$report_status, (IMP *)&_logos_orig$_ungrouped$TXExtInfoHT$report_status);}{ _logos_register_hook(_logos_class$_ungrouped$TXExtInfoHT, @selector(setReport_status:), (IMP)&_logos_method$_ungrouped$TXExtInfoHT$setReport_status$, (IMP *)&_logos_orig$_ungrouped$TXExtInfoHT$setReport_status$);}Class _logos_class$_ungrouped$BuglyAgentV2 = objc_getClass("BuglyAgentV2"); Class _logos_metaclass$_ungrouped$BuglyAgentV2 = object_getClass(_logos_class$_ungrouped$BuglyAgentV2); _logos_supermetaclass$_ungrouped$BuglyAgentV2 = class_getSuperclass(_logos_metaclass$_ungrouped$BuglyAgentV2); { _logos_register_hook(_logos_metaclass$_ungrouped$BuglyAgentV2, @selector(startWithAppId:inDebugMode:reportLogLevel:), (IMP)&_logos_meta_method$_ungrouped$BuglyAgentV2$startWithAppId$inDebugMode$reportLogLevel$, (IMP *)&_logos_meta_orig$_ungrouped$BuglyAgentV2$startWithAppId$inDebugMode$reportLogLevel$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$BuglyAgentV2, @selector(reportException:name:message:stackTrace:userInfo:terminateApp:), (IMP)&_logos_meta_method$_ungrouped$BuglyAgentV2$reportException$name$message$stackTrace$userInfo$terminateApp$, (IMP *)&_logos_meta_orig$_ungrouped$BuglyAgentV2$reportException$name$message$stackTrace$userInfo$terminateApp$);}Class _logos_class$_ungrouped$BuglyAgent = objc_getClass("BuglyAgent"); Class _logos_metaclass$_ungrouped$BuglyAgent = object_getClass(_logos_class$_ungrouped$BuglyAgent); _logos_supermetaclass$_ungrouped$BuglyAgent = class_getSuperclass(_logos_metaclass$_ungrouped$BuglyAgent); { _logos_register_hook(_logos_metaclass$_ungrouped$BuglyAgent, @selector(reportException:name:message:stackTrace:userInfo:terminateApp:), (IMP)&_logos_meta_method$_ungrouped$BuglyAgent$reportException$name$message$stackTrace$userInfo$terminateApp$, (IMP *)&_logos_meta_orig$_ungrouped$BuglyAgent$reportException$name$message$stackTrace$userInfo$terminateApp$);}Class _logos_class$_ungrouped$PLCrashReporter = objc_getClass("PLCrashReporter"); _logos_superclass$_ungrouped$PLCrashReporter = class_getSuperclass(_logos_class$_ungrouped$PLCrashReporter); { _logos_register_hook(_logos_class$_ungrouped$PLCrashReporter, @selector(populateCrashReportDirectoryAndReturnError:), (IMP)&_logos_method$_ungrouped$PLCrashReporter$populateCrashReportDirectoryAndReturnError$, (IMP *)&_logos_orig$_ungrouped$PLCrashReporter$populateCrashReportDirectoryAndReturnError$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashReporter, @selector(hasPendingCrashReport), (IMP)&_logos_method$_ungrouped$PLCrashReporter$hasPendingCrashReport, (IMP *)&_logos_orig$_ungrouped$PLCrashReporter$hasPendingCrashReport);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashReporter, @selector(purgePendingCrashReport), (IMP)&_logos_method$_ungrouped$PLCrashReporter$purgePendingCrashReport, (IMP *)&_logos_orig$_ungrouped$PLCrashReporter$purgePendingCrashReport);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashReporter, @selector(purgePendingCrashReportAndReturnError:), (IMP)&_logos_method$_ungrouped$PLCrashReporter$purgePendingCrashReportAndReturnError$, (IMP *)&_logos_orig$_ungrouped$PLCrashReporter$purgePendingCrashReportAndReturnError$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashReporter, @selector(enableCrashReporter), (IMP)&_logos_method$_ungrouped$PLCrashReporter$enableCrashReporter, (IMP *)&_logos_orig$_ungrouped$PLCrashReporter$enableCrashReporter);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashReporter, @selector(enableCrashReporterAndReturnError:), (IMP)&_logos_method$_ungrouped$PLCrashReporter$enableCrashReporterAndReturnError$, (IMP *)&_logos_orig$_ungrouped$PLCrashReporter$enableCrashReporterAndReturnError$);}Class _logos_class$_ungrouped$PLCrashReport = objc_getClass("PLCrashReport"); _logos_superclass$_ungrouped$PLCrashReport = class_getSuperclass(_logos_class$_ungrouped$PLCrashReport); { _logos_register_hook(_logos_class$_ungrouped$PLCrashReport, @selector(hasMachineInfo), (IMP)&_logos_method$_ungrouped$PLCrashReport$hasMachineInfo, (IMP *)&_logos_orig$_ungrouped$PLCrashReport$hasMachineInfo);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashReport, @selector(hasProcessInfo), (IMP)&_logos_method$_ungrouped$PLCrashReport$hasProcessInfo, (IMP *)&_logos_orig$_ungrouped$PLCrashReport$hasProcessInfo);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashReport, @selector(hasExceptionInfo), (IMP)&_logos_method$_ungrouped$PLCrashReport$hasExceptionInfo, (IMP *)&_logos_orig$_ungrouped$PLCrashReport$hasExceptionInfo);}Class _logos_class$_ungrouped$PLCrashReportThreadInfo = objc_getClass("PLCrashReportThreadInfo"); _logos_superclass$_ungrouped$PLCrashReportThreadInfo = class_getSuperclass(_logos_class$_ungrouped$PLCrashReportThreadInfo); { _logos_register_hook(_logos_class$_ungrouped$PLCrashReportThreadInfo, @selector(initWithThreadNumber:stackFrames:crashed:registers:), (IMP)&_logos_method$_ungrouped$PLCrashReportThreadInfo$initWithThreadNumber$stackFrames$crashed$registers$, (IMP *)&_logos_orig$_ungrouped$PLCrashReportThreadInfo$initWithThreadNumber$stackFrames$crashed$registers$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashReportThreadInfo, @selector(crashed), (IMP)&_logos_method$_ungrouped$PLCrashReportThreadInfo$crashed, (IMP *)&_logos_orig$_ungrouped$PLCrashReportThreadInfo$crashed);}Class _logos_class$_ungrouped$PLCrashReportBinaryImageInfo = objc_getClass("PLCrashReportBinaryImageInfo"); _logos_superclass$_ungrouped$PLCrashReportBinaryImageInfo = class_getSuperclass(_logos_class$_ungrouped$PLCrashReportBinaryImageInfo); { _logos_register_hook(_logos_class$_ungrouped$PLCrashReportBinaryImageInfo, @selector(hasImageUUID), (IMP)&_logos_method$_ungrouped$PLCrashReportBinaryImageInfo$hasImageUUID, (IMP *)&_logos_orig$_ungrouped$PLCrashReportBinaryImageInfo$hasImageUUID);}Class _logos_class$_ungrouped$PLCrashReportProcessInfo = objc_getClass("PLCrashReportProcessInfo"); _logos_superclass$_ungrouped$PLCrashReportProcessInfo = class_getSuperclass(_logos_class$_ungrouped$PLCrashReportProcessInfo); { _logos_register_hook(_logos_class$_ungrouped$PLCrashReportProcessInfo, @selector(initWithProcessName:processID:processPath:processStartTime:parentProcessName:parentProcessID:native:), (IMP)&_logos_method$_ungrouped$PLCrashReportProcessInfo$initWithProcessName$processID$processPath$processStartTime$parentProcessName$parentProcessID$native$, (IMP *)&_logos_orig$_ungrouped$PLCrashReportProcessInfo$initWithProcessName$processID$processPath$processStartTime$parentProcessName$parentProcessID$native$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashReportProcessInfo, @selector(native), (IMP)&_logos_method$_ungrouped$PLCrashReportProcessInfo$native, (IMP *)&_logos_orig$_ungrouped$PLCrashReportProcessInfo$native);}Class _logos_class$_ungrouped$PLCrashReportTextFormatter = objc_getClass("PLCrashReportTextFormatter"); Class _logos_metaclass$_ungrouped$PLCrashReportTextFormatter = object_getClass(_logos_class$_ungrouped$PLCrashReportTextFormatter); _logos_supermetaclass$_ungrouped$PLCrashReportTextFormatter = class_getSuperclass(_logos_metaclass$_ungrouped$PLCrashReportTextFormatter); { _logos_register_hook(_logos_metaclass$_ungrouped$PLCrashReportTextFormatter, @selector(formatStackFrame:frameIndex:report:lp64:), (IMP)&_logos_meta_method$_ungrouped$PLCrashReportTextFormatter$formatStackFrame$frameIndex$report$lp64$, (IMP *)&_logos_meta_orig$_ungrouped$PLCrashReportTextFormatter$formatStackFrame$frameIndex$report$lp64$);}Class _logos_class$_ungrouped$FBAdConfigManager = objc_getClass("FBAdConfigManager"); _logos_superclass$_ungrouped$FBAdConfigManager = class_getSuperclass(_logos_class$_ungrouped$FBAdConfigManager); { _logos_register_hook(_logos_class$_ungrouped$FBAdConfigManager, @selector(isInlineAdReportingFlowEnabled), (IMP)&_logos_method$_ungrouped$FBAdConfigManager$isInlineAdReportingFlowEnabled, (IMP *)&_logos_orig$_ungrouped$FBAdConfigManager$isInlineAdReportingFlowEnabled);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdConfigManager, @selector(shouldKillCrashReporting), (IMP)&_logos_method$_ungrouped$FBAdConfigManager$shouldKillCrashReporting, (IMP *)&_logos_orig$_ungrouped$FBAdConfigManager$shouldKillCrashReporting);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdConfigManager, @selector(isCrashReportingEnabledForAN), (IMP)&_logos_method$_ungrouped$FBAdConfigManager$isCrashReportingEnabledForAN, (IMP *)&_logos_orig$_ungrouped$FBAdConfigManager$isCrashReportingEnabledForAN);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdConfigManager, @selector(isCrashReportingEnabledForBK), (IMP)&_logos_method$_ungrouped$FBAdConfigManager$isCrashReportingEnabledForBK, (IMP *)&_logos_orig$_ungrouped$FBAdConfigManager$isCrashReportingEnabledForBK);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdConfigManager, @selector(woNativeSignalsJailbrokenSignalEnabled), (IMP)&_logos_method$_ungrouped$FBAdConfigManager$woNativeSignalsJailbrokenSignalEnabled, (IMP *)&_logos_orig$_ungrouped$FBAdConfigManager$woNativeSignalsJailbrokenSignalEnabled);}Class _logos_class$_ungrouped$FBAdCrashManagerImpl = objc_getClass("FBAdCrashManagerImpl"); _logos_superclass$_ungrouped$FBAdCrashManagerImpl = class_getSuperclass(_logos_class$_ungrouped$FBAdCrashManagerImpl); { _logos_register_hook(_logos_class$_ungrouped$FBAdCrashManagerImpl, @selector(isCrashReportingDisabled), (IMP)&_logos_method$_ungrouped$FBAdCrashManagerImpl$isCrashReportingDisabled, (IMP *)&_logos_orig$_ungrouped$FBAdCrashManagerImpl$isCrashReportingDisabled);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdCrashManagerImpl, @selector(setCrashReportingDisabled:), (IMP)&_logos_method$_ungrouped$FBAdCrashManagerImpl$setCrashReportingDisabled$, (IMP *)&_logos_orig$_ungrouped$FBAdCrashManagerImpl$setCrashReportingDisabled$);}Class _logos_class$_ungrouped$FBAdReportingConfig = objc_getClass("FBAdReportingConfig"); Class _logos_metaclass$_ungrouped$FBAdReportingConfig = object_getClass(_logos_class$_ungrouped$FBAdReportingConfig); _logos_superclass$_ungrouped$FBAdReportingConfig = class_getSuperclass(_logos_class$_ungrouped$FBAdReportingConfig); _logos_supermetaclass$_ungrouped$FBAdReportingConfig = class_getSuperclass(_logos_metaclass$_ungrouped$FBAdReportingConfig); { _logos_register_hook(_logos_class$_ungrouped$FBAdReportingConfig, @selector(isLoaded), (IMP)&_logos_method$_ungrouped$FBAdReportingConfig$isLoaded, (IMP *)&_logos_orig$_ungrouped$FBAdReportingConfig$isLoaded);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdReportingConfig, @selector(isReadyForFullscreen), (IMP)&_logos_method$_ungrouped$FBAdReportingConfig$isReadyForFullscreen, (IMP *)&_logos_orig$_ungrouped$FBAdReportingConfig$isReadyForFullscreen);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdReportingConfig, @selector(isReadyForNonFullscreen), (IMP)&_logos_method$_ungrouped$FBAdReportingConfig$isReadyForNonFullscreen, (IMP *)&_logos_orig$_ungrouped$FBAdReportingConfig$isReadyForNonFullscreen);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdReportingConfig, @selector(initWithAsyncLoad:), (IMP)&_logos_method$_ungrouped$FBAdReportingConfig$initWithAsyncLoad$, (IMP *)&_logos_orig$_ungrouped$FBAdReportingConfig$initWithAsyncLoad$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdReportingConfig, @selector(validateConfigDict:), (IMP)&_logos_method$_ungrouped$FBAdReportingConfig$validateConfigDict$, (IMP *)&_logos_orig$_ungrouped$FBAdReportingConfig$validateConfigDict$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdReportingConfig, @selector(loadFromDiskAsync:), (IMP)&_logos_method$_ungrouped$FBAdReportingConfig$loadFromDiskAsync$, (IMP *)&_logos_orig$_ungrouped$FBAdReportingConfig$loadFromDiskAsync$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdReportingConfig, @selector(saveAsync:), (IMP)&_logos_method$_ungrouped$FBAdReportingConfig$saveAsync$, (IMP *)&_logos_orig$_ungrouped$FBAdReportingConfig$saveAsync$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$FBAdReportingConfig, @selector(sharedConfigAsync:), (IMP)&_logos_meta_method$_ungrouped$FBAdReportingConfig$sharedConfigAsync$, (IMP *)&_logos_meta_orig$_ungrouped$FBAdReportingConfig$sharedConfigAsync$);}Class _logos_class$_ungrouped$FBAdReportingCoordinator = objc_getClass("FBAdReportingCoordinator"); Class _logos_metaclass$_ungrouped$FBAdReportingCoordinator = object_getClass(_logos_class$_ungrouped$FBAdReportingCoordinator); _logos_supermetaclass$_ungrouped$FBAdReportingCoordinator = class_getSuperclass(_logos_metaclass$_ungrouped$FBAdReportingCoordinator); { _logos_register_hook(_logos_metaclass$_ungrouped$FBAdReportingCoordinator, @selector(canPresentInView:layoutType:), (IMP)&_logos_meta_method$_ungrouped$FBAdReportingCoordinator$canPresentInView$layoutType$, (IMP *)&_logos_meta_orig$_ungrouped$FBAdReportingCoordinator$canPresentInView$layoutType$);}Class _logos_class$_ungrouped$FBAdReportingOptionCollectionViewCell = objc_getClass("FBAdReportingOptionCollectionViewCell"); _logos_superclass$_ungrouped$FBAdReportingOptionCollectionViewCell = class_getSuperclass(_logos_class$_ungrouped$FBAdReportingOptionCollectionViewCell); { _logos_register_hook(_logos_class$_ungrouped$FBAdReportingOptionCollectionViewCell, @selector(setSelected:), (IMP)&_logos_method$_ungrouped$FBAdReportingOptionCollectionViewCell$setSelected$, (IMP *)&_logos_orig$_ungrouped$FBAdReportingOptionCollectionViewCell$setSelected$);}Class _logos_class$_ungrouped$FBAdDSLViewController = objc_getClass("FBAdDSLViewController"); _logos_superclass$_ungrouped$FBAdDSLViewController = class_getSuperclass(_logos_class$_ungrouped$FBAdDSLViewController); { _logos_register_hook(_logos_class$_ungrouped$FBAdDSLViewController, @selector(dslReportedCriticalError), (IMP)&_logos_method$_ungrouped$FBAdDSLViewController$dslReportedCriticalError, (IMP *)&_logos_orig$_ungrouped$FBAdDSLViewController$dslReportedCriticalError);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdDSLViewController, @selector(setDslReportedCriticalError:), (IMP)&_logos_method$_ungrouped$FBAdDSLViewController$setDslReportedCriticalError$, (IMP *)&_logos_orig$_ungrouped$FBAdDSLViewController$setDslReportedCriticalError$);}Class _logos_class$_ungrouped$BLYDevice = objc_getClass("BLYDevice"); Class _logos_metaclass$_ungrouped$BLYDevice = object_getClass(_logos_class$_ungrouped$BLYDevice); _logos_superclass$_ungrouped$BLYDevice = class_getSuperclass(_logos_class$_ungrouped$BLYDevice); _logos_supermetaclass$_ungrouped$BLYDevice = class_getSuperclass(_logos_metaclass$_ungrouped$BLYDevice); { _logos_register_hook(_logos_class$_ungrouped$BLYDevice, @selector(setJailbrokenStatus:), (IMP)&_logos_method$_ungrouped$BLYDevice$setJailbrokenStatus$, (IMP *)&_logos_orig$_ungrouped$BLYDevice$setJailbrokenStatus$);}{ _logos_register_hook(_logos_class$_ungrouped$BLYDevice, @selector(jailbrokenStatus), (IMP)&_logos_method$_ungrouped$BLYDevice$jailbrokenStatus, (IMP *)&_logos_orig$_ungrouped$BLYDevice$jailbrokenStatus);}{ _logos_register_hook(_logos_class$_ungrouped$BLYDevice, @selector(isJailbroken), (IMP)&_logos_method$_ungrouped$BLYDevice$isJailbroken, (IMP *)&_logos_orig$_ungrouped$BLYDevice$isJailbroken);}{ _logos_register_hook(_logos_metaclass$_ungrouped$BLYDevice, @selector(isJailBreak), (IMP)&_logos_meta_method$_ungrouped$BLYDevice$isJailBreak, (IMP *)&_logos_meta_orig$_ungrouped$BLYDevice$isJailBreak);}Class _logos_class$_ungrouped$FBAdBotDetector = objc_getClass("FBAdBotDetector"); _logos_superclass$_ungrouped$FBAdBotDetector = class_getSuperclass(_logos_class$_ungrouped$FBAdBotDetector); { _logos_register_hook(_logos_class$_ungrouped$FBAdBotDetector, @selector(isNativeSignalJailbrokenEnabled), (IMP)&_logos_method$_ungrouped$FBAdBotDetector$isNativeSignalJailbrokenEnabled, (IMP *)&_logos_orig$_ungrouped$FBAdBotDetector$isNativeSignalJailbrokenEnabled);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBotDetector, @selector(isJailBrokenDevice), (IMP)&_logos_method$_ungrouped$FBAdBotDetector$isJailBrokenDevice, (IMP *)&_logos_orig$_ungrouped$FBAdBotDetector$isJailBrokenDevice);}} }
