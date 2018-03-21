//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ZCSerializableProtocol-Protocol.h"

@class NSArray, NSString;

@interface ZCacheAppConfigModel : NSObject <ZCSerializableProtocol>
{
    _Bool _isOptional;
    _Bool _isPreview;
    NSString *_name;
    NSString *_version;
    unsigned long long _seq;
    long long _publishTime;
    double _notificationTime;
    unsigned long long _flag;
    NSString *_zipPrefix;
    NSString *_mappingUrl;
    NSArray *_folders;
    long long _appMonitor;
    NSString *_installedVersion;
    unsigned long long _installedSeq;
    long long _status;
}

+ (id)deletedAppConfig:(id)arg1;
+ (id)containerKeyForProperty;
+ (id)keyPathsForProperties;
+ (id)ignoredProperties;
@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) unsigned long long installedSeq; // @synthesize installedSeq=_installedSeq;
@property(readonly, copy, nonatomic) NSString *installedVersion; // @synthesize installedVersion=_installedVersion;
@property(readonly, nonatomic) _Bool isOptional; // @synthesize isOptional=_isOptional;
@property(readonly, nonatomic) long long appMonitor; // @synthesize appMonitor=_appMonitor;
@property(readonly, copy, nonatomic) NSArray *folders; // @synthesize folders=_folders;
@property(readonly, copy, nonatomic) NSString *mappingUrl; // @synthesize mappingUrl=_mappingUrl;
@property(readonly, copy, nonatomic) NSString *zipPrefix; // @synthesize zipPrefix=_zipPrefix;
@property(readonly, nonatomic) unsigned long long flag; // @synthesize flag=_flag;
@property(readonly, nonatomic) double notificationTime; // @synthesize notificationTime=_notificationTime;
@property(readonly, nonatomic) long long publishTime; // @synthesize publishTime=_publishTime;
@property(readonly, nonatomic) unsigned long long seq; // @synthesize seq=_seq;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)descriptionOfFlag;
- (id)dumpProperty:(id)arg1 withValue:(id)arg2 maxLength:(unsigned long long)arg3;
@property(readonly, copy) NSString *description;
- (id)dictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getFullFilePath:(id)arg1;
- (id)getAppInnerPath;
- (id)getAppPath;
- (_Bool)isNetworkSupport;
- (id)getZipPreviewPrefix;
- (id)getFinalZipPrefix;
- (id)getZipUrl:(unsigned long long)arg1;
- (void)markAsPreview;
- (_Bool)isInstalled;
- (_Bool)isIncrement;
- (_Bool)isValid;
- (_Bool)isValidAppType;
- (id)markDelete;
- (void)mergeAppInfo:(id)arg1;
- (id)copyWithAppInfo:(id)arg1;
- (id)copyWithFlag:(unsigned long long)arg1;
- (id)copyWithStatus:(long long)arg1;
- (id)copyWithIsOptional:(_Bool)arg1;
- (id)copyWithInstalledVersion:(id)arg1 withInstalledSeq:(unsigned long long)arg2;
- (id)copyWithVersion:(id)arg1 withSeq:(unsigned long long)arg2;
- (id)copyWithOnlineConfig:(id)arg1;
- (id)copyWithNotificationTime:(double)arg1;
@property(readonly, nonatomic) unsigned long long encryptionType;
@property(readonly, nonatomic) _Bool is3GUpdate;
@property(readonly, nonatomic) _Bool is2GUpdate;
@property(readonly, nonatomic) unsigned long long updateInfo;
@property(readonly, nonatomic) unsigned long long updateType;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) double weightedPriority;
@property(readonly, nonatomic) unsigned long long priority;
- (void)setStatus:(long long)arg1;
- (void)setFolders:(id)arg1;
- (void)setMappingUrl:(id)arg1;
- (void)setZipPrefix:(id)arg1;
- (void)setInstalledSeq:(unsigned long long)arg1;
- (void)setInstalledVersion:(id)arg1;
- (void)setIsOptional:(_Bool)arg1;
- (void)setFlag:(unsigned long long)arg1;
- (void)setNotificationTime:(double)arg1;
- (void)setPublishTime:(long long)arg1;
- (void)setSeq:(unsigned long long)arg1;
- (void)setVersion:(id)arg1;
- (void)setName:(id)arg1;
- (id)initWithName:(id)arg1 withIsOptional:(_Bool)arg2;
- (id)initWithDictionary:(id)arg1 withName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
