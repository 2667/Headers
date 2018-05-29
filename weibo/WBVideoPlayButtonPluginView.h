//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoPluginBaseView.h"

@class WBVideoPlayButton;

@interface WBVideoPlayButtonPluginView : WBVideoPluginBaseView
{
    _Bool _disableEnterFullScreen;
    WBVideoPlayButton *_playButton;
}

+ (unsigned long long)defaultPresentationStateVisibilityOptions;
+ (unsigned long long)defaultPlaybackStateVisibilityOptions;
@property(retain, nonatomic) WBVideoPlayButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) _Bool disableEnterFullScreen; // @synthesize disableEnterFullScreen=_disableEnterFullScreen;
- (void).cxx_destruct;
- (void)prepareForDisplay;
- (void)playButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

