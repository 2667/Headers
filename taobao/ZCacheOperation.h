//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSRecursiveLock, NSString, ZCDownloadTask, ZCacheAppConfigModel, ZCacheAppUpdateMonitorInfo, ZCacheResource;

@interface ZCacheOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    ZCacheAppConfigModel *_appConfig;
    long long _type;
    NSError *_error;
    CDUnknownBlockType _progressBlock;
    NSRecursiveLock *_lock;
    ZCDownloadTask *_task;
    NSString *_url;
    ZCacheResource *_resource;
    NSString *_tempPath;
    double _startTime;
    ZCacheAppUpdateMonitorInfo *_monitorInfo;
    unsigned long long _encryptionType;
}

+ (long long)getOperationType:(id)arg1;
@property(nonatomic) unsigned long long encryptionType; // @synthesize encryptionType=_encryptionType;
@property(retain, nonatomic) ZCacheAppUpdateMonitorInfo *monitorInfo; // @synthesize monitorInfo=_monitorInfo;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain, nonatomic) ZCacheResource *resource; // @synthesize resource=_resource;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) ZCDownloadTask *task; // @synthesize task=_task;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) ZCacheAppConfigModel *appConfig; // @synthesize appConfig=_appConfig;
- (void).cxx_destruct;
- (_Bool)isConcurrent;
- (void)reportUpdateStat;
- (void)operationFinished;
- (void)operationFinishedWithError:(id)arg1;
- (void)operationStartExecute;
- (_Bool)copyApp:(id)arg1 fromTempPath:(id)arg2 withError:(id *)arg3;
- (id)readAppInfo:(id)arg1;
- (_Bool)verify:(id)arg1;
- (id)unzip:(id)arg1;
- (void)checkAndInstall:(id)arg1;
- (void)downloadFinished;
- (void)reportProgress:(double)arg1;
- (_Bool)canContinue;
- (void)startUpdate;
- (void)startDelete;
- (void)startClean;
- (void)start;
- (id)init;
- (id)initWithConfig:(id)arg1;

@end

