//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HTSMotionDelegate-Protocol.h"

@class HTSMotionManager, NSMutableArray, NSString, NSThread;
@protocol HTSMotionUploadDelegate, OS_dispatch_queue;

@interface HTSMotionUploadManager : NSObject <HTSMotionDelegate>
{
    _Bool _requestSettings;
    _Bool _enabled;
    id <HTSMotionUploadDelegate> _delegate;
    HTSMotionManager *_motionManager;
    NSThread *_workerThread;
    NSString *_scene;
    CDUnknownBlockType _commonParamsBlock;
    NSMutableArray *_gyroData;
    double _startTime;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool requestSettings; // @synthesize requestSettings=_requestSettings;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableArray *gyroData; // @synthesize gyroData=_gyroData;
@property(copy, nonatomic) CDUnknownBlockType commonParamsBlock; // @synthesize commonParamsBlock=_commonParamsBlock;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSThread *workerThread; // @synthesize workerThread=_workerThread;
@property(retain, nonatomic) HTSMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) __weak id <HTSMotionUploadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_asyncPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)p_fetchMotionUploadSettingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)threadRun;
- (id)init;
- (void)motionManager:(id)arg1 updateGyroData:(id)arg2;
- (id)p_processOfMotionData:(id)arg1;
- (void)p_uploadGyroData:(id)arg1 scene:(id)arg2 startTime:(id)arg3;
- (void)p_reallyStartUploadGyroDataForScene:(id)arg1;
- (void)p_innerStopUploadGyroData:(id)arg1;
- (void)p_innerStartUploadGyroDataForScene:(id)arg1;
- (void)setCommonParamBlock:(CDUnknownBlockType)arg1;
- (void)stopUploadGyroData;
- (void)startUploadGyroDataForScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
