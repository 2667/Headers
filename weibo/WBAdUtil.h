//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBAdUtil : NSObject
{
}

+ (_Bool)isExistedCacheResourceWithPosid:(id)arg1;
+ (id)lastFlashLinkAdId;
+ (void)saveLastFlashLinkAdId:(id)arg1;
+ (_Bool)currentDeviceIsIPad;
+ (_Bool)currentDeviceIsIPhone;
+ (id)currentDeviceType;
+ (id)getMobiInfo;
+ (id)macAddress;
+ (_Bool)isFileCreateTimeMoreThen7Day:(id)arg1;
+ (id)objectToJson:(id)arg1;
+ (id)jsonToObject:(id)arg1;
+ (_Bool)isAdSourceExist:(id)arg1;
+ (id)urlDecode:(id)arg1;
+ (id)urlEncode:(id)arg1;
+ (_Bool)isFileExist:(id)arg1;
+ (id)wbAdCacheDirectory;
+ (id)allContentsInDirectory:(id)arg1;
+ (void)delFile:(id)arg1;
+ (void)initDocumentPath:(id)arg1;
+ (id)ad_jsonToAdInfo:(id)arg1;
+ (id)requestHeaderSetting:(id)arg1;
+ (id)clientUserAgent;
+ (long long)_currentTimeOfDayIsStart:(_Bool)arg1;
+ (long long)currentTimeOfDayEnd;
+ (long long)currentTimeOfDayStart;
+ (long long)currentTimeMillis;
+ (id)stringToDate:(id)arg1;
+ (id)dateToString:(id)arg1;
+ (id)getDateFormatter;
+ (id)md5WithUpperCase:(id)arg1;
+ (id)md5:(id)arg1;
+ (id)networkType;
+ (int)currMobileAccessInternetType;
+ (id)absolutePathForDocumentsFile:(id)arg1;

@end

