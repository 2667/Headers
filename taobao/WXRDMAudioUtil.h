//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, NSString;

@interface WXRDMAudioUtil : NSObject <AVAudioPlayerDelegate>
{
    double _designFrameCount;
    AVAudioPlayer *_audioPlayer;
    NSString *_oriSessionCategory;
}

+ (void)p_RecoveCategory;
+ (void)p_InitCheckCategory;
@property(retain, nonatomic) NSString *oriSessionCategory; // @synthesize oriSessionCategory=_oriSessionCategory;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) double designFrameCount; // @synthesize designFrameCount=_designFrameCount;
- (void).cxx_destruct;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
@property(readonly, getter=isPlaying) _Bool playing;
- (long long)getAudioCurrentConversionFrame;
- (double)getAudioCurrentScheduleRate;
- (double)getAudioCurrentTime;
- (double)getAudioDuration;
- (void)seek:(long long)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)dealloc;
- (id)initMusicData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

