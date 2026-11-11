#import <UIKit/UIKit.h>






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
@class QCloudURLSessionTaskData; @class GNLAsynchronousOperation; @class XCDURLGETOperation; @class QCloudCOSXMlResumeUploadInfo; @class FBAdBrowserSessionData; @class ADJRequestHandler; @class VKAccessToken; @class AFXMLParserResponseSerializer; @class MidasSdkIapAdapter; @class FBSDKGraphRequestConnection; @class AWSURLSessionManager; @class GSDKDetectPort; @class QCloudXMLDictionaryParser; @class GSDKUdpDetect; @class RSTTAPIHTTPSessionDelegate; @class ADJSessionResponseData; @class GSDKUdpTest; @class QCloudCOSXMLService; @class QCloudCOSXMLDownloadObjectRequest; @class PLCrashMachExceptionPortSet; @class QCloudCOSXMLUploadObjectRequest; @class AFURLSessionManager; @class TVCReportInfo; @class VNGMoatWebTracker; @class AVChunkedURLRequest; @class TVCClient; @class MidasAddrHelper; @class PLCrashMachExceptionPort; @class VNGMoatAnalytics; @class VKAccessTokenMutable; @class GADResourceBuffer; @class FLVDownloaderHT; @class PLCrashMachExceptionServer; @class TXMediaPublishParam; @class XCDYouTubeDashManifestXML; @class QCloudCOSXMLEndPoint; @class GADURLSessionTransactionMonitor; @class QCloudQCloudCOSXMLLoad; @class VNGMoatBaseTracker; @class QCloudCOSXMLCopyObjectRequest; @class GULURLSessionDataResponse; @class RCNConfigFetch; @class GULNetworkURLSession; @class TVCConfig; @class TXPublishParam;
static Class _logos_superclass$_ungrouped$QCloudXMLDictionaryParser; static void (*_logos_orig$_ungrouped$QCloudXMLDictionaryParser$parser$foundComment$)(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$QCloudXMLDictionaryParser$root)(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setRoot$)(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudXMLDictionaryParser$text)(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setText$)(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setStack$)(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudXMLDictionaryParser$stack)(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudXMLDictionaryParser$addText$)(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$QCloudXMLDictionaryParser$trimWhiteSpace)(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$QCloudCOSXMlResumeUploadInfo; static id (*_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$object)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$bucket)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$localPath)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setBucket$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setLocalPath$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$QCloudCOSXMLEndPoint; static id (*_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$serverURLWithBucket$appID$regionName$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST, SEL, id, id, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$formattedBucket$withAPPID$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST, SEL, id, id);static bool (*_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$isPrefixURL)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setIsPrefixURL$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST, SEL, bool);static QCloudCOSXMLEndPoint*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$init)(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLEndPoint*, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setRegionName$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setSuffix$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$suffix)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$AFXMLParserResponseSerializer; static Class _logos_supermetaclass$_ungrouped$AFXMLParserResponseSerializer; static id (*_logos_meta_orig$_ungrouped$AFXMLParserResponseSerializer$serializer)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFXMLParserResponseSerializer$responseObjectForResponse$data$error$)(_LOGOS_SELF_TYPE_NORMAL AFXMLParserResponseSerializer* _LOGOS_SELF_CONST, SEL, id, id, id*);static AFXMLParserResponseSerializer*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$AFXMLParserResponseSerializer$init)(_LOGOS_SELF_TYPE_INIT AFXMLParserResponseSerializer*, SEL);static Class _logos_superclass$_ungrouped$XCDYouTubeDashManifestXML; static id (*_logos_orig$_ungrouped$XCDYouTubeDashManifestXML$streamURLs)(_LOGOS_SELF_TYPE_NORMAL XCDYouTubeDashManifestXML* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$XCDYouTubeDashManifestXML$XMLString)(_LOGOS_SELF_TYPE_NORMAL XCDYouTubeDashManifestXML* _LOGOS_SELF_CONST, SEL);static XCDYouTubeDashManifestXML*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$XCDYouTubeDashManifestXML$initWithXMLString$)(_LOGOS_SELF_TYPE_INIT XCDYouTubeDashManifestXML*, SEL, id);static Class _logos_supermetaclass$_ungrouped$QCloudQCloudCOSXMLLoad; static void (*_logos_meta_orig$_ungrouped$QCloudQCloudCOSXMLLoad$load)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$QCloudCOSXMLService; static Class _logos_supermetaclass$_ungrouped$QCloudCOSXMLService; static id (*_logos_meta_orig$_ungrouped$QCloudCOSXMLService$registerCOSXMLWithConfiguration$withKey$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_meta_orig$_ungrouped$QCloudCOSXMLService$defaultCOSXML)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static bool (*_logos_meta_orig$_ungrouped$QCloudCOSXMLService$hasServiceForKey$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static id (*_logos_meta_orig$_ungrouped$QCloudCOSXMLService$registerDefaultCOSXMLWithConfiguration$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static id (*_logos_meta_orig$_ungrouped$QCloudCOSXMLService$cosxmlServiceForKey$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static void (*_logos_meta_orig$_ungrouped$QCloudCOSXMLService$removeCOSXMLWithKey$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static void (*_logos_meta_orig$_ungrouped$QCloudCOSXMLService$changeImplementation)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static id (*_logos_meta_orig$_ungrouped$QCloudCOSXMLService$Quality_registerDefaultCOSXMLWithConfiguration$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static void (*_logos_meta_orig$_ungrouped$QCloudCOSXMLService$initMTA)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_meta_orig$_ungrouped$QCloudCOSXMLService$load)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$HeadObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$InitiateMultipartUpload$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$UploadPartCopy$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectCopy$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$CompleteMultipartUpload$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLService$getURLWithBucket$object$withAuthorization$regionName$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id, id, bool, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$loadAuthorizationForBiz$urlRequest$compelete$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutWatermarkObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetRecognitionObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetFilePreviewObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetGenerateSnapshot$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$CloudDataOperations$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectQRCodeRecognition$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$CIQRCodeRecognition$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$CIPicRecognition$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$HeadBucket$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketIntelligentTiering$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketIntelligentTiering$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetObjectTagging$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PuObjectTagging$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetObjectACL$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectACL$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteMultipleObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$OptionsObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetService$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucket$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucket$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucket$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLocation$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$ListBucketMultipartUploads$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketACL$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketACL$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketCORS$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketLifecycle$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLifecycle$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketLifeCycle$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketCORS$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketCORS$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketVersioning$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketVersioning$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketAccelerate$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketAccelerate$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketRelication$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketReplication$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PostObjectRestore$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$ListObjectVersions$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketDomain$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketDomain$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketWebsite$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketWebsite$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketWebsite$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketTagging$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketReplication$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketTagging$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketTagging$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$SelectObjectContent$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketLogging$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLogging$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketInventory$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketInventory$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketInventory$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$getPresignedURL$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$QCloudCOSXMLService$doesBucketExist$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$QCloudCOSXMLService$doesObjectExistWithBucket$object$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$deleteObjectWithBucket$object$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$ListBucketInventory$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$deleteVersionWithBucket$object$version$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$changeObjectStorageClassWithBucket$object$storageClass$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id, id, long long);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$updateObjectMedaWithBucket$object$meta$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$ListMultipart$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$PutObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$UploadPart$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLService$AbortMultipfartUpload$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL, id);static QCloudCOSXMLService*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$QCloudCOSXMLService$initWithConfiguration$)(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLService*, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLService$sessionManager)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest; static Class _logos_supermetaclass$_ungrouped$QCloudCOSXMLUploadObjectRequest; static id (*_logos_meta_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelContainerPropertyGenericClass)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static id (*_logos_meta_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelPropertyBlacklist)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static id (*_logos_meta_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$requestWithRequestData$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelCustomWillTransformFromDictionary$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadId)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadId$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$requstMetricArray)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$grantRead)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantRead$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$grantFullControl)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantFullControl$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$requstsMetricArrayBlock)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$markPartFinish$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadParts)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$fakeStart)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstsMetricArrayBlock$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadParts$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstMetricArray$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$enableMD5Verification)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableMD5Verification$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$requestCacheArray)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyption)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequestCacheArray$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$queueSource)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setQueueSource$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$getFileLocalUploadParts)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$finishUpload$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadOffsetBodys$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$getContinueInfo$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static unsigned long long (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$dataContentLength)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$continueMultiUpload$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$resumeUpload)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$startSimpleUpload)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setDataContentLength$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, unsigned long long);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$startMultiUpload)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static double (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadPriority)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static long long (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$trafficLimit)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTrafficLimit$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, long long);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentDisposition)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentDisposition$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$expect)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpect$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentSHA1)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentSHA1$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static QCloudCOSXMLUploadObjectRequest*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$initMultipleUploadFinishBlock)(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLUploadObjectRequest*, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$productingReqsumeData$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id*);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadMultiParts$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$appendUploadBytesSent$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, long long);static unsigned long long (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$sliceSize)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$tranformErrorToResume$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$enableVerification)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadBodyIsCompleted)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$shouldRetry$error$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$cancelByProductingResumeData$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id*);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithKMSCustomKey$jsonStr$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setSliceSize$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, unsigned long long);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadPriority$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, double);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadid)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadid$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setInitMultipleUploadFinishBlock$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableVerification$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadBodyIsCompleted$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, bool);static QCloudCOSXMLUploadObjectRequest*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$init)(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLUploadObjectRequest*, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$dealloc)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$object)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setAccessControlList$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$cancel)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentType)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentType$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static long long (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$storageClass)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setStorageClass$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, long long);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$bucket)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBody$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$body)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$cacheControl)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCacheControl$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$customHeaders)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$onError$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRegionName$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCustomHeaders$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$regionName)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBucket$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpires$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$expires)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setFinishBlock$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static long long (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$totalBytesSent)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTotalBytesSent$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, long long);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$accessControlList)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$aborted)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$retryHandler)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRetryHandler$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTransferManager$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$transferManager)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$abort$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest; static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfModifiedSince$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$fakeStart)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$resumableDownload)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$startGetObject)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$resumableTaskFile)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$downloadingURL)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableTaskFile$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setLocalCacheDownloadOffset$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, long long);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setDownloadingURL$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static long long (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$localCacheDownloadOffset)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$enableMD5Verification)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setEnableMD5Verification$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentType$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentLanguage)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentLanguage$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentExpires)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentExpires$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseCacheControl)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseCacheControl$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentDisposition)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentDisposition$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentEncoding)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifModifiedSince)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifUnmodifiedModifiedSince)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifMatch)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfMatch$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentEncoding$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfUnmodifiedModifiedSince$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifNoneMatch)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfNoneMatch$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$requestCacheArray)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCOSServerSideEncyption)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableDownload$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRequestCacheArray$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$queueSource)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setQueueSource$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static QCloudCOSXMLDownloadObjectRequest*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$init)(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLDownloadObjectRequest*, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$dealloc)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$object)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$cancel)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$range)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$bucket)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRange$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCustomHeaders$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$customHeaders)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRegionName$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$regionName)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setBucket$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentType)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setTransferManager$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$transferManager)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest; static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceBucket)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceRegion)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfModifiedSince)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$requstMetricArray)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSliceCount$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, long long);static long long (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sliceCount)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$multipleCopy)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$simpleCopy)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$tempService)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfMatch)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfMatch$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfNoneMatch)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfNoneMatch$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfModifiedSince$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfUnmodifiedSince)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfUnmodifiedSince$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantRead)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantRead$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantWrite)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantWrite$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantFullControl)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantFullControl$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$requstsMetricArrayBlock)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceAPPID)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceObjectVersionID)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadCopyParts)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$finishUploadParts)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$copySourceRangeWithFirst$last$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, long long, long long);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$markPartFinish$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$copyProgressBlock)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadParts)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$fakeStart)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCopyProgressBlock$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCOSServerSideEncyptionWithCustomerKey$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceBucket$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceAPPID$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceRegion$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObjectVersionID$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$metadataDirective)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setMetadataDirective$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstsMetricArrayBlock$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadParts$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstMetricArray$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static QCloudCOSXMLCopyObjectRequest*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$init)(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLCopyObjectRequest*, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$object)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setAccessControlList$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$cancel)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static long long (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$fileSize)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static long long (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$storageClass)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setStorageClass$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, long long);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$bucket)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFileSize$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, long long);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceObject)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCustomHeaders$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$customHeaders)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRegionName$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$regionName)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$lastModified)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setLastModified$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadID)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadID$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setBucket$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFinishBlock$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObject$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$accessControlList)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$dispatchSource)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setDispatchSource$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setTransferManager$)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$transferManager)(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$TVCReportInfo; static void (*_logos_orig$_ungrouped$TVCReportInfo$setFileId$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, id);static int (*_logos_orig$_ungrouped$TVCReportInfo$reqType)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCReportInfo$setReqType$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, int);static id (*_logos_orig$_ungrouped$TVCReportInfo$errMsg)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCReportInfo$setErrMsg$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCReportInfo$setReqKey$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCReportInfo$setReqTime$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, unsigned long long);static unsigned long long (*_logos_orig$_ungrouped$TVCReportInfo$reqTime)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCReportInfo$reqKey)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCReportInfo$setUseCosAcc$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, int);static int (*_logos_orig$_ungrouped$TVCReportInfo$useCosAcc)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCReportInfo$setErrCode$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, int);static void (*_logos_orig$_ungrouped$TVCReportInfo$setReqTimeCost$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, unsigned long long);static void (*_logos_orig$_ungrouped$TVCReportInfo$setReqServerIp$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCReportInfo$setReportId$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCReportInfo$setVodSessionKey$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCReportInfo$setVodErrCode$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, int);static void (*_logos_orig$_ungrouped$TVCReportInfo$setCosErrCode$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCReportInfo$setCosRegion$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCReportInfo$setUseHttpDNS$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, int);static void (*_logos_orig$_ungrouped$TVCReportInfo$setTcpConnTimeCost$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, unsigned long long);static int (*_logos_orig$_ungrouped$TVCReportInfo$errCode)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_orig$_ungrouped$TVCReportInfo$reqTimeCost)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCReportInfo$reqServerIp)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCReportInfo$reportId)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCReportInfo$vodSessionKey)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCReportInfo$setRecvRespTimeCost$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, unsigned long long);static int (*_logos_orig$_ungrouped$TVCReportInfo$vodErrCode)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCReportInfo$cosErrCode)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$TVCReportInfo$useHttpDNS)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_orig$_ungrouped$TVCReportInfo$tcpConnTimeCost)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_orig$_ungrouped$TVCReportInfo$recvRespTimeCost)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCReportInfo$cosRegion)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$TVCReportInfo$reporting)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCReportInfo$setReporting$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, bool);static TVCReportInfo*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$TVCReportInfo$init)(_LOGOS_SELF_TYPE_INIT TVCReportInfo*, SEL);static unsigned long long (*_logos_orig$_ungrouped$TVCReportInfo$fileSize)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCReportInfo$fileType)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCReportInfo$requestId)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$TVCReportInfo$retryCount)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCReportInfo$setRetryCount$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, int);static void (*_logos_orig$_ungrouped$TVCReportInfo$setFileType$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCReportInfo$setFileSize$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, unsigned long long);static unsigned long long (*_logos_orig$_ungrouped$TVCReportInfo$appId)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCReportInfo$fileName)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCReportInfo$setFileName$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCReportInfo$setAppId$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, unsigned long long);static void (*_logos_orig$_ungrouped$TVCReportInfo$setRequestId$)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$TVCReportInfo$fileId)(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$TVCClient; static Class _logos_supermetaclass$_ungrouped$TVCClient; static id (*_logos_meta_orig$_ungrouped$TVCClient$getVersion)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCClient$signatureWithFields$request$urlRequest$compelete$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$TVCClient$setReqKey$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$setServerIP$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$setReportInfo$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$setVirtualPercent$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, int);static void (*_logos_orig$_ungrouped$TVCClient$setRealProgressFired$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$TVCClient$checkConfig$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$TVCClient$checkParam$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$TVCClient$getFileType$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$TVCClient$getFileName$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$txReport$errCode$vodErrCode$cosErrCode$errInfo$reqTime$reqTimeCost$reqKey$appId$fileSize$fileType$fileName$sessionKey$fileId$cosRegion$useCosAcc$cosRequestId$cosTcpConnTimeCost$cosRecvRespTimeCost$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, int, int, int, id, id, long long, long long, id, id, long long, id, id, id, id, id, int, id, long long, long long);static id (*_logos_orig$_ungrouped$TVCClient$getSessionFromFilepath$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$applyUploadUGC$withVodSessionKey$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$TVCClient$uploadRequest)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCClient$queryIpWithDomain$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$postVirtualProgress$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$getCosInitParam$withVodSessionKey$withDomain$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id, id);static id (*_logos_orig$_ungrouped$TVCClient$getCosInitURLRequest$withContext$withVodSessionKey$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$TVCClient$notifyResult$resp$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$TVCClient$setSession$resumeData$lastModTime$withFilePath$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id, unsigned long long, id);static id (*_logos_orig$_ungrouped$TVCClient$reqKey)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCClient$parseInitRsp$withContex$withVodSessionKey$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$TVCClient$setupCOSXMLShareService$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$commitCosUpload$withResumeUpload$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, bool);static void (*_logos_orig$_ungrouped$TVCClient$setSession$resumeData$lastModTime$coverLastModTime$withFilePath$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id, unsigned long long, unsigned long long, id);static void (*_logos_orig$_ungrouped$TVCClient$setUploadRequest$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$TVCClient$realProgressFired)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCClient$notifyCosUploadEnd$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$completeUpload$withDomain$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$TVCClient$getCosEndURLRequest$withContext$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$TVCClient$parseFinishRsp$withContex$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$TVCClient$txReportDAU)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCClient$reportInfo)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCClient$serverIP)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$TVCClient$virtualPercent)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCClient$uploadVideo$result$progress$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id, id);static bool (*_logos_orig$_ungrouped$TVCClient$cancleUploadVideo)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCClient$getStatusInfo)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCClient$dealloc)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCClient$config)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCClient$timer)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TVCClient$getLastComponent$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$setTimer$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$setConfig$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$TVCClient$session)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCClient$setSession$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$URLSession$task$didFinishCollectingMetrics$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id, id, id);static id (*_logos_orig$_ungrouped$TVCClient$creator)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCClient$setCreator$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCClient$setAppId$)(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST, SEL, int);static TVCClient*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$TVCClient$initWithConfig$)(_LOGOS_SELF_TYPE_INIT TVCClient*, SEL, id);static Class _logos_superclass$_ungrouped$GSDKUdpTest; static Class _logos_supermetaclass$_ungrouped$GSDKUdpTest; static id (*_logos_meta_orig$_ungrouped$GSDKUdpTest$sharedInstance)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKUdpTest$setMSocketfd$)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL, int);static int (*_logos_orig$_ungrouped$GSDKUdpTest$mSocketfd)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKUdpTest$stopSpeedTest)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$GSDKUdpTest$getV6SpeedSock)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$GSDKUdpTest$getSpeedSock)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKUdpTest$stopUDPTimer)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKUdpTest$setMUdpDotsList$)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GSDKUdpTest$mUdpDotsList)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKUdpTest$setMLost$)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL, int);static void (*_logos_orig$_ungrouped$GSDKUdpTest$setMTag$)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL, unsigned int);static void (*_logos_orig$_ungrouped$GSDKUdpTest$setMPcntx00_num$)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL, int);static id (*_logos_orig$_ungrouped$GSDKUdpTest$getSendData)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$GSDKUdpTest$mPcntx00_num)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$GSDKUdpTest$mLost)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$GSDKUdpTest$Heavy$)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GSDKUdpTest$startUdpTest$Sport$Pcntx00$Frequency$)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL, id, int, int, double);static id (*_logos_orig$_ungrouped$GSDKUdpTest$resultUDPTest)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GSDKUdpTest$resultUDPTest_noCollect)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GSDKUdpTest$pingDots)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKUdpTest$dealloc)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKUdpTest$setTimerSource$)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GSDKUdpTest$timerSource)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static unsigned int (*_logos_orig$_ungrouped$GSDKUdpTest$mTag)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$GSDKUdpDetect; static Class _logos_supermetaclass$_ungrouped$GSDKUdpDetect; static id (*_logos_meta_orig$_ungrouped$GSDKUdpDetect$sharedInstance)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKUdpDetect$setMSocketfd$)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST, SEL, int);static int (*_logos_orig$_ungrouped$GSDKUdpDetect$mSocketfd)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKUdpDetect$stopSpeedTest)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$GSDKUdpDetect$getV6SpeedSock)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$GSDKUdpDetect$getSpeedSock)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GSDKUdpDetect$isUDPConnect$Port$)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST, SEL, id, int);static unsigned int (*_logos_orig$_ungrouped$GSDKUdpDetect$tag)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKUdpDetect$setTag$)(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST, SEL, unsigned int);static Class _logos_superclass$_ungrouped$GSDKDetectPort; static void (*_logos_orig$_ungrouped$GSDKDetectPort$setHip$)(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GSDKDetectPort$hip)(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GSDKDetectPort$isConnection$Port$)(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST, SEL, id, int);static void (*_logos_orig$_ungrouped$GSDKDetectPort$dealloc)(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$GSDKDetectPort$isFinished)(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GSDKDetectPort$result)(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GSDKDetectPort$setResult$)(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GSDKDetectPort$setIsFinished$)(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$PLCrashMachExceptionServer; static PLCrashMachExceptionServer*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$PLCrashMachExceptionServer$initWithCallBack$context$error$)(_LOGOS_SELF_TYPE_INIT PLCrashMachExceptionServer*, SEL, id, void*, id*);static id (*_logos_orig$_ungrouped$PLCrashMachExceptionServer$exceptionPortWithMask$error$)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionServer* _LOGOS_SELF_CONST, SEL, unsigned int, id*);static unsigned int (*_logos_orig$_ungrouped$PLCrashMachExceptionServer$copySendRightForServerAndReturningError$)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionServer* _LOGOS_SELF_CONST, SEL, id*);static unsigned int (*_logos_orig$_ungrouped$PLCrashMachExceptionServer$serverThread)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionServer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$PLCrashMachExceptionServer$dealloc)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionServer* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$PLCrashMachExceptionPort; static Class _logos_supermetaclass$_ungrouped$PLCrashMachExceptionPort; static id (*_logos_meta_orig$_ungrouped$PLCrashMachExceptionPort$exceptionPortsForTask$mask$error$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, unsigned int, unsigned int, id*);static id (*_logos_meta_orig$_ungrouped$PLCrashMachExceptionPort$exceptionPortsForThread$mask$error$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, unsigned int, unsigned int, id*);static bool (*_logos_orig$_ungrouped$PLCrashMachExceptionPort$registerForTask$previousPortSet$error$)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST, SEL, unsigned int, id*, id*);static PLCrashMachExceptionPort*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$PLCrashMachExceptionPort$initWithServerPort$mask$behavior$flavor$)(_LOGOS_SELF_TYPE_INIT PLCrashMachExceptionPort*, SEL, unsigned int, unsigned int, int, int);static bool (*_logos_orig$_ungrouped$PLCrashMachExceptionPort$registerForThread$previousPortSet$error$)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST, SEL, unsigned int, id*, id*);static unsigned int (*_logos_orig$_ungrouped$PLCrashMachExceptionPort$server_port)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$PLCrashMachExceptionPort$dealloc)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST, SEL);static unsigned int (*_logos_orig$_ungrouped$PLCrashMachExceptionPort$mask)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$PLCrashMachExceptionPort$behavior)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$PLCrashMachExceptionPort$flavor)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$PLCrashMachExceptionPortSet; static void (*_logos_orig$_ungrouped$PLCrashMachExceptionPortSet$dealloc)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPortSet* _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_orig$_ungrouped$PLCrashMachExceptionPortSet$countByEnumeratingWithState$objects$count$)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPortSet* _LOGOS_SELF_CONST, SEL, id, id*, unsigned long long);static id (*_logos_orig$_ungrouped$PLCrashMachExceptionPortSet$set)(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPortSet* _LOGOS_SELF_CONST, SEL);static PLCrashMachExceptionPortSet*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$PLCrashMachExceptionPortSet$initWithSet$)(_LOGOS_SELF_TYPE_INIT PLCrashMachExceptionPortSet*, SEL, id);static Class _logos_superclass$_ungrouped$VKAccessToken; static Class _logos_supermetaclass$_ungrouped$VKAccessToken; static id (*_logos_meta_orig$_ungrouped$VKAccessToken$getKeychainQuery$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static id (*_logos_meta_orig$_ungrouped$VKAccessToken$tokenFromUrlString$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static void (*_logos_meta_orig$_ungrouped$VKAccessToken$save$data$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_meta_orig$_ungrouped$VKAccessToken$tokenWithToken$secret$userId$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id, id);static id (*_logos_meta_orig$_ungrouped$VKAccessToken$savedToken$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static id (*_logos_meta_orig$_ungrouped$VKAccessToken$load$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static void (*_logos_meta_orig$_ungrouped$VKAccessToken$delete$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static long long (*_logos_orig$_ungrouped$VKAccessToken$expiresIn)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static VKAccessToken*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$VKAccessToken$initWithToken$secret$userId$)(_LOGOS_SELF_TYPE_INIT VKAccessToken*, SEL, id, id, id);static VKAccessToken*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$VKAccessToken$initWithUrlString$)(_LOGOS_SELF_TYPE_INIT VKAccessToken*, SEL, id);static id (*_logos_orig$_ungrouped$VKAccessToken$restorePermissions$)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$VKAccessToken$httpsRequired)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VKAccessToken$checkIfExpired)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VKAccessToken$notifyTokenExpired)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static VKAccessToken*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$VKAccessToken$initWithVKAccessToken$)(_LOGOS_SELF_TYPE_INIT VKAccessToken*, SEL, id);static void (*_logos_orig$_ungrouped$VKAccessToken$saveTokenToDefaults$)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$VKAccessToken$setAccessTokenRequiredHTTPS)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static VKAccessToken*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$VKAccessToken$copy)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static VKAccessToken*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$VKAccessToken$mutableCopy)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VKAccessToken$encodeWithCoder$)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL, id);static VKAccessToken*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$VKAccessToken$initWithCoder$)(_LOGOS_SELF_TYPE_INIT VKAccessToken*, SEL, id);static bool (*_logos_orig$_ungrouped$VKAccessToken$isExpired)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$VKAccessToken$email)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VKAccessToken$setAccessToken$)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$VKAccessToken$permissions)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$VKAccessToken$userId)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$VKAccessToken$secret)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$VKAccessToken$localUser)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$VKAccessToken$accessToken)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static double (*_logos_orig$_ungrouped$VKAccessToken$created)(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$VKAccessTokenMutable; static void (*_logos_orig$_ungrouped$VKAccessTokenMutable$setExpiresIn$)(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST, SEL, long long);static void (*_logos_orig$_ungrouped$VKAccessTokenMutable$setHttpsRequired$)(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$VKAccessTokenMutable$setAccessToken$)(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$VKAccessTokenMutable$setPermissions$)(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$VKAccessTokenMutable$setUserId$)(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$VKAccessTokenMutable$setLocalUser$)(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$VKAccessTokenMutable$setSecret$)(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$TXMediaPublishParam; static bool (*_logos_orig$_ungrouped$TXMediaPublishParam$enableResume)(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$TXMediaPublishParam$enableHTTPS)(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXMediaPublishParam$setEnableHTTPS$)(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$TXMediaPublishParam$setEnableResume$)(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST, SEL, bool);static TXMediaPublishParam*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$TXMediaPublishParam$init)(_LOGOS_SELF_TYPE_INIT TXMediaPublishParam*, SEL);static id (*_logos_orig$_ungrouped$TXMediaPublishParam$signature)(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TXMediaPublishParam$fileName)(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXMediaPublishParam$setFileName$)(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TXMediaPublishParam$setSignature$)(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$TXMediaPublishParam$mediaPath)(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXMediaPublishParam$setMediaPath$)(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$TXPublishParam; static void (*_logos_orig$_ungrouped$TXPublishParam$setCoverPath$)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$TXPublishParam$coverPath)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$TXPublishParam$enableResume)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TXPublishParam$secretId)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXPublishParam$setSecretId$)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$TXPublishParam$enableHTTPS)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXPublishParam$setEnableHTTPS$)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$TXPublishParam$setEnableResume$)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL, bool);static TXPublishParam*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$TXPublishParam$init)(_LOGOS_SELF_TYPE_INIT TXPublishParam*, SEL);static id (*_logos_orig$_ungrouped$TXPublishParam$signature)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$TXPublishParam$videoPath)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXPublishParam$setVideoPath$)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$TXPublishParam$fileName)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TXPublishParam$setFileName$)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TXPublishParam$setSignature$)(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$TVCConfig; static bool (*_logos_orig$_ungrouped$TVCConfig$enableResume)(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$TVCConfig$enableHttps)(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCConfig$setEnableResume$)(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$TVCConfig$setEnableHttps$)(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST, SEL, bool);static TVCConfig*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$TVCConfig$init)(_LOGOS_SELF_TYPE_INIT TVCConfig*, SEL);static id (*_logos_orig$_ungrouped$TVCConfig$userID)(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCConfig$setUserID$)(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$TVCConfig$setTimeoutInterval$)(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST, SEL, double);static id (*_logos_orig$_ungrouped$TVCConfig$signature)(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST, SEL);static double (*_logos_orig$_ungrouped$TVCConfig$timeoutInterval)(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$TVCConfig$setSignature$)(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$GADResourceBuffer; static GADResourceBuffer*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GADResourceBuffer$initWithRequest$fileURL$contentType$contentLength$removeFileOnDealloc$)(_LOGOS_SELF_TYPE_INIT GADResourceBuffer*, SEL, id, id, id, long long, bool);static GADResourceBuffer*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GADResourceBuffer$initWithRequest$fileURL$removeFileOnDealloc$)(_LOGOS_SELF_TYPE_INIT GADResourceBuffer*, SEL, id, id, bool);static void (*_logos_orig$_ungrouped$GADResourceBuffer$addObserverForNotifyBytes$toCollection$queue$usingBlock$)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL, unsigned long long, id, id, id);static void (*_logos_orig$_ungrouped$GADResourceBuffer$setMaxBytes$)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL, long long);static unsigned long long (*_logos_orig$_ungrouped$GADResourceBuffer$bufferedContentSize)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADResourceBuffer$startPeriodicReportsWithTimeInterval$)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL, double);static double (*_logos_orig$_ungrouped$GADResourceBuffer$networkSpeedInBytesPerSecond)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADResourceBuffer$commonInitWithRequest$fileURL$removeFileOnDealloc$)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL, id, id, bool);static void (*_logos_orig$_ungrouped$GADResourceBuffer$reportCSI)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADResourceBuffer$notifyObserversWaitingForNotifyBytes)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$GADResourceBuffer$responseHeadersReceived)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADResourceBuffer$dealloc)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADResourceBuffer$start)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GADResourceBuffer$context)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADResourceBuffer$reset)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GADResourceBuffer$contentType)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$GADResourceBuffer$fileURL)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADResourceBuffer$finishWithError$)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GADResourceBuffer$request)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADResourceBuffer$URLSession$task$didCompleteWithError$)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveData$)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveResponse$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL, id, id, id, id);static bool (*_logos_orig$_ungrouped$GADResourceBuffer$started)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$GADResourceBuffer$completed)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADResourceBuffer$cancelWithError$)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GADResourceBuffer$responseHeaders)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$GADResourceBuffer$valid)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$GADResourceBuffer$downloaded)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADResourceBuffer$setValid$)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL, bool);static long long (*_logos_orig$_ungrouped$GADResourceBuffer$contentLength)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADResourceBuffer$setResponseHeaders$)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL, id);static long long (*_logos_orig$_ungrouped$GADResourceBuffer$maxBytes)(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$GULNetworkURLSession; static Class _logos_supermetaclass$_ungrouped$GULNetworkURLSession; static void (*_logos_meta_orig$_ungrouped$GULNetworkURLSession$handleEventsForBackgroundURLSessionID$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_meta_orig$_ungrouped$GULNetworkURLSession$fetcherWithSessionIdentifier$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static void (*_logos_meta_orig$_ungrouped$GULNetworkURLSession$setSessionInFetcherMap$forSessionID$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_meta_orig$_ungrouped$GULNetworkURLSession$sessionIDToSystemCompletionHandlerDictionary)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static id (*_logos_meta_orig$_ungrouped$GULNetworkURLSession$sessionFromFetcherMapForSessionID$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static id (*_logos_meta_orig$_ungrouped$GULNetworkURLSession$sessionIDToFetcherMapReadWriteLock)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static id (*_logos_meta_orig$_ungrouped$GULNetworkURLSession$sessionIDToFetcherMap)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static GULNetworkURLSession*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GULNetworkURLSession$initWithNetworkLoggerDelegate$)(_LOGOS_SELF_TYPE_INIT GULNetworkURLSession*, SEL, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$setBackgroundNetworkEnabled$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$GULNetworkURLSession$sessionIDFromAsyncPOSTRequest$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$GULNetworkURLSession$sessionIDFromAsyncGETRequest$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$GULNetworkURLSession$loggerDelegate)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$addSystemCompletionHandler$forSession$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$GULNetworkURLSession$temporaryFilePathWithSessionID$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$maybeRemoveTempFilesAtURL$expiringTime$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id, double);static bool (*_logos_orig$_ungrouped$GULNetworkURLSession$ensureTemporaryDirectoryExists)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$excludeFromBackupForURL$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$GULNetworkURLSession$backgroundSessionConfigWithSessionID$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$populateSessionConfig$withRequest$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$callCompletionHandler$withResponse$data$error$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$callSystemCompletionHandler$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$removeTempItemAtURL$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$setLoggerDelegate$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$GULNetworkURLSession$isBackgroundNetworkEnabled)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$URLSessionDidFinishEventsForBackgroundURLSession$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id, id, id, id, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$didReceiveChallenge$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$didCompleteWithError$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$downloadTask$didFinishDownloadingToURL$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$dataTask$didReceiveData$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$GULNetworkURLSession$setSessionID$)(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$FLVDownloaderHT; static id (*_logos_orig$_ungrouped$FLVDownloaderHT$getDownloadStats)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$FLVDownloaderHT$parseIpAddress$)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$FLVDownloaderHT$syncReconnect)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL);static FLVDownloaderHT*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$FLVDownloaderHT$init)(_LOGOS_SELF_TYPE_INIT FLVDownloaderHT*, SEL);static void (*_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$task$didReceiveChallenge$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$task$didCompleteWithError$)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveData$)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveResponse$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$FLVDownloaderHT$connect)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FLVDownloaderHT$reconnect)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FLVDownloaderHT$startDownload$)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$FLVDownloaderHT$closeSession)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FLVDownloaderHT$stopDownload)(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$AWSURLSessionManager; static void (*_logos_orig$_ungrouped$AWSURLSessionManager$taskWithDelegate$)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AWSURLSessionManager$sessionManagerDelegates)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AWSURLSessionManager$printHTTPHeadersAndBodyForRequest$)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AWSURLSessionManager$printHTTPHeadersForResponse$)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AWSURLSessionManager$setSessionManagerDelegates$)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static AWSURLSessionManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$AWSURLSessionManager$init)(_LOGOS_SELF_TYPE_INIT AWSURLSessionManager*, SEL);static AWSURLSessionManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$AWSURLSessionManager$initWithConfiguration$)(_LOGOS_SELF_TYPE_INIT AWSURLSessionManager*, SEL, id);static id (*_logos_orig$_ungrouped$AWSURLSessionManager$session)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AWSURLSessionManager$setSession$)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AWSURLSessionManager$setConfiguration$)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AWSURLSessionManager$configuration)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AWSURLSessionManager$dataTaskWithRequest$)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, long long, long long, long long);static void (*_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$task$didCompleteWithError$)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveData$)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id);static Class _logos_superclass$_ungrouped$RCNConfigFetch; static RCNConfigFetch*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$RCNConfigFetch$initWithContent$DBManager$settings$analytics$experiment$queue$namespace$options$)(_LOGOS_SELF_TYPE_INIT RCNConfigFetch*, SEL, id, id, id, id, id, id, id, id);static void (*_logos_orig$_ungrouped$RCNConfigFetch$fetchConfigWithExpirationDuration$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL, double, id);static void (*_logos_orig$_ungrouped$RCNConfigFetch$recreateNetworkSession)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$RCNConfigFetch$reportCompletionOnHandler$withStatus$withError$)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL, id, id, long long);static void (*_logos_orig$_ungrouped$RCNConfigFetch$refreshInstallationsTokenWithCompletionHandler$)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$RCNConfigFetch$FIRAppNameFromFullyQualifiedNamespace)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$RCNConfigFetch$doFetchCall$)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$RCNConfigFetch$fetchWithUserProperties$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$RCNConfigFetch$getAnalyticsUserPropertiesWithCompletionHandler$)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$RCNConfigFetch$URLSessionDataTaskWithContent$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$RCNConfigFetch$currentNetworkSession)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$RCNConfigFetch$fetchSession)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$RCNConfigFetch$setFetchSession$)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL, id);static RCNConfigFetch*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$RCNConfigFetch$init)(_LOGOS_SELF_TYPE_INIT RCNConfigFetch*, SEL);static void (*_logos_orig$_ungrouped$RCNConfigFetch$dealloc)(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$GADURLSessionTransactionMonitor; static void (*_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$invalidateAllTasksWithError$)(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$waitForTransactionsWithCompletion$)(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$addTransaction$forTask$)(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST, SEL, id, id);static GADURLSessionTransactionMonitor*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$init)(_LOGOS_SELF_TYPE_INIT GADURLSessionTransactionMonitor*, SEL);static void (*_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$dealloc)(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$didBecomeInvalidWithError$)(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST, SEL, id, id, id, id, id);static void (*_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$didCompleteWithError$)(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveData$)(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveResponse$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$removeTask$)(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$MidasSdkIapAdapter; static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$enableLog$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onLoginExpiry$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFinish$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$parameterWrong$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onNetWorkEorror$withRequestInfo$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, int, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetProductInfoFailue$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFailue$withErrorMessage$withErrorCode$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id, int);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onIAPPayFailue$withError$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onOrderFailue$withErrorMessage$withErrorCode$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id, int);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onOrderFinish$withRequestInfo$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onIAPPaymentSucess$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$canShowLoadingNow)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onLaunProductListFinish$withJsoninfo$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onLaunProductListFailue$withErrorMessage$withErrorCode$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id, int);static id (*_logos_orig$_ungrouped$MidasSdkIapAdapter$parseKvString$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withReq$callback$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id, void*, void*);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withIdcInfo$withReq$callback$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id, id, void*, void*);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$payWithReq$callback$viewController$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, void*, void*, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$getProductInfoWithChannel$withProductIds$callback$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id, void*);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$getIntroPriceWithChannel$withProductIds$callback$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id, void*);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$getInfoWithType$withReq$callback$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, void*, void*);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$reprovideWithCallback$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, void*);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$setShowLog$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$MidasSdkIapAdapter$showLog)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$startPayOnMainThread$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$setViewCtrollerOnMainThread$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$MidasSdkIapAdapter$DV$K$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$MidasSdkIapAdapter$urlEncode$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$callBackWithcode$inCode$bill$errMsg$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFinish$withJsoninfo$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFailue$withErrorMessage$withErrorCode$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id, id, int);static MidasSdkIapAdapter*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$MidasSdkIapAdapter$init)(_LOGOS_SELF_TYPE_INIT MidasSdkIapAdapter*, SEL);static void (*_logos_orig$_ungrouped$MidasSdkIapAdapter$log$)(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$MidasAddrHelper; static Class _logos_supermetaclass$_ungrouped$MidasAddrHelper; static id (*_logos_meta_orig$_ungrouped$MidasAddrHelper$sharedManager)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getStaticDomain)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$MidasAddrHelper$initializeWithLocale$environment$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getMpInfoUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getOverseaInfoUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getNewIapProcUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getIapProcUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getCheckUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getGetConfigUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getLogUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getHeartBeatUrl)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getGetIpListUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getPayResultUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getSecurityProcUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getIapQueryUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getCombineUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getGetKeyUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getDomain$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getRiskControlDomain)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$MidasAddrHelper$setIP$isUsable$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, id, bool);static void (*_logos_orig$_ungrouped$MidasAddrHelper$midasAddr$didMeasure$type$isIPv6$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, id, double, id, bool);static void (*_logos_orig$_ungrouped$MidasAddrHelper$_updateIPListsFromServer)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$MidasAddrHelper$_getWholeUrl$prefix$useDomain$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, id, id, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$getStandalongUrl$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$MidasAddrHelper$addrSelector)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$MidasAddrHelper$environment)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$MidasAddrHelper$setEnvironment$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$MidasAddrHelper$setConfig$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$MidasAddrHelper$reporter)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$MidasAddrHelper$setReporter$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$MidasAddrHelper$offerId)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$MidasAddrHelper$setOfferId$)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$MidasAddrHelper$config)(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$ADJRequestHandler; static void (*_logos_orig$_ungrouped$ADJRequestHandler$setUrlStrategy$)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$ADJRequestHandler$setDefaultSessionConfiguration$)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$ADJRequestHandler$setExceptionKeys$)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$ADJRequestHandler$buildAuthorizationHeader$activityKind$)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL, id, int);static id (*_logos_orig$_ungrouped$ADJRequestHandler$urlStrategy)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$ADJRequestHandler$requestForPostPackage$clientSdk$parameters$urlHostString$sendingParameters$)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL, id, id, id, id, id);static void (*_logos_orig$_ungrouped$ADJRequestHandler$sendRequest$authorizationHeader$responseData$methodTypeInfo$)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL, id, id, id, id);static id (*_logos_orig$_ungrouped$ADJRequestHandler$userAgent)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$ADJRequestHandler$setUserAgent$)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL, id);static double (*_logos_orig$_ungrouped$ADJRequestHandler$requestTimeout)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$ADJRequestHandler$setLogger$)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$ADJRequestHandler$setRequestTimeout$)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL, double);static id (*_logos_orig$_ungrouped$ADJRequestHandler$responseCallback)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$ADJRequestHandler$setResponseCallback$)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$ADJRequestHandler$defaultSessionConfiguration)(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$GNLAsynchronousOperation; static GNLAsynchronousOperation*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GNLAsynchronousOperation$init)(_LOGOS_SELF_TYPE_INIT GNLAsynchronousOperation*, SEL);static void (*_logos_orig$_ungrouped$GNLAsynchronousOperation$start)(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLAsynchronousOperation$main)(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLAsynchronousOperation$setFinished$)(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$GNLAsynchronousOperation$isFinished)(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$GNLAsynchronousOperation$isExecuting)(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$GNLAsynchronousOperation$isAsynchronous)(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$GNLAsynchronousOperation$setExecuting$)(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$GNLAsynchronousOperation$completeOperation)(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$AVChunkedURLRequest; static AVChunkedURLRequest*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$AVChunkedURLRequest$initWithURL$timeout$)(_LOGOS_SELF_TYPE_INIT AVChunkedURLRequest*, SEL, id, int);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$sendMain)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$releaseHttp)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$addHead$withValue$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$setQueue$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AVChunkedURLRequest$queue)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL);static void* (*_logos_orig$_ungrouped$AVChunkedURLRequest$delegate)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$setDelegate$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, void*);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$cxx_destruct)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$setRequest$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$didBecomeInvalidWithError$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$didReceiveChallenge$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSessionDidFinishEventsForBackgroundURLSession$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AVChunkedURLRequest$request)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, id, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didReceiveChallenge$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$needNewBodyStream$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, long long, long long, long long);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didCompleteWithError$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveData$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$setMethod$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didFailWithError$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id);static bool (*_logos_orig$_ungrouped$AVChunkedURLRequest$connectionShouldUseCredentialStorage$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$connection$willSendRequestForAuthenticationChallenge$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id);static bool (*_logos_orig$_ungrouped$AVChunkedURLRequest$connection$canAuthenticateAgainstProtectionSpace$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveResponse$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveAuthenticationChallenge$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didCancelAuthenticationChallenge$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$AVChunkedURLRequest$connection$willSendRequest$redirectResponse$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveResponse$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didSendBodyData$totalBytesWritten$totalBytesExpectedToWrite$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, long long, long long, long long);static id (*_logos_orig$_ungrouped$AVChunkedURLRequest$connection$willCacheResponse$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$connectionDidFinishLoading$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveData$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeDownloadTask$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeStreamTask$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$willCacheResponse$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$setBody$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AVChunkedURLRequest$defaultSession)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$quit)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AVChunkedURLRequest$conn)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$setConn$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AVChunkedURLRequest$requestTask)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$setRequestTask$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$sendRequest)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AVChunkedURLRequest$setDefaultSession$)(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$FBSDKGraphRequestConnection; static Class _logos_supermetaclass$_ungrouped$FBSDKGraphRequestConnection; static void (*_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$setCanMakeRequests)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static bool (*_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$canMakeRequests)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$setDefaultConnectionTimeout$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, double);static double (*_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$defaultConnectionTimeout)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processorDidAttemptRecovery$didRecover$error$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, bool, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchEntryName$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchParameters$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$completeFBSDKURLSessionWithResponse$data$networkError$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id, id);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$requestWithBatch$timeout$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, double);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logRequest$bodyLength$bodyLogger$attachmentLogger$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, unsigned long long, id, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_taskDidCompleteWithError$handler$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$taskDidCompleteWithResponse$data$requestStartTime$handler$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id, unsigned long long, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$registerTokenToOmitFromLog$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$urlStringForSingleRequest$forBatch$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, bool);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$accessTokenWithRequest$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$toBatch$attachments$batchToken$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id, id, id);static bool (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_shouldWarnOnMissingFieldsParam$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$appendAttachments$toBody$addFormData$logger$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id, bool, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$appendJSONRequests$toBody$andNameAttachments$logger$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_validateFieldsParamForGetRequests$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addBody$toPostRequest$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$parseJSONResponse$error$statusCode$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id*, long long);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_completeWithResults$networkError$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_errorWithCode$statusCode$parsedJSONResponse$innerError$message$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, long long, long long, id, id, id);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$errorFromResult$request$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processResultBody$error$metadata$canNotifyDelegate$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id, id, bool);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$parseJSONOrOtherwise$error$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id*);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processResultDebugDictionary$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$errorConfigurationProvider)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$invokeHandler$error$response$responseData$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$response$responseData$requestStartTime$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$error$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$overrideGraphAPIVersion$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$sessionProxyFactory)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setSessionProxyFactory$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setErrorConfigurationProvider$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setConnectionFactory$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id);static FBSDKGraphRequestConnection*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$init)(_LOGOS_SELF_TYPE_INIT FBSDKGraphRequestConnection*, SEL);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$description)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$dealloc)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$delegate)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setDelegate$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$cxx_destruct)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$cancel)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$start)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$state)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logger)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setState$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, unsigned long long);static double (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$timeout)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setTimeout$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, double);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$session)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setSession$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id, id, long long, long long, long long);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setDelegateQueue$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$userAgent)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logMessage$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$delegateQueue)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$requests)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setRequests$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static unsigned long long (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$requestStartTime)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setRequestStartTime$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, unsigned long long);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setLogger$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$urlResponse)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$eventLogger)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setEventLogger$)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$FBSDKGraphRequestConnection$connectionFactory)(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$QCloudURLSessionTaskData; static void (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$setForbidenWirteToFile$)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL, bool);static unsigned long long (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$totalRecivedLength)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$setIsTaskCancelledByStatusCodeCheck$)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$isTaskCancelledByStatusCodeCheck)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$restData)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static QCloudURLSessionTaskData*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$QCloudURLSessionTaskData$initWithDowndingFileHandler$)(_LOGOS_SELF_TYPE_INIT QCloudURLSessionTaskData*, SEL, id);static id (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$uploadTempFilePath)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$forbidenWirteToFile)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$dealloc)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$cxx_destruct)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$data)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static int (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$identifier)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$appendData$)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$response)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$setResponse$)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$closeWrite)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$httpRequest)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$setHttpRequest$)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$retryHandler)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$setRetryHandler$)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL, id);static QCloudURLSessionTaskData*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$QCloudURLSessionTaskData$init)(_LOGOS_SELF_TYPE_INIT QCloudURLSessionTaskData*, SEL);static void (*_logos_orig$_ungrouped$QCloudURLSessionTaskData$setIdentifier$)(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST, SEL, int);static Class _logos_superclass$_ungrouped$ADJSessionResponseData; static id (*_logos_orig$_ungrouped$ADJSessionResponseData$successResponseData)(_LOGOS_SELF_TYPE_NORMAL ADJSessionResponseData* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$ADJSessionResponseData$failureResponseData)(_LOGOS_SELF_TYPE_NORMAL ADJSessionResponseData* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$GULURLSessionDataResponse; static id (*_logos_orig$_ungrouped$GULURLSessionDataResponse$HTTPResponse)(_LOGOS_SELF_TYPE_NORMAL GULURLSessionDataResponse* _LOGOS_SELF_CONST, SEL);static GULURLSessionDataResponse*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$GULURLSessionDataResponse$initWithResponse$HTTPBody$)(_LOGOS_SELF_TYPE_INIT GULURLSessionDataResponse*, SEL, id, id);static id (*_logos_orig$_ungrouped$GULURLSessionDataResponse$HTTPBody)(_LOGOS_SELF_TYPE_NORMAL GULURLSessionDataResponse* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$FBAdBrowserSessionData; static Class _logos_supermetaclass$_ungrouped$FBAdBrowserSessionData; static void (*_logos_meta_orig$_ungrouped$FBAdBrowserSessionData$initialize)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_meta_orig$_ungrouped$FBAdBrowserSessionData$currentTimeMs)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static FBAdBrowserSessionData*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$FBAdBrowserSessionData$initWithURL$withHandlerTime$withLoadStart$withResponseEnd$withDOMContentLoaded$withScrollReady$withLoadFinish$withSessionFinish$)(_LOGOS_SELF_TYPE_INIT FBAdBrowserSessionData*, SEL, id, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long);static unsigned long long (*_logos_orig$_ungrouped$FBAdBrowserSessionData$handlerTimeMs)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBAdBrowserSessionData$setHandlerTimeMs$)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL, unsigned long long);static void (*_logos_orig$_ungrouped$FBAdBrowserSessionData$setLoadStartMs$)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL, unsigned long long);static unsigned long long (*_logos_orig$_ungrouped$FBAdBrowserSessionData$responseEndMs)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBAdBrowserSessionData$setResponseEndMs$)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL, unsigned long long);static unsigned long long (*_logos_orig$_ungrouped$FBAdBrowserSessionData$domContentLoadedMs)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBAdBrowserSessionData$setDomContentLoadedMs$)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL, unsigned long long);static void (*_logos_orig$_ungrouped$FBAdBrowserSessionData$setScrollReadyMs$)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL, unsigned long long);static unsigned long long (*_logos_orig$_ungrouped$FBAdBrowserSessionData$loadFinishMs)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBAdBrowserSessionData$setLoadFinishMs$)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL, unsigned long long);static unsigned long long (*_logos_orig$_ungrouped$FBAdBrowserSessionData$sessionFinishMs)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBAdBrowserSessionData$setSessionFinishMs$)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL, unsigned long long);static void (*_logos_orig$_ungrouped$FBAdBrowserSessionData$cxx_destruct)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$FBAdBrowserSessionData$url)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$FBAdBrowserSessionData$setUrl$)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$FBAdBrowserSessionData$dataMap)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_orig$_ungrouped$FBAdBrowserSessionData$scrollReadyMs)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL);static unsigned long long (*_logos_orig$_ungrouped$FBAdBrowserSessionData$loadStartMs)(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$AFURLSessionManager; static Class _logos_supermetaclass$_ungrouped$AFURLSessionManager; static bool (*_logos_meta_orig$_ungrouped$AFURLSessionManager$supportsSecureCoding)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$downloadTaskWithRequest$progress$destination$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setResponseSerializer$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$uploadTaskWithStreamedRequest$progress$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$dataTaskWithRequest$uploadProgress$downloadProgress$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$responseSerializer)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$downloadTaskDidFinishDownloading)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloading$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setMutableTaskDelegatesKeyedByTaskIdentifier$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForDataTask$uploadProgress$downloadProgress$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForUploadTask$progress$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForDownloadTask$progress$destination$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$taskDescriptionForSessionTasks)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$mutableTaskDelegatesKeyedByTaskIdentifier)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AFURLSessionManager$addNotificationObserverForTask$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDelegate$forTask$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$removeNotificationObserverForTask$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$dataTasks)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$uploadTasks)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$tasksForKeyPath$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$taskDidResume$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$taskDidSuspend$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$delegateForTask$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalid$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallenge$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSession$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStream$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirection$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidSendBodyData$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidComplete$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetrics$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponse$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTask$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveData$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponse$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteData$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidResume$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$sessionDidReceiveAuthenticationChallenge)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$taskWillPerformHTTPRedirection)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$dataTaskDidReceiveResponse)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$didFinishEventsForBackgroundURLSession)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$sessionDidBecomeInvalid)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$authenticationChallengeHandler)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$taskNeedNewBodyStream)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$taskDidSendBodyData)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AFURLSessionManager$removeDelegateForTask$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$taskDidComplete)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$taskDidFinishCollectingMetrics)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$dataTaskWillCacheResponse)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$dataTaskDidBecomeDownloadTask)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$dataTaskDidReceiveData)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$downloadTaskDidWriteData)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$downloadTaskDidResume)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AFURLSessionManager$invalidateSessionCancelingTasks$resetSession$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, bool, bool);static id (*_logos_orig$_ungrouped$AFURLSessionManager$uploadTaskWithRequest$fromFile$progress$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$uploadTaskWithRequest$fromData$progress$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$uploadProgressForTask$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$downloadProgressForTask$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$downloadTaskWithResumeData$progress$destination$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalidBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallengeBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSessionBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirectionBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidSendBodyDataBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidCompleteBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponseBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStreamBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetricsBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTaskBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveDataBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponseBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteDataBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloadingBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidResumeBlock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setAuthenticationChallengeHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static AFURLSessionManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$AFURLSessionManager$init)(_LOGOS_SELF_TYPE_INIT AFURLSessionManager*, SEL);static void (*_logos_orig$_ungrouped$AFURLSessionManager$dealloc)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$description)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AFURLSessionManager$encodeWithCoder$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static AFURLSessionManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$AFURLSessionManager$initWithCoder$)(_LOGOS_SELF_TYPE_INIT AFURLSessionManager*, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$lock)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setOperationQueue$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$operationQueue)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$session)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setSession$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$didBecomeInvalidWithError$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$didReceiveChallenge$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didReceiveChallenge$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$needNewBodyStream$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, long long, long long, long long);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSessionDidFinishEventsForBackgroundURLSession$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didFinishCollectingMetrics$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didCompleteWithError$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didFinishDownloadingToURL$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didWriteData$totalBytesWritten$totalBytesExpectedToWrite$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, long long, long long, long long);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didResumeAtOffset$expectedTotalBytes$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, long long, long long);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveData$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didBecomeDownloadTask$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$willCacheResponse$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setLock$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$tasks)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setCompletionQueue$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$completionQueue)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$sessionConfiguration)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setSessionConfiguration$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setSecurityPolicy$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$securityPolicy)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static AFURLSessionManager*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$AFURLSessionManager$initWithSessionConfiguration$)(_LOGOS_SELF_TYPE_INIT AFURLSessionManager*, SEL, id);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setCompletionGroup$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$AFURLSessionManager$completionGroup)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$downloadTasks)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$AFURLSessionManager$reachabilityManager)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$AFURLSessionManager$setReachabilityManager$)(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST, SEL, id);static Class _logos_superclass$_ungrouped$XCDURLGETOperation; static Class _logos_supermetaclass$_ungrouped$XCDURLGETOperation; static bool (*_logos_meta_orig$_ungrouped$XCDURLGETOperation$automaticallyNotifiesObserversForKey$)(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$XCDURLGETOperation$operationStartSemaphore)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static XCDURLGETOperation*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$XCDURLGETOperation$initWithURL$info$cookes$)(_LOGOS_SELF_TYPE_INIT XCDURLGETOperation*, SEL, id, id, id);static id (*_logos_orig$_ungrouped$XCDURLGETOperation$description)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$XCDURLGETOperation$error)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$cancel)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$start)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$setError$)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$XCDURLGETOperation$isFinished)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$XCDURLGETOperation$isExecuting)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$XCDURLGETOperation$isAsynchronous)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$XCDURLGETOperation$url)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$finish)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$XCDURLGETOperation$info)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$XCDURLGETOperation$session)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$setSession$)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$finishWithError$)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL, id);static id (*_logos_orig$_ungrouped$XCDURLGETOperation$response)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$task$didCompleteWithError$)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveResponse$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$setResponse$)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveData$)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$setIsFinished$)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$XCDURLGETOperation$cookies)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$setIsExecuting$)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL, bool);static id (*_logos_orig$_ungrouped$XCDURLGETOperation$dataTask)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$setDataTask$)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$XCDURLGETOperation$startRequest)(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate; static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopTaskID$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, int);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$cxx_destruct)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL);static id (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$cxx_construct)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didBecomeInvalidWithError$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didReceiveChallenge$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSessionDidFinishEventsForBackgroundURLSession$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id, id, id, id);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didReceiveChallenge$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$needNewBodyStream$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id, long long, long long, long long);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveData$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveResponse$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id, id, id);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didCompleteWithError$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeDownloadTask$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeStreamTask$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id, id);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$willCacheResponse$completionHandler$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, id, id, id, id);static unsigned long long (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$stopID)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopID$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, unsigned long long);static int (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$ID)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL);static RSTTAPIHTTPSessionDelegate*  _LOGOS_RETURN_RETAINED(*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$init$)(_LOGOS_SELF_TYPE_INIT RSTTAPIHTTPSessionDelegate*, SEL, int);static void (*_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setID$)(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST, SEL, int);static Class _logos_superclass$_ungrouped$VNGMoatAnalytics; static bool (*_logos_orig$_ungrouped$VNGMoatAnalytics$prepareNativeDisplayTracking$error$)(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST, SEL, id, id*);static bool (*_logos_orig$_ungrouped$VNGMoatAnalytics$IDFACollectionBlocked)(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$VNGMoatAnalytics$initializeDisplayWebViewCalled)(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$VNGMoatAnalytics$addTrackedWebView$)(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST, SEL, id);static bool (*_logos_orig$_ungrouped$VNGMoatAnalytics$initialized)(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VNGMoatAnalytics$setDebug$)(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$VNGMoatAnalytics$isInitialized)(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VNGMoatAnalytics$setInitialized$)(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST, SEL, bool);static Class _logos_superclass$_ungrouped$VNGMoatBaseTracker; static void (*_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsNativeVideo$)(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$VNGMoatBaseTracker$setStoppedTracking$)(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$VNGMoatBaseTracker$notifyDelegateOfStartFailure$reason$)(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST, SEL, unsigned long long, id);static bool (*_logos_orig$_ungrouped$VNGMoatBaseTracker$checkFalseStart)(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsNativeDisplay$)(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST, SEL, bool);static bool (*_logos_orig$_ungrouped$VNGMoatBaseTracker$isNativeDisplay)(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$VNGMoatBaseTracker$isActive)(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST, SEL);static void (*_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsActive$)(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST, SEL, bool);static void (*_logos_orig$_ungrouped$VNGMoatBaseTracker$startTracking)(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST, SEL);static Class _logos_superclass$_ungrouped$VNGMoatWebTracker; static bool (*_logos_orig$_ungrouped$VNGMoatWebTracker$setViewToTrack$withWebComponent$)(_LOGOS_SELF_TYPE_NORMAL VNGMoatWebTracker* _LOGOS_SELF_CONST, SEL, id, id);static bool (*_logos_orig$_ungrouped$VNGMoatWebTracker$installBridge)(_LOGOS_SELF_TYPE_NORMAL VNGMoatWebTracker* _LOGOS_SELF_CONST, SEL);static bool (*_logos_orig$_ungrouped$VNGMoatWebTracker$installWKWebViewBridge)(_LOGOS_SELF_TYPE_NORMAL VNGMoatWebTracker* _LOGOS_SELF_CONST, SEL);



static void _logos_method$_ungrouped$QCloudXMLDictionaryParser$parser$foundComment$(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$QCloudXMLDictionaryParser$parser$foundComment$ ? _logos_orig$_ungrouped$QCloudXMLDictionaryParser$parser$foundComment$ : (__typeof__(_logos_orig$_ungrouped$QCloudXMLDictionaryParser$parser$foundComment$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudXMLDictionaryParser, @selector(parser:foundComment:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$QCloudXMLDictionaryParser$root(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudXMLDictionaryParser$setRoot$(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setRoot$ ? _logos_orig$_ungrouped$QCloudXMLDictionaryParser$setRoot$ : (__typeof__(_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setRoot$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudXMLDictionaryParser, @selector(setRoot:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudXMLDictionaryParser$text(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudXMLDictionaryParser$setText$(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setText$ ? _logos_orig$_ungrouped$QCloudXMLDictionaryParser$setText$ : (__typeof__(_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setText$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudXMLDictionaryParser, @selector(setText:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudXMLDictionaryParser$setStack$(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setStack$ ? _logos_orig$_ungrouped$QCloudXMLDictionaryParser$setStack$ : (__typeof__(_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setStack$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudXMLDictionaryParser, @selector(setStack:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudXMLDictionaryParser$stack(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudXMLDictionaryParser$addText$(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudXMLDictionaryParser$addText$ ? _logos_orig$_ungrouped$QCloudXMLDictionaryParser$addText$ : (__typeof__(_logos_orig$_ungrouped$QCloudXMLDictionaryParser$addText$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudXMLDictionaryParser, @selector(addText:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$QCloudXMLDictionaryParser$trimWhiteSpace(_LOGOS_SELF_TYPE_NORMAL QCloudXMLDictionaryParser* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$object(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$setObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setObject$ ? _logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMlResumeUploadInfo, @selector(setObject:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$bucket(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$localPath(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$setBucket$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setBucket$ ? _logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setBucket$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setBucket$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMlResumeUploadInfo, @selector(setBucket:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$setLocalPath$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMlResumeUploadInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setLocalPath$ ? _logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setLocalPath$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setLocalPath$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMlResumeUploadInfo, @selector(setLocalPath:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLEndPoint$serverURLWithBucket$appID$regionName$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$serverURLWithBucket$appID$regionName$ ? _logos_orig$_ungrouped$QCloudCOSXMLEndPoint$serverURLWithBucket$appID$regionName$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$serverURLWithBucket$appID$regionName$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLEndPoint, @selector(serverURLWithBucket:appID:regionName:)))(self, _cmd, arg1, arg2, arg3);
}



static id _logos_method$_ungrouped$QCloudCOSXMLEndPoint$formattedBucket$withAPPID$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$formattedBucket$withAPPID$ ? _logos_orig$_ungrouped$QCloudCOSXMLEndPoint$formattedBucket$withAPPID$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$formattedBucket$withAPPID$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLEndPoint, @selector(formattedBucket:withAPPID:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$QCloudCOSXMLEndPoint$isPrefixURL(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudCOSXMLEndPoint$setIsPrefixURL$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setIsPrefixURL$ ? _logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setIsPrefixURL$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setIsPrefixURL$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLEndPoint, @selector(setIsPrefixURL:)))(self, _cmd, arg1);
}



static QCloudCOSXMLEndPoint* _logos_method$_ungrouped$QCloudCOSXMLEndPoint$init(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLEndPoint* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLEndPoint$setRegionName$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setRegionName$ ? _logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setRegionName$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setRegionName$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLEndPoint, @selector(setRegionName:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLEndPoint$setSuffix$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setSuffix$ ? _logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setSuffix$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setSuffix$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLEndPoint, @selector(setSuffix:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLEndPoint$suffix(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLEndPoint* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$AFXMLParserResponseSerializer$serializer(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFXMLParserResponseSerializer$responseObjectForResponse$data$error$(_LOGOS_SELF_TYPE_NORMAL AFXMLParserResponseSerializer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id* arg3) {
    arg2 = NULL;
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$AFXMLParserResponseSerializer$responseObjectForResponse$data$error$ ? _logos_orig$_ungrouped$AFXMLParserResponseSerializer$responseObjectForResponse$data$error$ : (__typeof__(_logos_orig$_ungrouped$AFXMLParserResponseSerializer$responseObjectForResponse$data$error$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFXMLParserResponseSerializer, @selector(responseObjectForResponse:data:error:)))(self, _cmd, arg1, arg2, arg3);
}



static AFXMLParserResponseSerializer* _logos_method$_ungrouped$AFXMLParserResponseSerializer$init(_LOGOS_SELF_TYPE_INIT AFXMLParserResponseSerializer* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_method$_ungrouped$XCDYouTubeDashManifestXML$streamURLs(_LOGOS_SELF_TYPE_NORMAL XCDYouTubeDashManifestXML* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$XCDYouTubeDashManifestXML$XMLString(_LOGOS_SELF_TYPE_NORMAL XCDYouTubeDashManifestXML* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static XCDYouTubeDashManifestXML* _logos_method$_ungrouped$XCDYouTubeDashManifestXML$initWithXMLString$(_LOGOS_SELF_TYPE_INIT XCDYouTubeDashManifestXML* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$XCDYouTubeDashManifestXML$initWithXMLString$ ? _logos_orig$_ungrouped$XCDYouTubeDashManifestXML$initWithXMLString$ : (__typeof__(_logos_orig$_ungrouped$XCDYouTubeDashManifestXML$initWithXMLString$))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDYouTubeDashManifestXML, @selector(initWithXMLString:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$QCloudQCloudCOSXMLLoad$load(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_meta_orig$_ungrouped$QCloudQCloudCOSXMLLoad$load ? _logos_meta_orig$_ungrouped$QCloudQCloudCOSXMLLoad$load : (__typeof__(_logos_meta_orig$_ungrouped$QCloudQCloudCOSXMLLoad$load))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$QCloudQCloudCOSXMLLoad, @selector(load)))(self, _cmd);
}



static id _logos_meta_method$_ungrouped$QCloudCOSXMLService$registerCOSXMLWithConfiguration$withKey$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$QCloudCOSXMLService$defaultCOSXML(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static bool _logos_meta_method$_ungrouped$QCloudCOSXMLService$hasServiceForKey$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return 0;
}



static id _logos_meta_method$_ungrouped$QCloudCOSXMLService$registerDefaultCOSXMLWithConfiguration$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$QCloudCOSXMLService$cosxmlServiceForKey$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static void _logos_meta_method$_ungrouped$QCloudCOSXMLService$removeCOSXMLWithKey$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$QCloudCOSXMLService$removeCOSXMLWithKey$ ? _logos_meta_orig$_ungrouped$QCloudCOSXMLService$removeCOSXMLWithKey$ : (__typeof__(_logos_meta_orig$_ungrouped$QCloudCOSXMLService$removeCOSXMLWithKey$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$QCloudCOSXMLService, @selector(removeCOSXMLWithKey:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$QCloudCOSXMLService$changeImplementation(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_meta_orig$_ungrouped$QCloudCOSXMLService$changeImplementation ? _logos_meta_orig$_ungrouped$QCloudCOSXMLService$changeImplementation : (__typeof__(_logos_meta_orig$_ungrouped$QCloudCOSXMLService$changeImplementation))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$QCloudCOSXMLService, @selector(changeImplementation)))(self, _cmd);
}



static id _logos_meta_method$_ungrouped$QCloudCOSXMLService$Quality_registerDefaultCOSXMLWithConfiguration$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static void _logos_meta_method$_ungrouped$QCloudCOSXMLService$initMTA(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_meta_orig$_ungrouped$QCloudCOSXMLService$initMTA ? _logos_meta_orig$_ungrouped$QCloudCOSXMLService$initMTA : (__typeof__(_logos_meta_orig$_ungrouped$QCloudCOSXMLService$initMTA))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$QCloudCOSXMLService, @selector(initMTA)))(self, _cmd);
}



static void _logos_meta_method$_ungrouped$QCloudCOSXMLService$load(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_meta_orig$_ungrouped$QCloudCOSXMLService$load ? _logos_meta_orig$_ungrouped$QCloudCOSXMLService$load : (__typeof__(_logos_meta_orig$_ungrouped$QCloudCOSXMLService$load))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$QCloudCOSXMLService, @selector(load)))(self, _cmd);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$HeadObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$HeadObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$HeadObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$HeadObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(HeadObject:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$InitiateMultipartUpload$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$InitiateMultipartUpload$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$InitiateMultipartUpload$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$InitiateMultipartUpload$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(InitiateMultipartUpload:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$UploadPartCopy$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$UploadPartCopy$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$UploadPartCopy$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$UploadPartCopy$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(UploadPartCopy:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutObjectCopy$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectCopy$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectCopy$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectCopy$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutObjectCopy:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$CompleteMultipartUpload$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$CompleteMultipartUpload$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$CompleteMultipartUpload$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$CompleteMultipartUpload$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(CompleteMultipartUpload:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetObject:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLService$getURLWithBucket$object$withAuthorization$regionName$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3, id arg4) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$loadAuthorizationForBiz$urlRequest$compelete$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$loadAuthorizationForBiz$urlRequest$compelete$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$loadAuthorizationForBiz$urlRequest$compelete$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$loadAuthorizationForBiz$urlRequest$compelete$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(loadAuthorizationForBiz:urlRequest:compelete:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutWatermarkObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutWatermarkObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutWatermarkObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutWatermarkObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutWatermarkObject:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetRecognitionObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetFilePreviewObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetFilePreviewObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetFilePreviewObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetFilePreviewObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetFilePreviewObject:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetGenerateSnapshot$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetGenerateSnapshot$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetGenerateSnapshot$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetGenerateSnapshot$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetGenerateSnapshot:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$CloudDataOperations$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$CloudDataOperations$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$CloudDataOperations$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$CloudDataOperations$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(CloudDataOperations:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutObjectQRCodeRecognition$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectQRCodeRecognition$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectQRCodeRecognition$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectQRCodeRecognition$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutObjectQRCodeRecognition:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$CIQRCodeRecognition$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$CIQRCodeRecognition$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$CIQRCodeRecognition$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$CIQRCodeRecognition$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(CIQRCodeRecognition:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$CIPicRecognition$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$CIPicRecognition$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$CIPicRecognition$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$CIPicRecognition$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(CIPicRecognition:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$HeadBucket$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$HeadBucket$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$HeadBucket$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$HeadBucket$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(HeadBucket:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$DeleteObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$DeleteObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(DeleteObject:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketIntelligentTiering$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketIntelligentTiering$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketIntelligentTiering$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketIntelligentTiering$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketIntelligentTiering:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketIntelligentTiering$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketIntelligentTiering$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketIntelligentTiering$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketIntelligentTiering$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketIntelligentTiering:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetObjectTagging$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetObjectTagging$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetObjectTagging$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetObjectTagging$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetObjectTagging:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PuObjectTagging$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PuObjectTagging$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PuObjectTagging$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PuObjectTagging$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PuObjectTagging:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetObjectACL$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetObjectACL$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetObjectACL$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetObjectACL$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetObjectACL:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutObjectACL$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectACL$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectACL$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectACL$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutObjectACL:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$DeleteMultipleObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteMultipleObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$DeleteMultipleObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteMultipleObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(DeleteMultipleObject:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$OptionsObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$OptionsObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$OptionsObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$OptionsObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(OptionsObject:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetService$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetService$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetService$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetService$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetService:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucket$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucket$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucket$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucket$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucket:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucket$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucket$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucket$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucket$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucket:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucket$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucket$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucket$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucket$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucket:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketLocation$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLocation$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLocation$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLocation$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketLocation:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$ListBucketMultipartUploads$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$ListBucketMultipartUploads$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$ListBucketMultipartUploads$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$ListBucketMultipartUploads$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(ListBucketMultipartUploads:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketACL$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketACL$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketACL$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketACL$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketACL:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketACL$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketACL$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketACL$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketACL$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketACL:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketCORS$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketCORS$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketCORS$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketCORS$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketCORS:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketLifecycle$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketLifecycle$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketLifecycle$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketLifecycle$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketLifecycle:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketLifecycle$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLifecycle$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLifecycle$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLifecycle$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketLifecycle:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketLifeCycle$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketLifeCycle$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketLifeCycle$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketLifeCycle$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketLifeCycle:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketCORS$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketCORS$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketCORS$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketCORS$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketCORS:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketCORS$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketCORS$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketCORS$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketCORS$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketCORS:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketVersioning$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketVersioning$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketVersioning$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketVersioning$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketVersioning:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketVersioning$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketVersioning$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketVersioning$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketVersioning$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketVersioning:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketAccelerate$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketAccelerate$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketAccelerate$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketAccelerate$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketAccelerate:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketAccelerate$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketAccelerate$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketAccelerate$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketAccelerate$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketAccelerate:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketRelication$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketRelication$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketRelication$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketRelication$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketRelication:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketReplication$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketReplication$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketReplication$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketReplication$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketReplication:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PostObjectRestore$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PostObjectRestore$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PostObjectRestore$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PostObjectRestore$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PostObjectRestore:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$ListObjectVersions$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$ListObjectVersions$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$ListObjectVersions$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$ListObjectVersions$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(ListObjectVersions:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketDomain$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketDomain$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketDomain$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketDomain$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketDomain:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketDomain$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketDomain$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketDomain$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketDomain$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketDomain:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketWebsite$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketWebsite$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketWebsite$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketWebsite$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketWebsite:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketWebsite$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketWebsite$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketWebsite$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketWebsite$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketWebsite$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketWebsite:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketTagging$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketTagging$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketTagging$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketTagging$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketTagging:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketReplication$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketReplication$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketReplication$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketReplication$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketReplication:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketTagging$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketTagging$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketTagging$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketTagging$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketTagging:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketTagging$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketTagging$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketTagging$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketTagging$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketTagging:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$SelectObjectContent$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$SelectObjectContent$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$SelectObjectContent$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$SelectObjectContent$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(SelectObjectContent:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketLogging$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketLogging$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketLogging$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketLogging$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketLogging:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketLogging$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLogging$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLogging$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLogging$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketLogging:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutBucketInventory$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketInventory$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketInventory$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketInventory$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutBucketInventory:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$GetBucketInventory$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketInventory$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketInventory$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketInventory$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(GetBucketInventory:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketInventory$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketInventory$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketInventory$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketInventory$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketInventory:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$getPresignedURL$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$getPresignedURL$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$getPresignedURL$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$getPresignedURL$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(getPresignedURL:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$QCloudCOSXMLService$doesBucketExist$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return 0;
}



static bool _logos_method$_ungrouped$QCloudCOSXMLService$doesObjectExistWithBucket$object$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$deleteObjectWithBucket$object$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$deleteObjectWithBucket$object$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$deleteObjectWithBucket$object$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$deleteObjectWithBucket$object$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(deleteObjectWithBucket:object:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$ListBucketInventory$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$ListBucketInventory$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$ListBucketInventory$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$ListBucketInventory$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(ListBucketInventory:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$deleteVersionWithBucket$object$version$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$deleteVersionWithBucket$object$version$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$deleteVersionWithBucket$object$version$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$deleteVersionWithBucket$object$version$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(deleteVersionWithBucket:object:version:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$changeObjectStorageClassWithBucket$object$storageClass$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, long long arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$changeObjectStorageClassWithBucket$object$storageClass$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$changeObjectStorageClassWithBucket$object$storageClass$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$changeObjectStorageClassWithBucket$object$storageClass$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(changeObjectStorageClassWithBucket:object:storageClass:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$updateObjectMedaWithBucket$object$meta$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$updateObjectMedaWithBucket$object$meta$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$updateObjectMedaWithBucket$object$meta$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$updateObjectMedaWithBucket$object$meta$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(updateObjectMedaWithBucket:object:meta:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$ListMultipart$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$ListMultipart$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$ListMultipart$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$ListMultipart$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(ListMultipart:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$PutObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$PutObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$PutObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$PutObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(PutObject:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$UploadPart$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$UploadPart$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$UploadPart$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$UploadPart$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(UploadPart:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLService$AbortMultipfartUpload$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLService$AbortMultipfartUpload$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$AbortMultipfartUpload$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$AbortMultipfartUpload$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(AbortMultipfartUpload:)))(self, _cmd, arg1);
}



static QCloudCOSXMLService* _logos_method$_ungrouped$QCloudCOSXMLService$initWithConfiguration$(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLService* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$QCloudCOSXMLService$initWithConfiguration$ ? _logos_orig$_ungrouped$QCloudCOSXMLService$initWithConfiguration$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLService$initWithConfiguration$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLService, @selector(initWithConfiguration:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLService$sessionManager(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLService* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelContainerPropertyGenericClass(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelPropertyBlacklist(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$requestWithRequestData$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelCustomWillTransformFromDictionary$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadId(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadId$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadId$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadId$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadId$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setUploadId:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$requstMetricArray(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$grantRead(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantRead$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantRead$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantRead$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantRead$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setGrantRead:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$grantFullControl(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantFullControl$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantFullControl$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantFullControl$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantFullControl$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setGrantFullControl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$requstsMetricArrayBlock(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$markPartFinish$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$markPartFinish$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$markPartFinish$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$markPartFinish$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(markPartFinish:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadParts(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$fakeStart(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setCOSServerSideEncyptionWithCustomerKey:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstsMetricArrayBlock$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstsMetricArrayBlock$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstsMetricArrayBlock$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstsMetricArrayBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setRequstsMetricArrayBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadParts$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadParts$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadParts$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadParts$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setUploadParts:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstMetricArray$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstMetricArray$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstMetricArray$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstMetricArray$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setRequstMetricArray:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$enableMD5Verification(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableMD5Verification$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableMD5Verification$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableMD5Verification$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableMD5Verification$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setEnableMD5Verification:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$requestCacheArray(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyption(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequestCacheArray$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequestCacheArray$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequestCacheArray$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequestCacheArray$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setRequestCacheArray:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$queueSource(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setQueueSource$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setQueueSource$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setQueueSource$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setQueueSource$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setQueueSource:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$getFileLocalUploadParts(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$finishUpload$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$finishUpload$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$finishUpload$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$finishUpload$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(finishUpload:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadOffsetBodys$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadOffsetBodys$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadOffsetBodys$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadOffsetBodys$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(uploadOffsetBodys:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$getContinueInfo$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$getContinueInfo$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$getContinueInfo$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$getContinueInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(getContinueInfo:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$dataContentLength(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$continueMultiUpload$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$continueMultiUpload$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$continueMultiUpload$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$continueMultiUpload$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(continueMultiUpload:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$resumeUpload(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$startSimpleUpload(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setDataContentLength$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setDataContentLength$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setDataContentLength$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setDataContentLength$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setDataContentLength:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$startMultiUpload(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static double _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadPriority(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static long long _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$trafficLimit(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTrafficLimit$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTrafficLimit$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTrafficLimit$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTrafficLimit$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setTrafficLimit:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentDisposition(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentDisposition$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentDisposition$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentDisposition$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentDisposition$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setContentDisposition:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$expect(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpect$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpect$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpect$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpect$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setExpect:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentSHA1(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentSHA1$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentSHA1$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentSHA1$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentSHA1$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setContentSHA1:)))(self, _cmd, arg1);
}



static QCloudCOSXMLUploadObjectRequest* _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$initMultipleUploadFinishBlock(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLUploadObjectRequest* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$productingReqsumeData$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id* arg1) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadMultiParts$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadMultiParts$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadMultiParts$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadMultiParts$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(uploadMultiParts:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$appendUploadBytesSent$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$appendUploadBytesSent$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$appendUploadBytesSent$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$appendUploadBytesSent$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(appendUploadBytesSent:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$sliceSize(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$tranformErrorToResume$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static bool _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$enableVerification(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadBodyIsCompleted(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$shouldRetry$error$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    return 0;
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$cancelByProductingResumeData$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id* arg1) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithKMSCustomKey$jsonStr$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithKMSCustomKey$jsonStr$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithKMSCustomKey$jsonStr$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithKMSCustomKey$jsonStr$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setCOSServerSideEncyptionWithKMSCustomKey:jsonStr:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setSliceSize$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setSliceSize$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setSliceSize$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setSliceSize$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setSliceSize:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadPriority$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, double arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadPriority$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadPriority$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadPriority$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setUploadPriority:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadid(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadid$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadid$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadid$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadid$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setUploadid:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setInitMultipleUploadFinishBlock$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setInitMultipleUploadFinishBlock$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setInitMultipleUploadFinishBlock$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setInitMultipleUploadFinishBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setInitMultipleUploadFinishBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableVerification$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableVerification$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableVerification$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableVerification$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setEnableVerification:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadBodyIsCompleted$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadBodyIsCompleted$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadBodyIsCompleted$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadBodyIsCompleted$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setUploadBodyIsCompleted:)))(self, _cmd, arg1);
}



static QCloudCOSXMLUploadObjectRequest* _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$init(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLUploadObjectRequest* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$dealloc(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$object(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setObject:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setAccessControlList$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setAccessControlList$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setAccessControlList$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setAccessControlList$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setAccessControlList:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$cancel(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentType(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentType$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentType$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentType$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentType$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setContentType:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$storageClass(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setStorageClass$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setStorageClass$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setStorageClass$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setStorageClass$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setStorageClass:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$bucket(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBody$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBody$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBody$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBody$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setBody:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$body(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$cacheControl(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCacheControl$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCacheControl$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCacheControl$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCacheControl$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setCacheControl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$customHeaders(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$onError$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$onError$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$onError$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$onError$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(onError:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRegionName$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRegionName$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRegionName$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRegionName$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setRegionName:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCustomHeaders$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCustomHeaders$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCustomHeaders$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCustomHeaders$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setCustomHeaders:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$regionName(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBucket$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBucket$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBucket$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBucket$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setBucket:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpires$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpires$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpires$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpires$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setExpires:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$expires(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setFinishBlock$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setFinishBlock$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setFinishBlock$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setFinishBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setFinishBlock:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$totalBytesSent(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTotalBytesSent$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTotalBytesSent$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTotalBytesSent$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTotalBytesSent$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setTotalBytesSent:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$accessControlList(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static bool _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$aborted(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$retryHandler(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRetryHandler$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRetryHandler$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRetryHandler$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRetryHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setRetryHandler:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTransferManager$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTransferManager$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTransferManager$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTransferManager$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setTransferManager:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$transferManager(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$abort$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLUploadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$abort$ ? _logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$abort$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$abort$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(abort:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfModifiedSince$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfModifiedSince$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfModifiedSince$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfModifiedSince$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setIfModifiedSince:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$fakeStart(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setCOSServerSideEncyptionWithCustomerKey:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$resumableDownload(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$startGetObject(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$resumableTaskFile(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$downloadingURL(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableTaskFile$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableTaskFile$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableTaskFile$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableTaskFile$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResumableTaskFile:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setLocalCacheDownloadOffset$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setLocalCacheDownloadOffset$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setLocalCacheDownloadOffset$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setLocalCacheDownloadOffset$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setLocalCacheDownloadOffset:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setDownloadingURL$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setDownloadingURL$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setDownloadingURL$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setDownloadingURL$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setDownloadingURL:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$localCacheDownloadOffset(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$enableMD5Verification(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setEnableMD5Verification$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setEnableMD5Verification$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setEnableMD5Verification$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setEnableMD5Verification$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setEnableMD5Verification:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentType$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentType$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentType$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentType$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseContentType:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentLanguage(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentLanguage$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentLanguage$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentLanguage$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentLanguage$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseContentLanguage:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentExpires(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentExpires$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentExpires$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentExpires$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentExpires$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseContentExpires:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseCacheControl(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseCacheControl$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseCacheControl$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseCacheControl$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseCacheControl$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseCacheControl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentDisposition(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentDisposition$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentDisposition$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentDisposition$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentDisposition$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseContentDisposition:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentEncoding(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifModifiedSince(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifUnmodifiedModifiedSince(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifMatch(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfMatch$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfMatch$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfMatch$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfMatch$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setIfMatch:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentEncoding$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentEncoding$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentEncoding$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentEncoding$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseContentEncoding:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfUnmodifiedModifiedSince$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfUnmodifiedModifiedSince$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfUnmodifiedModifiedSince$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfUnmodifiedModifiedSince$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setIfUnmodifiedModifiedSince:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifNoneMatch(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfNoneMatch$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfNoneMatch$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfNoneMatch$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfNoneMatch$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setIfNoneMatch:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$requestCacheArray(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCOSServerSideEncyption(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableDownload$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableDownload$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableDownload$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableDownload$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResumableDownload:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRequestCacheArray$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRequestCacheArray$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRequestCacheArray$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRequestCacheArray$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setRequestCacheArray:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$queueSource(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setQueueSource$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setQueueSource$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setQueueSource$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setQueueSource$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setQueueSource:)))(self, _cmd, arg1);
}



static QCloudCOSXMLDownloadObjectRequest* _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$init(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLDownloadObjectRequest* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$dealloc(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$object(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setObject:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$cancel(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$range(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$bucket(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRange$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRange$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRange$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRange$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setRange:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCustomHeaders$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCustomHeaders$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCustomHeaders$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCustomHeaders$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setCustomHeaders:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$customHeaders(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRegionName$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRegionName$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRegionName$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRegionName$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setRegionName:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$regionName(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setBucket$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setBucket$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setBucket$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setBucket$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setBucket:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentType(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setTransferManager$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setTransferManager$ ? _logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setTransferManager$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setTransferManager$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setTransferManager:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$transferManager(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLDownloadObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceBucket(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceRegion(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfModifiedSince(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$requstMetricArray(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSliceCount$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSliceCount$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSliceCount$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSliceCount$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSliceCount:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sliceCount(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$multipleCopy(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$simpleCopy(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$tempService(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfMatch(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfMatch$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfMatch$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfMatch$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfMatch$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setObjectCopyIfMatch:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfNoneMatch(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfNoneMatch$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfNoneMatch$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfNoneMatch$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfNoneMatch$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setObjectCopyIfNoneMatch:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfModifiedSince$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfModifiedSince$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfModifiedSince$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfModifiedSince$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setObjectCopyIfModifiedSince:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfUnmodifiedSince(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfUnmodifiedSince$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfUnmodifiedSince$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfUnmodifiedSince$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfUnmodifiedSince$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setObjectCopyIfUnmodifiedSince:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantRead(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantRead$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantRead$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantRead$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantRead$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setGrantRead:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantWrite(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantWrite$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantWrite$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantWrite$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantWrite$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setGrantWrite:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantFullControl(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantFullControl$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantFullControl$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantFullControl$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantFullControl$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setGrantFullControl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$requstsMetricArrayBlock(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceAPPID(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceObjectVersionID(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadCopyParts(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$finishUploadParts(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$copySourceRangeWithFirst$last$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1, long long arg2) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$markPartFinish$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$markPartFinish$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$markPartFinish$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$markPartFinish$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(markPartFinish:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$copyProgressBlock(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadParts(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$fakeStart(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCopyProgressBlock$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCopyProgressBlock$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCopyProgressBlock$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCopyProgressBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setCopyProgressBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCOSServerSideEncyptionWithCustomerKey$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCOSServerSideEncyptionWithCustomerKey$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCOSServerSideEncyptionWithCustomerKey$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCOSServerSideEncyptionWithCustomerKey$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setCOSServerSideEncyptionWithCustomerKey:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceBucket$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceBucket$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceBucket$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceBucket$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSourceBucket:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceAPPID$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceAPPID$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceAPPID$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceAPPID$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSourceAPPID:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceRegion$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceRegion$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceRegion$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceRegion$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSourceRegion:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObjectVersionID$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObjectVersionID$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObjectVersionID$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObjectVersionID$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSourceObjectVersionID:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$metadataDirective(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setMetadataDirective$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setMetadataDirective$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setMetadataDirective$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setMetadataDirective$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setMetadataDirective:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstsMetricArrayBlock$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstsMetricArrayBlock$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstsMetricArrayBlock$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstsMetricArrayBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setRequstsMetricArrayBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadParts$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadParts$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadParts$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadParts$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setUploadParts:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstMetricArray$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstMetricArray$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstMetricArray$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstMetricArray$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setRequstMetricArray:)))(self, _cmd, arg1);
}



static QCloudCOSXMLCopyObjectRequest* _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$init(_LOGOS_SELF_TYPE_INIT QCloudCOSXMLCopyObjectRequest* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$object(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setObject:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setAccessControlList$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setAccessControlList$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setAccessControlList$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setAccessControlList$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setAccessControlList:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$cancel(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static long long _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$fileSize(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static long long _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$storageClass(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setStorageClass$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setStorageClass$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setStorageClass$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setStorageClass$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setStorageClass:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$bucket(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFileSize$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFileSize$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFileSize$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFileSize$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setFileSize:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceObject(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCustomHeaders$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCustomHeaders$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCustomHeaders$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCustomHeaders$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setCustomHeaders:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$customHeaders(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRegionName$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRegionName$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRegionName$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRegionName$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setRegionName:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$regionName(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$lastModified(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setLastModified$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setLastModified$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setLastModified$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setLastModified$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setLastModified:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadID(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadID$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadID$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadID$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadID$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setUploadID:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setBucket$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setBucket$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setBucket$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setBucket$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setBucket:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFinishBlock$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFinishBlock$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFinishBlock$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFinishBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setFinishBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObject$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObject$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObject$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObject$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSourceObject:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$accessControlList(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$dispatchSource(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setDispatchSource$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setDispatchSource$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setDispatchSource$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setDispatchSource$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setDispatchSource:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setTransferManager$(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setTransferManager$ ? _logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setTransferManager$ : (__typeof__(_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setTransferManager$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setTransferManager:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$transferManager(_LOGOS_SELF_TYPE_NORMAL QCloudCOSXMLCopyObjectRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCReportInfo$setFileId$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCReportInfo$setFileId$ ? _logos_orig$_ungrouped$TVCReportInfo$setFileId$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setFileId$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setFileId:)))(self, _cmd, arg1);
}



static int _logos_method$_ungrouped$TVCReportInfo$reqType(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TVCReportInfo$setReqType$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setReqType$ ? _logos_orig$_ungrouped$TVCReportInfo$setReqType$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setReqType$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setReqType:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$TVCReportInfo$errMsg(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCReportInfo$setErrMsg$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCReportInfo$setErrMsg$ ? _logos_orig$_ungrouped$TVCReportInfo$setErrMsg$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setErrMsg$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setErrMsg:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setReqKey$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCReportInfo$setReqKey$ ? _logos_orig$_ungrouped$TVCReportInfo$setReqKey$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setReqKey$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setReqKey:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setReqTime$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setReqTime$ ? _logos_orig$_ungrouped$TVCReportInfo$setReqTime$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setReqTime$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setReqTime:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$TVCReportInfo$reqTime(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$TVCReportInfo$reqKey(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCReportInfo$setUseCosAcc$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setUseCosAcc$ ? _logos_orig$_ungrouped$TVCReportInfo$setUseCosAcc$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setUseCosAcc$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setUseCosAcc:)))(self, _cmd, arg1);
}



static int _logos_method$_ungrouped$TVCReportInfo$useCosAcc(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TVCReportInfo$setErrCode$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setErrCode$ ? _logos_orig$_ungrouped$TVCReportInfo$setErrCode$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setErrCode$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setErrCode:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setReqTimeCost$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setReqTimeCost$ ? _logos_orig$_ungrouped$TVCReportInfo$setReqTimeCost$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setReqTimeCost$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setReqTimeCost:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setReqServerIp$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCReportInfo$setReqServerIp$ ? _logos_orig$_ungrouped$TVCReportInfo$setReqServerIp$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setReqServerIp$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setReqServerIp:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setReportId$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCReportInfo$setReportId$ ? _logos_orig$_ungrouped$TVCReportInfo$setReportId$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setReportId$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setReportId:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setVodSessionKey$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCReportInfo$setVodSessionKey$ ? _logos_orig$_ungrouped$TVCReportInfo$setVodSessionKey$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setVodSessionKey$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setVodSessionKey:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setVodErrCode$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setVodErrCode$ ? _logos_orig$_ungrouped$TVCReportInfo$setVodErrCode$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setVodErrCode$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setVodErrCode:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setCosErrCode$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCReportInfo$setCosErrCode$ ? _logos_orig$_ungrouped$TVCReportInfo$setCosErrCode$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setCosErrCode$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setCosErrCode:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setCosRegion$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCReportInfo$setCosRegion$ ? _logos_orig$_ungrouped$TVCReportInfo$setCosRegion$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setCosRegion$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setCosRegion:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setUseHttpDNS$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setUseHttpDNS$ ? _logos_orig$_ungrouped$TVCReportInfo$setUseHttpDNS$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setUseHttpDNS$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setUseHttpDNS:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setTcpConnTimeCost$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setTcpConnTimeCost$ ? _logos_orig$_ungrouped$TVCReportInfo$setTcpConnTimeCost$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setTcpConnTimeCost$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setTcpConnTimeCost:)))(self, _cmd, arg1);
}



static int _logos_method$_ungrouped$TVCReportInfo$errCode(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static unsigned long long _logos_method$_ungrouped$TVCReportInfo$reqTimeCost(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$TVCReportInfo$reqServerIp(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$TVCReportInfo$reportId(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$TVCReportInfo$vodSessionKey(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCReportInfo$setRecvRespTimeCost$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setRecvRespTimeCost$ ? _logos_orig$_ungrouped$TVCReportInfo$setRecvRespTimeCost$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setRecvRespTimeCost$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setRecvRespTimeCost:)))(self, _cmd, arg1);
}



static int _logos_method$_ungrouped$TVCReportInfo$vodErrCode(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$TVCReportInfo$cosErrCode(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static int _logos_method$_ungrouped$TVCReportInfo$useHttpDNS(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static unsigned long long _logos_method$_ungrouped$TVCReportInfo$tcpConnTimeCost(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static unsigned long long _logos_method$_ungrouped$TVCReportInfo$recvRespTimeCost(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$TVCReportInfo$cosRegion(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static bool _logos_method$_ungrouped$TVCReportInfo$reporting(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TVCReportInfo$setReporting$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setReporting$ ? _logos_orig$_ungrouped$TVCReportInfo$setReporting$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setReporting$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setReporting:)))(self, _cmd, arg1);
}



static TVCReportInfo* _logos_method$_ungrouped$TVCReportInfo$init(_LOGOS_SELF_TYPE_INIT TVCReportInfo* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static unsigned long long _logos_method$_ungrouped$TVCReportInfo$fileSize(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$TVCReportInfo$fileType(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$TVCReportInfo$requestId(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static int _logos_method$_ungrouped$TVCReportInfo$retryCount(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TVCReportInfo$setRetryCount$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setRetryCount$ ? _logos_orig$_ungrouped$TVCReportInfo$setRetryCount$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setRetryCount$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setRetryCount:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setFileType$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCReportInfo$setFileType$ ? _logos_orig$_ungrouped$TVCReportInfo$setFileType$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setFileType$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setFileType:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setFileSize$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setFileSize$ ? _logos_orig$_ungrouped$TVCReportInfo$setFileSize$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setFileSize$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setFileSize:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$TVCReportInfo$appId(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$TVCReportInfo$fileName(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCReportInfo$setFileName$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCReportInfo$setFileName$ ? _logos_orig$_ungrouped$TVCReportInfo$setFileName$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setFileName$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setFileName:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setAppId$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCReportInfo$setAppId$ ? _logos_orig$_ungrouped$TVCReportInfo$setAppId$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setAppId$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setAppId:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCReportInfo$setRequestId$(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCReportInfo$setRequestId$ ? _logos_orig$_ungrouped$TVCReportInfo$setRequestId$ : (__typeof__(_logos_orig$_ungrouped$TVCReportInfo$setRequestId$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCReportInfo, @selector(setRequestId:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$TVCReportInfo$fileId(_LOGOS_SELF_TYPE_NORMAL TVCReportInfo* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$TVCClient$getVersion(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCClient$signatureWithFields$request$urlRequest$compelete$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$TVCClient$signatureWithFields$request$urlRequest$compelete$ ? _logos_orig$_ungrouped$TVCClient$signatureWithFields$request$urlRequest$compelete$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$signatureWithFields$request$urlRequest$compelete$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(signatureWithFields:request:urlRequest:compelete:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$TVCClient$setReqKey$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$setReqKey$ ? _logos_orig$_ungrouped$TVCClient$setReqKey$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setReqKey$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setReqKey:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$setServerIP$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$setServerIP$ ? _logos_orig$_ungrouped$TVCClient$setServerIP$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setServerIP$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setServerIP:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$setReportInfo$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$setReportInfo$ ? _logos_orig$_ungrouped$TVCClient$setReportInfo$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setReportInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setReportInfo:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$setVirtualPercent$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCClient$setVirtualPercent$ ? _logos_orig$_ungrouped$TVCClient$setVirtualPercent$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setVirtualPercent$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setVirtualPercent:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$setRealProgressFired$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCClient$setRealProgressFired$ ? _logos_orig$_ungrouped$TVCClient$setRealProgressFired$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setRealProgressFired$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setRealProgressFired:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$TVCClient$checkConfig$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$TVCClient$checkConfig$ ? _logos_orig$_ungrouped$TVCClient$checkConfig$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$checkConfig$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(checkConfig:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$TVCClient$checkParam$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$TVCClient$checkParam$ ? _logos_orig$_ungrouped$TVCClient$checkParam$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$checkParam$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(checkParam:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$TVCClient$getFileType$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$TVCClient$getFileType$ ? _logos_orig$_ungrouped$TVCClient$getFileType$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$getFileType$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(getFileType:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$TVCClient$getFileName$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$TVCClient$getFileName$ ? _logos_orig$_ungrouped$TVCClient$getFileName$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$getFileName$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(getFileName:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$txReport$errCode$vodErrCode$cosErrCode$errInfo$reqTime$reqTimeCost$reqKey$appId$fileSize$fileType$fileName$sessionKey$fileId$cosRegion$useCosAcc$cosRequestId$cosTcpConnTimeCost$cosRecvRespTimeCost$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, int arg2, int arg3, id arg4, id arg5, long long arg6, long long arg7, id arg8, id arg9, long long arg10, id arg11, id arg12, id arg13, id arg14, id arg15, int arg16, id arg17, long long arg18, long long arg19) {
    arg1 = 0;
    arg2 = 0;
    arg3 = 0;
    arg4 = NULL;
    arg5 = NULL;
    arg6 = 0;
    arg7 = 0;
    arg8 = NULL;
    arg9 = NULL;
    arg10 = 0;
    arg11 = NULL;
    arg12 = NULL;
    arg13 = NULL;
    arg15 = NULL;
    arg14 = NULL;
    arg16 = 0;
    arg17 = NULL;
    arg18 = 0;
    arg19 = 0;
    (_logos_orig$_ungrouped$TVCClient$txReport$errCode$vodErrCode$cosErrCode$errInfo$reqTime$reqTimeCost$reqKey$appId$fileSize$fileType$fileName$sessionKey$fileId$cosRegion$useCosAcc$cosRequestId$cosTcpConnTimeCost$cosRecvRespTimeCost$ ? _logos_orig$_ungrouped$TVCClient$txReport$errCode$vodErrCode$cosErrCode$errInfo$reqTime$reqTimeCost$reqKey$appId$fileSize$fileType$fileName$sessionKey$fileId$cosRegion$useCosAcc$cosRequestId$cosTcpConnTimeCost$cosRecvRespTimeCost$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$txReport$errCode$vodErrCode$cosErrCode$errInfo$reqTime$reqTimeCost$reqKey$appId$fileSize$fileType$fileName$sessionKey$fileId$cosRegion$useCosAcc$cosRequestId$cosTcpConnTimeCost$cosRecvRespTimeCost$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(txReport:errCode:vodErrCode:cosErrCode:errInfo:reqTime:reqTimeCost:reqKey:appId:fileSize:fileType:fileName:sessionKey:fileId:cosRegion:useCosAcc:cosRequestId:cosTcpConnTimeCost:cosRecvRespTimeCost:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19);
}



static id _logos_method$_ungrouped$TVCClient$getSessionFromFilepath$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCClient$applyUploadUGC$withVodSessionKey$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$TVCClient$applyUploadUGC$withVodSessionKey$ ? _logos_orig$_ungrouped$TVCClient$applyUploadUGC$withVodSessionKey$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$applyUploadUGC$withVodSessionKey$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(applyUploadUGC:withVodSessionKey:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$TVCClient$uploadRequest(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCClient$queryIpWithDomain$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$queryIpWithDomain$ ? _logos_orig$_ungrouped$TVCClient$queryIpWithDomain$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$queryIpWithDomain$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(queryIpWithDomain:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$postVirtualProgress$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$postVirtualProgress$ ? _logos_orig$_ungrouped$TVCClient$postVirtualProgress$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$postVirtualProgress$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(postVirtualProgress:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$getCosInitParam$withVodSessionKey$withDomain$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$TVCClient$getCosInitParam$withVodSessionKey$withDomain$ ? _logos_orig$_ungrouped$TVCClient$getCosInitParam$withVodSessionKey$withDomain$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$getCosInitParam$withVodSessionKey$withDomain$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(getCosInitParam:withVodSessionKey:withDomain:)))(self, _cmd, arg1, arg2, arg3);
}



static id _logos_method$_ungrouped$TVCClient$getCosInitURLRequest$withContext$withVodSessionKey$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCClient$notifyResult$resp$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$TVCClient$notifyResult$resp$ ? _logos_orig$_ungrouped$TVCClient$notifyResult$resp$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$notifyResult$resp$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(notifyResult:resp:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$TVCClient$setSession$resumeData$lastModTime$withFilePath$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, unsigned long long arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    arg4 = NULL;
    (_logos_orig$_ungrouped$TVCClient$setSession$resumeData$lastModTime$withFilePath$ ? _logos_orig$_ungrouped$TVCClient$setSession$resumeData$lastModTime$withFilePath$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setSession$resumeData$lastModTime$withFilePath$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setSession:resumeData:lastModTime:withFilePath:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static id _logos_method$_ungrouped$TVCClient$reqKey(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCClient$parseInitRsp$withContex$withVodSessionKey$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$TVCClient$parseInitRsp$withContex$withVodSessionKey$ ? _logos_orig$_ungrouped$TVCClient$parseInitRsp$withContex$withVodSessionKey$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$parseInitRsp$withContex$withVodSessionKey$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(parseInitRsp:withContex:withVodSessionKey:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$TVCClient$setupCOSXMLShareService$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$setupCOSXMLShareService$ ? _logos_orig$_ungrouped$TVCClient$setupCOSXMLShareService$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setupCOSXMLShareService$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setupCOSXMLShareService:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$commitCosUpload$withResumeUpload$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, bool arg2) {
    arg1 = NULL;
    arg2 = 0;
    (_logos_orig$_ungrouped$TVCClient$commitCosUpload$withResumeUpload$ ? _logos_orig$_ungrouped$TVCClient$commitCosUpload$withResumeUpload$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$commitCosUpload$withResumeUpload$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(commitCosUpload:withResumeUpload:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$TVCClient$setSession$resumeData$lastModTime$coverLastModTime$withFilePath$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, unsigned long long arg3, unsigned long long arg4, id arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    arg4 = 0;
    arg5 = NULL;
    (_logos_orig$_ungrouped$TVCClient$setSession$resumeData$lastModTime$coverLastModTime$withFilePath$ ? _logos_orig$_ungrouped$TVCClient$setSession$resumeData$lastModTime$coverLastModTime$withFilePath$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setSession$resumeData$lastModTime$coverLastModTime$withFilePath$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setSession:resumeData:lastModTime:coverLastModTime:withFilePath:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$TVCClient$setUploadRequest$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$setUploadRequest$ ? _logos_orig$_ungrouped$TVCClient$setUploadRequest$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setUploadRequest$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setUploadRequest:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TVCClient$realProgressFired(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TVCClient$notifyCosUploadEnd$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$notifyCosUploadEnd$ ? _logos_orig$_ungrouped$TVCClient$notifyCosUploadEnd$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$notifyCosUploadEnd$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(notifyCosUploadEnd:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$completeUpload$withDomain$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$TVCClient$completeUpload$withDomain$ ? _logos_orig$_ungrouped$TVCClient$completeUpload$withDomain$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$completeUpload$withDomain$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(completeUpload:withDomain:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$TVCClient$getCosEndURLRequest$withContext$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCClient$parseFinishRsp$withContex$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$TVCClient$parseFinishRsp$withContex$ ? _logos_orig$_ungrouped$TVCClient$parseFinishRsp$withContex$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$parseFinishRsp$withContex$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(parseFinishRsp:withContex:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$TVCClient$txReportDAU(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$TVCClient$reportInfo(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$TVCClient$serverIP(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static int _logos_method$_ungrouped$TVCClient$virtualPercent(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TVCClient$uploadVideo$result$progress$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$uploadVideo$result$progress$ ? _logos_orig$_ungrouped$TVCClient$uploadVideo$result$progress$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$uploadVideo$result$progress$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(uploadVideo:result:progress:)))(self, _cmd, arg1, arg2, arg3);
}



static bool _logos_method$_ungrouped$TVCClient$cancleUploadVideo(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$TVCClient$getStatusInfo(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCClient$dealloc(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$TVCClient$config(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$TVCClient$timer(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$TVCClient$getLastComponent$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$TVCClient$getLastComponent$ ? _logos_orig$_ungrouped$TVCClient$getLastComponent$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$getLastComponent$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(getLastComponent:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$setTimer$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$setTimer$ ? _logos_orig$_ungrouped$TVCClient$setTimer$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setTimer$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setTimer:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$setConfig$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$setConfig$ ? _logos_orig$_ungrouped$TVCClient$setConfig$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setConfig$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setConfig:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$TVCClient$session(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCClient$setSession$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$setSession$ ? _logos_orig$_ungrouped$TVCClient$setSession$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setSession:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$URLSession$task$didFinishCollectingMetrics$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$TVCClient$URLSession$task$didFinishCollectingMetrics$ ? _logos_orig$_ungrouped$TVCClient$URLSession$task$didFinishCollectingMetrics$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$URLSession$task$didFinishCollectingMetrics$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(URLSession:task:didFinishCollectingMetrics:)))(self, _cmd, arg1, arg2, arg3);
}



static id _logos_method$_ungrouped$TVCClient$creator(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCClient$setCreator$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCClient$setCreator$ ? _logos_orig$_ungrouped$TVCClient$setCreator$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setCreator$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setCreator:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCClient$setAppId$(_LOGOS_SELF_TYPE_NORMAL TVCClient* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCClient$setAppId$ ? _logos_orig$_ungrouped$TVCClient$setAppId$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$setAppId$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(setAppId:)))(self, _cmd, arg1);
}



static TVCClient* _logos_method$_ungrouped$TVCClient$initWithConfig$(_LOGOS_SELF_TYPE_INIT TVCClient* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$TVCClient$initWithConfig$ ? _logos_orig$_ungrouped$TVCClient$initWithConfig$ : (__typeof__(_logos_orig$_ungrouped$TVCClient$initWithConfig$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCClient, @selector(initWithConfig:)))(self, _cmd, arg1);
}



static id _logos_meta_method$_ungrouped$GSDKUdpTest$sharedInstance(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GSDKUdpTest$setMSocketfd$(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GSDKUdpTest$setMSocketfd$ ? _logos_orig$_ungrouped$GSDKUdpTest$setMSocketfd$ : (__typeof__(_logos_orig$_ungrouped$GSDKUdpTest$setMSocketfd$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKUdpTest, @selector(setMSocketfd:)))(self, _cmd, arg1);
}



static int _logos_method$_ungrouped$GSDKUdpTest$mSocketfd(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GSDKUdpTest$stopSpeedTest(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static int _logos_method$_ungrouped$GSDKUdpTest$getV6SpeedSock(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static int _logos_method$_ungrouped$GSDKUdpTest$getSpeedSock(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GSDKUdpTest$stopUDPTimer(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$GSDKUdpTest$setMUdpDotsList$(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GSDKUdpTest$setMUdpDotsList$ ? _logos_orig$_ungrouped$GSDKUdpTest$setMUdpDotsList$ : (__typeof__(_logos_orig$_ungrouped$GSDKUdpTest$setMUdpDotsList$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKUdpTest, @selector(setMUdpDotsList:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GSDKUdpTest$mUdpDotsList(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GSDKUdpTest$setMLost$(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GSDKUdpTest$setMLost$ ? _logos_orig$_ungrouped$GSDKUdpTest$setMLost$ : (__typeof__(_logos_orig$_ungrouped$GSDKUdpTest$setMLost$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKUdpTest, @selector(setMLost:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GSDKUdpTest$setMTag$(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GSDKUdpTest$setMTag$ ? _logos_orig$_ungrouped$GSDKUdpTest$setMTag$ : (__typeof__(_logos_orig$_ungrouped$GSDKUdpTest$setMTag$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKUdpTest, @selector(setMTag:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GSDKUdpTest$setMPcntx00_num$(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GSDKUdpTest$setMPcntx00_num$ ? _logos_orig$_ungrouped$GSDKUdpTest$setMPcntx00_num$ : (__typeof__(_logos_orig$_ungrouped$GSDKUdpTest$setMPcntx00_num$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKUdpTest, @selector(setMPcntx00_num:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GSDKUdpTest$getSendData(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static int _logos_method$_ungrouped$GSDKUdpTest$mPcntx00_num(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static int _logos_method$_ungrouped$GSDKUdpTest$mLost(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static int _logos_method$_ungrouped$GSDKUdpTest$Heavy$(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return 0;
}



static void _logos_method$_ungrouped$GSDKUdpTest$startUdpTest$Sport$Pcntx00$Frequency$(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, int arg2, int arg3, double arg4) {
    arg1 = NULL;
    arg2 = 0;
    arg3 = 0;
    arg4 = 0;
    (_logos_orig$_ungrouped$GSDKUdpTest$startUdpTest$Sport$Pcntx00$Frequency$ ? _logos_orig$_ungrouped$GSDKUdpTest$startUdpTest$Sport$Pcntx00$Frequency$ : (__typeof__(_logos_orig$_ungrouped$GSDKUdpTest$startUdpTest$Sport$Pcntx00$Frequency$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKUdpTest, @selector(startUdpTest:Sport:Pcntx00:Frequency:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static id _logos_method$_ungrouped$GSDKUdpTest$resultUDPTest(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$GSDKUdpTest$resultUDPTest_noCollect(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$GSDKUdpTest$pingDots(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GSDKUdpTest$dealloc(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$GSDKUdpTest$setTimerSource$(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GSDKUdpTest$setTimerSource$ ? _logos_orig$_ungrouped$GSDKUdpTest$setTimerSource$ : (__typeof__(_logos_orig$_ungrouped$GSDKUdpTest$setTimerSource$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKUdpTest, @selector(setTimerSource:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GSDKUdpTest$timerSource(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static unsigned int _logos_method$_ungrouped$GSDKUdpTest$mTag(_LOGOS_SELF_TYPE_NORMAL GSDKUdpTest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_meta_method$_ungrouped$GSDKUdpDetect$sharedInstance(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GSDKUdpDetect$setMSocketfd$(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GSDKUdpDetect$setMSocketfd$ ? _logos_orig$_ungrouped$GSDKUdpDetect$setMSocketfd$ : (__typeof__(_logos_orig$_ungrouped$GSDKUdpDetect$setMSocketfd$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKUdpDetect, @selector(setMSocketfd:)))(self, _cmd, arg1);
}



static int _logos_method$_ungrouped$GSDKUdpDetect$mSocketfd(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GSDKUdpDetect$stopSpeedTest(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static int _logos_method$_ungrouped$GSDKUdpDetect$getV6SpeedSock(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static int _logos_method$_ungrouped$GSDKUdpDetect$getSpeedSock(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$GSDKUdpDetect$isUDPConnect$Port$(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, int arg2) {
    arg2 = 0;
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$GSDKUdpDetect$isUDPConnect$Port$ ? _logos_orig$_ungrouped$GSDKUdpDetect$isUDPConnect$Port$ : (__typeof__(_logos_orig$_ungrouped$GSDKUdpDetect$isUDPConnect$Port$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKUdpDetect, @selector(isUDPConnect:Port:)))(self, _cmd, arg1, arg2);
}



static unsigned int _logos_method$_ungrouped$GSDKUdpDetect$tag(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GSDKUdpDetect$setTag$(_LOGOS_SELF_TYPE_NORMAL GSDKUdpDetect* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GSDKUdpDetect$setTag$ ? _logos_orig$_ungrouped$GSDKUdpDetect$setTag$ : (__typeof__(_logos_orig$_ungrouped$GSDKUdpDetect$setTag$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKUdpDetect, @selector(setTag:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GSDKDetectPort$setHip$(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GSDKDetectPort$setHip$ ? _logos_orig$_ungrouped$GSDKDetectPort$setHip$ : (__typeof__(_logos_orig$_ungrouped$GSDKDetectPort$setHip$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKDetectPort, @selector(setHip:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GSDKDetectPort$hip(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$GSDKDetectPort$isConnection$Port$(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, int arg2) {
    return NULL;
}



static void _logos_method$_ungrouped$GSDKDetectPort$dealloc(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static bool _logos_method$_ungrouped$GSDKDetectPort$isFinished(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$GSDKDetectPort$result(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GSDKDetectPort$setResult$(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GSDKDetectPort$setResult$ ? _logos_orig$_ungrouped$GSDKDetectPort$setResult$ : (__typeof__(_logos_orig$_ungrouped$GSDKDetectPort$setResult$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKDetectPort, @selector(setResult:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GSDKDetectPort$setIsFinished$(_LOGOS_SELF_TYPE_NORMAL GSDKDetectPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GSDKDetectPort$setIsFinished$ ? _logos_orig$_ungrouped$GSDKDetectPort$setIsFinished$ : (__typeof__(_logos_orig$_ungrouped$GSDKDetectPort$setIsFinished$))class_getMethodImplementation(_logos_superclass$_ungrouped$GSDKDetectPort, @selector(setIsFinished:)))(self, _cmd, arg1);
}



static PLCrashMachExceptionServer* _logos_method$_ungrouped$PLCrashMachExceptionServer$initWithCallBack$context$error$(_LOGOS_SELF_TYPE_INIT PLCrashMachExceptionServer* __unused self, SEL __unused _cmd, id arg1, void* arg2, id* arg3) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_method$_ungrouped$PLCrashMachExceptionServer$exceptionPortWithMask$error$(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionServer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned int arg1, id* arg2) {
    return NULL;
}



static unsigned int _logos_method$_ungrouped$PLCrashMachExceptionServer$copySendRightForServerAndReturningError$(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionServer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id* arg1) {
    return 0;
}



static unsigned int _logos_method$_ungrouped$PLCrashMachExceptionServer$serverThread(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionServer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$PLCrashMachExceptionServer$dealloc(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionServer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_meta_method$_ungrouped$PLCrashMachExceptionPort$exceptionPortsForTask$mask$error$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned int arg1, unsigned int arg2, id* arg3) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$PLCrashMachExceptionPort$exceptionPortsForThread$mask$error$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned int arg1, unsigned int arg2, id* arg3) {
    return NULL;
}



static bool _logos_method$_ungrouped$PLCrashMachExceptionPort$registerForTask$previousPortSet$error$(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned int arg1, id* arg2, id* arg3) {
    return 0;
}



static PLCrashMachExceptionPort* _logos_method$_ungrouped$PLCrashMachExceptionPort$initWithServerPort$mask$behavior$flavor$(_LOGOS_SELF_TYPE_INIT PLCrashMachExceptionPort* __unused self, SEL __unused _cmd, unsigned int arg1, unsigned int arg2, int arg3, int arg4) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static bool _logos_method$_ungrouped$PLCrashMachExceptionPort$registerForThread$previousPortSet$error$(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned int arg1, id* arg2, id* arg3) {
    return 0;
}



static unsigned int _logos_method$_ungrouped$PLCrashMachExceptionPort$server_port(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$PLCrashMachExceptionPort$dealloc(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static unsigned int _logos_method$_ungrouped$PLCrashMachExceptionPort$mask(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static int _logos_method$_ungrouped$PLCrashMachExceptionPort$behavior(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static int _logos_method$_ungrouped$PLCrashMachExceptionPort$flavor(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPort* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$PLCrashMachExceptionPortSet$dealloc(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPortSet* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static unsigned long long _logos_method$_ungrouped$PLCrashMachExceptionPortSet$countByEnumeratingWithState$objects$count$(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPortSet* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id* arg2, unsigned long long arg3) {
    return 0;
}



static id _logos_method$_ungrouped$PLCrashMachExceptionPortSet$set(_LOGOS_SELF_TYPE_NORMAL PLCrashMachExceptionPortSet* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static PLCrashMachExceptionPortSet* _logos_method$_ungrouped$PLCrashMachExceptionPortSet$initWithSet$(_LOGOS_SELF_TYPE_INIT PLCrashMachExceptionPortSet* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$PLCrashMachExceptionPortSet$initWithSet$ ? _logos_orig$_ungrouped$PLCrashMachExceptionPortSet$initWithSet$ : (__typeof__(_logos_orig$_ungrouped$PLCrashMachExceptionPortSet$initWithSet$))class_getMethodImplementation(_logos_superclass$_ungrouped$PLCrashMachExceptionPortSet, @selector(initWithSet:)))(self, _cmd, arg1);
}



static id _logos_meta_method$_ungrouped$VKAccessToken$getKeychainQuery$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$VKAccessToken$tokenFromUrlString$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static void _logos_meta_method$_ungrouped$VKAccessToken$save$data$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    return (_logos_meta_orig$_ungrouped$VKAccessToken$save$data$ ? _logos_meta_orig$_ungrouped$VKAccessToken$save$data$ : (__typeof__(_logos_meta_orig$_ungrouped$VKAccessToken$save$data$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$VKAccessToken, @selector(save:data:)))(self, _cmd, arg1, arg2);
}



static id _logos_meta_method$_ungrouped$VKAccessToken$tokenWithToken$secret$userId$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$VKAccessToken$savedToken$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_meta_orig$_ungrouped$VKAccessToken$savedToken$ ? _logos_meta_orig$_ungrouped$VKAccessToken$savedToken$ : (__typeof__(_logos_meta_orig$_ungrouped$VKAccessToken$savedToken$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$VKAccessToken, @selector(savedToken:)))(self, _cmd, arg1);
}



static id _logos_meta_method$_ungrouped$VKAccessToken$load$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_meta_orig$_ungrouped$VKAccessToken$load$ ? _logos_meta_orig$_ungrouped$VKAccessToken$load$ : (__typeof__(_logos_meta_orig$_ungrouped$VKAccessToken$load$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$VKAccessToken, @selector(load:)))(self, _cmd, arg1);
}



static void _logos_meta_method$_ungrouped$VKAccessToken$delete$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$VKAccessToken$delete$ ? _logos_meta_orig$_ungrouped$VKAccessToken$delete$ : (__typeof__(_logos_meta_orig$_ungrouped$VKAccessToken$delete$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$VKAccessToken, @selector(delete:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$VKAccessToken$expiresIn(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static VKAccessToken* _logos_method$_ungrouped$VKAccessToken$initWithToken$secret$userId$(_LOGOS_SELF_TYPE_INIT VKAccessToken* __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static VKAccessToken* _logos_method$_ungrouped$VKAccessToken$initWithUrlString$(_LOGOS_SELF_TYPE_INIT VKAccessToken* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$VKAccessToken$initWithUrlString$ ? _logos_orig$_ungrouped$VKAccessToken$initWithUrlString$ : (__typeof__(_logos_orig$_ungrouped$VKAccessToken$initWithUrlString$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessToken, @selector(initWithUrlString:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$VKAccessToken$restorePermissions$(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$VKAccessToken$restorePermissions$ ? _logos_orig$_ungrouped$VKAccessToken$restorePermissions$ : (__typeof__(_logos_orig$_ungrouped$VKAccessToken$restorePermissions$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessToken, @selector(restorePermissions:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$VKAccessToken$httpsRequired(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VKAccessToken$checkIfExpired(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$VKAccessToken$notifyTokenExpired(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static VKAccessToken* _logos_method$_ungrouped$VKAccessToken$initWithVKAccessToken$(_LOGOS_SELF_TYPE_INIT VKAccessToken* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$VKAccessToken$saveTokenToDefaults$(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$VKAccessToken$saveTokenToDefaults$ ? _logos_orig$_ungrouped$VKAccessToken$saveTokenToDefaults$ : (__typeof__(_logos_orig$_ungrouped$VKAccessToken$saveTokenToDefaults$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessToken, @selector(saveTokenToDefaults:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VKAccessToken$setAccessTokenRequiredHTTPS(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static VKAccessToken* _logos_method$_ungrouped$VKAccessToken$copy(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static VKAccessToken* _logos_method$_ungrouped$VKAccessToken$mutableCopy(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$VKAccessToken$encodeWithCoder$(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$VKAccessToken$encodeWithCoder$ ? _logos_orig$_ungrouped$VKAccessToken$encodeWithCoder$ : (__typeof__(_logos_orig$_ungrouped$VKAccessToken$encodeWithCoder$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessToken, @selector(encodeWithCoder:)))(self, _cmd, arg1);
}



static VKAccessToken* _logos_method$_ungrouped$VKAccessToken$initWithCoder$(_LOGOS_SELF_TYPE_INIT VKAccessToken* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static bool _logos_method$_ungrouped$VKAccessToken$isExpired(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$VKAccessToken$email(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$VKAccessToken$setAccessToken$(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$VKAccessToken$setAccessToken$ ? _logos_orig$_ungrouped$VKAccessToken$setAccessToken$ : (__typeof__(_logos_orig$_ungrouped$VKAccessToken$setAccessToken$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessToken, @selector(setAccessToken:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$VKAccessToken$permissions(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$VKAccessToken$userId(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$VKAccessToken$secret(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$VKAccessToken$localUser(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$VKAccessToken$accessToken(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static double _logos_method$_ungrouped$VKAccessToken$created(_LOGOS_SELF_TYPE_NORMAL VKAccessToken* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VKAccessTokenMutable$setExpiresIn$(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$VKAccessTokenMutable$setExpiresIn$ ? _logos_orig$_ungrouped$VKAccessTokenMutable$setExpiresIn$ : (__typeof__(_logos_orig$_ungrouped$VKAccessTokenMutable$setExpiresIn$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessTokenMutable, @selector(setExpiresIn:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VKAccessTokenMutable$setHttpsRequired$(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$VKAccessTokenMutable$setHttpsRequired$ ? _logos_orig$_ungrouped$VKAccessTokenMutable$setHttpsRequired$ : (__typeof__(_logos_orig$_ungrouped$VKAccessTokenMutable$setHttpsRequired$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessTokenMutable, @selector(setHttpsRequired:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VKAccessTokenMutable$setAccessToken$(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$VKAccessTokenMutable$setAccessToken$ ? _logos_orig$_ungrouped$VKAccessTokenMutable$setAccessToken$ : (__typeof__(_logos_orig$_ungrouped$VKAccessTokenMutable$setAccessToken$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessTokenMutable, @selector(setAccessToken:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VKAccessTokenMutable$setPermissions$(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$VKAccessTokenMutable$setPermissions$ ? _logos_orig$_ungrouped$VKAccessTokenMutable$setPermissions$ : (__typeof__(_logos_orig$_ungrouped$VKAccessTokenMutable$setPermissions$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessTokenMutable, @selector(setPermissions:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VKAccessTokenMutable$setUserId$(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$VKAccessTokenMutable$setUserId$ ? _logos_orig$_ungrouped$VKAccessTokenMutable$setUserId$ : (__typeof__(_logos_orig$_ungrouped$VKAccessTokenMutable$setUserId$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessTokenMutable, @selector(setUserId:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VKAccessTokenMutable$setLocalUser$(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$VKAccessTokenMutable$setLocalUser$ ? _logos_orig$_ungrouped$VKAccessTokenMutable$setLocalUser$ : (__typeof__(_logos_orig$_ungrouped$VKAccessTokenMutable$setLocalUser$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessTokenMutable, @selector(setLocalUser:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VKAccessTokenMutable$setSecret$(_LOGOS_SELF_TYPE_NORMAL VKAccessTokenMutable* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$VKAccessTokenMutable$setSecret$ ? _logos_orig$_ungrouped$VKAccessTokenMutable$setSecret$ : (__typeof__(_logos_orig$_ungrouped$VKAccessTokenMutable$setSecret$))class_getMethodImplementation(_logos_superclass$_ungrouped$VKAccessTokenMutable, @selector(setSecret:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXMediaPublishParam$enableResume(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$TXMediaPublishParam$enableHTTPS(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXMediaPublishParam$setEnableHTTPS$(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TXMediaPublishParam$setEnableHTTPS$ ? _logos_orig$_ungrouped$TXMediaPublishParam$setEnableHTTPS$ : (__typeof__(_logos_orig$_ungrouped$TXMediaPublishParam$setEnableHTTPS$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXMediaPublishParam, @selector(setEnableHTTPS:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TXMediaPublishParam$setEnableResume$(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TXMediaPublishParam$setEnableResume$ ? _logos_orig$_ungrouped$TXMediaPublishParam$setEnableResume$ : (__typeof__(_logos_orig$_ungrouped$TXMediaPublishParam$setEnableResume$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXMediaPublishParam, @selector(setEnableResume:)))(self, _cmd, arg1);
}



static TXMediaPublishParam* _logos_method$_ungrouped$TXMediaPublishParam$init(_LOGOS_SELF_TYPE_INIT TXMediaPublishParam* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_method$_ungrouped$TXMediaPublishParam$signature(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$TXMediaPublishParam$fileName(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TXMediaPublishParam$setFileName$(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TXMediaPublishParam$setFileName$ ? _logos_orig$_ungrouped$TXMediaPublishParam$setFileName$ : (__typeof__(_logos_orig$_ungrouped$TXMediaPublishParam$setFileName$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXMediaPublishParam, @selector(setFileName:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TXMediaPublishParam$setSignature$(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TXMediaPublishParam$setSignature$ ? _logos_orig$_ungrouped$TXMediaPublishParam$setSignature$ : (__typeof__(_logos_orig$_ungrouped$TXMediaPublishParam$setSignature$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXMediaPublishParam, @selector(setSignature:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$TXMediaPublishParam$mediaPath(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TXMediaPublishParam$setMediaPath$(_LOGOS_SELF_TYPE_NORMAL TXMediaPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TXMediaPublishParam$setMediaPath$ ? _logos_orig$_ungrouped$TXMediaPublishParam$setMediaPath$ : (__typeof__(_logos_orig$_ungrouped$TXMediaPublishParam$setMediaPath$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXMediaPublishParam, @selector(setMediaPath:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TXPublishParam$setCoverPath$(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TXPublishParam$setCoverPath$ ? _logos_orig$_ungrouped$TXPublishParam$setCoverPath$ : (__typeof__(_logos_orig$_ungrouped$TXPublishParam$setCoverPath$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXPublishParam, @selector(setCoverPath:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$TXPublishParam$coverPath(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static bool _logos_method$_ungrouped$TXPublishParam$enableResume(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$TXPublishParam$secretId(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TXPublishParam$setSecretId$(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TXPublishParam$setSecretId$ ? _logos_orig$_ungrouped$TXPublishParam$setSecretId$ : (__typeof__(_logos_orig$_ungrouped$TXPublishParam$setSecretId$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXPublishParam, @selector(setSecretId:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TXPublishParam$enableHTTPS(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TXPublishParam$setEnableHTTPS$(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TXPublishParam$setEnableHTTPS$ ? _logos_orig$_ungrouped$TXPublishParam$setEnableHTTPS$ : (__typeof__(_logos_orig$_ungrouped$TXPublishParam$setEnableHTTPS$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXPublishParam, @selector(setEnableHTTPS:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TXPublishParam$setEnableResume$(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TXPublishParam$setEnableResume$ ? _logos_orig$_ungrouped$TXPublishParam$setEnableResume$ : (__typeof__(_logos_orig$_ungrouped$TXPublishParam$setEnableResume$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXPublishParam, @selector(setEnableResume:)))(self, _cmd, arg1);
}



static TXPublishParam* _logos_method$_ungrouped$TXPublishParam$init(_LOGOS_SELF_TYPE_INIT TXPublishParam* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_method$_ungrouped$TXPublishParam$signature(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$TXPublishParam$videoPath(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TXPublishParam$setVideoPath$(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TXPublishParam$setVideoPath$ ? _logos_orig$_ungrouped$TXPublishParam$setVideoPath$ : (__typeof__(_logos_orig$_ungrouped$TXPublishParam$setVideoPath$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXPublishParam, @selector(setVideoPath:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$TXPublishParam$fileName(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TXPublishParam$setFileName$(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TXPublishParam$setFileName$ ? _logos_orig$_ungrouped$TXPublishParam$setFileName$ : (__typeof__(_logos_orig$_ungrouped$TXPublishParam$setFileName$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXPublishParam, @selector(setFileName:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TXPublishParam$setSignature$(_LOGOS_SELF_TYPE_NORMAL TXPublishParam* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TXPublishParam$setSignature$ ? _logos_orig$_ungrouped$TXPublishParam$setSignature$ : (__typeof__(_logos_orig$_ungrouped$TXPublishParam$setSignature$))class_getMethodImplementation(_logos_superclass$_ungrouped$TXPublishParam, @selector(setSignature:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$TVCConfig$enableResume(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$TVCConfig$enableHttps(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TVCConfig$setEnableResume$(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCConfig$setEnableResume$ ? _logos_orig$_ungrouped$TVCConfig$setEnableResume$ : (__typeof__(_logos_orig$_ungrouped$TVCConfig$setEnableResume$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCConfig, @selector(setEnableResume:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCConfig$setEnableHttps$(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCConfig$setEnableHttps$ ? _logos_orig$_ungrouped$TVCConfig$setEnableHttps$ : (__typeof__(_logos_orig$_ungrouped$TVCConfig$setEnableHttps$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCConfig, @selector(setEnableHttps:)))(self, _cmd, arg1);
}



static TVCConfig* _logos_method$_ungrouped$TVCConfig$init(_LOGOS_SELF_TYPE_INIT TVCConfig* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_method$_ungrouped$TVCConfig$userID(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$TVCConfig$setUserID$(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCConfig$setUserID$ ? _logos_orig$_ungrouped$TVCConfig$setUserID$ : (__typeof__(_logos_orig$_ungrouped$TVCConfig$setUserID$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCConfig, @selector(setUserID:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$TVCConfig$setTimeoutInterval$(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, double arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$TVCConfig$setTimeoutInterval$ ? _logos_orig$_ungrouped$TVCConfig$setTimeoutInterval$ : (__typeof__(_logos_orig$_ungrouped$TVCConfig$setTimeoutInterval$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCConfig, @selector(setTimeoutInterval:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$TVCConfig$signature(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static double _logos_method$_ungrouped$TVCConfig$timeoutInterval(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$TVCConfig$setSignature$(_LOGOS_SELF_TYPE_NORMAL TVCConfig* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$TVCConfig$setSignature$ ? _logos_orig$_ungrouped$TVCConfig$setSignature$ : (__typeof__(_logos_orig$_ungrouped$TVCConfig$setSignature$))class_getMethodImplementation(_logos_superclass$_ungrouped$TVCConfig, @selector(setSignature:)))(self, _cmd, arg1);
}



static GADResourceBuffer* _logos_method$_ungrouped$GADResourceBuffer$initWithRequest$fileURL$contentType$contentLength$removeFileOnDealloc$(_LOGOS_SELF_TYPE_INIT GADResourceBuffer* __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, long long arg4, bool arg5) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static GADResourceBuffer* _logos_method$_ungrouped$GADResourceBuffer$initWithRequest$fileURL$removeFileOnDealloc$(_LOGOS_SELF_TYPE_INIT GADResourceBuffer* __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$GADResourceBuffer$addObserverForNotifyBytes$toCollection$queue$usingBlock$(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1, id arg2, id arg3, id arg4) {
    arg1 = 0;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$GADResourceBuffer$addObserverForNotifyBytes$toCollection$queue$usingBlock$ ? _logos_orig$_ungrouped$GADResourceBuffer$addObserverForNotifyBytes$toCollection$queue$usingBlock$ : (__typeof__(_logos_orig$_ungrouped$GADResourceBuffer$addObserverForNotifyBytes$toCollection$queue$usingBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADResourceBuffer, @selector(addObserverForNotifyBytes:toCollection:queue:usingBlock:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$GADResourceBuffer$setMaxBytes$(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GADResourceBuffer$setMaxBytes$ ? _logos_orig$_ungrouped$GADResourceBuffer$setMaxBytes$ : (__typeof__(_logos_orig$_ungrouped$GADResourceBuffer$setMaxBytes$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADResourceBuffer, @selector(setMaxBytes:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$GADResourceBuffer$bufferedContentSize(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GADResourceBuffer$startPeriodicReportsWithTimeInterval$(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, double arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GADResourceBuffer$startPeriodicReportsWithTimeInterval$ ? _logos_orig$_ungrouped$GADResourceBuffer$startPeriodicReportsWithTimeInterval$ : (__typeof__(_logos_orig$_ungrouped$GADResourceBuffer$startPeriodicReportsWithTimeInterval$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADResourceBuffer, @selector(startPeriodicReportsWithTimeInterval:)))(self, _cmd, arg1);
}



static double _logos_method$_ungrouped$GADResourceBuffer$networkSpeedInBytesPerSecond(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GADResourceBuffer$commonInitWithRequest$fileURL$removeFileOnDealloc$(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    (_logos_orig$_ungrouped$GADResourceBuffer$commonInitWithRequest$fileURL$removeFileOnDealloc$ ? _logos_orig$_ungrouped$GADResourceBuffer$commonInitWithRequest$fileURL$removeFileOnDealloc$ : (__typeof__(_logos_orig$_ungrouped$GADResourceBuffer$commonInitWithRequest$fileURL$removeFileOnDealloc$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADResourceBuffer, @selector(commonInitWithRequest:fileURL:removeFileOnDealloc:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$GADResourceBuffer$reportCSI(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$GADResourceBuffer$notifyObserversWaitingForNotifyBytes(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static bool _logos_method$_ungrouped$GADResourceBuffer$responseHeadersReceived(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GADResourceBuffer$dealloc(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$GADResourceBuffer$start(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$GADResourceBuffer$context(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GADResourceBuffer$reset(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$GADResourceBuffer$contentType(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$GADResourceBuffer$fileURL(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GADResourceBuffer$finishWithError$(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GADResourceBuffer$finishWithError$ ? _logos_orig$_ungrouped$GADResourceBuffer$finishWithError$ : (__typeof__(_logos_orig$_ungrouped$GADResourceBuffer$finishWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADResourceBuffer, @selector(finishWithError:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GADResourceBuffer$request(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GADResourceBuffer$URLSession$task$didCompleteWithError$(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$GADResourceBuffer$URLSession$task$didCompleteWithError$ ? _logos_orig$_ungrouped$GADResourceBuffer$URLSession$task$didCompleteWithError$ : (__typeof__(_logos_orig$_ungrouped$GADResourceBuffer$URLSession$task$didCompleteWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADResourceBuffer, @selector(URLSession:task:didCompleteWithError:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveData$(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveData$ ? _logos_orig$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveData$ : (__typeof__(_logos_orig$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveData$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADResourceBuffer, @selector(URLSession:dataTask:didReceiveData:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveResponse$completionHandler$(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveResponse$completionHandler$ ? _logos_orig$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveResponse$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveResponse$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADResourceBuffer, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static bool _logos_method$_ungrouped$GADResourceBuffer$started(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$GADResourceBuffer$completed(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GADResourceBuffer$cancelWithError$(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GADResourceBuffer$cancelWithError$ ? _logos_orig$_ungrouped$GADResourceBuffer$cancelWithError$ : (__typeof__(_logos_orig$_ungrouped$GADResourceBuffer$cancelWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADResourceBuffer, @selector(cancelWithError:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GADResourceBuffer$responseHeaders(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static bool _logos_method$_ungrouped$GADResourceBuffer$valid(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$GADResourceBuffer$downloaded(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GADResourceBuffer$setValid$(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GADResourceBuffer$setValid$ ? _logos_orig$_ungrouped$GADResourceBuffer$setValid$ : (__typeof__(_logos_orig$_ungrouped$GADResourceBuffer$setValid$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADResourceBuffer, @selector(setValid:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$GADResourceBuffer$contentLength(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GADResourceBuffer$setResponseHeaders$(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GADResourceBuffer$setResponseHeaders$ ? _logos_orig$_ungrouped$GADResourceBuffer$setResponseHeaders$ : (__typeof__(_logos_orig$_ungrouped$GADResourceBuffer$setResponseHeaders$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADResourceBuffer, @selector(setResponseHeaders:)))(self, _cmd, arg1);
}



static long long _logos_method$_ungrouped$GADResourceBuffer$maxBytes(_LOGOS_SELF_TYPE_NORMAL GADResourceBuffer* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_meta_method$_ungrouped$GULNetworkURLSession$handleEventsForBackgroundURLSessionID$completionHandler$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    return (_logos_meta_orig$_ungrouped$GULNetworkURLSession$handleEventsForBackgroundURLSessionID$completionHandler$ ? _logos_meta_orig$_ungrouped$GULNetworkURLSession$handleEventsForBackgroundURLSessionID$completionHandler$ : (__typeof__(_logos_meta_orig$_ungrouped$GULNetworkURLSession$handleEventsForBackgroundURLSessionID$completionHandler$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$GULNetworkURLSession, @selector(handleEventsForBackgroundURLSessionID:completionHandler:)))(self, _cmd, arg1, arg2);
}



static id _logos_meta_method$_ungrouped$GULNetworkURLSession$fetcherWithSessionIdentifier$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static void _logos_meta_method$_ungrouped$GULNetworkURLSession$setSessionInFetcherMap$forSessionID$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    return (_logos_meta_orig$_ungrouped$GULNetworkURLSession$setSessionInFetcherMap$forSessionID$ ? _logos_meta_orig$_ungrouped$GULNetworkURLSession$setSessionInFetcherMap$forSessionID$ : (__typeof__(_logos_meta_orig$_ungrouped$GULNetworkURLSession$setSessionInFetcherMap$forSessionID$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$GULNetworkURLSession, @selector(setSessionInFetcherMap:forSessionID:)))(self, _cmd, arg1, arg2);
}



static id _logos_meta_method$_ungrouped$GULNetworkURLSession$sessionIDToSystemCompletionHandlerDictionary(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$GULNetworkURLSession$sessionFromFetcherMapForSessionID$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$GULNetworkURLSession$sessionIDToFetcherMapReadWriteLock(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_meta_method$_ungrouped$GULNetworkURLSession$sessionIDToFetcherMap(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static GULNetworkURLSession* _logos_method$_ungrouped$GULNetworkURLSession$initWithNetworkLoggerDelegate$(_LOGOS_SELF_TYPE_INIT GULNetworkURLSession* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$GULNetworkURLSession$setBackgroundNetworkEnabled$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GULNetworkURLSession$setBackgroundNetworkEnabled$ ? _logos_orig$_ungrouped$GULNetworkURLSession$setBackgroundNetworkEnabled$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$setBackgroundNetworkEnabled$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(setBackgroundNetworkEnabled:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GULNetworkURLSession$sessionIDFromAsyncPOSTRequest$completionHandler$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    return NULL;
}



static id _logos_method$_ungrouped$GULNetworkURLSession$sessionIDFromAsyncGETRequest$completionHandler$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    return NULL;
}



static id _logos_method$_ungrouped$GULNetworkURLSession$loggerDelegate(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$GULNetworkURLSession$addSystemCompletionHandler$forSession$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$addSystemCompletionHandler$forSession$ ? _logos_orig$_ungrouped$GULNetworkURLSession$addSystemCompletionHandler$forSession$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$addSystemCompletionHandler$forSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(addSystemCompletionHandler:forSession:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$GULNetworkURLSession$temporaryFilePathWithSessionID$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$GULNetworkURLSession$temporaryFilePathWithSessionID$ ? _logos_orig$_ungrouped$GULNetworkURLSession$temporaryFilePathWithSessionID$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$temporaryFilePathWithSessionID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(temporaryFilePathWithSessionID:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GULNetworkURLSession$maybeRemoveTempFilesAtURL$expiringTime$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, double arg2) {
    arg1 = NULL;
    arg2 = 0;
    (_logos_orig$_ungrouped$GULNetworkURLSession$maybeRemoveTempFilesAtURL$expiringTime$ ? _logos_orig$_ungrouped$GULNetworkURLSession$maybeRemoveTempFilesAtURL$expiringTime$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$maybeRemoveTempFilesAtURL$expiringTime$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(maybeRemoveTempFilesAtURL:expiringTime:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$GULNetworkURLSession$ensureTemporaryDirectoryExists(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GULNetworkURLSession$excludeFromBackupForURL$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$excludeFromBackupForURL$ ? _logos_orig$_ungrouped$GULNetworkURLSession$excludeFromBackupForURL$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$excludeFromBackupForURL$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(excludeFromBackupForURL:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$GULNetworkURLSession$backgroundSessionConfigWithSessionID$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$GULNetworkURLSession$backgroundSessionConfigWithSessionID$ ? _logos_orig$_ungrouped$GULNetworkURLSession$backgroundSessionConfigWithSessionID$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$backgroundSessionConfigWithSessionID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(backgroundSessionConfigWithSessionID:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GULNetworkURLSession$populateSessionConfig$withRequest$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$populateSessionConfig$withRequest$ ? _logos_orig$_ungrouped$GULNetworkURLSession$populateSessionConfig$withRequest$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$populateSessionConfig$withRequest$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(populateSessionConfig:withRequest:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$GULNetworkURLSession$callCompletionHandler$withResponse$data$error$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg4 = NULL;
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$callCompletionHandler$withResponse$data$error$ ? _logos_orig$_ungrouped$GULNetworkURLSession$callCompletionHandler$withResponse$data$error$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$callCompletionHandler$withResponse$data$error$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(callCompletionHandler:withResponse:data:error:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$GULNetworkURLSession$callSystemCompletionHandler$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$callSystemCompletionHandler$ ? _logos_orig$_ungrouped$GULNetworkURLSession$callSystemCompletionHandler$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$callSystemCompletionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(callSystemCompletionHandler:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GULNetworkURLSession$removeTempItemAtURL$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$removeTempItemAtURL$ ? _logos_orig$_ungrouped$GULNetworkURLSession$removeTempItemAtURL$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$removeTempItemAtURL$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(removeTempItemAtURL:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GULNetworkURLSession$setLoggerDelegate$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$setLoggerDelegate$ ? _logos_orig$_ungrouped$GULNetworkURLSession$setLoggerDelegate$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$setLoggerDelegate$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(setLoggerDelegate:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$GULNetworkURLSession$isBackgroundNetworkEnabled(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GULNetworkURLSession$URLSessionDidFinishEventsForBackgroundURLSession$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$URLSessionDidFinishEventsForBackgroundURLSession$ ? _logos_orig$_ungrouped$GULNetworkURLSession$URLSessionDidFinishEventsForBackgroundURLSession$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$URLSessionDidFinishEventsForBackgroundURLSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(URLSessionDidFinishEventsForBackgroundURLSession:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GULNetworkURLSession$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4, id arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    arg5 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$ ? _logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$GULNetworkURLSession$URLSession$task$didReceiveChallenge$completionHandler$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
}



static void _logos_method$_ungrouped$GULNetworkURLSession$URLSession$task$didCompleteWithError$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$didCompleteWithError$ ? _logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$didCompleteWithError$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$didCompleteWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(URLSession:task:didCompleteWithError:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$GULNetworkURLSession$URLSession$downloadTask$didFinishDownloadingToURL$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$downloadTask$didFinishDownloadingToURL$ ? _logos_orig$_ungrouped$GULNetworkURLSession$URLSession$downloadTask$didFinishDownloadingToURL$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$downloadTask$didFinishDownloadingToURL$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(URLSession:downloadTask:didFinishDownloadingToURL:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$GULNetworkURLSession$URLSession$dataTask$didReceiveData$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$dataTask$didReceiveData$ ? _logos_orig$_ungrouped$GULNetworkURLSession$URLSession$dataTask$didReceiveData$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$dataTask$didReceiveData$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(URLSession:dataTask:didReceiveData:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$GULNetworkURLSession$setSessionID$(_LOGOS_SELF_TYPE_NORMAL GULNetworkURLSession* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GULNetworkURLSession$setSessionID$ ? _logos_orig$_ungrouped$GULNetworkURLSession$setSessionID$ : (__typeof__(_logos_orig$_ungrouped$GULNetworkURLSession$setSessionID$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULNetworkURLSession, @selector(setSessionID:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FLVDownloaderHT$getDownloadStats(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$FLVDownloaderHT$parseIpAddress$(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$FLVDownloaderHT$parseIpAddress$ ? _logos_orig$_ungrouped$FLVDownloaderHT$parseIpAddress$ : (__typeof__(_logos_orig$_ungrouped$FLVDownloaderHT$parseIpAddress$))class_getMethodImplementation(_logos_superclass$_ungrouped$FLVDownloaderHT, @selector(parseIpAddress:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FLVDownloaderHT$syncReconnect(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static FLVDownloaderHT* _logos_method$_ungrouped$FLVDownloaderHT$init(_LOGOS_SELF_TYPE_INIT FLVDownloaderHT* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$FLVDownloaderHT$URLSession$task$didReceiveChallenge$completionHandler$(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$task$didReceiveChallenge$completionHandler$ ? _logos_orig$_ungrouped$FLVDownloaderHT$URLSession$task$didReceiveChallenge$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$task$didReceiveChallenge$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$FLVDownloaderHT, @selector(URLSession:task:didReceiveChallenge:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$FLVDownloaderHT$URLSession$task$didCompleteWithError$(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$task$didCompleteWithError$ ? _logos_orig$_ungrouped$FLVDownloaderHT$URLSession$task$didCompleteWithError$ : (__typeof__(_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$task$didCompleteWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$FLVDownloaderHT, @selector(URLSession:task:didCompleteWithError:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveData$(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveData$ ? _logos_orig$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveData$ : (__typeof__(_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveData$))class_getMethodImplementation(_logos_superclass$_ungrouped$FLVDownloaderHT, @selector(URLSession:dataTask:didReceiveData:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveResponse$completionHandler$(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveResponse$completionHandler$ ? _logos_orig$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveResponse$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveResponse$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$FLVDownloaderHT, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$FLVDownloaderHT$connect(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$FLVDownloaderHT$reconnect(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$FLVDownloaderHT$startDownload$(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FLVDownloaderHT$startDownload$ ? _logos_orig$_ungrouped$FLVDownloaderHT$startDownload$ : (__typeof__(_logos_orig$_ungrouped$FLVDownloaderHT$startDownload$))class_getMethodImplementation(_logos_superclass$_ungrouped$FLVDownloaderHT, @selector(startDownload:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FLVDownloaderHT$closeSession(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$FLVDownloaderHT$stopDownload(_LOGOS_SELF_TYPE_NORMAL FLVDownloaderHT* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$AWSURLSessionManager$taskWithDelegate$(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AWSURLSessionManager$taskWithDelegate$ ? _logos_orig$_ungrouped$AWSURLSessionManager$taskWithDelegate$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$taskWithDelegate$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(taskWithDelegate:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AWSURLSessionManager$sessionManagerDelegates(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AWSURLSessionManager$printHTTPHeadersAndBodyForRequest$(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AWSURLSessionManager$printHTTPHeadersAndBodyForRequest$ ? _logos_orig$_ungrouped$AWSURLSessionManager$printHTTPHeadersAndBodyForRequest$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$printHTTPHeadersAndBodyForRequest$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(printHTTPHeadersAndBodyForRequest:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AWSURLSessionManager$printHTTPHeadersForResponse$(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AWSURLSessionManager$printHTTPHeadersForResponse$ ? _logos_orig$_ungrouped$AWSURLSessionManager$printHTTPHeadersForResponse$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$printHTTPHeadersForResponse$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(printHTTPHeadersForResponse:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AWSURLSessionManager$setSessionManagerDelegates$(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AWSURLSessionManager$setSessionManagerDelegates$ ? _logos_orig$_ungrouped$AWSURLSessionManager$setSessionManagerDelegates$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$setSessionManagerDelegates$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(setSessionManagerDelegates:)))(self, _cmd, arg1);
}



static AWSURLSessionManager* _logos_method$_ungrouped$AWSURLSessionManager$init(_LOGOS_SELF_TYPE_INIT AWSURLSessionManager* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static AWSURLSessionManager* _logos_method$_ungrouped$AWSURLSessionManager$initWithConfiguration$(_LOGOS_SELF_TYPE_INIT AWSURLSessionManager* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$AWSURLSessionManager$initWithConfiguration$ ? _logos_orig$_ungrouped$AWSURLSessionManager$initWithConfiguration$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$initWithConfiguration$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(initWithConfiguration:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AWSURLSessionManager$session(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AWSURLSessionManager$setSession$(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AWSURLSessionManager$setSession$ ? _logos_orig$_ungrouped$AWSURLSessionManager$setSession$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$setSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(setSession:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AWSURLSessionManager$setConfiguration$(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AWSURLSessionManager$setConfiguration$ ? _logos_orig$_ungrouped$AWSURLSessionManager$setConfiguration$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$setConfiguration$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(setConfiguration:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AWSURLSessionManager$configuration(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AWSURLSessionManager$dataTaskWithRequest$(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$AWSURLSessionManager$dataTaskWithRequest$ ? _logos_orig$_ungrouped$AWSURLSessionManager$dataTaskWithRequest$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$dataTaskWithRequest$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(dataTaskWithRequest:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AWSURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, long long arg3, long long arg4, long long arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    arg4 = 0;
    arg5 = 0;
    (_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$ ? _logos_orig$_ungrouped$AWSURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$AWSURLSessionManager$URLSession$task$didCompleteWithError$(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$task$didCompleteWithError$ ? _logos_orig$_ungrouped$AWSURLSessionManager$URLSession$task$didCompleteWithError$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$task$didCompleteWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(URLSession:task:didCompleteWithError:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveData$(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveData$ ? _logos_orig$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveData$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveData$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(URLSession:dataTask:didReceiveData:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AWSURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$ ? _logos_orig$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AWSURLSessionManager, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static RCNConfigFetch* _logos_method$_ungrouped$RCNConfigFetch$initWithContent$DBManager$settings$analytics$experiment$queue$namespace$options$(_LOGOS_SELF_TYPE_INIT RCNConfigFetch* __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4, id arg5, id arg6, id arg7, id arg8) _LOGOS_RETURN_RETAINED {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    arg5 = NULL;
    arg7 = NULL;
    arg6 = NULL;
    arg8 = NULL;
    return NULL;
}



static void _logos_method$_ungrouped$RCNConfigFetch$fetchConfigWithExpirationDuration$completionHandler$(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, double arg1, id arg2) {
}



static void _logos_method$_ungrouped$RCNConfigFetch$recreateNetworkSession(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$RCNConfigFetch$reportCompletionOnHandler$withStatus$withError$(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, long long arg3) {
}



static void _logos_method$_ungrouped$RCNConfigFetch$refreshInstallationsTokenWithCompletionHandler$(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$RCNConfigFetch$refreshInstallationsTokenWithCompletionHandler$ ? _logos_orig$_ungrouped$RCNConfigFetch$refreshInstallationsTokenWithCompletionHandler$ : (__typeof__(_logos_orig$_ungrouped$RCNConfigFetch$refreshInstallationsTokenWithCompletionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$RCNConfigFetch, @selector(refreshInstallationsTokenWithCompletionHandler:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$RCNConfigFetch$FIRAppNameFromFullyQualifiedNamespace(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$RCNConfigFetch$doFetchCall$(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$RCNConfigFetch$doFetchCall$ ? _logos_orig$_ungrouped$RCNConfigFetch$doFetchCall$ : (__typeof__(_logos_orig$_ungrouped$RCNConfigFetch$doFetchCall$))class_getMethodImplementation(_logos_superclass$_ungrouped$RCNConfigFetch, @selector(doFetchCall:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$RCNConfigFetch$fetchWithUserProperties$completionHandler$(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    (_logos_orig$_ungrouped$RCNConfigFetch$fetchWithUserProperties$completionHandler$ ? _logos_orig$_ungrouped$RCNConfigFetch$fetchWithUserProperties$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$RCNConfigFetch$fetchWithUserProperties$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$RCNConfigFetch, @selector(fetchWithUserProperties:completionHandler:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$RCNConfigFetch$getAnalyticsUserPropertiesWithCompletionHandler$(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$RCNConfigFetch$getAnalyticsUserPropertiesWithCompletionHandler$ ? _logos_orig$_ungrouped$RCNConfigFetch$getAnalyticsUserPropertiesWithCompletionHandler$ : (__typeof__(_logos_orig$_ungrouped$RCNConfigFetch$getAnalyticsUserPropertiesWithCompletionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$RCNConfigFetch, @selector(getAnalyticsUserPropertiesWithCompletionHandler:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$RCNConfigFetch$URLSessionDataTaskWithContent$completionHandler$(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    return NULL;
}



static id _logos_method$_ungrouped$RCNConfigFetch$currentNetworkSession(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$RCNConfigFetch$fetchSession(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$RCNConfigFetch$setFetchSession$(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$RCNConfigFetch$setFetchSession$ ? _logos_orig$_ungrouped$RCNConfigFetch$setFetchSession$ : (__typeof__(_logos_orig$_ungrouped$RCNConfigFetch$setFetchSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$RCNConfigFetch, @selector(setFetchSession:)))(self, _cmd, arg1);
}



static RCNConfigFetch* _logos_method$_ungrouped$RCNConfigFetch$init(_LOGOS_SELF_TYPE_INIT RCNConfigFetch* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$RCNConfigFetch$dealloc(_LOGOS_SELF_TYPE_NORMAL RCNConfigFetch* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$GADURLSessionTransactionMonitor$invalidateAllTasksWithError$(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$invalidateAllTasksWithError$ ? _logos_orig$_ungrouped$GADURLSessionTransactionMonitor$invalidateAllTasksWithError$ : (__typeof__(_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$invalidateAllTasksWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADURLSessionTransactionMonitor, @selector(invalidateAllTasksWithError:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GADURLSessionTransactionMonitor$waitForTransactionsWithCompletion$(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$waitForTransactionsWithCompletion$ ? _logos_orig$_ungrouped$GADURLSessionTransactionMonitor$waitForTransactionsWithCompletion$ : (__typeof__(_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$waitForTransactionsWithCompletion$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADURLSessionTransactionMonitor, @selector(waitForTransactionsWithCompletion:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GADURLSessionTransactionMonitor$addTransaction$forTask$(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$addTransaction$forTask$ ? _logos_orig$_ungrouped$GADURLSessionTransactionMonitor$addTransaction$forTask$ : (__typeof__(_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$addTransaction$forTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADURLSessionTransactionMonitor, @selector(addTransaction:forTask:)))(self, _cmd, arg1, arg2);
}



static GADURLSessionTransactionMonitor* _logos_method$_ungrouped$GADURLSessionTransactionMonitor$init(_LOGOS_SELF_TYPE_INIT GADURLSessionTransactionMonitor* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$GADURLSessionTransactionMonitor$dealloc(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$GADURLSessionTransactionMonitor$URLSession$didBecomeInvalidWithError$(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$didBecomeInvalidWithError$ ? _logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$didBecomeInvalidWithError$ : (__typeof__(_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$didBecomeInvalidWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADURLSessionTransactionMonitor, @selector(URLSession:didBecomeInvalidWithError:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4, id arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    arg5 = NULL;
    (_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$ ? _logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADURLSessionTransactionMonitor, @selector(URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$didCompleteWithError$(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$didCompleteWithError$ ? _logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$didCompleteWithError$ : (__typeof__(_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$didCompleteWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADURLSessionTransactionMonitor, @selector(URLSession:task:didCompleteWithError:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveData$(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveData$ ? _logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveData$ : (__typeof__(_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveData$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADURLSessionTransactionMonitor, @selector(URLSession:dataTask:didReceiveData:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveResponse$completionHandler$(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveResponse$completionHandler$ ? _logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveResponse$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveResponse$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADURLSessionTransactionMonitor, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$GADURLSessionTransactionMonitor$removeTask$(_LOGOS_SELF_TYPE_NORMAL GADURLSessionTransactionMonitor* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$removeTask$ ? _logos_orig$_ungrouped$GADURLSessionTransactionMonitor$removeTask$ : (__typeof__(_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$removeTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$GADURLSessionTransactionMonitor, @selector(removeTask:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$enableLog$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$enableLog$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$enableLog$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$enableLog$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(enableLog:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onLoginExpiry$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onLoginExpiry$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onLoginExpiry$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onLoginExpiry$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onLoginExpiry:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFinish$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFinish$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFinish$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFinish$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onDistributeGoodsFinish:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$parameterWrong$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$parameterWrong$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$parameterWrong$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$parameterWrong$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(parameterWrong:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onNetWorkEorror$withRequestInfo$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1, id arg2) {
    arg1 = 0;
    arg2 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onNetWorkEorror$withRequestInfo$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onNetWorkEorror$withRequestInfo$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onNetWorkEorror$withRequestInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onNetWorkEorror:withRequestInfo:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onGetProductInfoFailue$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetProductInfoFailue$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onGetProductInfoFailue$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetProductInfoFailue$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onGetProductInfoFailue:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFailue$withErrorMessage$withErrorCode$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, int arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFailue$withErrorMessage$withErrorCode$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFailue$withErrorMessage$withErrorCode$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFailue$withErrorMessage$withErrorCode$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onDistributeGoodsFailue:withErrorMessage:withErrorCode:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onIAPPayFailue$withError$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onIAPPayFailue$withError$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onIAPPayFailue$withError$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onIAPPayFailue$withError$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onIAPPayFailue:withError:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onOrderFailue$withErrorMessage$withErrorCode$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, int arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onOrderFailue$withErrorMessage$withErrorCode$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onOrderFailue$withErrorMessage$withErrorCode$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onOrderFailue$withErrorMessage$withErrorCode$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onOrderFailue:withErrorMessage:withErrorCode:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onOrderFinish$withRequestInfo$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onOrderFinish$withRequestInfo$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onOrderFinish$withRequestInfo$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onOrderFinish$withRequestInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onOrderFinish:withRequestInfo:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onIAPPaymentSucess$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onIAPPaymentSucess$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onIAPPaymentSucess$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onIAPPaymentSucess$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onIAPPaymentSucess:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$canShowLoadingNow(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onLaunProductListFinish$withJsoninfo$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onLaunProductListFinish$withJsoninfo$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onLaunProductListFinish$withJsoninfo$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onLaunProductListFinish$withJsoninfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onLaunProductListFinish:withJsoninfo:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onLaunProductListFailue$withErrorMessage$withErrorCode$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, int arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onLaunProductListFailue$withErrorMessage$withErrorCode$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onLaunProductListFailue$withErrorMessage$withErrorCode$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onLaunProductListFailue$withErrorMessage$withErrorCode$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onLaunProductListFailue:withErrorMessage:withErrorCode:)))(self, _cmd, arg1, arg2, arg3);
}



static id _logos_method$_ungrouped$MidasSdkIapAdapter$parseKvString$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$MidasSdkIapAdapter$parseKvString$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$parseKvString$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$parseKvString$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(parseKvString:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withReq$callback$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, void* arg3, void* arg4) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withReq$callback$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withReq$callback$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withReq$callback$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(initWithEnv:withIdc:withReq:callback:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withIdcInfo$withReq$callback$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, void* arg4, void* arg5) {
    arg3 = NULL;
    arg2 = NULL;
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withIdcInfo$withReq$callback$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withIdcInfo$withReq$callback$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withIdcInfo$withReq$callback$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(initWithEnv:withIdc:withIdcInfo:withReq:callback:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$payWithReq$callback$viewController$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, void* arg1, void* arg2, id arg3) {
    arg3 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$payWithReq$callback$viewController$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$payWithReq$callback$viewController$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$payWithReq$callback$viewController$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(payWithReq:callback:viewController:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$getProductInfoWithChannel$withProductIds$callback$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, void* arg3) {
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$getIntroPriceWithChannel$withProductIds$callback$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, void* arg3) {
    arg2 = NULL;
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$getIntroPriceWithChannel$withProductIds$callback$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$getIntroPriceWithChannel$withProductIds$callback$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$getIntroPriceWithChannel$withProductIds$callback$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(getIntroPriceWithChannel:withProductIds:callback:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$getInfoWithType$withReq$callback$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, void* arg2, void* arg3) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$getInfoWithType$withReq$callback$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$getInfoWithType$withReq$callback$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$getInfoWithType$withReq$callback$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(getInfoWithType:withReq:callback:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$reprovideWithCallback$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, void* arg1) {
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$setShowLog$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$setShowLog$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$setShowLog$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$setShowLog$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(setShowLog:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$MidasSdkIapAdapter$showLog(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$startPayOnMainThread$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$startPayOnMainThread$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$startPayOnMainThread$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$startPayOnMainThread$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(startPayOnMainThread:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$setViewCtrollerOnMainThread$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$setViewCtrollerOnMainThread$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$setViewCtrollerOnMainThread$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$setViewCtrollerOnMainThread$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(setViewCtrollerOnMainThread:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasSdkIapAdapter$DV$K$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$MidasSdkIapAdapter$DV$K$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$DV$K$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$DV$K$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(DV:K:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$MidasSdkIapAdapter$urlEncode$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$MidasSdkIapAdapter$urlEncode$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$urlEncode$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$urlEncode$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(urlEncode:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$callBackWithcode$inCode$bill$errMsg$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$callBackWithcode$inCode$bill$errMsg$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$callBackWithcode$inCode$bill$errMsg$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$callBackWithcode$inCode$bill$errMsg$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(callBackWithcode:inCode:bill:errMsg:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFinish$withJsoninfo$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFinish$withJsoninfo$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFinish$withJsoninfo$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFinish$withJsoninfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onGetOverseaInfoFinish:withJsoninfo:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFailue$withErrorMessage$withErrorCode$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, int arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFailue$withErrorMessage$withErrorCode$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFailue$withErrorMessage$withErrorCode$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFailue$withErrorMessage$withErrorCode$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(onGetOverseaInfoFailue:withErrorMessage:withErrorCode:)))(self, _cmd, arg1, arg2, arg3);
}



static MidasSdkIapAdapter* _logos_method$_ungrouped$MidasSdkIapAdapter$init(_LOGOS_SELF_TYPE_INIT MidasSdkIapAdapter* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$MidasSdkIapAdapter$log$(_LOGOS_SELF_TYPE_NORMAL MidasSdkIapAdapter* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasSdkIapAdapter$log$ ? _logos_orig$_ungrouped$MidasSdkIapAdapter$log$ : (__typeof__(_logos_orig$_ungrouped$MidasSdkIapAdapter$log$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasSdkIapAdapter, @selector(log:)))(self, _cmd, arg1);
}



static id _logos_meta_method$_ungrouped$MidasAddrHelper$sharedManager(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$MidasAddrHelper$getStaticDomain(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$MidasAddrHelper$initializeWithLocale$environment$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$MidasAddrHelper$initializeWithLocale$environment$ ? _logos_orig$_ungrouped$MidasAddrHelper$initializeWithLocale$environment$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$initializeWithLocale$environment$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(initializeWithLocale:environment:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getMpInfoUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getMpInfoUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getMpInfoUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getMpInfoUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getMpInfoUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getOverseaInfoUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getOverseaInfoUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getOverseaInfoUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getOverseaInfoUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getOverseaInfoUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getNewIapProcUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getNewIapProcUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getNewIapProcUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getNewIapProcUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getNewIapProcUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getIapProcUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getIapProcUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getIapProcUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getIapProcUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getIapProcUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getCheckUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getCheckUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getCheckUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getCheckUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getCheckUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getGetConfigUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getGetConfigUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getGetConfigUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getGetConfigUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getGetConfigUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getLogUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getLogUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getLogUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getLogUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getLogUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getHeartBeatUrl(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$MidasAddrHelper$getGetIpListUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getGetIpListUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getGetIpListUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getGetIpListUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getGetIpListUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getPayResultUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getPayResultUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getPayResultUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getPayResultUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getPayResultUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getSecurityProcUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getSecurityProcUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getSecurityProcUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getSecurityProcUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getSecurityProcUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getIapQueryUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getIapQueryUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getIapQueryUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getIapQueryUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getIapQueryUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getCombineUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getCombineUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getCombineUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getCombineUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getCombineUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getGetKeyUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getGetKeyUrl$ ? _logos_orig$_ungrouped$MidasAddrHelper$getGetKeyUrl$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getGetKeyUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getGetKeyUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getDomain$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$MidasAddrHelper$getDomain$ ? _logos_orig$_ungrouped$MidasAddrHelper$getDomain$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$getDomain$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(getDomain:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$getRiskControlDomain(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$MidasAddrHelper$setIP$isUsable$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, bool arg2) {
    arg1 = NULL;
    arg2 = 0;
    (_logos_orig$_ungrouped$MidasAddrHelper$setIP$isUsable$ ? _logos_orig$_ungrouped$MidasAddrHelper$setIP$isUsable$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$setIP$isUsable$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(setIP:isUsable:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$MidasAddrHelper$midasAddr$didMeasure$type$isIPv6$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, double arg2, id arg3, bool arg4) {
    arg1 = NULL;
    arg2 = 0;
    arg3 = NULL;
    arg4 = 0;
    (_logos_orig$_ungrouped$MidasAddrHelper$midasAddr$didMeasure$type$isIPv6$ ? _logos_orig$_ungrouped$MidasAddrHelper$midasAddr$didMeasure$type$isIPv6$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$midasAddr$didMeasure$type$isIPv6$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(midasAddr:didMeasure:type:isIPv6:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$MidasAddrHelper$_updateIPListsFromServer(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$MidasAddrHelper$_getWholeUrl$prefix$useDomain$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3) {
    return NULL;
}



static id _logos_method$_ungrouped$MidasAddrHelper$getStandalongUrl$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    return NULL;
}



static id _logos_method$_ungrouped$MidasAddrHelper$addrSelector(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$MidasAddrHelper$environment(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$MidasAddrHelper$setEnvironment$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasAddrHelper$setEnvironment$ ? _logos_orig$_ungrouped$MidasAddrHelper$setEnvironment$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$setEnvironment$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(setEnvironment:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$MidasAddrHelper$setConfig$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasAddrHelper$setConfig$ ? _logos_orig$_ungrouped$MidasAddrHelper$setConfig$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$setConfig$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(setConfig:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$reporter(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$MidasAddrHelper$setReporter$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasAddrHelper$setReporter$ ? _logos_orig$_ungrouped$MidasAddrHelper$setReporter$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$setReporter$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(setReporter:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$offerId(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$MidasAddrHelper$setOfferId$(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$MidasAddrHelper$setOfferId$ ? _logos_orig$_ungrouped$MidasAddrHelper$setOfferId$ : (__typeof__(_logos_orig$_ungrouped$MidasAddrHelper$setOfferId$))class_getMethodImplementation(_logos_superclass$_ungrouped$MidasAddrHelper, @selector(setOfferId:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$MidasAddrHelper$config(_LOGOS_SELF_TYPE_NORMAL MidasAddrHelper* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$ADJRequestHandler$setUrlStrategy$(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$ADJRequestHandler$setUrlStrategy$ ? _logos_orig$_ungrouped$ADJRequestHandler$setUrlStrategy$ : (__typeof__(_logos_orig$_ungrouped$ADJRequestHandler$setUrlStrategy$))class_getMethodImplementation(_logos_superclass$_ungrouped$ADJRequestHandler, @selector(setUrlStrategy:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$ADJRequestHandler$setDefaultSessionConfiguration$(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$ADJRequestHandler$setDefaultSessionConfiguration$ ? _logos_orig$_ungrouped$ADJRequestHandler$setDefaultSessionConfiguration$ : (__typeof__(_logos_orig$_ungrouped$ADJRequestHandler$setDefaultSessionConfiguration$))class_getMethodImplementation(_logos_superclass$_ungrouped$ADJRequestHandler, @selector(setDefaultSessionConfiguration:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$ADJRequestHandler$setExceptionKeys$(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$ADJRequestHandler$setExceptionKeys$ ? _logos_orig$_ungrouped$ADJRequestHandler$setExceptionKeys$ : (__typeof__(_logos_orig$_ungrouped$ADJRequestHandler$setExceptionKeys$))class_getMethodImplementation(_logos_superclass$_ungrouped$ADJRequestHandler, @selector(setExceptionKeys:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$ADJRequestHandler$buildAuthorizationHeader$activityKind$(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, int arg2) {
    return NULL;
}



static id _logos_method$_ungrouped$ADJRequestHandler$urlStrategy(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$ADJRequestHandler$requestForPostPackage$clientSdk$parameters$urlHostString$sendingParameters$(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4, id arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    arg5 = NULL;
    return (_logos_orig$_ungrouped$ADJRequestHandler$requestForPostPackage$clientSdk$parameters$urlHostString$sendingParameters$ ? _logos_orig$_ungrouped$ADJRequestHandler$requestForPostPackage$clientSdk$parameters$urlHostString$sendingParameters$ : (__typeof__(_logos_orig$_ungrouped$ADJRequestHandler$requestForPostPackage$clientSdk$parameters$urlHostString$sendingParameters$))class_getMethodImplementation(_logos_superclass$_ungrouped$ADJRequestHandler, @selector(requestForPostPackage:clientSdk:parameters:urlHostString:sendingParameters:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$ADJRequestHandler$sendRequest$authorizationHeader$responseData$methodTypeInfo$(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    (_logos_orig$_ungrouped$ADJRequestHandler$sendRequest$authorizationHeader$responseData$methodTypeInfo$ ? _logos_orig$_ungrouped$ADJRequestHandler$sendRequest$authorizationHeader$responseData$methodTypeInfo$ : (__typeof__(_logos_orig$_ungrouped$ADJRequestHandler$sendRequest$authorizationHeader$responseData$methodTypeInfo$))class_getMethodImplementation(_logos_superclass$_ungrouped$ADJRequestHandler, @selector(sendRequest:authorizationHeader:responseData:methodTypeInfo:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static id _logos_method$_ungrouped$ADJRequestHandler$userAgent(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$ADJRequestHandler$setUserAgent$(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$ADJRequestHandler$setUserAgent$ ? _logos_orig$_ungrouped$ADJRequestHandler$setUserAgent$ : (__typeof__(_logos_orig$_ungrouped$ADJRequestHandler$setUserAgent$))class_getMethodImplementation(_logos_superclass$_ungrouped$ADJRequestHandler, @selector(setUserAgent:)))(self, _cmd, arg1);
}



static double _logos_method$_ungrouped$ADJRequestHandler$requestTimeout(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$ADJRequestHandler$setLogger$(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$ADJRequestHandler$setLogger$ ? _logos_orig$_ungrouped$ADJRequestHandler$setLogger$ : (__typeof__(_logos_orig$_ungrouped$ADJRequestHandler$setLogger$))class_getMethodImplementation(_logos_superclass$_ungrouped$ADJRequestHandler, @selector(setLogger:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$ADJRequestHandler$setRequestTimeout$(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, double arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$ADJRequestHandler$setRequestTimeout$ ? _logos_orig$_ungrouped$ADJRequestHandler$setRequestTimeout$ : (__typeof__(_logos_orig$_ungrouped$ADJRequestHandler$setRequestTimeout$))class_getMethodImplementation(_logos_superclass$_ungrouped$ADJRequestHandler, @selector(setRequestTimeout:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$ADJRequestHandler$responseCallback(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$ADJRequestHandler$setResponseCallback$(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$ADJRequestHandler$setResponseCallback$ ? _logos_orig$_ungrouped$ADJRequestHandler$setResponseCallback$ : (__typeof__(_logos_orig$_ungrouped$ADJRequestHandler$setResponseCallback$))class_getMethodImplementation(_logos_superclass$_ungrouped$ADJRequestHandler, @selector(setResponseCallback:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$ADJRequestHandler$defaultSessionConfiguration(_LOGOS_SELF_TYPE_NORMAL ADJRequestHandler* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}




static GNLAsynchronousOperation* _logos_method$_ungrouped$GNLAsynchronousOperation$init(_LOGOS_SELF_TYPE_INIT GNLAsynchronousOperation* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$GNLAsynchronousOperation$start(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$GNLAsynchronousOperation$main(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$GNLAsynchronousOperation$setFinished$(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GNLAsynchronousOperation$setFinished$ ? _logos_orig$_ungrouped$GNLAsynchronousOperation$setFinished$ : (__typeof__(_logos_orig$_ungrouped$GNLAsynchronousOperation$setFinished$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLAsynchronousOperation, @selector(setFinished:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$GNLAsynchronousOperation$isFinished(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$GNLAsynchronousOperation$isExecuting(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$GNLAsynchronousOperation$isAsynchronous(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$GNLAsynchronousOperation$setExecuting$(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$GNLAsynchronousOperation$setExecuting$ ? _logos_orig$_ungrouped$GNLAsynchronousOperation$setExecuting$ : (__typeof__(_logos_orig$_ungrouped$GNLAsynchronousOperation$setExecuting$))class_getMethodImplementation(_logos_superclass$_ungrouped$GNLAsynchronousOperation, @selector(setExecuting:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$GNLAsynchronousOperation$completeOperation(_LOGOS_SELF_TYPE_NORMAL GNLAsynchronousOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}




static AVChunkedURLRequest* _logos_method$_ungrouped$AVChunkedURLRequest$initWithURL$timeout$(_LOGOS_SELF_TYPE_INIT AVChunkedURLRequest* __unused self, SEL __unused _cmd, id arg1, int arg2) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$sendMain(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$releaseHttp(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$addHead$withValue$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$addHead$withValue$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$addHead$withValue$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$addHead$withValue$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(addHead:withValue:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$setQueue$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$setQueue$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$setQueue$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$setQueue$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(setQueue:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AVChunkedURLRequest$queue(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void* _logos_method$_ungrouped$AVChunkedURLRequest$delegate(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_orig$_ungrouped$AVChunkedURLRequest$delegate ? _logos_orig$_ungrouped$AVChunkedURLRequest$delegate : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$delegate))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(delegate)))(self, _cmd);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$setDelegate$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, void* arg1) {
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$cxx_destruct(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$setRequest$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$setRequest$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$setRequest$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$setRequest$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(setRequest:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$didBecomeInvalidWithError$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$didBecomeInvalidWithError$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$didBecomeInvalidWithError$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$didBecomeInvalidWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:didBecomeInvalidWithError:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$didReceiveChallenge$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$didReceiveChallenge$completionHandler$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$didReceiveChallenge$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$didReceiveChallenge$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:didReceiveChallenge:completionHandler:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSessionDidFinishEventsForBackgroundURLSession$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSessionDidFinishEventsForBackgroundURLSession$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSessionDidFinishEventsForBackgroundURLSession$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSessionDidFinishEventsForBackgroundURLSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSessionDidFinishEventsForBackgroundURLSession:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AVChunkedURLRequest$request(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4, id arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    arg5 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$task$didReceiveChallenge$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didReceiveChallenge$completionHandler$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didReceiveChallenge$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didReceiveChallenge$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:task:didReceiveChallenge:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$task$needNewBodyStream$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$needNewBodyStream$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$needNewBodyStream$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$needNewBodyStream$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:task:needNewBodyStream:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, long long arg3, long long arg4, long long arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    arg4 = 0;
    arg5 = 0;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$task$didCompleteWithError$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg2 = NULL;
    arg1 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didCompleteWithError$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didCompleteWithError$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didCompleteWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:task:didCompleteWithError:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveData$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveData$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveData$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveData$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:dataTask:didReceiveData:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$setMethod$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$setMethod$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$setMethod$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$setMethod$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(setMethod:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$connection$didFailWithError$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didFailWithError$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$connection$didFailWithError$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didFailWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(connection:didFailWithError:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$AVChunkedURLRequest$connectionShouldUseCredentialStorage$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return 0;
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$connection$willSendRequestForAuthenticationChallenge$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$connection$willSendRequestForAuthenticationChallenge$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$connection$willSendRequestForAuthenticationChallenge$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$connection$willSendRequestForAuthenticationChallenge$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(connection:willSendRequestForAuthenticationChallenge:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$AVChunkedURLRequest$connection$canAuthenticateAgainstProtectionSpace$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    return 0;
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveResponse$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveResponse$completionHandler$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveResponse$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveResponse$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$connection$didReceiveAuthenticationChallenge$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveAuthenticationChallenge$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveAuthenticationChallenge$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveAuthenticationChallenge$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(connection:didReceiveAuthenticationChallenge:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$connection$didCancelAuthenticationChallenge$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didCancelAuthenticationChallenge$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$connection$didCancelAuthenticationChallenge$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didCancelAuthenticationChallenge$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(connection:didCancelAuthenticationChallenge:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$AVChunkedURLRequest$connection$willSendRequest$redirectResponse$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    return NULL;
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$connection$didReceiveResponse$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveResponse$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveResponse$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveResponse$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(connection:didReceiveResponse:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$connection$didSendBodyData$totalBytesWritten$totalBytesExpectedToWrite$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, long long arg2, long long arg3, long long arg4) {
    arg1 = NULL;
    arg2 = 0;
    arg3 = 0;
    arg4 = 0;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didSendBodyData$totalBytesWritten$totalBytesExpectedToWrite$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$connection$didSendBodyData$totalBytesWritten$totalBytesExpectedToWrite$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didSendBodyData$totalBytesWritten$totalBytesExpectedToWrite$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(connection:didSendBodyData:totalBytesWritten:totalBytesExpectedToWrite:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static id _logos_method$_ungrouped$AVChunkedURLRequest$connection$willCacheResponse$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    return NULL;
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$connectionDidFinishLoading$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$connectionDidFinishLoading$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$connectionDidFinishLoading$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$connectionDidFinishLoading$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(connectionDidFinishLoading:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$connection$didReceiveData$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveData$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveData$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveData$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(connection:didReceiveData:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeDownloadTask$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeDownloadTask$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeDownloadTask$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeDownloadTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:dataTask:didBecomeDownloadTask:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeStreamTask$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeStreamTask$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeStreamTask$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeStreamTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:dataTask:didBecomeStreamTask:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$willCacheResponse$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$willCacheResponse$completionHandler$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$willCacheResponse$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$willCacheResponse$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(URLSession:dataTask:willCacheResponse:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$setBody$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$setBody$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$setBody$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$setBody$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(setBody:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AVChunkedURLRequest$defaultSession(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$quit(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$AVChunkedURLRequest$conn(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$setConn$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$setConn$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$setConn$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$setConn$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(setConn:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AVChunkedURLRequest$requestTask(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$setRequestTask$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$setRequestTask$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$setRequestTask$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$setRequestTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(setRequestTask:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$sendRequest(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$AVChunkedURLRequest$setDefaultSession$(_LOGOS_SELF_TYPE_NORMAL AVChunkedURLRequest* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AVChunkedURLRequest$setDefaultSession$ ? _logos_orig$_ungrouped$AVChunkedURLRequest$setDefaultSession$ : (__typeof__(_logos_orig$_ungrouped$AVChunkedURLRequest$setDefaultSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$AVChunkedURLRequest, @selector(setDefaultSession:)))(self, _cmd, arg1);
}





static void _logos_meta_method$_ungrouped$FBSDKGraphRequestConnection$setCanMakeRequests(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$setCanMakeRequests ? _logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$setCanMakeRequests : (__typeof__(_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$setCanMakeRequests))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setCanMakeRequests)))(self, _cmd);
}



static bool _logos_meta_method$_ungrouped$FBSDKGraphRequestConnection$canMakeRequests(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_meta_method$_ungrouped$FBSDKGraphRequestConnection$setDefaultConnectionTimeout$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, double arg1) {
    arg1 = 0;
    return (_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$setDefaultConnectionTimeout$ ? _logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$setDefaultConnectionTimeout$ : (__typeof__(_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$setDefaultConnectionTimeout$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setDefaultConnectionTimeout:)))(self, _cmd, arg1);
}



static double _logos_meta_method$_ungrouped$FBSDKGraphRequestConnection$defaultConnectionTimeout(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$processorDidAttemptRecovery$didRecover$error$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, bool arg2, id arg3) {
    arg1 = NULL;
    arg2 = 0;
    arg3 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processorDidAttemptRecovery$didRecover$error$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$processorDidAttemptRecovery$didRecover$error$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processorDidAttemptRecovery$didRecover$error$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(processorDidAttemptRecovery:didRecover:error:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchEntryName$completionHandler$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchEntryName$completionHandler$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchEntryName$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchEntryName$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(addRequest:batchEntryName:completionHandler:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchParameters$completionHandler$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchParameters$completionHandler$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchParameters$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchParameters$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(addRequest:batchParameters:completionHandler:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$completeFBSDKURLSessionWithResponse$data$networkError$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$completeFBSDKURLSessionWithResponse$data$networkError$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$completeFBSDKURLSessionWithResponse$data$networkError$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$completeFBSDKURLSessionWithResponse$data$networkError$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(completeFBSDKURLSessionWithResponse:data:networkError:)))(self, _cmd, arg1, arg2, arg3);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$requestWithBatch$timeout$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, double arg2) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$logRequest$bodyLength$bodyLogger$attachmentLogger$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, unsigned long long arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = 0;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logRequest$bodyLength$bodyLogger$attachmentLogger$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$logRequest$bodyLength$bodyLogger$attachmentLogger$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logRequest$bodyLength$bodyLogger$attachmentLogger$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(logRequest:bodyLength:bodyLogger:attachmentLogger:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$_taskDidCompleteWithError$handler$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_taskDidCompleteWithError$handler$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$_taskDidCompleteWithError$handler$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_taskDidCompleteWithError$handler$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(_taskDidCompleteWithError:handler:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$taskDidCompleteWithResponse$data$requestStartTime$handler$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, unsigned long long arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    arg4 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$taskDidCompleteWithResponse$data$requestStartTime$handler$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$taskDidCompleteWithResponse$data$requestStartTime$handler$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$taskDidCompleteWithResponse$data$requestStartTime$handler$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(taskDidCompleteWithResponse:data:requestStartTime:handler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$registerTokenToOmitFromLog$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$registerTokenToOmitFromLog$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$registerTokenToOmitFromLog$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$registerTokenToOmitFromLog$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(registerTokenToOmitFromLog:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$urlStringForSingleRequest$forBatch$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, bool arg2) {
    return NULL;
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$accessTokenWithRequest$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$addRequest$toBatch$attachments$batchToken$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$toBatch$attachments$batchToken$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$toBatch$attachments$batchToken$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$toBatch$attachments$batchToken$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(addRequest:toBatch:attachments:batchToken:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static bool _logos_method$_ungrouped$FBSDKGraphRequestConnection$_shouldWarnOnMissingFieldsParam$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    return 0;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$appendAttachments$toBody$addFormData$logger$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, bool arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    arg4 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$appendAttachments$toBody$addFormData$logger$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$appendAttachments$toBody$addFormData$logger$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$appendAttachments$toBody$addFormData$logger$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(appendAttachments:toBody:addFormData:logger:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$appendJSONRequests$toBody$andNameAttachments$logger$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$appendJSONRequests$toBody$andNameAttachments$logger$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$appendJSONRequests$toBody$andNameAttachments$logger$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$appendJSONRequests$toBody$andNameAttachments$logger$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(appendJSONRequests:toBody:andNameAttachments:logger:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$_validateFieldsParamForGetRequests$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_validateFieldsParamForGetRequests$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$_validateFieldsParamForGetRequests$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_validateFieldsParamForGetRequests$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(_validateFieldsParamForGetRequests:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$addBody$toPostRequest$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addBody$toPostRequest$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$addBody$toPostRequest$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addBody$toPostRequest$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(addBody:toPostRequest:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$parseJSONResponse$error$statusCode$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id* arg2, long long arg3) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$_completeWithResults$networkError$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_completeWithResults$networkError$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$_completeWithResults$networkError$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_completeWithResults$networkError$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(_completeWithResults:networkError:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$_errorWithCode$statusCode$parsedJSONResponse$innerError$message$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, long long arg1, long long arg2, id arg3, id arg4, id arg5) {
    return NULL;
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$errorFromResult$request$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$processResultBody$error$metadata$canNotifyDelegate$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, bool arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = 0;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processResultBody$error$metadata$canNotifyDelegate$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$processResultBody$error$metadata$canNotifyDelegate$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processResultBody$error$metadata$canNotifyDelegate$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(processResultBody:error:metadata:canNotifyDelegate:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$parseJSONOrOtherwise$error$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id* arg2) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$processResultDebugDictionary$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processResultDebugDictionary$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$processResultDebugDictionary$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processResultDebugDictionary$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(processResultDebugDictionary:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$errorConfigurationProvider(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$invokeHandler$error$response$responseData$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$invokeHandler$error$response$responseData$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$invokeHandler$error$response$responseData$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$invokeHandler$error$response$responseData$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(invokeHandler:error:response:responseData:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$response$responseData$requestStartTime$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = 0;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$response$responseData$requestStartTime$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$response$responseData$requestStartTime$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$response$responseData$requestStartTime$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(logAndInvokeHandler:response:responseData:requestStartTime:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$error$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$error$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$error$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$error$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(logAndInvokeHandler:error:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$overrideGraphAPIVersion$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$overrideGraphAPIVersion$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$overrideGraphAPIVersion$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$overrideGraphAPIVersion$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(overrideGraphAPIVersion:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$sessionProxyFactory(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setSessionProxyFactory$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setSessionProxyFactory$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setSessionProxyFactory$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setSessionProxyFactory$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setSessionProxyFactory:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setErrorConfigurationProvider$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setErrorConfigurationProvider$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setErrorConfigurationProvider$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setErrorConfigurationProvider$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setErrorConfigurationProvider:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setConnectionFactory$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setConnectionFactory$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setConnectionFactory$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setConnectionFactory$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setConnectionFactory:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$addRequest$completionHandler$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$completionHandler$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(addRequest:completionHandler:)))(self, _cmd, arg1, arg2);
}



static FBSDKGraphRequestConnection* _logos_method$_ungrouped$FBSDKGraphRequestConnection$init(_LOGOS_SELF_TYPE_INIT FBSDKGraphRequestConnection* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$init ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$init : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$init))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(init)))(self, _cmd);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$description(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$dealloc(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$delegate(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setDelegate$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setDelegate$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setDelegate$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setDelegate$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setDelegate:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$cxx_destruct(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$cancel(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$start(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static unsigned long long _logos_method$_ungrouped$FBSDKGraphRequestConnection$state(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$logger(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setState$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setState$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setState$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setState$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setState:)))(self, _cmd, arg1);
}



static double _logos_method$_ungrouped$FBSDKGraphRequestConnection$timeout(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setTimeout$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, double arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setTimeout$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setTimeout$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setTimeout$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setTimeout:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$session(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setSession$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setSession$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setSession$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setSession:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, long long arg3, long long arg4, long long arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    arg4 = 0;
    arg5 = 0;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setDelegateQueue$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setDelegateQueue$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setDelegateQueue$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setDelegateQueue$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setDelegateQueue:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$userAgent(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$logMessage$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logMessage$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$logMessage$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logMessage$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(logMessage:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$delegateQueue(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$requests(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setRequests$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setRequests$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setRequests$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setRequests$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setRequests:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$FBSDKGraphRequestConnection$requestStartTime(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setRequestStartTime$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setRequestStartTime$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setRequestStartTime$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setRequestStartTime$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setRequestStartTime:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setLogger$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setLogger$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setLogger$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setLogger$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setLogger:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$urlResponse(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$eventLogger(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$FBSDKGraphRequestConnection$setEventLogger$(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setEventLogger$ ? _logos_orig$_ungrouped$FBSDKGraphRequestConnection$setEventLogger$ : (__typeof__(_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setEventLogger$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setEventLogger:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FBSDKGraphRequestConnection$connectionFactory(_LOGOS_SELF_TYPE_NORMAL FBSDKGraphRequestConnection* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudURLSessionTaskData$setForbidenWirteToFile$(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudURLSessionTaskData$setForbidenWirteToFile$ ? _logos_orig$_ungrouped$QCloudURLSessionTaskData$setForbidenWirteToFile$ : (__typeof__(_logos_orig$_ungrouped$QCloudURLSessionTaskData$setForbidenWirteToFile$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudURLSessionTaskData, @selector(setForbidenWirteToFile:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$QCloudURLSessionTaskData$totalRecivedLength(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudURLSessionTaskData$setIsTaskCancelledByStatusCodeCheck$(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudURLSessionTaskData$setIsTaskCancelledByStatusCodeCheck$ ? _logos_orig$_ungrouped$QCloudURLSessionTaskData$setIsTaskCancelledByStatusCodeCheck$ : (__typeof__(_logos_orig$_ungrouped$QCloudURLSessionTaskData$setIsTaskCancelledByStatusCodeCheck$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudURLSessionTaskData, @selector(setIsTaskCancelledByStatusCodeCheck:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$QCloudURLSessionTaskData$isTaskCancelledByStatusCodeCheck(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudURLSessionTaskData$restData(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static QCloudURLSessionTaskData* _logos_method$_ungrouped$QCloudURLSessionTaskData$initWithDowndingFileHandler$(_LOGOS_SELF_TYPE_INIT QCloudURLSessionTaskData* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$QCloudURLSessionTaskData$initWithDowndingFileHandler$ ? _logos_orig$_ungrouped$QCloudURLSessionTaskData$initWithDowndingFileHandler$ : (__typeof__(_logos_orig$_ungrouped$QCloudURLSessionTaskData$initWithDowndingFileHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudURLSessionTaskData, @selector(initWithDowndingFileHandler:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudURLSessionTaskData$uploadTempFilePath(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static bool _logos_method$_ungrouped$QCloudURLSessionTaskData$forbidenWirteToFile(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudURLSessionTaskData$dealloc(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$QCloudURLSessionTaskData$cxx_destruct(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$QCloudURLSessionTaskData$data(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static int _logos_method$_ungrouped$QCloudURLSessionTaskData$identifier(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$QCloudURLSessionTaskData$appendData$(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudURLSessionTaskData$appendData$ ? _logos_orig$_ungrouped$QCloudURLSessionTaskData$appendData$ : (__typeof__(_logos_orig$_ungrouped$QCloudURLSessionTaskData$appendData$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudURLSessionTaskData, @selector(appendData:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudURLSessionTaskData$response(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudURLSessionTaskData$setResponse$(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudURLSessionTaskData$setResponse$ ? _logos_orig$_ungrouped$QCloudURLSessionTaskData$setResponse$ : (__typeof__(_logos_orig$_ungrouped$QCloudURLSessionTaskData$setResponse$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudURLSessionTaskData, @selector(setResponse:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$QCloudURLSessionTaskData$closeWrite(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$QCloudURLSessionTaskData$httpRequest(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudURLSessionTaskData$setHttpRequest$(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudURLSessionTaskData$setHttpRequest$ ? _logos_orig$_ungrouped$QCloudURLSessionTaskData$setHttpRequest$ : (__typeof__(_logos_orig$_ungrouped$QCloudURLSessionTaskData$setHttpRequest$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudURLSessionTaskData, @selector(setHttpRequest:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$QCloudURLSessionTaskData$retryHandler(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudURLSessionTaskData$setRetryHandler$(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$QCloudURLSessionTaskData$setRetryHandler$ ? _logos_orig$_ungrouped$QCloudURLSessionTaskData$setRetryHandler$ : (__typeof__(_logos_orig$_ungrouped$QCloudURLSessionTaskData$setRetryHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudURLSessionTaskData, @selector(setRetryHandler:)))(self, _cmd, arg1);
}



static QCloudURLSessionTaskData* _logos_method$_ungrouped$QCloudURLSessionTaskData$init(_LOGOS_SELF_TYPE_INIT QCloudURLSessionTaskData* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$QCloudURLSessionTaskData$setIdentifier$(_LOGOS_SELF_TYPE_NORMAL QCloudURLSessionTaskData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$QCloudURLSessionTaskData$setIdentifier$ ? _logos_orig$_ungrouped$QCloudURLSessionTaskData$setIdentifier$ : (__typeof__(_logos_orig$_ungrouped$QCloudURLSessionTaskData$setIdentifier$))class_getMethodImplementation(_logos_superclass$_ungrouped$QCloudURLSessionTaskData, @selector(setIdentifier:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$ADJSessionResponseData$successResponseData(_LOGOS_SELF_TYPE_NORMAL ADJSessionResponseData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$ADJSessionResponseData$failureResponseData(_LOGOS_SELF_TYPE_NORMAL ADJSessionResponseData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$GULURLSessionDataResponse$HTTPResponse(_LOGOS_SELF_TYPE_NORMAL GULURLSessionDataResponse* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static GULURLSessionDataResponse* _logos_method$_ungrouped$GULURLSessionDataResponse$initWithResponse$HTTPBody$(_LOGOS_SELF_TYPE_INIT GULURLSessionDataResponse* __unused self, SEL __unused _cmd, id arg1, id arg2) _LOGOS_RETURN_RETAINED {
    arg2 = NULL;
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$GULURLSessionDataResponse$initWithResponse$HTTPBody$ ? _logos_orig$_ungrouped$GULURLSessionDataResponse$initWithResponse$HTTPBody$ : (__typeof__(_logos_orig$_ungrouped$GULURLSessionDataResponse$initWithResponse$HTTPBody$))class_getMethodImplementation(_logos_superclass$_ungrouped$GULURLSessionDataResponse, @selector(initWithResponse:HTTPBody:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$GULURLSessionDataResponse$HTTPBody(_LOGOS_SELF_TYPE_NORMAL GULURLSessionDataResponse* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_meta_method$_ungrouped$FBAdBrowserSessionData$initialize(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_meta_orig$_ungrouped$FBAdBrowserSessionData$initialize ? _logos_meta_orig$_ungrouped$FBAdBrowserSessionData$initialize : (__typeof__(_logos_meta_orig$_ungrouped$FBAdBrowserSessionData$initialize))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$FBAdBrowserSessionData, @selector(initialize)))(self, _cmd);
}



static unsigned long long _logos_meta_method$_ungrouped$FBAdBrowserSessionData$currentTimeMs(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static FBAdBrowserSessionData* _logos_method$_ungrouped$FBAdBrowserSessionData$initWithURL$withHandlerTime$withLoadStart$withResponseEnd$withDOMContentLoaded$withScrollReady$withLoadFinish$withSessionFinish$(_LOGOS_SELF_TYPE_INIT FBAdBrowserSessionData* __unused self, SEL __unused _cmd, id arg1, unsigned long long arg2, unsigned long long arg3, unsigned long long arg4, unsigned long long arg5, unsigned long long arg6, unsigned long long arg7, unsigned long long arg8) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static unsigned long long _logos_method$_ungrouped$FBAdBrowserSessionData$handlerTimeMs(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$FBAdBrowserSessionData$setHandlerTimeMs$(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$FBAdBrowserSessionData$setHandlerTimeMs$ ? _logos_orig$_ungrouped$FBAdBrowserSessionData$setHandlerTimeMs$ : (__typeof__(_logos_orig$_ungrouped$FBAdBrowserSessionData$setHandlerTimeMs$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdBrowserSessionData, @selector(setHandlerTimeMs:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FBAdBrowserSessionData$setLoadStartMs$(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$FBAdBrowserSessionData$setLoadStartMs$ ? _logos_orig$_ungrouped$FBAdBrowserSessionData$setLoadStartMs$ : (__typeof__(_logos_orig$_ungrouped$FBAdBrowserSessionData$setLoadStartMs$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdBrowserSessionData, @selector(setLoadStartMs:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$FBAdBrowserSessionData$responseEndMs(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$FBAdBrowserSessionData$setResponseEndMs$(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$FBAdBrowserSessionData$setResponseEndMs$ ? _logos_orig$_ungrouped$FBAdBrowserSessionData$setResponseEndMs$ : (__typeof__(_logos_orig$_ungrouped$FBAdBrowserSessionData$setResponseEndMs$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdBrowserSessionData, @selector(setResponseEndMs:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$FBAdBrowserSessionData$domContentLoadedMs(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$FBAdBrowserSessionData$setDomContentLoadedMs$(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$FBAdBrowserSessionData$setDomContentLoadedMs$ ? _logos_orig$_ungrouped$FBAdBrowserSessionData$setDomContentLoadedMs$ : (__typeof__(_logos_orig$_ungrouped$FBAdBrowserSessionData$setDomContentLoadedMs$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdBrowserSessionData, @selector(setDomContentLoadedMs:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FBAdBrowserSessionData$setScrollReadyMs$(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$FBAdBrowserSessionData$setScrollReadyMs$ ? _logos_orig$_ungrouped$FBAdBrowserSessionData$setScrollReadyMs$ : (__typeof__(_logos_orig$_ungrouped$FBAdBrowserSessionData$setScrollReadyMs$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdBrowserSessionData, @selector(setScrollReadyMs:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$FBAdBrowserSessionData$loadFinishMs(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$FBAdBrowserSessionData$setLoadFinishMs$(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$FBAdBrowserSessionData$setLoadFinishMs$ ? _logos_orig$_ungrouped$FBAdBrowserSessionData$setLoadFinishMs$ : (__typeof__(_logos_orig$_ungrouped$FBAdBrowserSessionData$setLoadFinishMs$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdBrowserSessionData, @selector(setLoadFinishMs:)))(self, _cmd, arg1);
}



static unsigned long long _logos_method$_ungrouped$FBAdBrowserSessionData$sessionFinishMs(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$FBAdBrowserSessionData$setSessionFinishMs$(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$FBAdBrowserSessionData$setSessionFinishMs$ ? _logos_orig$_ungrouped$FBAdBrowserSessionData$setSessionFinishMs$ : (__typeof__(_logos_orig$_ungrouped$FBAdBrowserSessionData$setSessionFinishMs$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdBrowserSessionData, @selector(setSessionFinishMs:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$FBAdBrowserSessionData$cxx_destruct(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$FBAdBrowserSessionData$url(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$FBAdBrowserSessionData$setUrl$(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$FBAdBrowserSessionData$setUrl$ ? _logos_orig$_ungrouped$FBAdBrowserSessionData$setUrl$ : (__typeof__(_logos_orig$_ungrouped$FBAdBrowserSessionData$setUrl$))class_getMethodImplementation(_logos_superclass$_ungrouped$FBAdBrowserSessionData, @selector(setUrl:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$FBAdBrowserSessionData$dataMap(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static unsigned long long _logos_method$_ungrouped$FBAdBrowserSessionData$scrollReadyMs(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static unsigned long long _logos_method$_ungrouped$FBAdBrowserSessionData$loadStartMs(_LOGOS_SELF_TYPE_NORMAL FBAdBrowserSessionData* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_meta_method$_ungrouped$AFURLSessionManager$supportsSecureCoding(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$AFURLSessionManager$downloadTaskWithRequest$progress$destination$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$setResponseSerializer$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setResponseSerializer$ ? _logos_orig$_ungrouped$AFURLSessionManager$setResponseSerializer$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setResponseSerializer$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setResponseSerializer:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$uploadTaskWithStreamedRequest$progress$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$dataTaskWithRequest$uploadProgress$downloadProgress$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$responseSerializer(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$downloadTaskDidFinishDownloading(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloading$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloading$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloading$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloading$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidFinishDownloading:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setMutableTaskDelegatesKeyedByTaskIdentifier$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setMutableTaskDelegatesKeyedByTaskIdentifier$ ? _logos_orig$_ungrouped$AFURLSessionManager$setMutableTaskDelegatesKeyedByTaskIdentifier$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setMutableTaskDelegatesKeyedByTaskIdentifier$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setMutableTaskDelegatesKeyedByTaskIdentifier:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$addDelegateForDataTask$uploadProgress$downloadProgress$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForDataTask$uploadProgress$downloadProgress$completionHandler$ ? _logos_orig$_ungrouped$AFURLSessionManager$addDelegateForDataTask$uploadProgress$downloadProgress$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForDataTask$uploadProgress$downloadProgress$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(addDelegateForDataTask:uploadProgress:downloadProgress:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$AFURLSessionManager$addDelegateForUploadTask$progress$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForUploadTask$progress$completionHandler$ ? _logos_orig$_ungrouped$AFURLSessionManager$addDelegateForUploadTask$progress$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForUploadTask$progress$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(addDelegateForUploadTask:progress:completionHandler:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AFURLSessionManager$addDelegateForDownloadTask$progress$destination$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForDownloadTask$progress$destination$completionHandler$ ? _logos_orig$_ungrouped$AFURLSessionManager$addDelegateForDownloadTask$progress$destination$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForDownloadTask$progress$destination$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(addDelegateForDownloadTask:progress:destination:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static id _logos_method$_ungrouped$AFURLSessionManager$taskDescriptionForSessionTasks(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$mutableTaskDelegatesKeyedByTaskIdentifier(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$addNotificationObserverForTask$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$addNotificationObserverForTask$ ? _logos_orig$_ungrouped$AFURLSessionManager$addNotificationObserverForTask$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$addNotificationObserverForTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(addNotificationObserverForTask:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDelegate$forTask$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg2 = NULL;
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDelegate$forTask$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDelegate$forTask$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDelegate$forTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDelegate:forTask:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$AFURLSessionManager$removeNotificationObserverForTask$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$removeNotificationObserverForTask$ ? _logos_orig$_ungrouped$AFURLSessionManager$removeNotificationObserverForTask$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$removeNotificationObserverForTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(removeNotificationObserverForTask:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$dataTasks(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$uploadTasks(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$tasksForKeyPath$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$AFURLSessionManager$tasksForKeyPath$ ? _logos_orig$_ungrouped$AFURLSessionManager$tasksForKeyPath$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$tasksForKeyPath$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(tasksForKeyPath:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$taskDidResume$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$taskDidResume$ ? _logos_orig$_ungrouped$AFURLSessionManager$taskDidResume$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$taskDidResume$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(taskDidResume:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$taskDidSuspend$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$taskDidSuspend$ ? _logos_orig$_ungrouped$AFURLSessionManager$taskDidSuspend$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$taskDidSuspend$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(taskDidSuspend:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$delegateForTask$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$AFURLSessionManager$delegateForTask$ ? _logos_orig$_ungrouped$AFURLSessionManager$delegateForTask$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$delegateForTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(delegateForTask:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalid$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalid$ ? _logos_orig$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalid$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalid$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setSessionDidBecomeInvalid:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallenge$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallenge$ ? _logos_orig$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallenge$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallenge$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setSessionDidReceiveAuthenticationChallenge:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSession$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSession$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSession$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDidFinishEventsForBackgroundURLSession:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStream$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStream$ ? _logos_orig$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStream$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStream$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setTaskNeedNewBodyStream:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirection$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirection$ ? _logos_orig$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirection$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirection$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setTaskWillPerformHTTPRedirection:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setTaskDidSendBodyData$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidSendBodyData$ ? _logos_orig$_ungrouped$AFURLSessionManager$setTaskDidSendBodyData$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidSendBodyData$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setTaskDidSendBodyData:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setTaskDidComplete$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidComplete$ ? _logos_orig$_ungrouped$AFURLSessionManager$setTaskDidComplete$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidComplete$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setTaskDidComplete:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetrics$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetrics$ ? _logos_orig$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetrics$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetrics$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setTaskDidFinishCollectingMetrics:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponse$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponse$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponse$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponse$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidReceiveResponse:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTask$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTask$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTask$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidBecomeDownloadTask:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveData$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveData$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveData$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveData$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidReceiveData:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponse$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponse$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponse$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponse$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDataTaskWillCacheResponse:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteData$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteData$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteData$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteData$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidWriteData:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidResume$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidResume$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidResume$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidResume$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidResume:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$sessionDidReceiveAuthenticationChallenge(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$taskWillPerformHTTPRedirection(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$dataTaskDidReceiveResponse(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$didFinishEventsForBackgroundURLSession(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$sessionDidBecomeInvalid(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_orig$_ungrouped$AFURLSessionManager$sessionDidBecomeInvalid ? _logos_orig$_ungrouped$AFURLSessionManager$sessionDidBecomeInvalid : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$sessionDidBecomeInvalid))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(sessionDidBecomeInvalid)))(self, _cmd);
}



static id _logos_method$_ungrouped$AFURLSessionManager$authenticationChallengeHandler(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$taskNeedNewBodyStream(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$taskDidSendBodyData(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$removeDelegateForTask$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$removeDelegateForTask$ ? _logos_orig$_ungrouped$AFURLSessionManager$removeDelegateForTask$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$removeDelegateForTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(removeDelegateForTask:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$taskDidComplete(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$taskDidFinishCollectingMetrics(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$dataTaskWillCacheResponse(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$dataTaskDidBecomeDownloadTask(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$dataTaskDidReceiveData(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$downloadTaskDidWriteData(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$downloadTaskDidResume(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$invalidateSessionCancelingTasks$resetSession$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1, bool arg2) {
    arg1 = 0;
    arg2 = 0;
    (_logos_orig$_ungrouped$AFURLSessionManager$invalidateSessionCancelingTasks$resetSession$ ? _logos_orig$_ungrouped$AFURLSessionManager$invalidateSessionCancelingTasks$resetSession$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$invalidateSessionCancelingTasks$resetSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(invalidateSessionCancelingTasks:resetSession:)))(self, _cmd, arg1, arg2);
}



static id _logos_method$_ungrouped$AFURLSessionManager$uploadTaskWithRequest$fromFile$progress$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$uploadTaskWithRequest$fromData$progress$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$uploadProgressForTask$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$AFURLSessionManager$uploadProgressForTask$ ? _logos_orig$_ungrouped$AFURLSessionManager$uploadProgressForTask$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$uploadProgressForTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(uploadProgressForTask:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$downloadProgressForTask$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$AFURLSessionManager$downloadProgressForTask$ ? _logos_orig$_ungrouped$AFURLSessionManager$downloadProgressForTask$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$downloadProgressForTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(downloadProgressForTask:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$downloadTaskWithResumeData$progress$destination$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalidBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalidBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalidBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalidBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setSessionDidBecomeInvalidBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallengeBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallengeBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallengeBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallengeBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setSessionDidReceiveAuthenticationChallengeBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSessionBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSessionBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSessionBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSessionBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDidFinishEventsForBackgroundURLSessionBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirectionBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirectionBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirectionBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirectionBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setTaskWillPerformHTTPRedirectionBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setTaskDidSendBodyDataBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidSendBodyDataBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setTaskDidSendBodyDataBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidSendBodyDataBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setTaskDidSendBodyDataBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setTaskDidCompleteBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidCompleteBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setTaskDidCompleteBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidCompleteBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setTaskDidCompleteBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponseBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponseBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponseBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponseBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidReceiveResponseBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStreamBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStreamBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStreamBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStreamBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setTaskNeedNewBodyStreamBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetricsBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetricsBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetricsBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetricsBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setTaskDidFinishCollectingMetricsBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTaskBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTaskBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTaskBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTaskBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidBecomeDownloadTaskBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveDataBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveDataBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveDataBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveDataBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidReceiveDataBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponseBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponseBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponseBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponseBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDataTaskWillCacheResponseBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteDataBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteDataBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteDataBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteDataBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidWriteDataBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloadingBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloadingBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloadingBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloadingBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidFinishDownloadingBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidResumeBlock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidResumeBlock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidResumeBlock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidResumeBlock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidResumeBlock:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setAuthenticationChallengeHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setAuthenticationChallengeHandler$ ? _logos_orig$_ungrouped$AFURLSessionManager$setAuthenticationChallengeHandler$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setAuthenticationChallengeHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setAuthenticationChallengeHandler:)))(self, _cmd, arg1);
}



static AFURLSessionManager* _logos_method$_ungrouped$AFURLSessionManager$init(_LOGOS_SELF_TYPE_INIT AFURLSessionManager* __unused self, SEL __unused _cmd) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$dealloc(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$AFURLSessionManager$description(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$encodeWithCoder$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$encodeWithCoder$ ? _logos_orig$_ungrouped$AFURLSessionManager$encodeWithCoder$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$encodeWithCoder$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(encodeWithCoder:)))(self, _cmd, arg1);
}



static AFURLSessionManager* _logos_method$_ungrouped$AFURLSessionManager$initWithCoder$(_LOGOS_SELF_TYPE_INIT AFURLSessionManager* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$AFURLSessionManager$initWithCoder$ ? _logos_orig$_ungrouped$AFURLSessionManager$initWithCoder$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$initWithCoder$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(initWithCoder:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$lock(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$setOperationQueue$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setOperationQueue$ ? _logos_orig$_ungrouped$AFURLSessionManager$setOperationQueue$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setOperationQueue$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setOperationQueue:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$operationQueue(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$session(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$setSession$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setSession$ ? _logos_orig$_ungrouped$AFURLSessionManager$setSession$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setSession:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$didBecomeInvalidWithError$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$didBecomeInvalidWithError$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$didBecomeInvalidWithError$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$didBecomeInvalidWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:didBecomeInvalidWithError:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$didReceiveChallenge$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg2 = NULL;
    arg1 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$didReceiveChallenge$completionHandler$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$didReceiveChallenge$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$didReceiveChallenge$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:didReceiveChallenge:completionHandler:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4, id arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    arg5 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$task$didReceiveChallenge$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didReceiveChallenge$completionHandler$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didReceiveChallenge$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didReceiveChallenge$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:task:didReceiveChallenge:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$task$needNewBodyStream$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$needNewBodyStream$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$needNewBodyStream$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$needNewBodyStream$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:task:needNewBodyStream:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, long long arg3, long long arg4, long long arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    arg4 = 0;
    arg5 = 0;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSessionDidFinishEventsForBackgroundURLSession$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSessionDidFinishEventsForBackgroundURLSession$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSessionDidFinishEventsForBackgroundURLSession$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSessionDidFinishEventsForBackgroundURLSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSessionDidFinishEventsForBackgroundURLSession:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$task$didFinishCollectingMetrics$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didFinishCollectingMetrics$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didFinishCollectingMetrics$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didFinishCollectingMetrics$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:task:didFinishCollectingMetrics:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$task$didCompleteWithError$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didCompleteWithError$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didCompleteWithError$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didCompleteWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:task:didCompleteWithError:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didFinishDownloadingToURL$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didFinishDownloadingToURL$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didFinishDownloadingToURL$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didFinishDownloadingToURL$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:downloadTask:didFinishDownloadingToURL:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didWriteData$totalBytesWritten$totalBytesExpectedToWrite$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, long long arg3, long long arg4, long long arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    arg4 = 0;
    arg5 = 0;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didWriteData$totalBytesWritten$totalBytesExpectedToWrite$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didWriteData$totalBytesWritten$totalBytesExpectedToWrite$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didWriteData$totalBytesWritten$totalBytesExpectedToWrite$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didResumeAtOffset$expectedTotalBytes$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, long long arg3, long long arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    arg4 = 0;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didResumeAtOffset$expectedTotalBytes$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didResumeAtOffset$expectedTotalBytes$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didResumeAtOffset$expectedTotalBytes$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveData$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveData$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveData$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveData$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:dataTask:didReceiveData:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$dataTask$didBecomeDownloadTask$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didBecomeDownloadTask$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didBecomeDownloadTask$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didBecomeDownloadTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:dataTask:didBecomeDownloadTask:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$AFURLSessionManager$URLSession$dataTask$willCacheResponse$completionHandler$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$willCacheResponse$completionHandler$ ? _logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$willCacheResponse$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$willCacheResponse$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(URLSession:dataTask:willCacheResponse:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setLock$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setLock$ ? _logos_orig$_ungrouped$AFURLSessionManager$setLock$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setLock$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setLock:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$tasks(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$setCompletionQueue$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setCompletionQueue$ ? _logos_orig$_ungrouped$AFURLSessionManager$setCompletionQueue$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setCompletionQueue$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setCompletionQueue:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$completionQueue(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$sessionConfiguration(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$setSessionConfiguration$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setSessionConfiguration$ ? _logos_orig$_ungrouped$AFURLSessionManager$setSessionConfiguration$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setSessionConfiguration$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setSessionConfiguration:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setSecurityPolicy$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setSecurityPolicy$ ? _logos_orig$_ungrouped$AFURLSessionManager$setSecurityPolicy$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setSecurityPolicy$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setSecurityPolicy:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$securityPolicy(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static AFURLSessionManager* _logos_method$_ungrouped$AFURLSessionManager$initWithSessionConfiguration$(_LOGOS_SELF_TYPE_INIT AFURLSessionManager* __unused self, SEL __unused _cmd, id arg1) _LOGOS_RETURN_RETAINED {
    arg1 = NULL;
    return NULL;
    return (_logos_orig$_ungrouped$AFURLSessionManager$initWithSessionConfiguration$ ? _logos_orig$_ungrouped$AFURLSessionManager$initWithSessionConfiguration$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$initWithSessionConfiguration$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(initWithSessionConfiguration:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$AFURLSessionManager$setCompletionGroup$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setCompletionGroup$ ? _logos_orig$_ungrouped$AFURLSessionManager$setCompletionGroup$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setCompletionGroup$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setCompletionGroup:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$AFURLSessionManager$completionGroup(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$downloadTasks(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$AFURLSessionManager$reachabilityManager(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$AFURLSessionManager$setReachabilityManager$(_LOGOS_SELF_TYPE_NORMAL AFURLSessionManager* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$AFURLSessionManager$setReachabilityManager$ ? _logos_orig$_ungrouped$AFURLSessionManager$setReachabilityManager$ : (__typeof__(_logos_orig$_ungrouped$AFURLSessionManager$setReachabilityManager$))class_getMethodImplementation(_logos_superclass$_ungrouped$AFURLSessionManager, @selector(setReachabilityManager:)))(self, _cmd, arg1);
}



static bool _logos_meta_method$_ungrouped$XCDURLGETOperation$automaticallyNotifiesObserversForKey$(_LOGOS_SELF_TYPE_NORMAL Class _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return 0;
    return (_logos_meta_orig$_ungrouped$XCDURLGETOperation$automaticallyNotifiesObserversForKey$ ? _logos_meta_orig$_ungrouped$XCDURLGETOperation$automaticallyNotifiesObserversForKey$ : (__typeof__(_logos_meta_orig$_ungrouped$XCDURLGETOperation$automaticallyNotifiesObserversForKey$))class_getMethodImplementation(_logos_supermetaclass$_ungrouped$XCDURLGETOperation, @selector(automaticallyNotifiesObserversForKey:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$XCDURLGETOperation$operationStartSemaphore(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static XCDURLGETOperation* _logos_method$_ungrouped$XCDURLGETOperation$initWithURL$info$cookes$(_LOGOS_SELF_TYPE_INIT XCDURLGETOperation* __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) _LOGOS_RETURN_RETAINED {
    return NULL;
}



static id _logos_method$_ungrouped$XCDURLGETOperation$description(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return (_logos_orig$_ungrouped$XCDURLGETOperation$description ? _logos_orig$_ungrouped$XCDURLGETOperation$description : (__typeof__(_logos_orig$_ungrouped$XCDURLGETOperation$description))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDURLGETOperation, @selector(description)))(self, _cmd);
}



static id _logos_method$_ungrouped$XCDURLGETOperation$error(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$XCDURLGETOperation$cancel(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$XCDURLGETOperation$start(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static void _logos_method$_ungrouped$XCDURLGETOperation$setError$(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$XCDURLGETOperation$setError$ ? _logos_orig$_ungrouped$XCDURLGETOperation$setError$ : (__typeof__(_logos_orig$_ungrouped$XCDURLGETOperation$setError$))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDURLGETOperation, @selector(setError:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$XCDURLGETOperation$isFinished(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$XCDURLGETOperation$isExecuting(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$XCDURLGETOperation$isAsynchronous(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static id _logos_method$_ungrouped$XCDURLGETOperation$url(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$XCDURLGETOperation$finish(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$XCDURLGETOperation$info(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static id _logos_method$_ungrouped$XCDURLGETOperation$session(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$XCDURLGETOperation$setSession$(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$XCDURLGETOperation$setSession$ ? _logos_orig$_ungrouped$XCDURLGETOperation$setSession$ : (__typeof__(_logos_orig$_ungrouped$XCDURLGETOperation$setSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDURLGETOperation, @selector(setSession:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$XCDURLGETOperation$finishWithError$(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$XCDURLGETOperation$finishWithError$ ? _logos_orig$_ungrouped$XCDURLGETOperation$finishWithError$ : (__typeof__(_logos_orig$_ungrouped$XCDURLGETOperation$finishWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDURLGETOperation, @selector(finishWithError:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$XCDURLGETOperation$response(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$XCDURLGETOperation$URLSession$task$didCompleteWithError$(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$task$didCompleteWithError$ ? _logos_orig$_ungrouped$XCDURLGETOperation$URLSession$task$didCompleteWithError$ : (__typeof__(_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$task$didCompleteWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDURLGETOperation, @selector(URLSession:task:didCompleteWithError:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveResponse$completionHandler$(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveResponse$completionHandler$ ? _logos_orig$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveResponse$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveResponse$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDURLGETOperation, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$XCDURLGETOperation$setResponse$(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$XCDURLGETOperation$setResponse$ ? _logos_orig$_ungrouped$XCDURLGETOperation$setResponse$ : (__typeof__(_logos_orig$_ungrouped$XCDURLGETOperation$setResponse$))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDURLGETOperation, @selector(setResponse:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveData$(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveData$ ? _logos_orig$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveData$ : (__typeof__(_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveData$))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDURLGETOperation, @selector(URLSession:dataTask:didReceiveData:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$XCDURLGETOperation$setIsFinished$(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$XCDURLGETOperation$setIsFinished$ ? _logos_orig$_ungrouped$XCDURLGETOperation$setIsFinished$ : (__typeof__(_logos_orig$_ungrouped$XCDURLGETOperation$setIsFinished$))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDURLGETOperation, @selector(setIsFinished:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$XCDURLGETOperation$cookies(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$XCDURLGETOperation$setIsExecuting$(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$XCDURLGETOperation$setIsExecuting$ ? _logos_orig$_ungrouped$XCDURLGETOperation$setIsExecuting$ : (__typeof__(_logos_orig$_ungrouped$XCDURLGETOperation$setIsExecuting$))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDURLGETOperation, @selector(setIsExecuting:)))(self, _cmd, arg1);
}



static id _logos_method$_ungrouped$XCDURLGETOperation$dataTask(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$XCDURLGETOperation$setDataTask$(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$XCDURLGETOperation$setDataTask$ ? _logos_orig$_ungrouped$XCDURLGETOperation$setDataTask$ : (__typeof__(_logos_orig$_ungrouped$XCDURLGETOperation$setDataTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$XCDURLGETOperation, @selector(setDataTask:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$XCDURLGETOperation$startRequest(_LOGOS_SELF_TYPE_NORMAL XCDURLGETOperation* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}




static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopTaskID$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopTaskID$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopTaskID$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopTaskID$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(setStopTaskID:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$cxx_destruct(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static id _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$cxx_construct(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return NULL;
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didBecomeInvalidWithError$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    arg1 = NULL;
    arg2 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didBecomeInvalidWithError$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didBecomeInvalidWithError$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didBecomeInvalidWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:didBecomeInvalidWithError:)))(self, _cmd, arg1, arg2);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didReceiveChallenge$completionHandler$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didReceiveChallenge$completionHandler$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didReceiveChallenge$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didReceiveChallenge$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:didReceiveChallenge:completionHandler:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSessionDidFinishEventsForBackgroundURLSession$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSessionDidFinishEventsForBackgroundURLSession$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSessionDidFinishEventsForBackgroundURLSession$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSessionDidFinishEventsForBackgroundURLSession$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSessionDidFinishEventsForBackgroundURLSession:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4, id arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    arg5 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didReceiveChallenge$completionHandler$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didReceiveChallenge$completionHandler$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didReceiveChallenge$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didReceiveChallenge$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:task:didReceiveChallenge:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$needNewBodyStream$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$needNewBodyStream$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$needNewBodyStream$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$needNewBodyStream$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:task:needNewBodyStream:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, long long arg3, long long arg4, long long arg5) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = 0;
    arg4 = 0;
    arg5 = 0;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:)))(self, _cmd, arg1, arg2, arg3, arg4, arg5);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveData$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveData$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveData$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveData$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:dataTask:didReceiveData:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveResponse$completionHandler$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveResponse$completionHandler$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveResponse$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveResponse$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didCompleteWithError$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didCompleteWithError$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didCompleteWithError$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didCompleteWithError$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:task:didCompleteWithError:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeDownloadTask$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeDownloadTask$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeDownloadTask$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeDownloadTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:dataTask:didBecomeDownloadTask:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeStreamTask$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeStreamTask$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeStreamTask$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeStreamTask$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:dataTask:didBecomeStreamTask:)))(self, _cmd, arg1, arg2, arg3);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$willCacheResponse$completionHandler$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3, id arg4) {
    arg1 = NULL;
    arg2 = NULL;
    arg3 = NULL;
    arg4 = NULL;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$willCacheResponse$completionHandler$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$willCacheResponse$completionHandler$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$willCacheResponse$completionHandler$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:dataTask:willCacheResponse:completionHandler:)))(self, _cmd, arg1, arg2, arg3, arg4);
}



static unsigned long long _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$stopID(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopID$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopID$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopID$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopID$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(setStopID:)))(self, _cmd, arg1);
}



static int _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$ID(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static RSTTAPIHTTPSessionDelegate* _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$init$(_LOGOS_SELF_TYPE_INIT RSTTAPIHTTPSessionDelegate* __unused self, SEL __unused _cmd, int arg1) _LOGOS_RETURN_RETAINED {
    arg1 = 0;
    return NULL;
    return (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$init$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$init$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$init$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(init:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$setID$(_LOGOS_SELF_TYPE_NORMAL RSTTAPIHTTPSessionDelegate* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, int arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setID$ ? _logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setID$ : (__typeof__(_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setID$))class_getMethodImplementation(_logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(setID:)))(self, _cmd, arg1);
}




static bool _logos_method$_ungrouped$VNGMoatAnalytics$prepareNativeDisplayTracking$error$(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id* arg2) {
    return 0;
}



static bool _logos_method$_ungrouped$VNGMoatAnalytics$IDFACollectionBlocked(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$VNGMoatAnalytics$initializeDisplayWebViewCalled(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$VNGMoatAnalytics$addTrackedWebView$(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1) {
    arg1 = NULL;
    return 0;
    return (_logos_orig$_ungrouped$VNGMoatAnalytics$addTrackedWebView$ ? _logos_orig$_ungrouped$VNGMoatAnalytics$addTrackedWebView$ : (__typeof__(_logos_orig$_ungrouped$VNGMoatAnalytics$addTrackedWebView$))class_getMethodImplementation(_logos_superclass$_ungrouped$VNGMoatAnalytics, @selector(addTrackedWebView:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$VNGMoatAnalytics$initialized(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VNGMoatAnalytics$setDebug$(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$VNGMoatAnalytics$setDebug$ ? _logos_orig$_ungrouped$VNGMoatAnalytics$setDebug$ : (__typeof__(_logos_orig$_ungrouped$VNGMoatAnalytics$setDebug$))class_getMethodImplementation(_logos_superclass$_ungrouped$VNGMoatAnalytics, @selector(setDebug:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$VNGMoatAnalytics$isInitialized(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VNGMoatAnalytics$setInitialized$(_LOGOS_SELF_TYPE_NORMAL VNGMoatAnalytics* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$VNGMoatAnalytics$setInitialized$ ? _logos_orig$_ungrouped$VNGMoatAnalytics$setInitialized$ : (__typeof__(_logos_orig$_ungrouped$VNGMoatAnalytics$setInitialized$))class_getMethodImplementation(_logos_superclass$_ungrouped$VNGMoatAnalytics, @selector(setInitialized:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VNGMoatBaseTracker$setIsNativeVideo$(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsNativeVideo$ ? _logos_orig$_ungrouped$VNGMoatBaseTracker$setIsNativeVideo$ : (__typeof__(_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsNativeVideo$))class_getMethodImplementation(_logos_superclass$_ungrouped$VNGMoatBaseTracker, @selector(setIsNativeVideo:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VNGMoatBaseTracker$setStoppedTracking$(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$VNGMoatBaseTracker$setStoppedTracking$ ? _logos_orig$_ungrouped$VNGMoatBaseTracker$setStoppedTracking$ : (__typeof__(_logos_orig$_ungrouped$VNGMoatBaseTracker$setStoppedTracking$))class_getMethodImplementation(_logos_superclass$_ungrouped$VNGMoatBaseTracker, @selector(setStoppedTracking:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VNGMoatBaseTracker$notifyDelegateOfStartFailure$reason$(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, unsigned long long arg1, id arg2) {
    arg1 = 0;
    arg2 = NULL;
    (_logos_orig$_ungrouped$VNGMoatBaseTracker$notifyDelegateOfStartFailure$reason$ ? _logos_orig$_ungrouped$VNGMoatBaseTracker$notifyDelegateOfStartFailure$reason$ : (__typeof__(_logos_orig$_ungrouped$VNGMoatBaseTracker$notifyDelegateOfStartFailure$reason$))class_getMethodImplementation(_logos_superclass$_ungrouped$VNGMoatBaseTracker, @selector(notifyDelegateOfStartFailure:reason:)))(self, _cmd, arg1, arg2);
}



static bool _logos_method$_ungrouped$VNGMoatBaseTracker$checkFalseStart(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VNGMoatBaseTracker$setIsNativeDisplay$(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsNativeDisplay$ ? _logos_orig$_ungrouped$VNGMoatBaseTracker$setIsNativeDisplay$ : (__typeof__(_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsNativeDisplay$))class_getMethodImplementation(_logos_superclass$_ungrouped$VNGMoatBaseTracker, @selector(setIsNativeDisplay:)))(self, _cmd, arg1);
}



static bool _logos_method$_ungrouped$VNGMoatBaseTracker$isNativeDisplay(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$VNGMoatBaseTracker$isActive(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static void _logos_method$_ungrouped$VNGMoatBaseTracker$setIsActive$(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, bool arg1) {
    arg1 = 0;
    (_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsActive$ ? _logos_orig$_ungrouped$VNGMoatBaseTracker$setIsActive$ : (__typeof__(_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsActive$))class_getMethodImplementation(_logos_superclass$_ungrouped$VNGMoatBaseTracker, @selector(setIsActive:)))(self, _cmd, arg1);
}



static void _logos_method$_ungrouped$VNGMoatBaseTracker$startTracking(_LOGOS_SELF_TYPE_NORMAL VNGMoatBaseTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
}



static bool _logos_method$_ungrouped$VNGMoatWebTracker$setViewToTrack$withWebComponent$(_LOGOS_SELF_TYPE_NORMAL VNGMoatWebTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, id arg1, id arg2) {
    return 0;
}



static bool _logos_method$_ungrouped$VNGMoatWebTracker$installBridge(_LOGOS_SELF_TYPE_NORMAL VNGMoatWebTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}



static bool _logos_method$_ungrouped$VNGMoatWebTracker$installWKWebViewBridge(_LOGOS_SELF_TYPE_NORMAL VNGMoatWebTracker* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd) {
    return 0;
}

static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$QCloudXMLDictionaryParser = objc_getClass("QCloudXMLDictionaryParser"); _logos_superclass$_ungrouped$QCloudXMLDictionaryParser = class_getSuperclass(_logos_class$_ungrouped$QCloudXMLDictionaryParser); { _logos_register_hook(_logos_class$_ungrouped$QCloudXMLDictionaryParser, @selector(parser:foundComment:), (IMP)&_logos_method$_ungrouped$QCloudXMLDictionaryParser$parser$foundComment$, (IMP *)&_logos_orig$_ungrouped$QCloudXMLDictionaryParser$parser$foundComment$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudXMLDictionaryParser, @selector(root), (IMP)&_logos_method$_ungrouped$QCloudXMLDictionaryParser$root, (IMP *)&_logos_orig$_ungrouped$QCloudXMLDictionaryParser$root);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudXMLDictionaryParser, @selector(setRoot:), (IMP)&_logos_method$_ungrouped$QCloudXMLDictionaryParser$setRoot$, (IMP *)&_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setRoot$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudXMLDictionaryParser, @selector(text), (IMP)&_logos_method$_ungrouped$QCloudXMLDictionaryParser$text, (IMP *)&_logos_orig$_ungrouped$QCloudXMLDictionaryParser$text);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudXMLDictionaryParser, @selector(setText:), (IMP)&_logos_method$_ungrouped$QCloudXMLDictionaryParser$setText$, (IMP *)&_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setText$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudXMLDictionaryParser, @selector(setStack:), (IMP)&_logos_method$_ungrouped$QCloudXMLDictionaryParser$setStack$, (IMP *)&_logos_orig$_ungrouped$QCloudXMLDictionaryParser$setStack$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudXMLDictionaryParser, @selector(stack), (IMP)&_logos_method$_ungrouped$QCloudXMLDictionaryParser$stack, (IMP *)&_logos_orig$_ungrouped$QCloudXMLDictionaryParser$stack);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudXMLDictionaryParser, @selector(addText:), (IMP)&_logos_method$_ungrouped$QCloudXMLDictionaryParser$addText$, (IMP *)&_logos_orig$_ungrouped$QCloudXMLDictionaryParser$addText$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudXMLDictionaryParser, @selector(trimWhiteSpace), (IMP)&_logos_method$_ungrouped$QCloudXMLDictionaryParser$trimWhiteSpace, (IMP *)&_logos_orig$_ungrouped$QCloudXMLDictionaryParser$trimWhiteSpace);}Class _logos_class$_ungrouped$QCloudCOSXMlResumeUploadInfo = objc_getClass("QCloudCOSXMlResumeUploadInfo"); _logos_superclass$_ungrouped$QCloudCOSXMlResumeUploadInfo = class_getSuperclass(_logos_class$_ungrouped$QCloudCOSXMlResumeUploadInfo); { _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMlResumeUploadInfo, @selector(object), (IMP)&_logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$object, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$object);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMlResumeUploadInfo, @selector(setObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$setObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMlResumeUploadInfo, @selector(bucket), (IMP)&_logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$bucket, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$bucket);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMlResumeUploadInfo, @selector(localPath), (IMP)&_logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$localPath, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$localPath);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMlResumeUploadInfo, @selector(setBucket:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$setBucket$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setBucket$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMlResumeUploadInfo, @selector(setLocalPath:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMlResumeUploadInfo$setLocalPath$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMlResumeUploadInfo$setLocalPath$);}Class _logos_class$_ungrouped$QCloudCOSXMLEndPoint = objc_getClass("QCloudCOSXMLEndPoint"); _logos_superclass$_ungrouped$QCloudCOSXMLEndPoint = class_getSuperclass(_logos_class$_ungrouped$QCloudCOSXMLEndPoint); { _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLEndPoint, @selector(serverURLWithBucket:appID:regionName:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLEndPoint$serverURLWithBucket$appID$regionName$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$serverURLWithBucket$appID$regionName$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLEndPoint, @selector(formattedBucket:withAPPID:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLEndPoint$formattedBucket$withAPPID$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$formattedBucket$withAPPID$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLEndPoint, @selector(isPrefixURL), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLEndPoint$isPrefixURL, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$isPrefixURL);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLEndPoint, @selector(setIsPrefixURL:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLEndPoint$setIsPrefixURL$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setIsPrefixURL$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLEndPoint, @selector(init), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLEndPoint$init, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$init);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLEndPoint, @selector(setRegionName:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLEndPoint$setRegionName$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setRegionName$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLEndPoint, @selector(setSuffix:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLEndPoint$setSuffix$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$setSuffix$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLEndPoint, @selector(suffix), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLEndPoint$suffix, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLEndPoint$suffix);}Class _logos_class$_ungrouped$AFXMLParserResponseSerializer = objc_getClass("AFXMLParserResponseSerializer"); Class _logos_metaclass$_ungrouped$AFXMLParserResponseSerializer = object_getClass(_logos_class$_ungrouped$AFXMLParserResponseSerializer); _logos_superclass$_ungrouped$AFXMLParserResponseSerializer = class_getSuperclass(_logos_class$_ungrouped$AFXMLParserResponseSerializer); _logos_supermetaclass$_ungrouped$AFXMLParserResponseSerializer = class_getSuperclass(_logos_metaclass$_ungrouped$AFXMLParserResponseSerializer); { _logos_register_hook(_logos_metaclass$_ungrouped$AFXMLParserResponseSerializer, @selector(serializer), (IMP)&_logos_meta_method$_ungrouped$AFXMLParserResponseSerializer$serializer, (IMP *)&_logos_meta_orig$_ungrouped$AFXMLParserResponseSerializer$serializer);}{ _logos_register_hook(_logos_class$_ungrouped$AFXMLParserResponseSerializer, @selector(responseObjectForResponse:data:error:), (IMP)&_logos_method$_ungrouped$AFXMLParserResponseSerializer$responseObjectForResponse$data$error$, (IMP *)&_logos_orig$_ungrouped$AFXMLParserResponseSerializer$responseObjectForResponse$data$error$);}{ _logos_register_hook(_logos_class$_ungrouped$AFXMLParserResponseSerializer, @selector(init), (IMP)&_logos_method$_ungrouped$AFXMLParserResponseSerializer$init, (IMP *)&_logos_orig$_ungrouped$AFXMLParserResponseSerializer$init);}Class _logos_class$_ungrouped$XCDYouTubeDashManifestXML = objc_getClass("XCDYouTubeDashManifestXML"); _logos_superclass$_ungrouped$XCDYouTubeDashManifestXML = class_getSuperclass(_logos_class$_ungrouped$XCDYouTubeDashManifestXML); { _logos_register_hook(_logos_class$_ungrouped$XCDYouTubeDashManifestXML, @selector(streamURLs), (IMP)&_logos_method$_ungrouped$XCDYouTubeDashManifestXML$streamURLs, (IMP *)&_logos_orig$_ungrouped$XCDYouTubeDashManifestXML$streamURLs);}{ _logos_register_hook(_logos_class$_ungrouped$XCDYouTubeDashManifestXML, @selector(XMLString), (IMP)&_logos_method$_ungrouped$XCDYouTubeDashManifestXML$XMLString, (IMP *)&_logos_orig$_ungrouped$XCDYouTubeDashManifestXML$XMLString);}{ _logos_register_hook(_logos_class$_ungrouped$XCDYouTubeDashManifestXML, @selector(initWithXMLString:), (IMP)&_logos_method$_ungrouped$XCDYouTubeDashManifestXML$initWithXMLString$, (IMP *)&_logos_orig$_ungrouped$XCDYouTubeDashManifestXML$initWithXMLString$);}Class _logos_class$_ungrouped$QCloudQCloudCOSXMLLoad = objc_getClass("QCloudQCloudCOSXMLLoad"); Class _logos_metaclass$_ungrouped$QCloudQCloudCOSXMLLoad = object_getClass(_logos_class$_ungrouped$QCloudQCloudCOSXMLLoad); _logos_supermetaclass$_ungrouped$QCloudQCloudCOSXMLLoad = class_getSuperclass(_logos_metaclass$_ungrouped$QCloudQCloudCOSXMLLoad); { _logos_register_hook(_logos_metaclass$_ungrouped$QCloudQCloudCOSXMLLoad, @selector(load), (IMP)&_logos_meta_method$_ungrouped$QCloudQCloudCOSXMLLoad$load, (IMP *)&_logos_meta_orig$_ungrouped$QCloudQCloudCOSXMLLoad$load);}Class _logos_class$_ungrouped$QCloudCOSXMLService = objc_getClass("QCloudCOSXMLService"); Class _logos_metaclass$_ungrouped$QCloudCOSXMLService = object_getClass(_logos_class$_ungrouped$QCloudCOSXMLService); _logos_superclass$_ungrouped$QCloudCOSXMLService = class_getSuperclass(_logos_class$_ungrouped$QCloudCOSXMLService); _logos_supermetaclass$_ungrouped$QCloudCOSXMLService = class_getSuperclass(_logos_metaclass$_ungrouped$QCloudCOSXMLService); { _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLService, @selector(registerCOSXMLWithConfiguration:withKey:), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLService$registerCOSXMLWithConfiguration$withKey$, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLService$registerCOSXMLWithConfiguration$withKey$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLService, @selector(defaultCOSXML), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLService$defaultCOSXML, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLService$defaultCOSXML);}{ _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLService, @selector(hasServiceForKey:), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLService$hasServiceForKey$, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLService$hasServiceForKey$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLService, @selector(registerDefaultCOSXMLWithConfiguration:), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLService$registerDefaultCOSXMLWithConfiguration$, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLService$registerDefaultCOSXMLWithConfiguration$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLService, @selector(cosxmlServiceForKey:), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLService$cosxmlServiceForKey$, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLService$cosxmlServiceForKey$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLService, @selector(removeCOSXMLWithKey:), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLService$removeCOSXMLWithKey$, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLService$removeCOSXMLWithKey$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLService, @selector(changeImplementation), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLService$changeImplementation, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLService$changeImplementation);}{ _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLService, @selector(Quality_registerDefaultCOSXMLWithConfiguration:), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLService$Quality_registerDefaultCOSXMLWithConfiguration$, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLService$Quality_registerDefaultCOSXMLWithConfiguration$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLService, @selector(initMTA), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLService$initMTA, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLService$initMTA);}{ _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLService, @selector(load), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLService$load, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLService$load);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(HeadObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$HeadObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$HeadObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(InitiateMultipartUpload:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$InitiateMultipartUpload$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$InitiateMultipartUpload$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(UploadPartCopy:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$UploadPartCopy$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$UploadPartCopy$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutObjectCopy:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutObjectCopy$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectCopy$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(CompleteMultipartUpload:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$CompleteMultipartUpload$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$CompleteMultipartUpload$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(getURLWithBucket:object:withAuthorization:regionName:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$getURLWithBucket$object$withAuthorization$regionName$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$getURLWithBucket$object$withAuthorization$regionName$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(loadAuthorizationForBiz:urlRequest:compelete:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$loadAuthorizationForBiz$urlRequest$compelete$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$loadAuthorizationForBiz$urlRequest$compelete$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutWatermarkObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutWatermarkObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutWatermarkObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetRecognitionObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetRecognitionObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetRecognitionObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetFilePreviewObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetFilePreviewObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetFilePreviewObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetGenerateSnapshot:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetGenerateSnapshot$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetGenerateSnapshot$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(CloudDataOperations:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$CloudDataOperations$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$CloudDataOperations$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutObjectQRCodeRecognition:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutObjectQRCodeRecognition$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectQRCodeRecognition$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(CIQRCodeRecognition:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$CIQRCodeRecognition$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$CIQRCodeRecognition$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(CIPicRecognition:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$CIPicRecognition$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$CIPicRecognition$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(HeadBucket:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$HeadBucket$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$HeadBucket$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(DeleteObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$DeleteObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketIntelligentTiering:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketIntelligentTiering$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketIntelligentTiering$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketIntelligentTiering:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketIntelligentTiering$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketIntelligentTiering$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetObjectTagging:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetObjectTagging$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetObjectTagging$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PuObjectTagging:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PuObjectTagging$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PuObjectTagging$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetObjectACL:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetObjectACL$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetObjectACL$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutObjectACL:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutObjectACL$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutObjectACL$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(DeleteMultipleObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$DeleteMultipleObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteMultipleObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(OptionsObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$OptionsObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$OptionsObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetService:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetService$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetService$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucket:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucket$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucket$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucket:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucket$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucket$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucket:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucket$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucket$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketLocation:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketLocation$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLocation$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(ListBucketMultipartUploads:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$ListBucketMultipartUploads$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$ListBucketMultipartUploads$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketACL:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketACL$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketACL$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketACL:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketACL$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketACL$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketCORS:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketCORS$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketCORS$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketLifecycle:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketLifecycle$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketLifecycle$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketLifecycle:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketLifecycle$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLifecycle$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketLifeCycle:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketLifeCycle$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketLifeCycle$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketCORS:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketCORS$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketCORS$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketCORS:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketCORS$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketCORS$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketVersioning:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketVersioning$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketVersioning$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketVersioning:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketVersioning$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketVersioning$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketAccelerate:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketAccelerate$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketAccelerate$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketAccelerate:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketAccelerate$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketAccelerate$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketRelication:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketRelication$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketRelication$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketReplication:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketReplication$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketReplication$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PostObjectRestore:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PostObjectRestore$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PostObjectRestore$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(ListObjectVersions:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$ListObjectVersions$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$ListObjectVersions$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketDomain:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketDomain$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketDomain$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketDomain:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketDomain$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketDomain$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketWebsite:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketWebsite$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketWebsite$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketWebsite:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketWebsite$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketWebsite$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketWebsite:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketWebsite$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketWebsite$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketTagging:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketTagging$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketTagging$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketReplication:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketReplication$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketReplication$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketTagging:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketTagging$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketTagging$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketTagging:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketTagging$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketTagging$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(SelectObjectContent:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$SelectObjectContent$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$SelectObjectContent$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketLogging:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketLogging$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketLogging$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketLogging:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketLogging$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketLogging$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutBucketInventory:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutBucketInventory$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutBucketInventory$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(GetBucketInventory:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$GetBucketInventory$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$GetBucketInventory$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(DeleteBucketInventory:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$DeleteBucketInventory$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$DeleteBucketInventory$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(getPresignedURL:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$getPresignedURL$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$getPresignedURL$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(doesBucketExist:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$doesBucketExist$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$doesBucketExist$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(doesObjectExistWithBucket:object:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$doesObjectExistWithBucket$object$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$doesObjectExistWithBucket$object$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(deleteObjectWithBucket:object:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$deleteObjectWithBucket$object$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$deleteObjectWithBucket$object$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(ListBucketInventory:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$ListBucketInventory$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$ListBucketInventory$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(deleteVersionWithBucket:object:version:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$deleteVersionWithBucket$object$version$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$deleteVersionWithBucket$object$version$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(changeObjectStorageClassWithBucket:object:storageClass:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$changeObjectStorageClassWithBucket$object$storageClass$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$changeObjectStorageClassWithBucket$object$storageClass$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(updateObjectMedaWithBucket:object:meta:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$updateObjectMedaWithBucket$object$meta$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$updateObjectMedaWithBucket$object$meta$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(ListMultipart:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$ListMultipart$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$ListMultipart$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(PutObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$PutObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$PutObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(UploadPart:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$UploadPart$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$UploadPart$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(AbortMultipfartUpload:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$AbortMultipfartUpload$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$AbortMultipfartUpload$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(initWithConfiguration:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$initWithConfiguration$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$initWithConfiguration$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLService, @selector(sessionManager), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLService$sessionManager, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLService$sessionManager);}Class _logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest = objc_getClass("QCloudCOSXMLUploadObjectRequest"); Class _logos_metaclass$_ungrouped$QCloudCOSXMLUploadObjectRequest = object_getClass(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest); _logos_superclass$_ungrouped$QCloudCOSXMLUploadObjectRequest = class_getSuperclass(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest); _logos_supermetaclass$_ungrouped$QCloudCOSXMLUploadObjectRequest = class_getSuperclass(_logos_metaclass$_ungrouped$QCloudCOSXMLUploadObjectRequest); { _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(modelContainerPropertyGenericClass), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelContainerPropertyGenericClass, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelContainerPropertyGenericClass);}{ _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(modelPropertyBlacklist), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelPropertyBlacklist, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelPropertyBlacklist);}{ _logos_register_hook(_logos_metaclass$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(requestWithRequestData:), (IMP)&_logos_meta_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$requestWithRequestData$, (IMP *)&_logos_meta_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$requestWithRequestData$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(modelCustomWillTransformFromDictionary:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelCustomWillTransformFromDictionary$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$modelCustomWillTransformFromDictionary$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(uploadId), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadId, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadId);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setUploadId:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadId$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadId$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(requstMetricArray), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$requstMetricArray, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$requstMetricArray);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(grantRead), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$grantRead, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$grantRead);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setGrantRead:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantRead$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantRead$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(grantFullControl), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$grantFullControl, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$grantFullControl);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setGrantFullControl:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantFullControl$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setGrantFullControl$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(requstsMetricArrayBlock), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$requstsMetricArrayBlock, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$requstsMetricArrayBlock);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(markPartFinish:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$markPartFinish$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$markPartFinish$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(uploadParts), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadParts, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadParts);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(fakeStart), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$fakeStart, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$fakeStart);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setCOSServerSideEncyptionWithCustomerKey:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setRequstsMetricArrayBlock:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstsMetricArrayBlock$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstsMetricArrayBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setUploadParts:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadParts$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadParts$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setRequstMetricArray:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstMetricArray$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequstMetricArray$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(enableMD5Verification), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$enableMD5Verification, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$enableMD5Verification);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setEnableMD5Verification:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableMD5Verification$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableMD5Verification$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(requestCacheArray), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$requestCacheArray, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$requestCacheArray);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setCOSServerSideEncyption), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyption, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyption);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setRequestCacheArray:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequestCacheArray$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRequestCacheArray$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(queueSource), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$queueSource, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$queueSource);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setQueueSource:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setQueueSource$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setQueueSource$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(getFileLocalUploadParts), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$getFileLocalUploadParts, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$getFileLocalUploadParts);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(finishUpload:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$finishUpload$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$finishUpload$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(uploadOffsetBodys:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadOffsetBodys$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadOffsetBodys$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(getContinueInfo:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$getContinueInfo$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$getContinueInfo$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(dataContentLength), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$dataContentLength, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$dataContentLength);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(continueMultiUpload:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$continueMultiUpload$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$continueMultiUpload$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(resumeUpload), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$resumeUpload, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$resumeUpload);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(startSimpleUpload), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$startSimpleUpload, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$startSimpleUpload);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setDataContentLength:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setDataContentLength$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setDataContentLength$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(startMultiUpload), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$startMultiUpload, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$startMultiUpload);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(uploadPriority), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadPriority, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadPriority);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(trafficLimit), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$trafficLimit, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$trafficLimit);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setTrafficLimit:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTrafficLimit$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTrafficLimit$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(contentDisposition), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentDisposition, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentDisposition);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setContentDisposition:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentDisposition$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentDisposition$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(expect), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$expect, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$expect);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setExpect:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpect$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpect$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(contentSHA1), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentSHA1, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentSHA1);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setContentSHA1:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentSHA1$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentSHA1$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(initMultipleUploadFinishBlock), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$initMultipleUploadFinishBlock, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$initMultipleUploadFinishBlock);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(productingReqsumeData:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$productingReqsumeData$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$productingReqsumeData$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(uploadMultiParts:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadMultiParts$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadMultiParts$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(appendUploadBytesSent:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$appendUploadBytesSent$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$appendUploadBytesSent$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(sliceSize), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$sliceSize, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$sliceSize);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(tranformErrorToResume:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$tranformErrorToResume$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$tranformErrorToResume$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(enableVerification), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$enableVerification, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$enableVerification);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(uploadBodyIsCompleted), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadBodyIsCompleted, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadBodyIsCompleted);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(shouldRetry:error:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$shouldRetry$error$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$shouldRetry$error$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(cancelByProductingResumeData:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$cancelByProductingResumeData$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$cancelByProductingResumeData$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setCOSServerSideEncyptionWithKMSCustomKey:jsonStr:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithKMSCustomKey$jsonStr$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCOSServerSideEncyptionWithKMSCustomKey$jsonStr$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setSliceSize:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setSliceSize$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setSliceSize$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setUploadPriority:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadPriority$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadPriority$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(uploadid), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadid, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$uploadid);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setUploadid:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadid$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadid$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setInitMultipleUploadFinishBlock:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setInitMultipleUploadFinishBlock$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setInitMultipleUploadFinishBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setEnableVerification:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableVerification$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setEnableVerification$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setUploadBodyIsCompleted:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadBodyIsCompleted$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setUploadBodyIsCompleted$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(init), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$init, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$init);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$dealloc, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(object), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$object, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$object);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setAccessControlList:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setAccessControlList$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setAccessControlList$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(cancel), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$cancel, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$cancel);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(contentType), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentType, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$contentType);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setContentType:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentType$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setContentType$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(storageClass), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$storageClass, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$storageClass);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setStorageClass:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setStorageClass$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setStorageClass$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(bucket), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$bucket, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$bucket);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setBody:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBody$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBody$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(body), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$body, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$body);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(cacheControl), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$cacheControl, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$cacheControl);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setCacheControl:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCacheControl$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCacheControl$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(customHeaders), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$customHeaders, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$customHeaders);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(onError:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$onError$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$onError$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setRegionName:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRegionName$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRegionName$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setCustomHeaders:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCustomHeaders$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setCustomHeaders$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(regionName), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$regionName, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$regionName);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setBucket:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBucket$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setBucket$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setExpires:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpires$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setExpires$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(expires), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$expires, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$expires);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setFinishBlock:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setFinishBlock$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setFinishBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(totalBytesSent), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$totalBytesSent, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$totalBytesSent);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setTotalBytesSent:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTotalBytesSent$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTotalBytesSent$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(accessControlList), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$accessControlList, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$accessControlList);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(aborted), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$aborted, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$aborted);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(retryHandler), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$retryHandler, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$retryHandler);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setRetryHandler:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRetryHandler$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setRetryHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(setTransferManager:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTransferManager$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$setTransferManager$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(transferManager), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$transferManager, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$transferManager);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLUploadObjectRequest, @selector(abort:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLUploadObjectRequest$abort$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLUploadObjectRequest$abort$);}Class _logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest = objc_getClass("QCloudCOSXMLDownloadObjectRequest"); _logos_superclass$_ungrouped$QCloudCOSXMLDownloadObjectRequest = class_getSuperclass(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest); { _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setIfModifiedSince:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfModifiedSince$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfModifiedSince$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(fakeStart), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$fakeStart, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$fakeStart);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setCOSServerSideEncyptionWithCustomerKey:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCOSServerSideEncyptionWithCustomerKey$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(resumableDownload), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$resumableDownload, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$resumableDownload);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(startGetObject), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$startGetObject, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$startGetObject);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(resumableTaskFile), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$resumableTaskFile, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$resumableTaskFile);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(downloadingURL), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$downloadingURL, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$downloadingURL);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResumableTaskFile:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableTaskFile$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableTaskFile$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setLocalCacheDownloadOffset:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setLocalCacheDownloadOffset$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setLocalCacheDownloadOffset$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setDownloadingURL:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setDownloadingURL$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setDownloadingURL$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(localCacheDownloadOffset), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$localCacheDownloadOffset, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$localCacheDownloadOffset);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(enableMD5Verification), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$enableMD5Verification, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$enableMD5Verification);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setEnableMD5Verification:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setEnableMD5Verification$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setEnableMD5Verification$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseContentType:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentType$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentType$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(responseContentLanguage), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentLanguage, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentLanguage);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseContentLanguage:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentLanguage$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentLanguage$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(responseContentExpires), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentExpires, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentExpires);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseContentExpires:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentExpires$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentExpires$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(responseCacheControl), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseCacheControl, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseCacheControl);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseCacheControl:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseCacheControl$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseCacheControl$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(responseContentDisposition), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentDisposition, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentDisposition);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseContentDisposition:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentDisposition$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentDisposition$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(responseContentEncoding), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentEncoding, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentEncoding);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(ifModifiedSince), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifModifiedSince, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifModifiedSince);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(ifUnmodifiedModifiedSince), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifUnmodifiedModifiedSince, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifUnmodifiedModifiedSince);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(ifMatch), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifMatch, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifMatch);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setIfMatch:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfMatch$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfMatch$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResponseContentEncoding:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentEncoding$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResponseContentEncoding$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setIfUnmodifiedModifiedSince:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfUnmodifiedModifiedSince$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfUnmodifiedModifiedSince$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(ifNoneMatch), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifNoneMatch, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$ifNoneMatch);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setIfNoneMatch:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfNoneMatch$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setIfNoneMatch$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(requestCacheArray), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$requestCacheArray, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$requestCacheArray);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setCOSServerSideEncyption), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCOSServerSideEncyption, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCOSServerSideEncyption);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setResumableDownload:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableDownload$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setResumableDownload$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setRequestCacheArray:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRequestCacheArray$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRequestCacheArray$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(queueSource), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$queueSource, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$queueSource);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setQueueSource:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setQueueSource$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setQueueSource$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(init), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$init, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$init);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$dealloc, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(object), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$object, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$object);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(cancel), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$cancel, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$cancel);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(range), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$range, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$range);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(bucket), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$bucket, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$bucket);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setRange:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRange$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRange$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setCustomHeaders:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCustomHeaders$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setCustomHeaders$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(customHeaders), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$customHeaders, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$customHeaders);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setRegionName:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRegionName$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setRegionName$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(regionName), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$regionName, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$regionName);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setBucket:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setBucket$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setBucket$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(responseContentType), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentType, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$responseContentType);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(setTransferManager:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setTransferManager$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$setTransferManager$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLDownloadObjectRequest, @selector(transferManager), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLDownloadObjectRequest$transferManager, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLDownloadObjectRequest$transferManager);}Class _logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest = objc_getClass("QCloudCOSXMLCopyObjectRequest"); _logos_superclass$_ungrouped$QCloudCOSXMLCopyObjectRequest = class_getSuperclass(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest); { _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(sourceBucket), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceBucket, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceBucket);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(sourceRegion), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceRegion, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceRegion);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(objectCopyIfModifiedSince), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfModifiedSince, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfModifiedSince);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(requstMetricArray), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$requstMetricArray, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$requstMetricArray);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSliceCount:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSliceCount$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSliceCount$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(sliceCount), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sliceCount, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sliceCount);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(multipleCopy), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$multipleCopy, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$multipleCopy);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(simpleCopy), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$simpleCopy, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$simpleCopy);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(tempService), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$tempService, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$tempService);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(objectCopyIfMatch), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfMatch, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfMatch);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setObjectCopyIfMatch:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfMatch$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfMatch$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(objectCopyIfNoneMatch), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfNoneMatch, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfNoneMatch);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setObjectCopyIfNoneMatch:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfNoneMatch$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfNoneMatch$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setObjectCopyIfModifiedSince:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfModifiedSince$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfModifiedSince$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(objectCopyIfUnmodifiedSince), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfUnmodifiedSince, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$objectCopyIfUnmodifiedSince);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setObjectCopyIfUnmodifiedSince:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfUnmodifiedSince$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObjectCopyIfUnmodifiedSince$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(grantRead), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantRead, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantRead);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setGrantRead:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantRead$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantRead$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(grantWrite), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantWrite, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantWrite);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setGrantWrite:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantWrite$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantWrite$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(grantFullControl), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantFullControl, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$grantFullControl);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setGrantFullControl:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantFullControl$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setGrantFullControl$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(requstsMetricArrayBlock), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$requstsMetricArrayBlock, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$requstsMetricArrayBlock);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(sourceAPPID), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceAPPID, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceAPPID);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(sourceObjectVersionID), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceObjectVersionID, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceObjectVersionID);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(uploadCopyParts), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadCopyParts, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadCopyParts);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(finishUploadParts), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$finishUploadParts, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$finishUploadParts);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(copySourceRangeWithFirst:last:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$copySourceRangeWithFirst$last$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$copySourceRangeWithFirst$last$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(markPartFinish:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$markPartFinish$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$markPartFinish$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(copyProgressBlock), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$copyProgressBlock, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$copyProgressBlock);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(uploadParts), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadParts, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadParts);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(fakeStart), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$fakeStart, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$fakeStart);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setCopyProgressBlock:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCopyProgressBlock$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCopyProgressBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setCOSServerSideEncyptionWithCustomerKey:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCOSServerSideEncyptionWithCustomerKey$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCOSServerSideEncyptionWithCustomerKey$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSourceBucket:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceBucket$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceBucket$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSourceAPPID:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceAPPID$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceAPPID$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSourceRegion:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceRegion$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceRegion$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSourceObjectVersionID:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObjectVersionID$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObjectVersionID$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(metadataDirective), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$metadataDirective, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$metadataDirective);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setMetadataDirective:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setMetadataDirective$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setMetadataDirective$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setRequstsMetricArrayBlock:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstsMetricArrayBlock$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstsMetricArrayBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setUploadParts:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadParts$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadParts$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setRequstMetricArray:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstMetricArray$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRequstMetricArray$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(init), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$init, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$init);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(object), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$object, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$object);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setAccessControlList:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setAccessControlList$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setAccessControlList$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(cancel), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$cancel, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$cancel);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(fileSize), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$fileSize, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$fileSize);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(storageClass), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$storageClass, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$storageClass);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setStorageClass:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setStorageClass$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setStorageClass$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(bucket), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$bucket, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$bucket);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setFileSize:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFileSize$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFileSize$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(sourceObject), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceObject, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$sourceObject);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setCustomHeaders:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCustomHeaders$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setCustomHeaders$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(customHeaders), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$customHeaders, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$customHeaders);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setRegionName:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRegionName$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setRegionName$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(regionName), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$regionName, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$regionName);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(lastModified), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$lastModified, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$lastModified);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setLastModified:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setLastModified$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setLastModified$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(uploadID), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadID, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$uploadID);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setUploadID:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadID$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setUploadID$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setBucket:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setBucket$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setBucket$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setFinishBlock:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFinishBlock$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setFinishBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setSourceObject:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObject$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setSourceObject$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(accessControlList), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$accessControlList, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$accessControlList);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(dispatchSource), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$dispatchSource, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$dispatchSource);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setDispatchSource:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setDispatchSource$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setDispatchSource$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(setTransferManager:), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$setTransferManager$, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$setTransferManager$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudCOSXMLCopyObjectRequest, @selector(transferManager), (IMP)&_logos_method$_ungrouped$QCloudCOSXMLCopyObjectRequest$transferManager, (IMP *)&_logos_orig$_ungrouped$QCloudCOSXMLCopyObjectRequest$transferManager);}Class _logos_class$_ungrouped$TVCReportInfo = objc_getClass("TVCReportInfo"); _logos_superclass$_ungrouped$TVCReportInfo = class_getSuperclass(_logos_class$_ungrouped$TVCReportInfo); { _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setFileId:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setFileId$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setFileId$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(reqType), (IMP)&_logos_method$_ungrouped$TVCReportInfo$reqType, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$reqType);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setReqType:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setReqType$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setReqType$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(errMsg), (IMP)&_logos_method$_ungrouped$TVCReportInfo$errMsg, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$errMsg);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setErrMsg:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setErrMsg$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setErrMsg$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setReqKey:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setReqKey$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setReqKey$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setReqTime:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setReqTime$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setReqTime$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(reqTime), (IMP)&_logos_method$_ungrouped$TVCReportInfo$reqTime, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$reqTime);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(reqKey), (IMP)&_logos_method$_ungrouped$TVCReportInfo$reqKey, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$reqKey);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setUseCosAcc:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setUseCosAcc$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setUseCosAcc$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(useCosAcc), (IMP)&_logos_method$_ungrouped$TVCReportInfo$useCosAcc, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$useCosAcc);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setErrCode:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setErrCode$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setErrCode$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setReqTimeCost:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setReqTimeCost$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setReqTimeCost$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setReqServerIp:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setReqServerIp$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setReqServerIp$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setReportId:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setReportId$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setReportId$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setVodSessionKey:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setVodSessionKey$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setVodSessionKey$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setVodErrCode:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setVodErrCode$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setVodErrCode$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setCosErrCode:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setCosErrCode$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setCosErrCode$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setCosRegion:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setCosRegion$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setCosRegion$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setUseHttpDNS:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setUseHttpDNS$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setUseHttpDNS$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setTcpConnTimeCost:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setTcpConnTimeCost$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setTcpConnTimeCost$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(errCode), (IMP)&_logos_method$_ungrouped$TVCReportInfo$errCode, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$errCode);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(reqTimeCost), (IMP)&_logos_method$_ungrouped$TVCReportInfo$reqTimeCost, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$reqTimeCost);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(reqServerIp), (IMP)&_logos_method$_ungrouped$TVCReportInfo$reqServerIp, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$reqServerIp);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(reportId), (IMP)&_logos_method$_ungrouped$TVCReportInfo$reportId, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$reportId);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(vodSessionKey), (IMP)&_logos_method$_ungrouped$TVCReportInfo$vodSessionKey, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$vodSessionKey);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setRecvRespTimeCost:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setRecvRespTimeCost$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setRecvRespTimeCost$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(vodErrCode), (IMP)&_logos_method$_ungrouped$TVCReportInfo$vodErrCode, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$vodErrCode);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(cosErrCode), (IMP)&_logos_method$_ungrouped$TVCReportInfo$cosErrCode, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$cosErrCode);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(useHttpDNS), (IMP)&_logos_method$_ungrouped$TVCReportInfo$useHttpDNS, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$useHttpDNS);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(tcpConnTimeCost), (IMP)&_logos_method$_ungrouped$TVCReportInfo$tcpConnTimeCost, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$tcpConnTimeCost);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(recvRespTimeCost), (IMP)&_logos_method$_ungrouped$TVCReportInfo$recvRespTimeCost, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$recvRespTimeCost);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(cosRegion), (IMP)&_logos_method$_ungrouped$TVCReportInfo$cosRegion, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$cosRegion);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(reporting), (IMP)&_logos_method$_ungrouped$TVCReportInfo$reporting, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$reporting);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setReporting:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setReporting$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setReporting$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(init), (IMP)&_logos_method$_ungrouped$TVCReportInfo$init, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$init);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(fileSize), (IMP)&_logos_method$_ungrouped$TVCReportInfo$fileSize, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$fileSize);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(fileType), (IMP)&_logos_method$_ungrouped$TVCReportInfo$fileType, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$fileType);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(requestId), (IMP)&_logos_method$_ungrouped$TVCReportInfo$requestId, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$requestId);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(retryCount), (IMP)&_logos_method$_ungrouped$TVCReportInfo$retryCount, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$retryCount);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setRetryCount:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setRetryCount$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setRetryCount$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setFileType:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setFileType$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setFileType$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setFileSize:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setFileSize$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setFileSize$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(appId), (IMP)&_logos_method$_ungrouped$TVCReportInfo$appId, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$appId);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(fileName), (IMP)&_logos_method$_ungrouped$TVCReportInfo$fileName, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$fileName);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setFileName:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setFileName$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setFileName$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setAppId:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setAppId$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setAppId$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(setRequestId:), (IMP)&_logos_method$_ungrouped$TVCReportInfo$setRequestId$, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$setRequestId$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCReportInfo, @selector(fileId), (IMP)&_logos_method$_ungrouped$TVCReportInfo$fileId, (IMP *)&_logos_orig$_ungrouped$TVCReportInfo$fileId);}Class _logos_class$_ungrouped$TVCClient = objc_getClass("TVCClient"); Class _logos_metaclass$_ungrouped$TVCClient = object_getClass(_logos_class$_ungrouped$TVCClient); _logos_superclass$_ungrouped$TVCClient = class_getSuperclass(_logos_class$_ungrouped$TVCClient); _logos_supermetaclass$_ungrouped$TVCClient = class_getSuperclass(_logos_metaclass$_ungrouped$TVCClient); { _logos_register_hook(_logos_metaclass$_ungrouped$TVCClient, @selector(getVersion), (IMP)&_logos_meta_method$_ungrouped$TVCClient$getVersion, (IMP *)&_logos_meta_orig$_ungrouped$TVCClient$getVersion);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(signatureWithFields:request:urlRequest:compelete:), (IMP)&_logos_method$_ungrouped$TVCClient$signatureWithFields$request$urlRequest$compelete$, (IMP *)&_logos_orig$_ungrouped$TVCClient$signatureWithFields$request$urlRequest$compelete$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setReqKey:), (IMP)&_logos_method$_ungrouped$TVCClient$setReqKey$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setReqKey$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setServerIP:), (IMP)&_logos_method$_ungrouped$TVCClient$setServerIP$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setServerIP$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setReportInfo:), (IMP)&_logos_method$_ungrouped$TVCClient$setReportInfo$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setReportInfo$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setVirtualPercent:), (IMP)&_logos_method$_ungrouped$TVCClient$setVirtualPercent$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setVirtualPercent$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setRealProgressFired:), (IMP)&_logos_method$_ungrouped$TVCClient$setRealProgressFired$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setRealProgressFired$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(checkConfig:), (IMP)&_logos_method$_ungrouped$TVCClient$checkConfig$, (IMP *)&_logos_orig$_ungrouped$TVCClient$checkConfig$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(checkParam:), (IMP)&_logos_method$_ungrouped$TVCClient$checkParam$, (IMP *)&_logos_orig$_ungrouped$TVCClient$checkParam$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(getFileType:), (IMP)&_logos_method$_ungrouped$TVCClient$getFileType$, (IMP *)&_logos_orig$_ungrouped$TVCClient$getFileType$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(getFileName:), (IMP)&_logos_method$_ungrouped$TVCClient$getFileName$, (IMP *)&_logos_orig$_ungrouped$TVCClient$getFileName$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(txReport:errCode:vodErrCode:cosErrCode:errInfo:reqTime:reqTimeCost:reqKey:appId:fileSize:fileType:fileName:sessionKey:fileId:cosRegion:useCosAcc:cosRequestId:cosTcpConnTimeCost:cosRecvRespTimeCost:), (IMP)&_logos_method$_ungrouped$TVCClient$txReport$errCode$vodErrCode$cosErrCode$errInfo$reqTime$reqTimeCost$reqKey$appId$fileSize$fileType$fileName$sessionKey$fileId$cosRegion$useCosAcc$cosRequestId$cosTcpConnTimeCost$cosRecvRespTimeCost$, (IMP *)&_logos_orig$_ungrouped$TVCClient$txReport$errCode$vodErrCode$cosErrCode$errInfo$reqTime$reqTimeCost$reqKey$appId$fileSize$fileType$fileName$sessionKey$fileId$cosRegion$useCosAcc$cosRequestId$cosTcpConnTimeCost$cosRecvRespTimeCost$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(getSessionFromFilepath:), (IMP)&_logos_method$_ungrouped$TVCClient$getSessionFromFilepath$, (IMP *)&_logos_orig$_ungrouped$TVCClient$getSessionFromFilepath$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(applyUploadUGC:withVodSessionKey:), (IMP)&_logos_method$_ungrouped$TVCClient$applyUploadUGC$withVodSessionKey$, (IMP *)&_logos_orig$_ungrouped$TVCClient$applyUploadUGC$withVodSessionKey$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(uploadRequest), (IMP)&_logos_method$_ungrouped$TVCClient$uploadRequest, (IMP *)&_logos_orig$_ungrouped$TVCClient$uploadRequest);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(queryIpWithDomain:), (IMP)&_logos_method$_ungrouped$TVCClient$queryIpWithDomain$, (IMP *)&_logos_orig$_ungrouped$TVCClient$queryIpWithDomain$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(postVirtualProgress:), (IMP)&_logos_method$_ungrouped$TVCClient$postVirtualProgress$, (IMP *)&_logos_orig$_ungrouped$TVCClient$postVirtualProgress$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(getCosInitParam:withVodSessionKey:withDomain:), (IMP)&_logos_method$_ungrouped$TVCClient$getCosInitParam$withVodSessionKey$withDomain$, (IMP *)&_logos_orig$_ungrouped$TVCClient$getCosInitParam$withVodSessionKey$withDomain$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(getCosInitURLRequest:withContext:withVodSessionKey:), (IMP)&_logos_method$_ungrouped$TVCClient$getCosInitURLRequest$withContext$withVodSessionKey$, (IMP *)&_logos_orig$_ungrouped$TVCClient$getCosInitURLRequest$withContext$withVodSessionKey$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(notifyResult:resp:), (IMP)&_logos_method$_ungrouped$TVCClient$notifyResult$resp$, (IMP *)&_logos_orig$_ungrouped$TVCClient$notifyResult$resp$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setSession:resumeData:lastModTime:withFilePath:), (IMP)&_logos_method$_ungrouped$TVCClient$setSession$resumeData$lastModTime$withFilePath$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setSession$resumeData$lastModTime$withFilePath$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(reqKey), (IMP)&_logos_method$_ungrouped$TVCClient$reqKey, (IMP *)&_logos_orig$_ungrouped$TVCClient$reqKey);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(parseInitRsp:withContex:withVodSessionKey:), (IMP)&_logos_method$_ungrouped$TVCClient$parseInitRsp$withContex$withVodSessionKey$, (IMP *)&_logos_orig$_ungrouped$TVCClient$parseInitRsp$withContex$withVodSessionKey$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setupCOSXMLShareService:), (IMP)&_logos_method$_ungrouped$TVCClient$setupCOSXMLShareService$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setupCOSXMLShareService$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(commitCosUpload:withResumeUpload:), (IMP)&_logos_method$_ungrouped$TVCClient$commitCosUpload$withResumeUpload$, (IMP *)&_logos_orig$_ungrouped$TVCClient$commitCosUpload$withResumeUpload$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setSession:resumeData:lastModTime:coverLastModTime:withFilePath:), (IMP)&_logos_method$_ungrouped$TVCClient$setSession$resumeData$lastModTime$coverLastModTime$withFilePath$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setSession$resumeData$lastModTime$coverLastModTime$withFilePath$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setUploadRequest:), (IMP)&_logos_method$_ungrouped$TVCClient$setUploadRequest$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setUploadRequest$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(realProgressFired), (IMP)&_logos_method$_ungrouped$TVCClient$realProgressFired, (IMP *)&_logos_orig$_ungrouped$TVCClient$realProgressFired);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(notifyCosUploadEnd:), (IMP)&_logos_method$_ungrouped$TVCClient$notifyCosUploadEnd$, (IMP *)&_logos_orig$_ungrouped$TVCClient$notifyCosUploadEnd$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(completeUpload:withDomain:), (IMP)&_logos_method$_ungrouped$TVCClient$completeUpload$withDomain$, (IMP *)&_logos_orig$_ungrouped$TVCClient$completeUpload$withDomain$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(getCosEndURLRequest:withContext:), (IMP)&_logos_method$_ungrouped$TVCClient$getCosEndURLRequest$withContext$, (IMP *)&_logos_orig$_ungrouped$TVCClient$getCosEndURLRequest$withContext$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(parseFinishRsp:withContex:), (IMP)&_logos_method$_ungrouped$TVCClient$parseFinishRsp$withContex$, (IMP *)&_logos_orig$_ungrouped$TVCClient$parseFinishRsp$withContex$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(txReportDAU), (IMP)&_logos_method$_ungrouped$TVCClient$txReportDAU, (IMP *)&_logos_orig$_ungrouped$TVCClient$txReportDAU);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(reportInfo), (IMP)&_logos_method$_ungrouped$TVCClient$reportInfo, (IMP *)&_logos_orig$_ungrouped$TVCClient$reportInfo);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(serverIP), (IMP)&_logos_method$_ungrouped$TVCClient$serverIP, (IMP *)&_logos_orig$_ungrouped$TVCClient$serverIP);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(virtualPercent), (IMP)&_logos_method$_ungrouped$TVCClient$virtualPercent, (IMP *)&_logos_orig$_ungrouped$TVCClient$virtualPercent);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(uploadVideo:result:progress:), (IMP)&_logos_method$_ungrouped$TVCClient$uploadVideo$result$progress$, (IMP *)&_logos_orig$_ungrouped$TVCClient$uploadVideo$result$progress$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(cancleUploadVideo), (IMP)&_logos_method$_ungrouped$TVCClient$cancleUploadVideo, (IMP *)&_logos_orig$_ungrouped$TVCClient$cancleUploadVideo);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(getStatusInfo), (IMP)&_logos_method$_ungrouped$TVCClient$getStatusInfo, (IMP *)&_logos_orig$_ungrouped$TVCClient$getStatusInfo);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$TVCClient$dealloc, (IMP *)&_logos_orig$_ungrouped$TVCClient$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(config), (IMP)&_logos_method$_ungrouped$TVCClient$config, (IMP *)&_logos_orig$_ungrouped$TVCClient$config);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(timer), (IMP)&_logos_method$_ungrouped$TVCClient$timer, (IMP *)&_logos_orig$_ungrouped$TVCClient$timer);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(getLastComponent:), (IMP)&_logos_method$_ungrouped$TVCClient$getLastComponent$, (IMP *)&_logos_orig$_ungrouped$TVCClient$getLastComponent$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setTimer:), (IMP)&_logos_method$_ungrouped$TVCClient$setTimer$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setTimer$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setConfig:), (IMP)&_logos_method$_ungrouped$TVCClient$setConfig$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setConfig$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(session), (IMP)&_logos_method$_ungrouped$TVCClient$session, (IMP *)&_logos_orig$_ungrouped$TVCClient$session);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setSession:), (IMP)&_logos_method$_ungrouped$TVCClient$setSession$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setSession$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(URLSession:task:didFinishCollectingMetrics:), (IMP)&_logos_method$_ungrouped$TVCClient$URLSession$task$didFinishCollectingMetrics$, (IMP *)&_logos_orig$_ungrouped$TVCClient$URLSession$task$didFinishCollectingMetrics$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(creator), (IMP)&_logos_method$_ungrouped$TVCClient$creator, (IMP *)&_logos_orig$_ungrouped$TVCClient$creator);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setCreator:), (IMP)&_logos_method$_ungrouped$TVCClient$setCreator$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setCreator$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(setAppId:), (IMP)&_logos_method$_ungrouped$TVCClient$setAppId$, (IMP *)&_logos_orig$_ungrouped$TVCClient$setAppId$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCClient, @selector(initWithConfig:), (IMP)&_logos_method$_ungrouped$TVCClient$initWithConfig$, (IMP *)&_logos_orig$_ungrouped$TVCClient$initWithConfig$);}Class _logos_class$_ungrouped$GSDKUdpTest = objc_getClass("GSDKUdpTest"); Class _logos_metaclass$_ungrouped$GSDKUdpTest = object_getClass(_logos_class$_ungrouped$GSDKUdpTest); _logos_superclass$_ungrouped$GSDKUdpTest = class_getSuperclass(_logos_class$_ungrouped$GSDKUdpTest); _logos_supermetaclass$_ungrouped$GSDKUdpTest = class_getSuperclass(_logos_metaclass$_ungrouped$GSDKUdpTest); { _logos_register_hook(_logos_metaclass$_ungrouped$GSDKUdpTest, @selector(sharedInstance), (IMP)&_logos_meta_method$_ungrouped$GSDKUdpTest$sharedInstance, (IMP *)&_logos_meta_orig$_ungrouped$GSDKUdpTest$sharedInstance);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(setMSocketfd:), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$setMSocketfd$, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$setMSocketfd$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(mSocketfd), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$mSocketfd, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$mSocketfd);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(stopSpeedTest), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$stopSpeedTest, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$stopSpeedTest);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(getV6SpeedSock), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$getV6SpeedSock, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$getV6SpeedSock);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(getSpeedSock), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$getSpeedSock, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$getSpeedSock);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(stopUDPTimer), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$stopUDPTimer, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$stopUDPTimer);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(setMUdpDotsList:), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$setMUdpDotsList$, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$setMUdpDotsList$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(mUdpDotsList), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$mUdpDotsList, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$mUdpDotsList);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(setMLost:), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$setMLost$, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$setMLost$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(setMTag:), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$setMTag$, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$setMTag$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(setMPcntx00_num:), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$setMPcntx00_num$, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$setMPcntx00_num$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(getSendData), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$getSendData, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$getSendData);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(mPcntx00_num), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$mPcntx00_num, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$mPcntx00_num);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(mLost), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$mLost, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$mLost);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(Heavy:), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$Heavy$, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$Heavy$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(startUdpTest:Sport:Pcntx00:Frequency:), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$startUdpTest$Sport$Pcntx00$Frequency$, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$startUdpTest$Sport$Pcntx00$Frequency$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(resultUDPTest), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$resultUDPTest, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$resultUDPTest);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(resultUDPTest_noCollect), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$resultUDPTest_noCollect, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$resultUDPTest_noCollect);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(pingDots), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$pingDots, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$pingDots);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$dealloc, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(setTimerSource:), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$setTimerSource$, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$setTimerSource$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(timerSource), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$timerSource, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$timerSource);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpTest, @selector(mTag), (IMP)&_logos_method$_ungrouped$GSDKUdpTest$mTag, (IMP *)&_logos_orig$_ungrouped$GSDKUdpTest$mTag);}Class _logos_class$_ungrouped$GSDKUdpDetect = objc_getClass("GSDKUdpDetect"); Class _logos_metaclass$_ungrouped$GSDKUdpDetect = object_getClass(_logos_class$_ungrouped$GSDKUdpDetect); _logos_superclass$_ungrouped$GSDKUdpDetect = class_getSuperclass(_logos_class$_ungrouped$GSDKUdpDetect); _logos_supermetaclass$_ungrouped$GSDKUdpDetect = class_getSuperclass(_logos_metaclass$_ungrouped$GSDKUdpDetect); { _logos_register_hook(_logos_metaclass$_ungrouped$GSDKUdpDetect, @selector(sharedInstance), (IMP)&_logos_meta_method$_ungrouped$GSDKUdpDetect$sharedInstance, (IMP *)&_logos_meta_orig$_ungrouped$GSDKUdpDetect$sharedInstance);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpDetect, @selector(setMSocketfd:), (IMP)&_logos_method$_ungrouped$GSDKUdpDetect$setMSocketfd$, (IMP *)&_logos_orig$_ungrouped$GSDKUdpDetect$setMSocketfd$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpDetect, @selector(mSocketfd), (IMP)&_logos_method$_ungrouped$GSDKUdpDetect$mSocketfd, (IMP *)&_logos_orig$_ungrouped$GSDKUdpDetect$mSocketfd);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpDetect, @selector(stopSpeedTest), (IMP)&_logos_method$_ungrouped$GSDKUdpDetect$stopSpeedTest, (IMP *)&_logos_orig$_ungrouped$GSDKUdpDetect$stopSpeedTest);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpDetect, @selector(getV6SpeedSock), (IMP)&_logos_method$_ungrouped$GSDKUdpDetect$getV6SpeedSock, (IMP *)&_logos_orig$_ungrouped$GSDKUdpDetect$getV6SpeedSock);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpDetect, @selector(getSpeedSock), (IMP)&_logos_method$_ungrouped$GSDKUdpDetect$getSpeedSock, (IMP *)&_logos_orig$_ungrouped$GSDKUdpDetect$getSpeedSock);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpDetect, @selector(isUDPConnect:Port:), (IMP)&_logos_method$_ungrouped$GSDKUdpDetect$isUDPConnect$Port$, (IMP *)&_logos_orig$_ungrouped$GSDKUdpDetect$isUDPConnect$Port$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpDetect, @selector(tag), (IMP)&_logos_method$_ungrouped$GSDKUdpDetect$tag, (IMP *)&_logos_orig$_ungrouped$GSDKUdpDetect$tag);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKUdpDetect, @selector(setTag:), (IMP)&_logos_method$_ungrouped$GSDKUdpDetect$setTag$, (IMP *)&_logos_orig$_ungrouped$GSDKUdpDetect$setTag$);}Class _logos_class$_ungrouped$GSDKDetectPort = objc_getClass("GSDKDetectPort"); _logos_superclass$_ungrouped$GSDKDetectPort = class_getSuperclass(_logos_class$_ungrouped$GSDKDetectPort); { _logos_register_hook(_logos_class$_ungrouped$GSDKDetectPort, @selector(setHip:), (IMP)&_logos_method$_ungrouped$GSDKDetectPort$setHip$, (IMP *)&_logos_orig$_ungrouped$GSDKDetectPort$setHip$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKDetectPort, @selector(hip), (IMP)&_logos_method$_ungrouped$GSDKDetectPort$hip, (IMP *)&_logos_orig$_ungrouped$GSDKDetectPort$hip);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKDetectPort, @selector(isConnection:Port:), (IMP)&_logos_method$_ungrouped$GSDKDetectPort$isConnection$Port$, (IMP *)&_logos_orig$_ungrouped$GSDKDetectPort$isConnection$Port$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKDetectPort, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$GSDKDetectPort$dealloc, (IMP *)&_logos_orig$_ungrouped$GSDKDetectPort$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKDetectPort, @selector(isFinished), (IMP)&_logos_method$_ungrouped$GSDKDetectPort$isFinished, (IMP *)&_logos_orig$_ungrouped$GSDKDetectPort$isFinished);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKDetectPort, @selector(result), (IMP)&_logos_method$_ungrouped$GSDKDetectPort$result, (IMP *)&_logos_orig$_ungrouped$GSDKDetectPort$result);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKDetectPort, @selector(setResult:), (IMP)&_logos_method$_ungrouped$GSDKDetectPort$setResult$, (IMP *)&_logos_orig$_ungrouped$GSDKDetectPort$setResult$);}{ _logos_register_hook(_logos_class$_ungrouped$GSDKDetectPort, @selector(setIsFinished:), (IMP)&_logos_method$_ungrouped$GSDKDetectPort$setIsFinished$, (IMP *)&_logos_orig$_ungrouped$GSDKDetectPort$setIsFinished$);}Class _logos_class$_ungrouped$PLCrashMachExceptionServer = objc_getClass("PLCrashMachExceptionServer"); _logos_superclass$_ungrouped$PLCrashMachExceptionServer = class_getSuperclass(_logos_class$_ungrouped$PLCrashMachExceptionServer); { _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionServer, @selector(initWithCallBack:context:error:), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionServer$initWithCallBack$context$error$, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionServer$initWithCallBack$context$error$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionServer, @selector(exceptionPortWithMask:error:), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionServer$exceptionPortWithMask$error$, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionServer$exceptionPortWithMask$error$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionServer, @selector(copySendRightForServerAndReturningError:), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionServer$copySendRightForServerAndReturningError$, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionServer$copySendRightForServerAndReturningError$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionServer, @selector(serverThread), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionServer$serverThread, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionServer$serverThread);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionServer, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionServer$dealloc, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionServer$dealloc);}Class _logos_class$_ungrouped$PLCrashMachExceptionPort = objc_getClass("PLCrashMachExceptionPort"); Class _logos_metaclass$_ungrouped$PLCrashMachExceptionPort = object_getClass(_logos_class$_ungrouped$PLCrashMachExceptionPort); _logos_superclass$_ungrouped$PLCrashMachExceptionPort = class_getSuperclass(_logos_class$_ungrouped$PLCrashMachExceptionPort); _logos_supermetaclass$_ungrouped$PLCrashMachExceptionPort = class_getSuperclass(_logos_metaclass$_ungrouped$PLCrashMachExceptionPort); { _logos_register_hook(_logos_metaclass$_ungrouped$PLCrashMachExceptionPort, @selector(exceptionPortsForTask:mask:error:), (IMP)&_logos_meta_method$_ungrouped$PLCrashMachExceptionPort$exceptionPortsForTask$mask$error$, (IMP *)&_logos_meta_orig$_ungrouped$PLCrashMachExceptionPort$exceptionPortsForTask$mask$error$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$PLCrashMachExceptionPort, @selector(exceptionPortsForThread:mask:error:), (IMP)&_logos_meta_method$_ungrouped$PLCrashMachExceptionPort$exceptionPortsForThread$mask$error$, (IMP *)&_logos_meta_orig$_ungrouped$PLCrashMachExceptionPort$exceptionPortsForThread$mask$error$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPort, @selector(registerForTask:previousPortSet:error:), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPort$registerForTask$previousPortSet$error$, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPort$registerForTask$previousPortSet$error$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPort, @selector(initWithServerPort:mask:behavior:flavor:), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPort$initWithServerPort$mask$behavior$flavor$, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPort$initWithServerPort$mask$behavior$flavor$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPort, @selector(registerForThread:previousPortSet:error:), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPort$registerForThread$previousPortSet$error$, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPort$registerForThread$previousPortSet$error$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPort, @selector(server_port), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPort$server_port, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPort$server_port);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPort, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPort$dealloc, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPort$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPort, @selector(mask), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPort$mask, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPort$mask);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPort, @selector(behavior), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPort$behavior, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPort$behavior);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPort, @selector(flavor), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPort$flavor, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPort$flavor);}Class _logos_class$_ungrouped$PLCrashMachExceptionPortSet = objc_getClass("PLCrashMachExceptionPortSet"); _logos_superclass$_ungrouped$PLCrashMachExceptionPortSet = class_getSuperclass(_logos_class$_ungrouped$PLCrashMachExceptionPortSet); { _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPortSet, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPortSet$dealloc, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPortSet$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPortSet, @selector(countByEnumeratingWithState:objects:count:), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPortSet$countByEnumeratingWithState$objects$count$, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPortSet$countByEnumeratingWithState$objects$count$);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPortSet, @selector(set), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPortSet$set, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPortSet$set);}{ _logos_register_hook(_logos_class$_ungrouped$PLCrashMachExceptionPortSet, @selector(initWithSet:), (IMP)&_logos_method$_ungrouped$PLCrashMachExceptionPortSet$initWithSet$, (IMP *)&_logos_orig$_ungrouped$PLCrashMachExceptionPortSet$initWithSet$);}Class _logos_class$_ungrouped$VKAccessToken = objc_getClass("VKAccessToken"); Class _logos_metaclass$_ungrouped$VKAccessToken = object_getClass(_logos_class$_ungrouped$VKAccessToken); _logos_superclass$_ungrouped$VKAccessToken = class_getSuperclass(_logos_class$_ungrouped$VKAccessToken); _logos_supermetaclass$_ungrouped$VKAccessToken = class_getSuperclass(_logos_metaclass$_ungrouped$VKAccessToken); { _logos_register_hook(_logos_metaclass$_ungrouped$VKAccessToken, @selector(getKeychainQuery:), (IMP)&_logos_meta_method$_ungrouped$VKAccessToken$getKeychainQuery$, (IMP *)&_logos_meta_orig$_ungrouped$VKAccessToken$getKeychainQuery$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$VKAccessToken, @selector(tokenFromUrlString:), (IMP)&_logos_meta_method$_ungrouped$VKAccessToken$tokenFromUrlString$, (IMP *)&_logos_meta_orig$_ungrouped$VKAccessToken$tokenFromUrlString$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$VKAccessToken, @selector(save:data:), (IMP)&_logos_meta_method$_ungrouped$VKAccessToken$save$data$, (IMP *)&_logos_meta_orig$_ungrouped$VKAccessToken$save$data$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$VKAccessToken, @selector(tokenWithToken:secret:userId:), (IMP)&_logos_meta_method$_ungrouped$VKAccessToken$tokenWithToken$secret$userId$, (IMP *)&_logos_meta_orig$_ungrouped$VKAccessToken$tokenWithToken$secret$userId$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$VKAccessToken, @selector(savedToken:), (IMP)&_logos_meta_method$_ungrouped$VKAccessToken$savedToken$, (IMP *)&_logos_meta_orig$_ungrouped$VKAccessToken$savedToken$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$VKAccessToken, @selector(load:), (IMP)&_logos_meta_method$_ungrouped$VKAccessToken$load$, (IMP *)&_logos_meta_orig$_ungrouped$VKAccessToken$load$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$VKAccessToken, @selector(delete:), (IMP)&_logos_meta_method$_ungrouped$VKAccessToken$delete$, (IMP *)&_logos_meta_orig$_ungrouped$VKAccessToken$delete$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(expiresIn), (IMP)&_logos_method$_ungrouped$VKAccessToken$expiresIn, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$expiresIn);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(initWithToken:secret:userId:), (IMP)&_logos_method$_ungrouped$VKAccessToken$initWithToken$secret$userId$, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$initWithToken$secret$userId$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(initWithUrlString:), (IMP)&_logos_method$_ungrouped$VKAccessToken$initWithUrlString$, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$initWithUrlString$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(restorePermissions:), (IMP)&_logos_method$_ungrouped$VKAccessToken$restorePermissions$, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$restorePermissions$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(httpsRequired), (IMP)&_logos_method$_ungrouped$VKAccessToken$httpsRequired, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$httpsRequired);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(checkIfExpired), (IMP)&_logos_method$_ungrouped$VKAccessToken$checkIfExpired, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$checkIfExpired);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(notifyTokenExpired), (IMP)&_logos_method$_ungrouped$VKAccessToken$notifyTokenExpired, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$notifyTokenExpired);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(initWithVKAccessToken:), (IMP)&_logos_method$_ungrouped$VKAccessToken$initWithVKAccessToken$, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$initWithVKAccessToken$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(saveTokenToDefaults:), (IMP)&_logos_method$_ungrouped$VKAccessToken$saveTokenToDefaults$, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$saveTokenToDefaults$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(setAccessTokenRequiredHTTPS), (IMP)&_logos_method$_ungrouped$VKAccessToken$setAccessTokenRequiredHTTPS, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$setAccessTokenRequiredHTTPS);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(copy), (IMP)&_logos_method$_ungrouped$VKAccessToken$copy, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$copy);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(mutableCopy), (IMP)&_logos_method$_ungrouped$VKAccessToken$mutableCopy, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$mutableCopy);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(encodeWithCoder:), (IMP)&_logos_method$_ungrouped$VKAccessToken$encodeWithCoder$, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$encodeWithCoder$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(initWithCoder:), (IMP)&_logos_method$_ungrouped$VKAccessToken$initWithCoder$, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$initWithCoder$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(isExpired), (IMP)&_logos_method$_ungrouped$VKAccessToken$isExpired, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$isExpired);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(email), (IMP)&_logos_method$_ungrouped$VKAccessToken$email, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$email);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(setAccessToken:), (IMP)&_logos_method$_ungrouped$VKAccessToken$setAccessToken$, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$setAccessToken$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(permissions), (IMP)&_logos_method$_ungrouped$VKAccessToken$permissions, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$permissions);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(userId), (IMP)&_logos_method$_ungrouped$VKAccessToken$userId, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$userId);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(secret), (IMP)&_logos_method$_ungrouped$VKAccessToken$secret, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$secret);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(localUser), (IMP)&_logos_method$_ungrouped$VKAccessToken$localUser, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$localUser);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(accessToken), (IMP)&_logos_method$_ungrouped$VKAccessToken$accessToken, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$accessToken);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessToken, @selector(created), (IMP)&_logos_method$_ungrouped$VKAccessToken$created, (IMP *)&_logos_orig$_ungrouped$VKAccessToken$created);}Class _logos_class$_ungrouped$VKAccessTokenMutable = objc_getClass("VKAccessTokenMutable"); _logos_superclass$_ungrouped$VKAccessTokenMutable = class_getSuperclass(_logos_class$_ungrouped$VKAccessTokenMutable); { _logos_register_hook(_logos_class$_ungrouped$VKAccessTokenMutable, @selector(setExpiresIn:), (IMP)&_logos_method$_ungrouped$VKAccessTokenMutable$setExpiresIn$, (IMP *)&_logos_orig$_ungrouped$VKAccessTokenMutable$setExpiresIn$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessTokenMutable, @selector(setHttpsRequired:), (IMP)&_logos_method$_ungrouped$VKAccessTokenMutable$setHttpsRequired$, (IMP *)&_logos_orig$_ungrouped$VKAccessTokenMutable$setHttpsRequired$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessTokenMutable, @selector(setAccessToken:), (IMP)&_logos_method$_ungrouped$VKAccessTokenMutable$setAccessToken$, (IMP *)&_logos_orig$_ungrouped$VKAccessTokenMutable$setAccessToken$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessTokenMutable, @selector(setPermissions:), (IMP)&_logos_method$_ungrouped$VKAccessTokenMutable$setPermissions$, (IMP *)&_logos_orig$_ungrouped$VKAccessTokenMutable$setPermissions$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessTokenMutable, @selector(setUserId:), (IMP)&_logos_method$_ungrouped$VKAccessTokenMutable$setUserId$, (IMP *)&_logos_orig$_ungrouped$VKAccessTokenMutable$setUserId$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessTokenMutable, @selector(setLocalUser:), (IMP)&_logos_method$_ungrouped$VKAccessTokenMutable$setLocalUser$, (IMP *)&_logos_orig$_ungrouped$VKAccessTokenMutable$setLocalUser$);}{ _logos_register_hook(_logos_class$_ungrouped$VKAccessTokenMutable, @selector(setSecret:), (IMP)&_logos_method$_ungrouped$VKAccessTokenMutable$setSecret$, (IMP *)&_logos_orig$_ungrouped$VKAccessTokenMutable$setSecret$);}Class _logos_class$_ungrouped$TXMediaPublishParam = objc_getClass("TXMediaPublishParam"); _logos_superclass$_ungrouped$TXMediaPublishParam = class_getSuperclass(_logos_class$_ungrouped$TXMediaPublishParam); { _logos_register_hook(_logos_class$_ungrouped$TXMediaPublishParam, @selector(enableResume), (IMP)&_logos_method$_ungrouped$TXMediaPublishParam$enableResume, (IMP *)&_logos_orig$_ungrouped$TXMediaPublishParam$enableResume);}{ _logos_register_hook(_logos_class$_ungrouped$TXMediaPublishParam, @selector(enableHTTPS), (IMP)&_logos_method$_ungrouped$TXMediaPublishParam$enableHTTPS, (IMP *)&_logos_orig$_ungrouped$TXMediaPublishParam$enableHTTPS);}{ _logos_register_hook(_logos_class$_ungrouped$TXMediaPublishParam, @selector(setEnableHTTPS:), (IMP)&_logos_method$_ungrouped$TXMediaPublishParam$setEnableHTTPS$, (IMP *)&_logos_orig$_ungrouped$TXMediaPublishParam$setEnableHTTPS$);}{ _logos_register_hook(_logos_class$_ungrouped$TXMediaPublishParam, @selector(setEnableResume:), (IMP)&_logos_method$_ungrouped$TXMediaPublishParam$setEnableResume$, (IMP *)&_logos_orig$_ungrouped$TXMediaPublishParam$setEnableResume$);}{ _logos_register_hook(_logos_class$_ungrouped$TXMediaPublishParam, @selector(init), (IMP)&_logos_method$_ungrouped$TXMediaPublishParam$init, (IMP *)&_logos_orig$_ungrouped$TXMediaPublishParam$init);}{ _logos_register_hook(_logos_class$_ungrouped$TXMediaPublishParam, @selector(signature), (IMP)&_logos_method$_ungrouped$TXMediaPublishParam$signature, (IMP *)&_logos_orig$_ungrouped$TXMediaPublishParam$signature);}{ _logos_register_hook(_logos_class$_ungrouped$TXMediaPublishParam, @selector(fileName), (IMP)&_logos_method$_ungrouped$TXMediaPublishParam$fileName, (IMP *)&_logos_orig$_ungrouped$TXMediaPublishParam$fileName);}{ _logos_register_hook(_logos_class$_ungrouped$TXMediaPublishParam, @selector(setFileName:), (IMP)&_logos_method$_ungrouped$TXMediaPublishParam$setFileName$, (IMP *)&_logos_orig$_ungrouped$TXMediaPublishParam$setFileName$);}{ _logos_register_hook(_logos_class$_ungrouped$TXMediaPublishParam, @selector(setSignature:), (IMP)&_logos_method$_ungrouped$TXMediaPublishParam$setSignature$, (IMP *)&_logos_orig$_ungrouped$TXMediaPublishParam$setSignature$);}{ _logos_register_hook(_logos_class$_ungrouped$TXMediaPublishParam, @selector(mediaPath), (IMP)&_logos_method$_ungrouped$TXMediaPublishParam$mediaPath, (IMP *)&_logos_orig$_ungrouped$TXMediaPublishParam$mediaPath);}{ _logos_register_hook(_logos_class$_ungrouped$TXMediaPublishParam, @selector(setMediaPath:), (IMP)&_logos_method$_ungrouped$TXMediaPublishParam$setMediaPath$, (IMP *)&_logos_orig$_ungrouped$TXMediaPublishParam$setMediaPath$);}Class _logos_class$_ungrouped$TXPublishParam = objc_getClass("TXPublishParam"); _logos_superclass$_ungrouped$TXPublishParam = class_getSuperclass(_logos_class$_ungrouped$TXPublishParam); { _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(setCoverPath:), (IMP)&_logos_method$_ungrouped$TXPublishParam$setCoverPath$, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$setCoverPath$);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(coverPath), (IMP)&_logos_method$_ungrouped$TXPublishParam$coverPath, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$coverPath);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(enableResume), (IMP)&_logos_method$_ungrouped$TXPublishParam$enableResume, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$enableResume);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(secretId), (IMP)&_logos_method$_ungrouped$TXPublishParam$secretId, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$secretId);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(setSecretId:), (IMP)&_logos_method$_ungrouped$TXPublishParam$setSecretId$, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$setSecretId$);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(enableHTTPS), (IMP)&_logos_method$_ungrouped$TXPublishParam$enableHTTPS, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$enableHTTPS);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(setEnableHTTPS:), (IMP)&_logos_method$_ungrouped$TXPublishParam$setEnableHTTPS$, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$setEnableHTTPS$);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(setEnableResume:), (IMP)&_logos_method$_ungrouped$TXPublishParam$setEnableResume$, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$setEnableResume$);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(init), (IMP)&_logos_method$_ungrouped$TXPublishParam$init, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$init);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(signature), (IMP)&_logos_method$_ungrouped$TXPublishParam$signature, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$signature);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(videoPath), (IMP)&_logos_method$_ungrouped$TXPublishParam$videoPath, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$videoPath);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(setVideoPath:), (IMP)&_logos_method$_ungrouped$TXPublishParam$setVideoPath$, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$setVideoPath$);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(fileName), (IMP)&_logos_method$_ungrouped$TXPublishParam$fileName, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$fileName);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(setFileName:), (IMP)&_logos_method$_ungrouped$TXPublishParam$setFileName$, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$setFileName$);}{ _logos_register_hook(_logos_class$_ungrouped$TXPublishParam, @selector(setSignature:), (IMP)&_logos_method$_ungrouped$TXPublishParam$setSignature$, (IMP *)&_logos_orig$_ungrouped$TXPublishParam$setSignature$);}Class _logos_class$_ungrouped$TVCConfig = objc_getClass("TVCConfig"); _logos_superclass$_ungrouped$TVCConfig = class_getSuperclass(_logos_class$_ungrouped$TVCConfig); { _logos_register_hook(_logos_class$_ungrouped$TVCConfig, @selector(enableResume), (IMP)&_logos_method$_ungrouped$TVCConfig$enableResume, (IMP *)&_logos_orig$_ungrouped$TVCConfig$enableResume);}{ _logos_register_hook(_logos_class$_ungrouped$TVCConfig, @selector(enableHttps), (IMP)&_logos_method$_ungrouped$TVCConfig$enableHttps, (IMP *)&_logos_orig$_ungrouped$TVCConfig$enableHttps);}{ _logos_register_hook(_logos_class$_ungrouped$TVCConfig, @selector(setEnableResume:), (IMP)&_logos_method$_ungrouped$TVCConfig$setEnableResume$, (IMP *)&_logos_orig$_ungrouped$TVCConfig$setEnableResume$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCConfig, @selector(setEnableHttps:), (IMP)&_logos_method$_ungrouped$TVCConfig$setEnableHttps$, (IMP *)&_logos_orig$_ungrouped$TVCConfig$setEnableHttps$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCConfig, @selector(init), (IMP)&_logos_method$_ungrouped$TVCConfig$init, (IMP *)&_logos_orig$_ungrouped$TVCConfig$init);}{ _logos_register_hook(_logos_class$_ungrouped$TVCConfig, @selector(userID), (IMP)&_logos_method$_ungrouped$TVCConfig$userID, (IMP *)&_logos_orig$_ungrouped$TVCConfig$userID);}{ _logos_register_hook(_logos_class$_ungrouped$TVCConfig, @selector(setUserID:), (IMP)&_logos_method$_ungrouped$TVCConfig$setUserID$, (IMP *)&_logos_orig$_ungrouped$TVCConfig$setUserID$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCConfig, @selector(setTimeoutInterval:), (IMP)&_logos_method$_ungrouped$TVCConfig$setTimeoutInterval$, (IMP *)&_logos_orig$_ungrouped$TVCConfig$setTimeoutInterval$);}{ _logos_register_hook(_logos_class$_ungrouped$TVCConfig, @selector(signature), (IMP)&_logos_method$_ungrouped$TVCConfig$signature, (IMP *)&_logos_orig$_ungrouped$TVCConfig$signature);}{ _logos_register_hook(_logos_class$_ungrouped$TVCConfig, @selector(timeoutInterval), (IMP)&_logos_method$_ungrouped$TVCConfig$timeoutInterval, (IMP *)&_logos_orig$_ungrouped$TVCConfig$timeoutInterval);}{ _logos_register_hook(_logos_class$_ungrouped$TVCConfig, @selector(setSignature:), (IMP)&_logos_method$_ungrouped$TVCConfig$setSignature$, (IMP *)&_logos_orig$_ungrouped$TVCConfig$setSignature$);}Class _logos_class$_ungrouped$GADResourceBuffer = objc_getClass("GADResourceBuffer"); _logos_superclass$_ungrouped$GADResourceBuffer = class_getSuperclass(_logos_class$_ungrouped$GADResourceBuffer); { _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(initWithRequest:fileURL:contentType:contentLength:removeFileOnDealloc:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$initWithRequest$fileURL$contentType$contentLength$removeFileOnDealloc$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$initWithRequest$fileURL$contentType$contentLength$removeFileOnDealloc$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(initWithRequest:fileURL:removeFileOnDealloc:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$initWithRequest$fileURL$removeFileOnDealloc$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$initWithRequest$fileURL$removeFileOnDealloc$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(addObserverForNotifyBytes:toCollection:queue:usingBlock:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$addObserverForNotifyBytes$toCollection$queue$usingBlock$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$addObserverForNotifyBytes$toCollection$queue$usingBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(setMaxBytes:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$setMaxBytes$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$setMaxBytes$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(bufferedContentSize), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$bufferedContentSize, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$bufferedContentSize);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(startPeriodicReportsWithTimeInterval:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$startPeriodicReportsWithTimeInterval$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$startPeriodicReportsWithTimeInterval$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(networkSpeedInBytesPerSecond), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$networkSpeedInBytesPerSecond, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$networkSpeedInBytesPerSecond);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(commonInitWithRequest:fileURL:removeFileOnDealloc:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$commonInitWithRequest$fileURL$removeFileOnDealloc$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$commonInitWithRequest$fileURL$removeFileOnDealloc$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(reportCSI), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$reportCSI, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$reportCSI);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(notifyObserversWaitingForNotifyBytes), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$notifyObserversWaitingForNotifyBytes, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$notifyObserversWaitingForNotifyBytes);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(responseHeadersReceived), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$responseHeadersReceived, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$responseHeadersReceived);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$dealloc, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(start), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$start, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$start);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(context), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$context, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$context);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(reset), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$reset, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$reset);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(contentType), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$contentType, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$contentType);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(fileURL), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$fileURL, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$fileURL);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(finishWithError:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$finishWithError$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$finishWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(request), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$request, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$request);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(URLSession:task:didCompleteWithError:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$URLSession$task$didCompleteWithError$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$URLSession$task$didCompleteWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(URLSession:dataTask:didReceiveData:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveData$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveData$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveResponse$completionHandler$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$URLSession$dataTask$didReceiveResponse$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(started), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$started, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$started);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(completed), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$completed, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$completed);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(cancelWithError:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$cancelWithError$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$cancelWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(responseHeaders), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$responseHeaders, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$responseHeaders);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(valid), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$valid, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$valid);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(downloaded), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$downloaded, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$downloaded);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(setValid:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$setValid$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$setValid$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(contentLength), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$contentLength, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$contentLength);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(setResponseHeaders:), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$setResponseHeaders$, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$setResponseHeaders$);}{ _logos_register_hook(_logos_class$_ungrouped$GADResourceBuffer, @selector(maxBytes), (IMP)&_logos_method$_ungrouped$GADResourceBuffer$maxBytes, (IMP *)&_logos_orig$_ungrouped$GADResourceBuffer$maxBytes);}Class _logos_class$_ungrouped$GULNetworkURLSession = objc_getClass("GULNetworkURLSession"); Class _logos_metaclass$_ungrouped$GULNetworkURLSession = object_getClass(_logos_class$_ungrouped$GULNetworkURLSession); _logos_superclass$_ungrouped$GULNetworkURLSession = class_getSuperclass(_logos_class$_ungrouped$GULNetworkURLSession); _logos_supermetaclass$_ungrouped$GULNetworkURLSession = class_getSuperclass(_logos_metaclass$_ungrouped$GULNetworkURLSession); { _logos_register_hook(_logos_metaclass$_ungrouped$GULNetworkURLSession, @selector(handleEventsForBackgroundURLSessionID:completionHandler:), (IMP)&_logos_meta_method$_ungrouped$GULNetworkURLSession$handleEventsForBackgroundURLSessionID$completionHandler$, (IMP *)&_logos_meta_orig$_ungrouped$GULNetworkURLSession$handleEventsForBackgroundURLSessionID$completionHandler$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$GULNetworkURLSession, @selector(fetcherWithSessionIdentifier:), (IMP)&_logos_meta_method$_ungrouped$GULNetworkURLSession$fetcherWithSessionIdentifier$, (IMP *)&_logos_meta_orig$_ungrouped$GULNetworkURLSession$fetcherWithSessionIdentifier$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$GULNetworkURLSession, @selector(setSessionInFetcherMap:forSessionID:), (IMP)&_logos_meta_method$_ungrouped$GULNetworkURLSession$setSessionInFetcherMap$forSessionID$, (IMP *)&_logos_meta_orig$_ungrouped$GULNetworkURLSession$setSessionInFetcherMap$forSessionID$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$GULNetworkURLSession, @selector(sessionIDToSystemCompletionHandlerDictionary), (IMP)&_logos_meta_method$_ungrouped$GULNetworkURLSession$sessionIDToSystemCompletionHandlerDictionary, (IMP *)&_logos_meta_orig$_ungrouped$GULNetworkURLSession$sessionIDToSystemCompletionHandlerDictionary);}{ _logos_register_hook(_logos_metaclass$_ungrouped$GULNetworkURLSession, @selector(sessionFromFetcherMapForSessionID:), (IMP)&_logos_meta_method$_ungrouped$GULNetworkURLSession$sessionFromFetcherMapForSessionID$, (IMP *)&_logos_meta_orig$_ungrouped$GULNetworkURLSession$sessionFromFetcherMapForSessionID$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$GULNetworkURLSession, @selector(sessionIDToFetcherMapReadWriteLock), (IMP)&_logos_meta_method$_ungrouped$GULNetworkURLSession$sessionIDToFetcherMapReadWriteLock, (IMP *)&_logos_meta_orig$_ungrouped$GULNetworkURLSession$sessionIDToFetcherMapReadWriteLock);}{ _logos_register_hook(_logos_metaclass$_ungrouped$GULNetworkURLSession, @selector(sessionIDToFetcherMap), (IMP)&_logos_meta_method$_ungrouped$GULNetworkURLSession$sessionIDToFetcherMap, (IMP *)&_logos_meta_orig$_ungrouped$GULNetworkURLSession$sessionIDToFetcherMap);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(initWithNetworkLoggerDelegate:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$initWithNetworkLoggerDelegate$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$initWithNetworkLoggerDelegate$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(setBackgroundNetworkEnabled:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$setBackgroundNetworkEnabled$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$setBackgroundNetworkEnabled$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(sessionIDFromAsyncPOSTRequest:completionHandler:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$sessionIDFromAsyncPOSTRequest$completionHandler$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$sessionIDFromAsyncPOSTRequest$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(sessionIDFromAsyncGETRequest:completionHandler:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$sessionIDFromAsyncGETRequest$completionHandler$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$sessionIDFromAsyncGETRequest$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(loggerDelegate), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$loggerDelegate, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$loggerDelegate);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(addSystemCompletionHandler:forSession:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$addSystemCompletionHandler$forSession$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$addSystemCompletionHandler$forSession$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(temporaryFilePathWithSessionID:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$temporaryFilePathWithSessionID$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$temporaryFilePathWithSessionID$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(maybeRemoveTempFilesAtURL:expiringTime:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$maybeRemoveTempFilesAtURL$expiringTime$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$maybeRemoveTempFilesAtURL$expiringTime$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(ensureTemporaryDirectoryExists), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$ensureTemporaryDirectoryExists, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$ensureTemporaryDirectoryExists);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(excludeFromBackupForURL:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$excludeFromBackupForURL$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$excludeFromBackupForURL$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(backgroundSessionConfigWithSessionID:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$backgroundSessionConfigWithSessionID$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$backgroundSessionConfigWithSessionID$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(populateSessionConfig:withRequest:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$populateSessionConfig$withRequest$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$populateSessionConfig$withRequest$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(callCompletionHandler:withResponse:data:error:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$callCompletionHandler$withResponse$data$error$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$callCompletionHandler$withResponse$data$error$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(callSystemCompletionHandler:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$callSystemCompletionHandler$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$callSystemCompletionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(removeTempItemAtURL:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$removeTempItemAtURL$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$removeTempItemAtURL$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(setLoggerDelegate:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$setLoggerDelegate$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$setLoggerDelegate$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(isBackgroundNetworkEnabled), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$isBackgroundNetworkEnabled, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$isBackgroundNetworkEnabled);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(URLSessionDidFinishEventsForBackgroundURLSession:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$URLSessionDidFinishEventsForBackgroundURLSession$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$URLSessionDidFinishEventsForBackgroundURLSession$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(URLSession:task:didReceiveChallenge:completionHandler:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$URLSession$task$didReceiveChallenge$completionHandler$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$didReceiveChallenge$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(URLSession:task:didCompleteWithError:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$URLSession$task$didCompleteWithError$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$task$didCompleteWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(URLSession:downloadTask:didFinishDownloadingToURL:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$URLSession$downloadTask$didFinishDownloadingToURL$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$downloadTask$didFinishDownloadingToURL$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(URLSession:dataTask:didReceiveData:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$URLSession$dataTask$didReceiveData$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$URLSession$dataTask$didReceiveData$);}{ _logos_register_hook(_logos_class$_ungrouped$GULNetworkURLSession, @selector(setSessionID:), (IMP)&_logos_method$_ungrouped$GULNetworkURLSession$setSessionID$, (IMP *)&_logos_orig$_ungrouped$GULNetworkURLSession$setSessionID$);}Class _logos_class$_ungrouped$FLVDownloaderHT = objc_getClass("FLVDownloaderHT"); _logos_superclass$_ungrouped$FLVDownloaderHT = class_getSuperclass(_logos_class$_ungrouped$FLVDownloaderHT); { _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(getDownloadStats), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$getDownloadStats, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$getDownloadStats);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(parseIpAddress:), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$parseIpAddress$, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$parseIpAddress$);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(syncReconnect), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$syncReconnect, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$syncReconnect);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(init), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$init, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$init);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(URLSession:task:didReceiveChallenge:completionHandler:), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$URLSession$task$didReceiveChallenge$completionHandler$, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$task$didReceiveChallenge$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(URLSession:task:didCompleteWithError:), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$URLSession$task$didCompleteWithError$, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$task$didCompleteWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(URLSession:dataTask:didReceiveData:), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveData$, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveData$);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveResponse$completionHandler$, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$URLSession$dataTask$didReceiveResponse$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(connect), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$connect, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$connect);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(reconnect), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$reconnect, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$reconnect);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(startDownload:), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$startDownload$, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$startDownload$);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(closeSession), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$closeSession, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$closeSession);}{ _logos_register_hook(_logos_class$_ungrouped$FLVDownloaderHT, @selector(stopDownload), (IMP)&_logos_method$_ungrouped$FLVDownloaderHT$stopDownload, (IMP *)&_logos_orig$_ungrouped$FLVDownloaderHT$stopDownload);}Class _logos_class$_ungrouped$AWSURLSessionManager = objc_getClass("AWSURLSessionManager"); _logos_superclass$_ungrouped$AWSURLSessionManager = class_getSuperclass(_logos_class$_ungrouped$AWSURLSessionManager); { _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(taskWithDelegate:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$taskWithDelegate$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$taskWithDelegate$);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(sessionManagerDelegates), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$sessionManagerDelegates, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$sessionManagerDelegates);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(printHTTPHeadersAndBodyForRequest:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$printHTTPHeadersAndBodyForRequest$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$printHTTPHeadersAndBodyForRequest$);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(printHTTPHeadersForResponse:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$printHTTPHeadersForResponse$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$printHTTPHeadersForResponse$);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(setSessionManagerDelegates:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$setSessionManagerDelegates$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$setSessionManagerDelegates$);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(init), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$init, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$init);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(initWithConfiguration:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$initWithConfiguration$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$initWithConfiguration$);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(session), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$session, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$session);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(setSession:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$setSession$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$setSession$);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(setConfiguration:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$setConfiguration$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$setConfiguration$);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(configuration), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$configuration, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$configuration);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(dataTaskWithRequest:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$dataTaskWithRequest$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$dataTaskWithRequest$);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(URLSession:task:didCompleteWithError:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$URLSession$task$didCompleteWithError$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$task$didCompleteWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(URLSession:dataTask:didReceiveData:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveData$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveData$);}{ _logos_register_hook(_logos_class$_ungrouped$AWSURLSessionManager, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:), (IMP)&_logos_method$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AWSURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$);}Class _logos_class$_ungrouped$RCNConfigFetch = objc_getClass("RCNConfigFetch"); _logos_superclass$_ungrouped$RCNConfigFetch = class_getSuperclass(_logos_class$_ungrouped$RCNConfigFetch); { _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(initWithContent:DBManager:settings:analytics:experiment:queue:namespace:options:), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$initWithContent$DBManager$settings$analytics$experiment$queue$namespace$options$, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$initWithContent$DBManager$settings$analytics$experiment$queue$namespace$options$);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(fetchConfigWithExpirationDuration:completionHandler:), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$fetchConfigWithExpirationDuration$completionHandler$, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$fetchConfigWithExpirationDuration$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(recreateNetworkSession), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$recreateNetworkSession, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$recreateNetworkSession);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(reportCompletionOnHandler:withStatus:withError:), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$reportCompletionOnHandler$withStatus$withError$, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$reportCompletionOnHandler$withStatus$withError$);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(refreshInstallationsTokenWithCompletionHandler:), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$refreshInstallationsTokenWithCompletionHandler$, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$refreshInstallationsTokenWithCompletionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(FIRAppNameFromFullyQualifiedNamespace), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$FIRAppNameFromFullyQualifiedNamespace, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$FIRAppNameFromFullyQualifiedNamespace);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(doFetchCall:), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$doFetchCall$, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$doFetchCall$);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(fetchWithUserProperties:completionHandler:), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$fetchWithUserProperties$completionHandler$, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$fetchWithUserProperties$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(getAnalyticsUserPropertiesWithCompletionHandler:), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$getAnalyticsUserPropertiesWithCompletionHandler$, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$getAnalyticsUserPropertiesWithCompletionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(URLSessionDataTaskWithContent:completionHandler:), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$URLSessionDataTaskWithContent$completionHandler$, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$URLSessionDataTaskWithContent$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(currentNetworkSession), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$currentNetworkSession, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$currentNetworkSession);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(fetchSession), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$fetchSession, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$fetchSession);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(setFetchSession:), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$setFetchSession$, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$setFetchSession$);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, @selector(init), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$init, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$init);}{ _logos_register_hook(_logos_class$_ungrouped$RCNConfigFetch, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$RCNConfigFetch$dealloc, (IMP *)&_logos_orig$_ungrouped$RCNConfigFetch$dealloc);}Class _logos_class$_ungrouped$GADURLSessionTransactionMonitor = objc_getClass("GADURLSessionTransactionMonitor"); _logos_superclass$_ungrouped$GADURLSessionTransactionMonitor = class_getSuperclass(_logos_class$_ungrouped$GADURLSessionTransactionMonitor); { _logos_register_hook(_logos_class$_ungrouped$GADURLSessionTransactionMonitor, @selector(invalidateAllTasksWithError:), (IMP)&_logos_method$_ungrouped$GADURLSessionTransactionMonitor$invalidateAllTasksWithError$, (IMP *)&_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$invalidateAllTasksWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$GADURLSessionTransactionMonitor, @selector(waitForTransactionsWithCompletion:), (IMP)&_logos_method$_ungrouped$GADURLSessionTransactionMonitor$waitForTransactionsWithCompletion$, (IMP *)&_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$waitForTransactionsWithCompletion$);}{ _logos_register_hook(_logos_class$_ungrouped$GADURLSessionTransactionMonitor, @selector(addTransaction:forTask:), (IMP)&_logos_method$_ungrouped$GADURLSessionTransactionMonitor$addTransaction$forTask$, (IMP *)&_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$addTransaction$forTask$);}{ _logos_register_hook(_logos_class$_ungrouped$GADURLSessionTransactionMonitor, @selector(init), (IMP)&_logos_method$_ungrouped$GADURLSessionTransactionMonitor$init, (IMP *)&_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$init);}{ _logos_register_hook(_logos_class$_ungrouped$GADURLSessionTransactionMonitor, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$GADURLSessionTransactionMonitor$dealloc, (IMP *)&_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$GADURLSessionTransactionMonitor, @selector(URLSession:didBecomeInvalidWithError:), (IMP)&_logos_method$_ungrouped$GADURLSessionTransactionMonitor$URLSession$didBecomeInvalidWithError$, (IMP *)&_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$didBecomeInvalidWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$GADURLSessionTransactionMonitor, @selector(URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:), (IMP)&_logos_method$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$, (IMP *)&_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$GADURLSessionTransactionMonitor, @selector(URLSession:task:didCompleteWithError:), (IMP)&_logos_method$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$didCompleteWithError$, (IMP *)&_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$task$didCompleteWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$GADURLSessionTransactionMonitor, @selector(URLSession:dataTask:didReceiveData:), (IMP)&_logos_method$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveData$, (IMP *)&_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveData$);}{ _logos_register_hook(_logos_class$_ungrouped$GADURLSessionTransactionMonitor, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:), (IMP)&_logos_method$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveResponse$completionHandler$, (IMP *)&_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$URLSession$dataTask$didReceiveResponse$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$GADURLSessionTransactionMonitor, @selector(removeTask:), (IMP)&_logos_method$_ungrouped$GADURLSessionTransactionMonitor$removeTask$, (IMP *)&_logos_orig$_ungrouped$GADURLSessionTransactionMonitor$removeTask$);}Class _logos_class$_ungrouped$MidasSdkIapAdapter = objc_getClass("MidasSdkIapAdapter"); _logos_superclass$_ungrouped$MidasSdkIapAdapter = class_getSuperclass(_logos_class$_ungrouped$MidasSdkIapAdapter); { _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(enableLog:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$enableLog$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$enableLog$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onLoginExpiry:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onLoginExpiry$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onLoginExpiry$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onDistributeGoodsFinish:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFinish$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFinish$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(parameterWrong:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$parameterWrong$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$parameterWrong$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onNetWorkEorror:withRequestInfo:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onNetWorkEorror$withRequestInfo$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onNetWorkEorror$withRequestInfo$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onGetProductInfoFailue:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onGetProductInfoFailue$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetProductInfoFailue$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onDistributeGoodsFailue:withErrorMessage:withErrorCode:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFailue$withErrorMessage$withErrorCode$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onDistributeGoodsFailue$withErrorMessage$withErrorCode$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onIAPPayFailue:withError:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onIAPPayFailue$withError$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onIAPPayFailue$withError$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onOrderFailue:withErrorMessage:withErrorCode:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onOrderFailue$withErrorMessage$withErrorCode$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onOrderFailue$withErrorMessage$withErrorCode$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onOrderFinish:withRequestInfo:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onOrderFinish$withRequestInfo$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onOrderFinish$withRequestInfo$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onIAPPaymentSucess:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onIAPPaymentSucess$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onIAPPaymentSucess$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(canShowLoadingNow), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$canShowLoadingNow, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$canShowLoadingNow);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onLaunProductListFinish:withJsoninfo:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onLaunProductListFinish$withJsoninfo$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onLaunProductListFinish$withJsoninfo$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onLaunProductListFailue:withErrorMessage:withErrorCode:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onLaunProductListFailue$withErrorMessage$withErrorCode$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onLaunProductListFailue$withErrorMessage$withErrorCode$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(parseKvString:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$parseKvString$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$parseKvString$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(initWithEnv:withIdc:withReq:callback:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withReq$callback$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withReq$callback$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(initWithEnv:withIdc:withIdcInfo:withReq:callback:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withIdcInfo$withReq$callback$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$initWithEnv$withIdc$withIdcInfo$withReq$callback$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(payWithReq:callback:viewController:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$payWithReq$callback$viewController$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$payWithReq$callback$viewController$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(getProductInfoWithChannel:withProductIds:callback:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$getProductInfoWithChannel$withProductIds$callback$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$getProductInfoWithChannel$withProductIds$callback$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(getIntroPriceWithChannel:withProductIds:callback:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$getIntroPriceWithChannel$withProductIds$callback$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$getIntroPriceWithChannel$withProductIds$callback$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(getInfoWithType:withReq:callback:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$getInfoWithType$withReq$callback$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$getInfoWithType$withReq$callback$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(reprovideWithCallback:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$reprovideWithCallback$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$reprovideWithCallback$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(setShowLog:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$setShowLog$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$setShowLog$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(showLog), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$showLog, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$showLog);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(startPayOnMainThread:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$startPayOnMainThread$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$startPayOnMainThread$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(setViewCtrollerOnMainThread:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$setViewCtrollerOnMainThread$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$setViewCtrollerOnMainThread$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(DV:K:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$DV$K$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$DV$K$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(urlEncode:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$urlEncode$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$urlEncode$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(callBackWithcode:inCode:bill:errMsg:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$callBackWithcode$inCode$bill$errMsg$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$callBackWithcode$inCode$bill$errMsg$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onGetOverseaInfoFinish:withJsoninfo:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFinish$withJsoninfo$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFinish$withJsoninfo$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(onGetOverseaInfoFailue:withErrorMessage:withErrorCode:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFailue$withErrorMessage$withErrorCode$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$onGetOverseaInfoFailue$withErrorMessage$withErrorCode$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(init), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$init, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$init);}{ _logos_register_hook(_logos_class$_ungrouped$MidasSdkIapAdapter, @selector(log:), (IMP)&_logos_method$_ungrouped$MidasSdkIapAdapter$log$, (IMP *)&_logos_orig$_ungrouped$MidasSdkIapAdapter$log$);}Class _logos_class$_ungrouped$MidasAddrHelper = objc_getClass("MidasAddrHelper"); Class _logos_metaclass$_ungrouped$MidasAddrHelper = object_getClass(_logos_class$_ungrouped$MidasAddrHelper); _logos_superclass$_ungrouped$MidasAddrHelper = class_getSuperclass(_logos_class$_ungrouped$MidasAddrHelper); _logos_supermetaclass$_ungrouped$MidasAddrHelper = class_getSuperclass(_logos_metaclass$_ungrouped$MidasAddrHelper); { _logos_register_hook(_logos_metaclass$_ungrouped$MidasAddrHelper, @selector(sharedManager), (IMP)&_logos_meta_method$_ungrouped$MidasAddrHelper$sharedManager, (IMP *)&_logos_meta_orig$_ungrouped$MidasAddrHelper$sharedManager);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getStaticDomain), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getStaticDomain, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getStaticDomain);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(initializeWithLocale:environment:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$initializeWithLocale$environment$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$initializeWithLocale$environment$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getMpInfoUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getMpInfoUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getMpInfoUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getOverseaInfoUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getOverseaInfoUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getOverseaInfoUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getNewIapProcUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getNewIapProcUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getNewIapProcUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getIapProcUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getIapProcUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getIapProcUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getCheckUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getCheckUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getCheckUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getGetConfigUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getGetConfigUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getGetConfigUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getLogUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getLogUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getLogUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getHeartBeatUrl), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getHeartBeatUrl, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getHeartBeatUrl);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getGetIpListUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getGetIpListUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getGetIpListUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getPayResultUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getPayResultUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getPayResultUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getSecurityProcUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getSecurityProcUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getSecurityProcUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getIapQueryUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getIapQueryUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getIapQueryUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getCombineUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getCombineUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getCombineUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getGetKeyUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getGetKeyUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getGetKeyUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getDomain:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getDomain$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getDomain$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getRiskControlDomain), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getRiskControlDomain, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getRiskControlDomain);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(setIP:isUsable:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$setIP$isUsable$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$setIP$isUsable$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(midasAddr:didMeasure:type:isIPv6:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$midasAddr$didMeasure$type$isIPv6$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$midasAddr$didMeasure$type$isIPv6$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(_updateIPListsFromServer), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$_updateIPListsFromServer, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$_updateIPListsFromServer);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(_getWholeUrl:prefix:useDomain:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$_getWholeUrl$prefix$useDomain$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$_getWholeUrl$prefix$useDomain$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(getStandalongUrl:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$getStandalongUrl$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$getStandalongUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(addrSelector), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$addrSelector, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$addrSelector);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(environment), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$environment, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$environment);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(setEnvironment:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$setEnvironment$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$setEnvironment$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(setConfig:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$setConfig$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$setConfig$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(reporter), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$reporter, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$reporter);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(setReporter:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$setReporter$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$setReporter$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(offerId), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$offerId, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$offerId);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(setOfferId:), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$setOfferId$, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$setOfferId$);}{ _logos_register_hook(_logos_class$_ungrouped$MidasAddrHelper, @selector(config), (IMP)&_logos_method$_ungrouped$MidasAddrHelper$config, (IMP *)&_logos_orig$_ungrouped$MidasAddrHelper$config);}Class _logos_class$_ungrouped$ADJRequestHandler = objc_getClass("ADJRequestHandler"); _logos_superclass$_ungrouped$ADJRequestHandler = class_getSuperclass(_logos_class$_ungrouped$ADJRequestHandler); { _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(setUrlStrategy:), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$setUrlStrategy$, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$setUrlStrategy$);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(setDefaultSessionConfiguration:), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$setDefaultSessionConfiguration$, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$setDefaultSessionConfiguration$);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(setExceptionKeys:), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$setExceptionKeys$, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$setExceptionKeys$);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(buildAuthorizationHeader:activityKind:), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$buildAuthorizationHeader$activityKind$, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$buildAuthorizationHeader$activityKind$);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(urlStrategy), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$urlStrategy, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$urlStrategy);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(requestForPostPackage:clientSdk:parameters:urlHostString:sendingParameters:), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$requestForPostPackage$clientSdk$parameters$urlHostString$sendingParameters$, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$requestForPostPackage$clientSdk$parameters$urlHostString$sendingParameters$);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(sendRequest:authorizationHeader:responseData:methodTypeInfo:), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$sendRequest$authorizationHeader$responseData$methodTypeInfo$, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$sendRequest$authorizationHeader$responseData$methodTypeInfo$);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(userAgent), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$userAgent, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$userAgent);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(setUserAgent:), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$setUserAgent$, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$setUserAgent$);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(requestTimeout), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$requestTimeout, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$requestTimeout);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(setLogger:), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$setLogger$, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$setLogger$);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(setRequestTimeout:), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$setRequestTimeout$, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$setRequestTimeout$);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(responseCallback), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$responseCallback, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$responseCallback);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(setResponseCallback:), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$setResponseCallback$, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$setResponseCallback$);}{ _logos_register_hook(_logos_class$_ungrouped$ADJRequestHandler, @selector(defaultSessionConfiguration), (IMP)&_logos_method$_ungrouped$ADJRequestHandler$defaultSessionConfiguration, (IMP *)&_logos_orig$_ungrouped$ADJRequestHandler$defaultSessionConfiguration);}Class _logos_class$_ungrouped$GNLAsynchronousOperation = objc_getClass("GNLAsynchronousOperation"); _logos_superclass$_ungrouped$GNLAsynchronousOperation = class_getSuperclass(_logos_class$_ungrouped$GNLAsynchronousOperation); { _logos_register_hook(_logos_class$_ungrouped$GNLAsynchronousOperation, @selector(init), (IMP)&_logos_method$_ungrouped$GNLAsynchronousOperation$init, (IMP *)&_logos_orig$_ungrouped$GNLAsynchronousOperation$init);}{ _logos_register_hook(_logos_class$_ungrouped$GNLAsynchronousOperation, @selector(start), (IMP)&_logos_method$_ungrouped$GNLAsynchronousOperation$start, (IMP *)&_logos_orig$_ungrouped$GNLAsynchronousOperation$start);}{ _logos_register_hook(_logos_class$_ungrouped$GNLAsynchronousOperation, @selector(main), (IMP)&_logos_method$_ungrouped$GNLAsynchronousOperation$main, (IMP *)&_logos_orig$_ungrouped$GNLAsynchronousOperation$main);}{ _logos_register_hook(_logos_class$_ungrouped$GNLAsynchronousOperation, @selector(setFinished:), (IMP)&_logos_method$_ungrouped$GNLAsynchronousOperation$setFinished$, (IMP *)&_logos_orig$_ungrouped$GNLAsynchronousOperation$setFinished$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLAsynchronousOperation, @selector(isFinished), (IMP)&_logos_method$_ungrouped$GNLAsynchronousOperation$isFinished, (IMP *)&_logos_orig$_ungrouped$GNLAsynchronousOperation$isFinished);}{ _logos_register_hook(_logos_class$_ungrouped$GNLAsynchronousOperation, @selector(isExecuting), (IMP)&_logos_method$_ungrouped$GNLAsynchronousOperation$isExecuting, (IMP *)&_logos_orig$_ungrouped$GNLAsynchronousOperation$isExecuting);}{ _logos_register_hook(_logos_class$_ungrouped$GNLAsynchronousOperation, @selector(isAsynchronous), (IMP)&_logos_method$_ungrouped$GNLAsynchronousOperation$isAsynchronous, (IMP *)&_logos_orig$_ungrouped$GNLAsynchronousOperation$isAsynchronous);}{ _logos_register_hook(_logos_class$_ungrouped$GNLAsynchronousOperation, @selector(setExecuting:), (IMP)&_logos_method$_ungrouped$GNLAsynchronousOperation$setExecuting$, (IMP *)&_logos_orig$_ungrouped$GNLAsynchronousOperation$setExecuting$);}{ _logos_register_hook(_logos_class$_ungrouped$GNLAsynchronousOperation, @selector(completeOperation), (IMP)&_logos_method$_ungrouped$GNLAsynchronousOperation$completeOperation, (IMP *)&_logos_orig$_ungrouped$GNLAsynchronousOperation$completeOperation);}Class _logos_class$_ungrouped$AVChunkedURLRequest = objc_getClass("AVChunkedURLRequest"); _logos_superclass$_ungrouped$AVChunkedURLRequest = class_getSuperclass(_logos_class$_ungrouped$AVChunkedURLRequest); { _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(initWithURL:timeout:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$initWithURL$timeout$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$initWithURL$timeout$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(sendMain), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$sendMain, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$sendMain);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(releaseHttp), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$releaseHttp, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$releaseHttp);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(addHead:withValue:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$addHead$withValue$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$addHead$withValue$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(setQueue:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$setQueue$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$setQueue$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(queue), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$queue, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$queue);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(delegate), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$delegate, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$delegate);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(setDelegate:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$setDelegate$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$setDelegate$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(cxx_destruct), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$cxx_destruct, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$cxx_destruct);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(setRequest:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$setRequest$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$setRequest$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:didBecomeInvalidWithError:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$didBecomeInvalidWithError$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$didBecomeInvalidWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:didReceiveChallenge:completionHandler:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$didReceiveChallenge$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$didReceiveChallenge$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSessionDidFinishEventsForBackgroundURLSession:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSessionDidFinishEventsForBackgroundURLSession$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSessionDidFinishEventsForBackgroundURLSession$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(request), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$request, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$request);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:task:didReceiveChallenge:completionHandler:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$task$didReceiveChallenge$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didReceiveChallenge$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:task:needNewBodyStream:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$task$needNewBodyStream$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$needNewBodyStream$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:task:didCompleteWithError:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$task$didCompleteWithError$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$task$didCompleteWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:dataTask:didReceiveData:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveData$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveData$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(setMethod:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$setMethod$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$setMethod$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connection:didFailWithError:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connection$didFailWithError$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didFailWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connectionShouldUseCredentialStorage:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connectionShouldUseCredentialStorage$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connectionShouldUseCredentialStorage$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connection:willSendRequestForAuthenticationChallenge:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connection$willSendRequestForAuthenticationChallenge$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connection$willSendRequestForAuthenticationChallenge$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connection:canAuthenticateAgainstProtectionSpace:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connection$canAuthenticateAgainstProtectionSpace$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connection$canAuthenticateAgainstProtectionSpace$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveResponse$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didReceiveResponse$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connection:didReceiveAuthenticationChallenge:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connection$didReceiveAuthenticationChallenge$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveAuthenticationChallenge$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connection:didCancelAuthenticationChallenge:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connection$didCancelAuthenticationChallenge$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didCancelAuthenticationChallenge$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connection:willSendRequest:redirectResponse:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connection$willSendRequest$redirectResponse$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connection$willSendRequest$redirectResponse$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connection:didReceiveResponse:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connection$didReceiveResponse$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveResponse$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connection:didSendBodyData:totalBytesWritten:totalBytesExpectedToWrite:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connection$didSendBodyData$totalBytesWritten$totalBytesExpectedToWrite$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didSendBodyData$totalBytesWritten$totalBytesExpectedToWrite$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connection:willCacheResponse:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connection$willCacheResponse$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connection$willCacheResponse$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connectionDidFinishLoading:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connectionDidFinishLoading$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connectionDidFinishLoading$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(connection:didReceiveData:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$connection$didReceiveData$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$connection$didReceiveData$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:dataTask:didBecomeDownloadTask:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeDownloadTask$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeDownloadTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:dataTask:didBecomeStreamTask:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeStreamTask$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$didBecomeStreamTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(URLSession:dataTask:willCacheResponse:completionHandler:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$willCacheResponse$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$URLSession$dataTask$willCacheResponse$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(setBody:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$setBody$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$setBody$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(defaultSession), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$defaultSession, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$defaultSession);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(quit), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$quit, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$quit);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(conn), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$conn, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$conn);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(setConn:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$setConn$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$setConn$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(requestTask), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$requestTask, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$requestTask);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(setRequestTask:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$setRequestTask$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$setRequestTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(sendRequest), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$sendRequest, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$sendRequest);}{ _logos_register_hook(_logos_class$_ungrouped$AVChunkedURLRequest, @selector(setDefaultSession:), (IMP)&_logos_method$_ungrouped$AVChunkedURLRequest$setDefaultSession$, (IMP *)&_logos_orig$_ungrouped$AVChunkedURLRequest$setDefaultSession$);}Class _logos_class$_ungrouped$FBSDKGraphRequestConnection = objc_getClass("FBSDKGraphRequestConnection"); Class _logos_metaclass$_ungrouped$FBSDKGraphRequestConnection = object_getClass(_logos_class$_ungrouped$FBSDKGraphRequestConnection); _logos_superclass$_ungrouped$FBSDKGraphRequestConnection = class_getSuperclass(_logos_class$_ungrouped$FBSDKGraphRequestConnection); _logos_supermetaclass$_ungrouped$FBSDKGraphRequestConnection = class_getSuperclass(_logos_metaclass$_ungrouped$FBSDKGraphRequestConnection); { _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setCanMakeRequests), (IMP)&_logos_meta_method$_ungrouped$FBSDKGraphRequestConnection$setCanMakeRequests, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$setCanMakeRequests);}{ _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKGraphRequestConnection, @selector(canMakeRequests), (IMP)&_logos_meta_method$_ungrouped$FBSDKGraphRequestConnection$canMakeRequests, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$canMakeRequests);}{ _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKGraphRequestConnection, @selector(setDefaultConnectionTimeout:), (IMP)&_logos_meta_method$_ungrouped$FBSDKGraphRequestConnection$setDefaultConnectionTimeout$, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$setDefaultConnectionTimeout$);}{ _logos_register_hook(_logos_metaclass$_ungrouped$FBSDKGraphRequestConnection, @selector(defaultConnectionTimeout), (IMP)&_logos_meta_method$_ungrouped$FBSDKGraphRequestConnection$defaultConnectionTimeout, (IMP *)&_logos_meta_orig$_ungrouped$FBSDKGraphRequestConnection$defaultConnectionTimeout);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(processorDidAttemptRecovery:didRecover:error:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$processorDidAttemptRecovery$didRecover$error$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processorDidAttemptRecovery$didRecover$error$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(addRequest:batchEntryName:completionHandler:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchEntryName$completionHandler$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchEntryName$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(addRequest:batchParameters:completionHandler:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchParameters$completionHandler$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$batchParameters$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(completeFBSDKURLSessionWithResponse:data:networkError:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$completeFBSDKURLSessionWithResponse$data$networkError$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$completeFBSDKURLSessionWithResponse$data$networkError$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(requestWithBatch:timeout:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$requestWithBatch$timeout$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$requestWithBatch$timeout$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(logRequest:bodyLength:bodyLogger:attachmentLogger:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$logRequest$bodyLength$bodyLogger$attachmentLogger$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logRequest$bodyLength$bodyLogger$attachmentLogger$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(_taskDidCompleteWithError:handler:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$_taskDidCompleteWithError$handler$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_taskDidCompleteWithError$handler$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(taskDidCompleteWithResponse:data:requestStartTime:handler:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$taskDidCompleteWithResponse$data$requestStartTime$handler$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$taskDidCompleteWithResponse$data$requestStartTime$handler$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(registerTokenToOmitFromLog:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$registerTokenToOmitFromLog$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$registerTokenToOmitFromLog$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(urlStringForSingleRequest:forBatch:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$urlStringForSingleRequest$forBatch$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$urlStringForSingleRequest$forBatch$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(accessTokenWithRequest:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$accessTokenWithRequest$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$accessTokenWithRequest$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(addRequest:toBatch:attachments:batchToken:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$addRequest$toBatch$attachments$batchToken$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$toBatch$attachments$batchToken$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(_shouldWarnOnMissingFieldsParam:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$_shouldWarnOnMissingFieldsParam$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_shouldWarnOnMissingFieldsParam$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(appendAttachments:toBody:addFormData:logger:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$appendAttachments$toBody$addFormData$logger$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$appendAttachments$toBody$addFormData$logger$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(appendJSONRequests:toBody:andNameAttachments:logger:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$appendJSONRequests$toBody$andNameAttachments$logger$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$appendJSONRequests$toBody$andNameAttachments$logger$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(_validateFieldsParamForGetRequests:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$_validateFieldsParamForGetRequests$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_validateFieldsParamForGetRequests$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(addBody:toPostRequest:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$addBody$toPostRequest$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addBody$toPostRequest$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(parseJSONResponse:error:statusCode:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$parseJSONResponse$error$statusCode$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$parseJSONResponse$error$statusCode$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(_completeWithResults:networkError:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$_completeWithResults$networkError$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_completeWithResults$networkError$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(_errorWithCode:statusCode:parsedJSONResponse:innerError:message:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$_errorWithCode$statusCode$parsedJSONResponse$innerError$message$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$_errorWithCode$statusCode$parsedJSONResponse$innerError$message$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(errorFromResult:request:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$errorFromResult$request$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$errorFromResult$request$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(processResultBody:error:metadata:canNotifyDelegate:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$processResultBody$error$metadata$canNotifyDelegate$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processResultBody$error$metadata$canNotifyDelegate$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(parseJSONOrOtherwise:error:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$parseJSONOrOtherwise$error$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$parseJSONOrOtherwise$error$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(processResultDebugDictionary:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$processResultDebugDictionary$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$processResultDebugDictionary$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(errorConfigurationProvider), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$errorConfigurationProvider, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$errorConfigurationProvider);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(invokeHandler:error:response:responseData:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$invokeHandler$error$response$responseData$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$invokeHandler$error$response$responseData$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(logAndInvokeHandler:response:responseData:requestStartTime:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$response$responseData$requestStartTime$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$response$responseData$requestStartTime$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(logAndInvokeHandler:error:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$error$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logAndInvokeHandler$error$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(overrideGraphAPIVersion:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$overrideGraphAPIVersion$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$overrideGraphAPIVersion$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(sessionProxyFactory), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$sessionProxyFactory, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$sessionProxyFactory);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setSessionProxyFactory:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setSessionProxyFactory$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setSessionProxyFactory$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setErrorConfigurationProvider:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setErrorConfigurationProvider$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setErrorConfigurationProvider$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setConnectionFactory:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setConnectionFactory$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setConnectionFactory$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(addRequest:completionHandler:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$addRequest$completionHandler$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$addRequest$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(init), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$init, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$init);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(description), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$description, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$description);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$dealloc, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(delegate), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$delegate, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$delegate);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setDelegate:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setDelegate$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setDelegate$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(cxx_destruct), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$cxx_destruct, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$cxx_destruct);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(cancel), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$cancel, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$cancel);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(start), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$start, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$start);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(state), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$state, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$state);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(logger), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$logger, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logger);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setState:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setState$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setState$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(timeout), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$timeout, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$timeout);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setTimeout:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setTimeout$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setTimeout$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(session), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$session, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$session);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setSession:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setSession$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setSession$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setDelegateQueue:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setDelegateQueue$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setDelegateQueue$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(userAgent), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$userAgent, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$userAgent);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(logMessage:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$logMessage$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$logMessage$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(delegateQueue), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$delegateQueue, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$delegateQueue);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(requests), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$requests, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$requests);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setRequests:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setRequests$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setRequests$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(requestStartTime), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$requestStartTime, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$requestStartTime);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setRequestStartTime:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setRequestStartTime$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setRequestStartTime$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setLogger:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setLogger$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setLogger$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(urlResponse), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$urlResponse, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$urlResponse);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(eventLogger), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$eventLogger, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$eventLogger);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(setEventLogger:), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$setEventLogger$, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$setEventLogger$);}{ _logos_register_hook(_logos_class$_ungrouped$FBSDKGraphRequestConnection, @selector(connectionFactory), (IMP)&_logos_method$_ungrouped$FBSDKGraphRequestConnection$connectionFactory, (IMP *)&_logos_orig$_ungrouped$FBSDKGraphRequestConnection$connectionFactory);}Class _logos_class$_ungrouped$QCloudURLSessionTaskData = objc_getClass("QCloudURLSessionTaskData"); _logos_superclass$_ungrouped$QCloudURLSessionTaskData = class_getSuperclass(_logos_class$_ungrouped$QCloudURLSessionTaskData); { _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(setForbidenWirteToFile:), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$setForbidenWirteToFile$, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$setForbidenWirteToFile$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(totalRecivedLength), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$totalRecivedLength, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$totalRecivedLength);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(setIsTaskCancelledByStatusCodeCheck:), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$setIsTaskCancelledByStatusCodeCheck$, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$setIsTaskCancelledByStatusCodeCheck$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(isTaskCancelledByStatusCodeCheck), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$isTaskCancelledByStatusCodeCheck, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$isTaskCancelledByStatusCodeCheck);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(restData), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$restData, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$restData);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(initWithDowndingFileHandler:), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$initWithDowndingFileHandler$, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$initWithDowndingFileHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(uploadTempFilePath), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$uploadTempFilePath, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$uploadTempFilePath);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(forbidenWirteToFile), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$forbidenWirteToFile, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$forbidenWirteToFile);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$dealloc, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(cxx_destruct), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$cxx_destruct, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$cxx_destruct);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(data), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$data, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$data);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(identifier), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$identifier, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$identifier);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(appendData:), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$appendData$, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$appendData$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(response), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$response, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$response);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(setResponse:), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$setResponse$, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$setResponse$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(closeWrite), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$closeWrite, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$closeWrite);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(httpRequest), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$httpRequest, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$httpRequest);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(setHttpRequest:), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$setHttpRequest$, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$setHttpRequest$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(retryHandler), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$retryHandler, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$retryHandler);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(setRetryHandler:), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$setRetryHandler$, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$setRetryHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(init), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$init, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$init);}{ _logos_register_hook(_logos_class$_ungrouped$QCloudURLSessionTaskData, @selector(setIdentifier:), (IMP)&_logos_method$_ungrouped$QCloudURLSessionTaskData$setIdentifier$, (IMP *)&_logos_orig$_ungrouped$QCloudURLSessionTaskData$setIdentifier$);}Class _logos_class$_ungrouped$ADJSessionResponseData = objc_getClass("ADJSessionResponseData"); _logos_superclass$_ungrouped$ADJSessionResponseData = class_getSuperclass(_logos_class$_ungrouped$ADJSessionResponseData); { _logos_register_hook(_logos_class$_ungrouped$ADJSessionResponseData, @selector(successResponseData), (IMP)&_logos_method$_ungrouped$ADJSessionResponseData$successResponseData, (IMP *)&_logos_orig$_ungrouped$ADJSessionResponseData$successResponseData);}{ _logos_register_hook(_logos_class$_ungrouped$ADJSessionResponseData, @selector(failureResponseData), (IMP)&_logos_method$_ungrouped$ADJSessionResponseData$failureResponseData, (IMP *)&_logos_orig$_ungrouped$ADJSessionResponseData$failureResponseData);}Class _logos_class$_ungrouped$GULURLSessionDataResponse = objc_getClass("GULURLSessionDataResponse"); _logos_superclass$_ungrouped$GULURLSessionDataResponse = class_getSuperclass(_logos_class$_ungrouped$GULURLSessionDataResponse); { _logos_register_hook(_logos_class$_ungrouped$GULURLSessionDataResponse, @selector(HTTPResponse), (IMP)&_logos_method$_ungrouped$GULURLSessionDataResponse$HTTPResponse, (IMP *)&_logos_orig$_ungrouped$GULURLSessionDataResponse$HTTPResponse);}{ _logos_register_hook(_logos_class$_ungrouped$GULURLSessionDataResponse, @selector(initWithResponse:HTTPBody:), (IMP)&_logos_method$_ungrouped$GULURLSessionDataResponse$initWithResponse$HTTPBody$, (IMP *)&_logos_orig$_ungrouped$GULURLSessionDataResponse$initWithResponse$HTTPBody$);}{ _logos_register_hook(_logos_class$_ungrouped$GULURLSessionDataResponse, @selector(HTTPBody), (IMP)&_logos_method$_ungrouped$GULURLSessionDataResponse$HTTPBody, (IMP *)&_logos_orig$_ungrouped$GULURLSessionDataResponse$HTTPBody);}Class _logos_class$_ungrouped$FBAdBrowserSessionData = objc_getClass("FBAdBrowserSessionData"); Class _logos_metaclass$_ungrouped$FBAdBrowserSessionData = object_getClass(_logos_class$_ungrouped$FBAdBrowserSessionData); _logos_superclass$_ungrouped$FBAdBrowserSessionData = class_getSuperclass(_logos_class$_ungrouped$FBAdBrowserSessionData); _logos_supermetaclass$_ungrouped$FBAdBrowserSessionData = class_getSuperclass(_logos_metaclass$_ungrouped$FBAdBrowserSessionData); { _logos_register_hook(_logos_metaclass$_ungrouped$FBAdBrowserSessionData, @selector(initialize), (IMP)&_logos_meta_method$_ungrouped$FBAdBrowserSessionData$initialize, (IMP *)&_logos_meta_orig$_ungrouped$FBAdBrowserSessionData$initialize);}{ _logos_register_hook(_logos_metaclass$_ungrouped$FBAdBrowserSessionData, @selector(currentTimeMs), (IMP)&_logos_meta_method$_ungrouped$FBAdBrowserSessionData$currentTimeMs, (IMP *)&_logos_meta_orig$_ungrouped$FBAdBrowserSessionData$currentTimeMs);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(initWithURL:withHandlerTime:withLoadStart:withResponseEnd:withDOMContentLoaded:withScrollReady:withLoadFinish:withSessionFinish:), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$initWithURL$withHandlerTime$withLoadStart$withResponseEnd$withDOMContentLoaded$withScrollReady$withLoadFinish$withSessionFinish$, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$initWithURL$withHandlerTime$withLoadStart$withResponseEnd$withDOMContentLoaded$withScrollReady$withLoadFinish$withSessionFinish$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(handlerTimeMs), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$handlerTimeMs, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$handlerTimeMs);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(setHandlerTimeMs:), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$setHandlerTimeMs$, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$setHandlerTimeMs$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(setLoadStartMs:), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$setLoadStartMs$, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$setLoadStartMs$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(responseEndMs), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$responseEndMs, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$responseEndMs);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(setResponseEndMs:), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$setResponseEndMs$, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$setResponseEndMs$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(domContentLoadedMs), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$domContentLoadedMs, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$domContentLoadedMs);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(setDomContentLoadedMs:), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$setDomContentLoadedMs$, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$setDomContentLoadedMs$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(setScrollReadyMs:), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$setScrollReadyMs$, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$setScrollReadyMs$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(loadFinishMs), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$loadFinishMs, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$loadFinishMs);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(setLoadFinishMs:), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$setLoadFinishMs$, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$setLoadFinishMs$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(sessionFinishMs), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$sessionFinishMs, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$sessionFinishMs);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(setSessionFinishMs:), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$setSessionFinishMs$, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$setSessionFinishMs$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(cxx_destruct), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$cxx_destruct, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$cxx_destruct);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(url), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$url, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$url);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(setUrl:), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$setUrl$, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$setUrl$);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(dataMap), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$dataMap, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$dataMap);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(scrollReadyMs), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$scrollReadyMs, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$scrollReadyMs);}{ _logos_register_hook(_logos_class$_ungrouped$FBAdBrowserSessionData, @selector(loadStartMs), (IMP)&_logos_method$_ungrouped$FBAdBrowserSessionData$loadStartMs, (IMP *)&_logos_orig$_ungrouped$FBAdBrowserSessionData$loadStartMs);}Class _logos_class$_ungrouped$AFURLSessionManager = objc_getClass("AFURLSessionManager"); Class _logos_metaclass$_ungrouped$AFURLSessionManager = object_getClass(_logos_class$_ungrouped$AFURLSessionManager); _logos_superclass$_ungrouped$AFURLSessionManager = class_getSuperclass(_logos_class$_ungrouped$AFURLSessionManager); _logos_supermetaclass$_ungrouped$AFURLSessionManager = class_getSuperclass(_logos_metaclass$_ungrouped$AFURLSessionManager); { _logos_register_hook(_logos_metaclass$_ungrouped$AFURLSessionManager, @selector(supportsSecureCoding), (IMP)&_logos_meta_method$_ungrouped$AFURLSessionManager$supportsSecureCoding, (IMP *)&_logos_meta_orig$_ungrouped$AFURLSessionManager$supportsSecureCoding);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(downloadTaskWithRequest:progress:destination:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$downloadTaskWithRequest$progress$destination$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$downloadTaskWithRequest$progress$destination$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setResponseSerializer:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setResponseSerializer$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setResponseSerializer$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(uploadTaskWithStreamedRequest:progress:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$uploadTaskWithStreamedRequest$progress$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$uploadTaskWithStreamedRequest$progress$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(dataTaskWithRequest:uploadProgress:downloadProgress:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$dataTaskWithRequest$uploadProgress$downloadProgress$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$dataTaskWithRequest$uploadProgress$downloadProgress$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(responseSerializer), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$responseSerializer, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$responseSerializer);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(downloadTaskDidFinishDownloading), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$downloadTaskDidFinishDownloading, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$downloadTaskDidFinishDownloading);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidFinishDownloading:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloading$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloading$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setMutableTaskDelegatesKeyedByTaskIdentifier:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setMutableTaskDelegatesKeyedByTaskIdentifier$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setMutableTaskDelegatesKeyedByTaskIdentifier$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(addDelegateForDataTask:uploadProgress:downloadProgress:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$addDelegateForDataTask$uploadProgress$downloadProgress$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForDataTask$uploadProgress$downloadProgress$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(addDelegateForUploadTask:progress:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$addDelegateForUploadTask$progress$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForUploadTask$progress$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(addDelegateForDownloadTask:progress:destination:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$addDelegateForDownloadTask$progress$destination$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$addDelegateForDownloadTask$progress$destination$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(taskDescriptionForSessionTasks), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$taskDescriptionForSessionTasks, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$taskDescriptionForSessionTasks);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(mutableTaskDelegatesKeyedByTaskIdentifier), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$mutableTaskDelegatesKeyedByTaskIdentifier, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$mutableTaskDelegatesKeyedByTaskIdentifier);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(addNotificationObserverForTask:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$addNotificationObserverForTask$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$addNotificationObserverForTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDelegate:forTask:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDelegate$forTask$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDelegate$forTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(removeNotificationObserverForTask:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$removeNotificationObserverForTask$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$removeNotificationObserverForTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(dataTasks), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$dataTasks, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$dataTasks);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(uploadTasks), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$uploadTasks, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$uploadTasks);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(tasksForKeyPath:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$tasksForKeyPath$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$tasksForKeyPath$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(taskDidResume:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$taskDidResume$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$taskDidResume$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(taskDidSuspend:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$taskDidSuspend$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$taskDidSuspend$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(delegateForTask:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$delegateForTask$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$delegateForTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setSessionDidBecomeInvalid:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalid$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalid$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setSessionDidReceiveAuthenticationChallenge:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallenge$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallenge$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDidFinishEventsForBackgroundURLSession:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSession$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSession$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setTaskNeedNewBodyStream:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStream$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStream$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setTaskWillPerformHTTPRedirection:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirection$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirection$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setTaskDidSendBodyData:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setTaskDidSendBodyData$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidSendBodyData$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setTaskDidComplete:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setTaskDidComplete$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidComplete$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setTaskDidFinishCollectingMetrics:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetrics$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetrics$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidReceiveResponse:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponse$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponse$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidBecomeDownloadTask:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTask$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidReceiveData:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveData$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveData$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDataTaskWillCacheResponse:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponse$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponse$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidWriteData:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteData$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteData$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidResume:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidResume$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidResume$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(sessionDidReceiveAuthenticationChallenge), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$sessionDidReceiveAuthenticationChallenge, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$sessionDidReceiveAuthenticationChallenge);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(taskWillPerformHTTPRedirection), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$taskWillPerformHTTPRedirection, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$taskWillPerformHTTPRedirection);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(dataTaskDidReceiveResponse), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$dataTaskDidReceiveResponse, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$dataTaskDidReceiveResponse);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(didFinishEventsForBackgroundURLSession), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$didFinishEventsForBackgroundURLSession, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$didFinishEventsForBackgroundURLSession);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(sessionDidBecomeInvalid), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$sessionDidBecomeInvalid, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$sessionDidBecomeInvalid);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(authenticationChallengeHandler), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$authenticationChallengeHandler, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$authenticationChallengeHandler);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(taskNeedNewBodyStream), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$taskNeedNewBodyStream, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$taskNeedNewBodyStream);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(taskDidSendBodyData), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$taskDidSendBodyData, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$taskDidSendBodyData);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(removeDelegateForTask:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$removeDelegateForTask$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$removeDelegateForTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(taskDidComplete), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$taskDidComplete, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$taskDidComplete);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(taskDidFinishCollectingMetrics), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$taskDidFinishCollectingMetrics, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$taskDidFinishCollectingMetrics);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(dataTaskWillCacheResponse), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$dataTaskWillCacheResponse, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$dataTaskWillCacheResponse);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(dataTaskDidBecomeDownloadTask), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$dataTaskDidBecomeDownloadTask, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$dataTaskDidBecomeDownloadTask);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(dataTaskDidReceiveData), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$dataTaskDidReceiveData, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$dataTaskDidReceiveData);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(downloadTaskDidWriteData), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$downloadTaskDidWriteData, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$downloadTaskDidWriteData);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(downloadTaskDidResume), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$downloadTaskDidResume, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$downloadTaskDidResume);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(invalidateSessionCancelingTasks:resetSession:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$invalidateSessionCancelingTasks$resetSession$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$invalidateSessionCancelingTasks$resetSession$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(uploadTaskWithRequest:fromFile:progress:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$uploadTaskWithRequest$fromFile$progress$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$uploadTaskWithRequest$fromFile$progress$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(uploadTaskWithRequest:fromData:progress:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$uploadTaskWithRequest$fromData$progress$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$uploadTaskWithRequest$fromData$progress$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(uploadProgressForTask:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$uploadProgressForTask$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$uploadProgressForTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(downloadProgressForTask:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$downloadProgressForTask$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$downloadProgressForTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(downloadTaskWithResumeData:progress:destination:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$downloadTaskWithResumeData$progress$destination$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$downloadTaskWithResumeData$progress$destination$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setSessionDidBecomeInvalidBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalidBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidBecomeInvalidBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setSessionDidReceiveAuthenticationChallengeBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallengeBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setSessionDidReceiveAuthenticationChallengeBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDidFinishEventsForBackgroundURLSessionBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSessionBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDidFinishEventsForBackgroundURLSessionBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setTaskWillPerformHTTPRedirectionBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirectionBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setTaskWillPerformHTTPRedirectionBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setTaskDidSendBodyDataBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setTaskDidSendBodyDataBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidSendBodyDataBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setTaskDidCompleteBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setTaskDidCompleteBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidCompleteBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidReceiveResponseBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponseBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveResponseBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setTaskNeedNewBodyStreamBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStreamBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setTaskNeedNewBodyStreamBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setTaskDidFinishCollectingMetricsBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetricsBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setTaskDidFinishCollectingMetricsBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidBecomeDownloadTaskBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTaskBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidBecomeDownloadTaskBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDataTaskDidReceiveDataBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveDataBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskDidReceiveDataBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDataTaskWillCacheResponseBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponseBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDataTaskWillCacheResponseBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidWriteDataBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteDataBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidWriteDataBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidFinishDownloadingBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloadingBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidFinishDownloadingBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setDownloadTaskDidResumeBlock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setDownloadTaskDidResumeBlock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setDownloadTaskDidResumeBlock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setAuthenticationChallengeHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setAuthenticationChallengeHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setAuthenticationChallengeHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(init), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$init, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$init);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, sel_registerName("dealloc"), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$dealloc, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$dealloc);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(description), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$description, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$description);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(encodeWithCoder:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$encodeWithCoder$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$encodeWithCoder$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(initWithCoder:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$initWithCoder$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$initWithCoder$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(lock), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$lock, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$lock);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setOperationQueue:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setOperationQueue$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setOperationQueue$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(operationQueue), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$operationQueue, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$operationQueue);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(session), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$session, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$session);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setSession:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setSession$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setSession$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:didBecomeInvalidWithError:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$didBecomeInvalidWithError$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$didBecomeInvalidWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:didReceiveChallenge:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$didReceiveChallenge$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$didReceiveChallenge$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:task:didReceiveChallenge:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$task$didReceiveChallenge$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didReceiveChallenge$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:task:needNewBodyStream:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$task$needNewBodyStream$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$needNewBodyStream$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSessionDidFinishEventsForBackgroundURLSession:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSessionDidFinishEventsForBackgroundURLSession$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSessionDidFinishEventsForBackgroundURLSession$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:task:didFinishCollectingMetrics:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$task$didFinishCollectingMetrics$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didFinishCollectingMetrics$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:task:didCompleteWithError:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$task$didCompleteWithError$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$task$didCompleteWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:downloadTask:didFinishDownloadingToURL:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didFinishDownloadingToURL$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didFinishDownloadingToURL$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didWriteData$totalBytesWritten$totalBytesExpectedToWrite$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didWriteData$totalBytesWritten$totalBytesExpectedToWrite$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:downloadTask:didResumeAtOffset:expectedTotalBytes:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didResumeAtOffset$expectedTotalBytes$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$downloadTask$didResumeAtOffset$expectedTotalBytes$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:dataTask:didReceiveData:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveData$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveData$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didReceiveResponse$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:dataTask:didBecomeDownloadTask:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$dataTask$didBecomeDownloadTask$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$didBecomeDownloadTask$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(URLSession:dataTask:willCacheResponse:completionHandler:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$URLSession$dataTask$willCacheResponse$completionHandler$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$URLSession$dataTask$willCacheResponse$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setLock:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setLock$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setLock$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(tasks), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$tasks, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$tasks);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setCompletionQueue:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setCompletionQueue$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setCompletionQueue$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(completionQueue), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$completionQueue, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$completionQueue);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(sessionConfiguration), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$sessionConfiguration, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$sessionConfiguration);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setSessionConfiguration:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setSessionConfiguration$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setSessionConfiguration$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setSecurityPolicy:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setSecurityPolicy$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setSecurityPolicy$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(securityPolicy), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$securityPolicy, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$securityPolicy);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(initWithSessionConfiguration:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$initWithSessionConfiguration$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$initWithSessionConfiguration$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setCompletionGroup:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setCompletionGroup$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setCompletionGroup$);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(completionGroup), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$completionGroup, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$completionGroup);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(downloadTasks), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$downloadTasks, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$downloadTasks);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(reachabilityManager), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$reachabilityManager, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$reachabilityManager);}{ _logos_register_hook(_logos_class$_ungrouped$AFURLSessionManager, @selector(setReachabilityManager:), (IMP)&_logos_method$_ungrouped$AFURLSessionManager$setReachabilityManager$, (IMP *)&_logos_orig$_ungrouped$AFURLSessionManager$setReachabilityManager$);}Class _logos_class$_ungrouped$XCDURLGETOperation = objc_getClass("XCDURLGETOperation"); Class _logos_metaclass$_ungrouped$XCDURLGETOperation = object_getClass(_logos_class$_ungrouped$XCDURLGETOperation); _logos_superclass$_ungrouped$XCDURLGETOperation = class_getSuperclass(_logos_class$_ungrouped$XCDURLGETOperation); _logos_supermetaclass$_ungrouped$XCDURLGETOperation = class_getSuperclass(_logos_metaclass$_ungrouped$XCDURLGETOperation); { _logos_register_hook(_logos_metaclass$_ungrouped$XCDURLGETOperation, @selector(automaticallyNotifiesObserversForKey:), (IMP)&_logos_meta_method$_ungrouped$XCDURLGETOperation$automaticallyNotifiesObserversForKey$, (IMP *)&_logos_meta_orig$_ungrouped$XCDURLGETOperation$automaticallyNotifiesObserversForKey$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(operationStartSemaphore), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$operationStartSemaphore, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$operationStartSemaphore);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(initWithURL:info:cookes:), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$initWithURL$info$cookes$, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$initWithURL$info$cookes$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(description), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$description, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$description);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(error), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$error, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$error);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(cancel), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$cancel, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$cancel);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(start), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$start, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$start);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(setError:), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$setError$, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$setError$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(isFinished), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$isFinished, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$isFinished);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(isExecuting), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$isExecuting, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$isExecuting);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(isAsynchronous), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$isAsynchronous, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$isAsynchronous);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(url), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$url, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$url);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(finish), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$finish, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$finish);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(info), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$info, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$info);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(session), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$session, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$session);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(setSession:), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$setSession$, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$setSession$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(finishWithError:), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$finishWithError$, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$finishWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(response), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$response, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$response);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(URLSession:task:didCompleteWithError:), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$URLSession$task$didCompleteWithError$, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$task$didCompleteWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveResponse$completionHandler$, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveResponse$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(setResponse:), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$setResponse$, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$setResponse$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(URLSession:dataTask:didReceiveData:), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveData$, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$URLSession$dataTask$didReceiveData$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(setIsFinished:), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$setIsFinished$, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$setIsFinished$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(cookies), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$cookies, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$cookies);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(setIsExecuting:), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$setIsExecuting$, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$setIsExecuting$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(dataTask), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$dataTask, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$dataTask);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(setDataTask:), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$setDataTask$, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$setDataTask$);}{ _logos_register_hook(_logos_class$_ungrouped$XCDURLGETOperation, @selector(startRequest), (IMP)&_logos_method$_ungrouped$XCDURLGETOperation$startRequest, (IMP *)&_logos_orig$_ungrouped$XCDURLGETOperation$startRequest);}Class _logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate = objc_getClass("RSTTAPIHTTPSessionDelegate"); _logos_superclass$_ungrouped$RSTTAPIHTTPSessionDelegate = class_getSuperclass(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate); { _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(setStopTaskID:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopTaskID$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopTaskID$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(cxx_destruct), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$cxx_destruct, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$cxx_destruct);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(cxx_construct), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$cxx_construct, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$cxx_construct);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:didBecomeInvalidWithError:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didBecomeInvalidWithError$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didBecomeInvalidWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:didReceiveChallenge:completionHandler:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didReceiveChallenge$completionHandler$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$didReceiveChallenge$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSessionDidFinishEventsForBackgroundURLSession:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSessionDidFinishEventsForBackgroundURLSession$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSessionDidFinishEventsForBackgroundURLSession$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$willPerformHTTPRedirection$newRequest$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:task:didReceiveChallenge:completionHandler:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didReceiveChallenge$completionHandler$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didReceiveChallenge$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:task:needNewBodyStream:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$needNewBodyStream$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$needNewBodyStream$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:task:didSendBodyData:totalBytesSent:totalBytesExpectedToSend:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didSendBodyData$totalBytesSent$totalBytesExpectedToSend$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:dataTask:didReceiveData:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveData$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveData$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:dataTask:didReceiveResponse:completionHandler:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveResponse$completionHandler$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didReceiveResponse$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:task:didCompleteWithError:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didCompleteWithError$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$task$didCompleteWithError$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:dataTask:didBecomeDownloadTask:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeDownloadTask$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeDownloadTask$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:dataTask:didBecomeStreamTask:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeStreamTask$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$didBecomeStreamTask$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(URLSession:dataTask:willCacheResponse:completionHandler:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$willCacheResponse$completionHandler$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$URLSession$dataTask$willCacheResponse$completionHandler$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(stopID), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$stopID, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$stopID);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(setStopID:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopID$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setStopID$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(ID), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$ID, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$ID);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(init:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$init$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$init$);}{ _logos_register_hook(_logos_class$_ungrouped$RSTTAPIHTTPSessionDelegate, @selector(setID:), (IMP)&_logos_method$_ungrouped$RSTTAPIHTTPSessionDelegate$setID$, (IMP *)&_logos_orig$_ungrouped$RSTTAPIHTTPSessionDelegate$setID$);}Class _logos_class$_ungrouped$VNGMoatAnalytics = objc_getClass("VNGMoatAnalytics"); _logos_superclass$_ungrouped$VNGMoatAnalytics = class_getSuperclass(_logos_class$_ungrouped$VNGMoatAnalytics); { _logos_register_hook(_logos_class$_ungrouped$VNGMoatAnalytics, @selector(prepareNativeDisplayTracking:error:), (IMP)&_logos_method$_ungrouped$VNGMoatAnalytics$prepareNativeDisplayTracking$error$, (IMP *)&_logos_orig$_ungrouped$VNGMoatAnalytics$prepareNativeDisplayTracking$error$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatAnalytics, @selector(IDFACollectionBlocked), (IMP)&_logos_method$_ungrouped$VNGMoatAnalytics$IDFACollectionBlocked, (IMP *)&_logos_orig$_ungrouped$VNGMoatAnalytics$IDFACollectionBlocked);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatAnalytics, @selector(initializeDisplayWebViewCalled), (IMP)&_logos_method$_ungrouped$VNGMoatAnalytics$initializeDisplayWebViewCalled, (IMP *)&_logos_orig$_ungrouped$VNGMoatAnalytics$initializeDisplayWebViewCalled);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatAnalytics, @selector(addTrackedWebView:), (IMP)&_logos_method$_ungrouped$VNGMoatAnalytics$addTrackedWebView$, (IMP *)&_logos_orig$_ungrouped$VNGMoatAnalytics$addTrackedWebView$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatAnalytics, @selector(initialized), (IMP)&_logos_method$_ungrouped$VNGMoatAnalytics$initialized, (IMP *)&_logos_orig$_ungrouped$VNGMoatAnalytics$initialized);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatAnalytics, @selector(setDebug:), (IMP)&_logos_method$_ungrouped$VNGMoatAnalytics$setDebug$, (IMP *)&_logos_orig$_ungrouped$VNGMoatAnalytics$setDebug$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatAnalytics, @selector(isInitialized), (IMP)&_logos_method$_ungrouped$VNGMoatAnalytics$isInitialized, (IMP *)&_logos_orig$_ungrouped$VNGMoatAnalytics$isInitialized);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatAnalytics, @selector(setInitialized:), (IMP)&_logos_method$_ungrouped$VNGMoatAnalytics$setInitialized$, (IMP *)&_logos_orig$_ungrouped$VNGMoatAnalytics$setInitialized$);}Class _logos_class$_ungrouped$VNGMoatBaseTracker = objc_getClass("VNGMoatBaseTracker"); _logos_superclass$_ungrouped$VNGMoatBaseTracker = class_getSuperclass(_logos_class$_ungrouped$VNGMoatBaseTracker); { _logos_register_hook(_logos_class$_ungrouped$VNGMoatBaseTracker, @selector(setIsNativeVideo:), (IMP)&_logos_method$_ungrouped$VNGMoatBaseTracker$setIsNativeVideo$, (IMP *)&_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsNativeVideo$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatBaseTracker, @selector(setStoppedTracking:), (IMP)&_logos_method$_ungrouped$VNGMoatBaseTracker$setStoppedTracking$, (IMP *)&_logos_orig$_ungrouped$VNGMoatBaseTracker$setStoppedTracking$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatBaseTracker, @selector(notifyDelegateOfStartFailure:reason:), (IMP)&_logos_method$_ungrouped$VNGMoatBaseTracker$notifyDelegateOfStartFailure$reason$, (IMP *)&_logos_orig$_ungrouped$VNGMoatBaseTracker$notifyDelegateOfStartFailure$reason$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatBaseTracker, @selector(checkFalseStart), (IMP)&_logos_method$_ungrouped$VNGMoatBaseTracker$checkFalseStart, (IMP *)&_logos_orig$_ungrouped$VNGMoatBaseTracker$checkFalseStart);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatBaseTracker, @selector(setIsNativeDisplay:), (IMP)&_logos_method$_ungrouped$VNGMoatBaseTracker$setIsNativeDisplay$, (IMP *)&_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsNativeDisplay$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatBaseTracker, @selector(isNativeDisplay), (IMP)&_logos_method$_ungrouped$VNGMoatBaseTracker$isNativeDisplay, (IMP *)&_logos_orig$_ungrouped$VNGMoatBaseTracker$isNativeDisplay);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatBaseTracker, @selector(isActive), (IMP)&_logos_method$_ungrouped$VNGMoatBaseTracker$isActive, (IMP *)&_logos_orig$_ungrouped$VNGMoatBaseTracker$isActive);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatBaseTracker, @selector(setIsActive:), (IMP)&_logos_method$_ungrouped$VNGMoatBaseTracker$setIsActive$, (IMP *)&_logos_orig$_ungrouped$VNGMoatBaseTracker$setIsActive$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatBaseTracker, @selector(startTracking), (IMP)&_logos_method$_ungrouped$VNGMoatBaseTracker$startTracking, (IMP *)&_logos_orig$_ungrouped$VNGMoatBaseTracker$startTracking);}Class _logos_class$_ungrouped$VNGMoatWebTracker = objc_getClass("VNGMoatWebTracker"); _logos_superclass$_ungrouped$VNGMoatWebTracker = class_getSuperclass(_logos_class$_ungrouped$VNGMoatWebTracker); { _logos_register_hook(_logos_class$_ungrouped$VNGMoatWebTracker, @selector(setViewToTrack:withWebComponent:), (IMP)&_logos_method$_ungrouped$VNGMoatWebTracker$setViewToTrack$withWebComponent$, (IMP *)&_logos_orig$_ungrouped$VNGMoatWebTracker$setViewToTrack$withWebComponent$);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatWebTracker, @selector(installBridge), (IMP)&_logos_method$_ungrouped$VNGMoatWebTracker$installBridge, (IMP *)&_logos_orig$_ungrouped$VNGMoatWebTracker$installBridge);}{ _logos_register_hook(_logos_class$_ungrouped$VNGMoatWebTracker, @selector(installWKWebViewBridge), (IMP)&_logos_method$_ungrouped$VNGMoatWebTracker$installWKWebViewBridge, (IMP *)&_logos_orig$_ungrouped$VNGMoatWebTracker$installWKWebViewBridge);}} }
