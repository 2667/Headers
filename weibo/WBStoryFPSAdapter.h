//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface WBStoryFPSAdapter : NSObject
{
    NSMutableArray *_slideWindow;
    unsigned int _slideWindowSize;
    CDStruct_1b6d18a9 _halfFrameDuration;
    CDStruct_1b6d18a9 _maxFrameDuration;
    float _speedRate;
    float _targetFps;
    float _fpsTolerate;
    int _inputFrameCount;
    int _outputFrameCount;
    CDStruct_1b6d18a9 _firstInputTime;
    CDStruct_1b6d18a9 _lastOutputTime;
}

+ (struct opaqueCMSampleBuffer *)sampleBufferCreateCopy:(struct opaqueCMSampleBuffer *)arg1 WithNewTiming:(CDStruct_1b6d18a9)arg2;
@property(nonatomic) CDStruct_1b6d18a9 lastOutputTime; // @synthesize lastOutputTime=_lastOutputTime;
@property(nonatomic) CDStruct_1b6d18a9 firstInputTime; // @synthesize firstInputTime=_firstInputTime;
@property(nonatomic) int outputFrameCount; // @synthesize outputFrameCount=_outputFrameCount;
@property(nonatomic) int inputFrameCount; // @synthesize inputFrameCount=_inputFrameCount;
@property(nonatomic) float fpsTolerate; // @synthesize fpsTolerate=_fpsTolerate;
@property(nonatomic) float targetFps; // @synthesize targetFps=_targetFps;
@property(nonatomic) float speedRate; // @synthesize speedRate=_speedRate;
- (void).cxx_destruct;
- (int)dropOriginalTime:(CDStruct_1b6d18a9)arg1 orChangeTo:(CDStruct_1b6d18a9 *)arg2;
- (float)averFpsAfterAppendSpeededTime:(CDStruct_1b6d18a9)arg1;
- (void)appendOutputTime:(CDStruct_1b6d18a9 *)arg1 withValue:(CDStruct_1b6d18a9)arg2;
- (void)resetRecordingAtSpeed:(float)arg1 forTargetFps:(float)arg2 withFpsTolerate:(float)arg3;
- (id)init;

@end

