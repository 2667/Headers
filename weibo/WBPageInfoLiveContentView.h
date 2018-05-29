//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageInfoMediaContentView.h"

@class CAGradientLayer, UIButton, UIImageView, UILabel, WBLiveInfoFlowerView, WBTimelinePageInfo;

@interface WBPageInfoLiveContentView : WBPageInfoMediaContentView
{
    WBTimelinePageInfo *_pageInfo;
    UIButton *_playButton;
    WBLiveInfoFlowerView *_liveInfoFlowerView;
    UIImageView *_liveIconImageView;
    UIImageView *_livingFlagImageView;
    UILabel *_playCountLabel;
    CAGradientLayer *_playCountLabelGradientLayer;
    UILabel *_timeLabel;
    UIImageView *_cornerMarkImageView;
}

@property(retain, nonatomic) UIImageView *cornerMarkImageView; // @synthesize cornerMarkImageView=_cornerMarkImageView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) CAGradientLayer *playCountLabelGradientLayer; // @synthesize playCountLabelGradientLayer=_playCountLabelGradientLayer;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UIImageView *livingFlagImageView; // @synthesize livingFlagImageView=_livingFlagImageView;
@property(retain, nonatomic) UIImageView *liveIconImageView; // @synthesize liveIconImageView=_liveIconImageView;
@property(retain, nonatomic) WBLiveInfoFlowerView *liveInfoFlowerView; // @synthesize liveInfoFlowerView=_liveInfoFlowerView;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) WBTimelinePageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
- (void).cxx_destruct;
- (id)playActionAnalysisParametersWithExtraParameters:(id)arg1;
- (void)logRealtimePlayActionWithExtraParameters:(id)arg1;
- (void)playButtonPressed:(id)arg1;
- (id)status;
- (void)updateViewWithPageInfo:(id)arg1;
- (void)configBottomLabels:(id)arg1;
- (void)updateCornerMarkImageView:(id)arg1;
- (double)liveInfoFlowerViewLeftMargin;
- (double)liveInfoFlowerViewTopMargin;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

