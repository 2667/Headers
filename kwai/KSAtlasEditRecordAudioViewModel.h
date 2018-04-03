//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSAudioRecorder, NSURL;

@interface KSAtlasEditRecordAudioViewModel : NSObject
{
    _Bool _recordStarted;
    float _fps;
    double _totalTime;
    NSURL *_audioFileURL;
    KSAudioRecorder *_recorder;
}

@property(nonatomic) _Bool recordStarted; // @synthesize recordStarted=_recordStarted;
@property(retain, nonatomic) KSAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) NSURL *audioFileURL; // @synthesize audioFileURL=_audioFileURL;
@property(readonly, nonatomic) float fps; // @synthesize fps=_fps;
@property(readonly, nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
- (void).cxx_destruct;
- (void)cancel;
- (void)finish;
- (void)pause;
- (void)start;
- (id)initWithTotalTime:(double)arg1;

@end

