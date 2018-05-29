//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSTPlayHeaderBaseView.h"

#import "WBStoryFullScreenHeaderContainerDelegate-Protocol.h"

@class NSString, UIButton, WBStoryFullScreenDarkGradientView, WBStoryFullScreenProgressView, WBStoryItem, WBStoryLabel, WBStoryUserView;

@interface WBSTPlayVirtualHeaderView : WBSTPlayHeaderBaseView <WBStoryFullScreenHeaderContainerDelegate>
{
    UIButton *_interactiveButton;
    UIButton *_closeButton;
    WBStoryUserView *_userView;
    WBStoryLabel *_screenNameLabel;
    WBStoryLabel *_adLabel;
    UIButton *_moreButton;
    WBStoryFullScreenProgressView *_progressView;
    long long _providerType;
    WBStoryFullScreenDarkGradientView *_gradientView;
    unsigned long long _visibility;
}

@property(nonatomic) unsigned long long visibility; // @synthesize visibility=_visibility;
@property(nonatomic) WBStoryFullScreenDarkGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) long long providerType; // @synthesize providerType=_providerType;
@property(retain, nonatomic) WBStoryFullScreenProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) WBStoryLabel *adLabel; // @synthesize adLabel=_adLabel;
@property(retain, nonatomic) WBStoryLabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) WBStoryUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *interactiveButton; // @synthesize interactiveButton=_interactiveButton;
- (void).cxx_destruct;
- (_Bool)showAdLabel;
- (_Bool)shouldShowUserView;
- (id)actionButtons;
- (void)moreButtonPressed:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)updateItem:(id)arg1 segments:(id)arg2 segmentIndex:(unsigned long long)arg3;
@property(readonly, nonatomic) WBStoryUserView *profileView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIButton *followButton;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WBStoryItem *item;
@property(nonatomic) _Bool shouldShowCameraButton;
@property(nonatomic) _Bool showFollowTipsIfNeed;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WBStoryLabel *timeLabel;

@end

