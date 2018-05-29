//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AEAudioPlayable-Protocol.h"

@class NSString, NSURL;

@interface AEMemoryBufferPlayer : NSObject <AEAudioPlayable>
{
    struct AudioBufferList *_audio;
    _Bool _freeWhenDone;
    unsigned int _lengthInFrames;
    int _playhead;
    unsigned long long _startTime;
    _Bool _loop;
    _Bool _channelIsPlaying;
    _Bool _channelIsMuted;
    _Bool _removeUponFinish;
    float _volume;
    float _pan;
    struct AudioBufferList *_buffer;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _startLoopBlock;
    NSURL *_url;
    struct AudioStreamBasicDescription _audioDescription;
}

+ (void)beginLoadingAudioFileAtURL:(id)arg1 audioDescription:(struct AudioStreamBasicDescription)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType startLoopBlock; // @synthesize startLoopBlock=_startLoopBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool removeUponFinish; // @synthesize removeUponFinish=_removeUponFinish;
@property(nonatomic) _Bool channelIsMuted; // @synthesize channelIsMuted=_channelIsMuted;
@property(nonatomic) _Bool channelIsPlaying; // @synthesize channelIsPlaying=_channelIsPlaying;
@property(nonatomic) float pan; // @synthesize pan=_pan;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(readonly, nonatomic) struct AudioStreamBasicDescription audioDescription; // @synthesize audioDescription=_audioDescription;
@property(readonly, nonatomic) struct AudioBufferList *buffer; // @synthesize buffer=_buffer;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownFunctionPointerType renderCallback;
@property(nonatomic) double currentTime; // @dynamic currentTime;
@property(readonly, nonatomic) double duration; // @dynamic duration;
- (void)playAtTime:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithBuffer:(struct AudioBufferList *)arg1 audioDescription:(struct AudioStreamBasicDescription)arg2 freeWhenDone:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

