//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, ODResDownloadConfig;
@protocol OS_dispatch_queue;

@interface ODResDownloadMgr : NSObject
{
    NSObject *_unzipLock;
    NSObject *_snapShotLock;
    ODResDownloadConfig *_config;
    NSMutableDictionary *_processResItemMap;
    NSMutableArray *_waitExecuteList;
    NSMutableArray *_executingList;
    NSObject<OS_dispatch_queue> *_processQueue;
    NSRecursiveLock *_lock;
}

@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue; // @synthesize processQueue=_processQueue;
@property(retain, nonatomic) NSMutableArray *executingList; // @synthesize executingList=_executingList;
@property(retain, nonatomic) NSMutableArray *waitExecuteList; // @synthesize waitExecuteList=_waitExecuteList;
@property(retain, nonatomic) NSMutableDictionary *processResItemMap; // @synthesize processResItemMap=_processResItemMap;
@property(retain, nonatomic) ODResDownloadConfig *config; // @synthesize config=_config;
- (_Bool)createSnapShotForDirectory:(id)arg1;
- (_Bool)checkSnapShotForDirectory:(id)arg1 RemoveDirIfFail:(_Bool)arg2;
- (_Bool)unZipPacket:(id)arg1 clearZipPath:(_Bool)arg2;
- (void)executeDownload_Block:(id)arg1;
- (void)downLoadRes:(int)arg1 delegate:(id)arg2;

@end
