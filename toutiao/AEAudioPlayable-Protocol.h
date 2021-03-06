//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AEAudioController;

@protocol AEAudioPlayable <NSObject>
@property(readonly, nonatomic) CDUnknownFunctionPointerType renderCallback;

@optional
@property(readonly, nonatomic) struct AudioStreamBasicDescription audioDescription;
@property(readonly, nonatomic) _Bool channelIsMuted;
@property(readonly, nonatomic) _Bool channelIsPlaying;
@property(readonly, nonatomic) float pan;
@property(readonly, nonatomic) float volume;
- (void)teardown;
- (void)setupWithAudioController:(AEAudioController *)arg1;
@end

