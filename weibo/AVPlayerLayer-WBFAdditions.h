//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayerLayer.h>

#import "WBFAVPlayerLayer-Protocol.h"

@class NSDictionary, NSString;
@protocol WBFAVPlayer;

@interface AVPlayerLayer (WBFAdditions) <WBFAVPlayerLayer>
@property(readonly, nonatomic) NSDictionary *extraLoggingData;
- (void)didResetPlayerPropertiesWithPlayer:(id)arg1;
- (void)willResetPlayerPropertiesWithPlayer:(id)arg1;
@property(readonly, nonatomic) double mostRecentRenderTimestamp;
@property(readonly, nonatomic) _Bool animatesVideoGravityAutomatically;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <WBFAVPlayer> player;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@property(readonly) Class superclass;
@property(copy) NSString *videoGravity;
@property(readonly, nonatomic) struct CGRect videoRect;
@end

