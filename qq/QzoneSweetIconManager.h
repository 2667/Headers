//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IQZUrlDownloaderDelegate-Protocol.h>

@class NSMutableDictionary, NSString, QzoneSweetVipInfo;
@protocol OS_dispatch_queue;

@interface QzoneSweetIconManager : NSObject <IQZUrlDownloaderDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    QzoneSweetVipInfo *_sweetVipInfo;
    NSMutableDictionary *_downloadingStatusDic;
    long long _compformanceFailureCount;
    NSMutableDictionary *_fileExistsStatusCache;
}

+ (id)sweetVipPathForKey:(id)arg1;
+ (id)sweetVipDirectoryPath;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *fileExistsStatusCache; // @synthesize fileExistsStatusCache=_fileExistsStatusCache;
@property(nonatomic) long long compformanceFailureCount; // @synthesize compformanceFailureCount=_compformanceFailureCount;
@property(retain, nonatomic) NSMutableDictionary *downloadingStatusDic; // @synthesize downloadingStatusDic=_downloadingStatusDic;
@property(retain, nonatomic) QzoneSweetVipInfo *sweetVipInfo; // @synthesize sweetVipInfo=_sweetVipInfo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)sweetIconFromLocalWithKey:(id)arg1;
- (id)sweetIconWithInfo:(id)arg1;
- (id)sweetIcon;
- (_Bool)isSweetIconResourceExistsForKey:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
