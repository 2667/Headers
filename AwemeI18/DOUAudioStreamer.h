//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DOUAudioDecoder, DOUAudioFileProvider, DOUAudioPlaybackItem, NSArray, NSError, NSString, NSURL;
@protocol DOUAudioFile;

@interface DOUAudioStreamer : NSObject
{
    id <DOUAudioFile> _audioFile;
    unsigned long long _status;
    NSError *_error;
    double _duration;
    long long _timingOffset;
    DOUAudioFileProvider *_fileProvider;
    DOUAudioPlaybackItem *_playbackItem;
    DOUAudioDecoder *_decoder;
    double _bufferingRatio;
    _Bool _pausedByInterruption;
}

+ (void)setHintWithAudioFile:(id)arg1;
+ (void)setAnalyzers:(id)arg1;
+ (id)analyzers;
+ (void)setVolume:(double)arg1;
+ (double)volume;
+ (id)streamerWithAudioFile:(id)arg1;
+ (void)setOptions:(unsigned long long)arg1;
+ (unsigned long long)options;
@property(nonatomic, getter=isPausedByInterruption) _Bool pausedByInterruption; // @synthesize pausedByInterruption=_pausedByInterruption;
@property(nonatomic) double bufferingRatio; // @synthesize bufferingRatio=_bufferingRatio;
@property(retain, nonatomic) DOUAudioDecoder *decoder; // @synthesize decoder=_decoder;
@property(retain, nonatomic) DOUAudioPlaybackItem *playbackItem; // @synthesize playbackItem=_playbackItem;
@property(readonly, nonatomic) DOUAudioFileProvider *fileProvider; // @synthesize fileProvider=_fileProvider;
@property(nonatomic) long long timingOffset; // @synthesize timingOffset=_timingOffset;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain) NSError *error; // @synthesize error=_error;
@property unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)stop;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) unsigned long long downloadSpeed;
@property(readonly, nonatomic) unsigned long long receivedLength;
@property(readonly, nonatomic) unsigned long long expectedLength;
@property(readonly, nonatomic) NSString *sha256;
@property(readonly, nonatomic) NSURL *cachedURL;
@property(readonly, nonatomic) NSString *cachedPath;
@property(copy, nonatomic) NSArray *analyzers;
@property(nonatomic) double volume;
@property(nonatomic) double currentTime;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) id <DOUAudioFile> audioFile;
- (id)initWithAudioFile:(id)arg1;

@end

