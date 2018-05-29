//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoProgressBarBaseSubPlugin.h"

@class NSString, UIButton;

@interface WBVideoProgressBarDefinitionPlugin : WBVideoProgressBarBaseSubPlugin
{
    _Bool _switchingQuality;
    NSString *_lastVideoItemID;
    UIButton *_resolutionButton;
}

@property(retain, nonatomic) UIButton *resolutionButton; // @synthesize resolutionButton=_resolutionButton;
@property(copy, nonatomic) NSString *lastVideoItemID; // @synthesize lastVideoItemID=_lastVideoItemID;
@property(nonatomic) _Bool switchingQuality; // @synthesize switchingQuality=_switchingQuality;
- (void).cxx_destruct;
- (void)commitLogNotification:(id)arg1;
- (_Bool)available;
- (id)resolutionIdentifier;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateDefinitionButtonState;
- (void)videoPlayerControllerIsReady:(id)arg1;
- (void)videoPlayerController:(id)arg1 didRequestPlaybackForVideoItem:(id)arg2;
- (void)videoPlayerController:(id)arg1 didTransitionFromPlaybackState:(long long)arg2 toPlaybackState:(long long)arg3;
- (void)qualityButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

