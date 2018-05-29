//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVAudioRecorderDelegate-Protocol.h"

@class AVAudioRecorder, NSError, NSString, NSURL, WBCameraCaptureVideoWriter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface WBCameraCaptureMediaWriter : NSObject <AVAudioRecorderDelegate>
{
    struct {
        unsigned int isSetupStartTime:1;
    } _flags;
    struct {
        long long video_start_time;
        long long video_stop_time;
        long long audio_start_time;
        long long audio_stop_time;
        unsigned char audio_config_error;
        unsigned char canceled;
    } _logs;
    unsigned long long _status;
    WBCameraCaptureVideoWriter *_videoWriter;
    NSError *_error;
    NSURL *_videoOutputURL;
    NSURL *_audioOutputURL;
    NSObject<OS_dispatch_queue> *_audioQueue;
    AVAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_semaphore> *_audioFinishSemaphore;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *audioFinishSemaphore; // @synthesize audioFinishSemaphore=_audioFinishSemaphore;
@property(retain, nonatomic) AVAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) NSURL *audioOutputURL; // @synthesize audioOutputURL=_audioOutputURL;
@property(retain, nonatomic) NSURL *videoOutputURL; // @synthesize videoOutputURL=_videoOutputURL;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) WBCameraCaptureVideoWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)outputFileURLIsAudio:(_Bool)arg1;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (id)getLogStatistics;
- (void)resetLogStatistics;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancleWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clean;
- (void)processTexture:(unsigned int)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)resetAudioSeesion;
- (void)configAudioSession;
- (void)stopAudioRecorder;
- (void)startAudioRecorderIfNeeded;
- (_Bool)startWriting;
@property(readonly, nonatomic) _Bool isWriting;
- (id)_metadataArray;
- (void)setupAudioRecorder;
- (id)initWithURL:(id)arg1 context:(id)arg2 size:(struct CGSize)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

