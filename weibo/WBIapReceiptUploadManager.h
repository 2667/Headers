//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WBIapStorageQueue;
@protocol OS_dispatch_source, WBIapStorageQueueItem;

@interface WBIapReceiptUploadManager : NSObject
{
    _Bool _timerSuspend;
    NSObject<OS_dispatch_source> *_uploadTimer;
    WBIapStorageQueue *_uploadQueue;
    id <WBIapStorageQueueItem> _currentUploadingItem;
}

+ (id)sharedManager;
@property(retain, nonatomic) id <WBIapStorageQueueItem> currentUploadingItem; // @synthesize currentUploadingItem=_currentUploadingItem;
@property(retain, nonatomic) WBIapStorageQueue *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
@property(nonatomic) _Bool timerSuspend; // @synthesize timerSuspend=_timerSuspend;
- (void).cxx_destruct;
- (void)_willTerminate;
- (void)_didEnterForeground;
- (void)_didEnterBackground;
- (void)stopTimer;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)_setupTimer;
- (void)_setupQueue;
- (_Bool)hasSameKindUploadItem:(id)arg1;
- (void)_setupNotifications;
- (void)dealloc;
- (id)init;
- (void)_verifyReceiptDic:(id)arg1;
- (void)triggerUpload;
- (void)addUploadItem:(id)arg1;

@end

