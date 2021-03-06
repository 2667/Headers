//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MGLivenessProtocolDelegate-Protocol.h"

@class APBMonitor, MGLivenessDetectionFrame, MGLivenessDetector, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AFEFaceWrapper : NSObject <MGLivenessProtocolDelegate>
{
    NSObject<OS_dispatch_queue> *queue;
    NSObject<OS_dispatch_semaphore> *_faceWrapperLock;
    _Bool _firstDetectFace;
    MGLivenessDetector *_detector;
    MGLivenessDetectionFrame *_frameCached;
    APBMonitor *_monitor;
}

@property(nonatomic) _Bool firstDetectFace; // @synthesize firstDetectFace=_firstDetectFace;
@property(retain, nonatomic) APBMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) MGLivenessDetectionFrame *frameCached; // @synthesize frameCached=_frameCached;
@property(retain, nonatomic) MGLivenessDetector *detector; // @synthesize detector=_detector;
- (void).cxx_destruct;
- (void)onFrameDetected:(id)arg1 andTimeout:(float)arg2;
- (int)onDetectionSuccess:(id)arg1;
- (void)onDetectionFailed:(int)arg1;
- (void)detectWithBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)detect:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithMonitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

