//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol WBFAVPlayer;

@protocol WBFAVPlayerLayer <NSObject>
@property(readonly, nonatomic) NSDictionary *extraLoggingData;
@property(readonly, nonatomic) _Bool animatesVideoGravityAutomatically;
@property(readonly, nonatomic) struct CGRect videoRect;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@property(copy) NSString *videoGravity;
@property(retain, nonatomic) id <WBFAVPlayer> player;

@optional
@property(readonly, nonatomic) double mostRecentRenderTimestamp;
- (void)didResetPlayerPropertiesWithPlayer:(id <WBFAVPlayer>)arg1;
- (void)willResetPlayerPropertiesWithPlayer:(id <WBFAVPlayer>)arg1;
@end

