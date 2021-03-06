//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTAccountMulticastProtocol-Protocol.h"

@class NSFileManager, NSMutableArray, NSString, TTForumPostImageCacheTask;
@protocol OS_dispatch_queue;

@interface TTForumPostImageCache : NSObject <TTAccountMulticastProtocol>
{
    NSFileManager *_fileManager;
    NSString *_diskCachePath;
    TTForumPostImageCacheTask *_executingTask;
    NSMutableArray *_waitingTasks;
    NSObject<OS_dispatch_queue> *_compressQueue;
    long long _maxCacheAge;
    unsigned long long _maxCacheSize;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(nonatomic) long long maxCacheAge; // @synthesize maxCacheAge=_maxCacheAge;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *compressQueue; // @synthesize compressQueue=_compressQueue;
@property(retain, nonatomic) NSMutableArray *waitingTasks; // @synthesize waitingTasks=_waitingTasks;
@property(retain, nonatomic) TTForumPostImageCacheTask *executingTask; // @synthesize executingTask=_executingTask;
- (void).cxx_destruct;
- (void)cleanDisk;
- (id)_filePathWithName:(id)arg1;
- (id)_taskFromOriginalSource:(id)arg1;
- (void)deleteTask:(id)arg1;
- (void)deleteCacheSource:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)removeCacheSource:(id)arg1;
- (id)saveCacheSource:(id)arg1;
- (id)saveCacheWithAssets:(id)arg1;
- (_Bool)isPushIntoWatingTask:(id)arg1;
- (void)getPhotoWithAssetModel:(id)arg1 completion:(CDUnknownBlockType)arg2 task:(id)arg3;
- (_Bool)fileExist:(id)arg1;
- (void)queryFilePathWithSource:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)onAccountStatusChanged:(long long)arg1 platform:(id)arg2;
- (void)_compress;
- (void)_releaseWaiting;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

