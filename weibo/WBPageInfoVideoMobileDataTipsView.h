//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, WBVideoItem;

@interface WBPageInfoVideoMobileDataTipsView : UIView
{
    UIView *_backgroundView;
    UILabel *_tipsLabel;
    UIButton *_tipsPlayButton;
    UILabel *_tipsPlayLabel;
    UIButton *_freeDataButton;
    UILabel *_freeDataLabel;
    WBVideoItem *_videoItem;
}

@property(retain, nonatomic) WBVideoItem *videoItem; // @synthesize videoItem=_videoItem;
@property(retain, nonatomic) UILabel *freeDataLabel; // @synthesize freeDataLabel=_freeDataLabel;
@property(retain, nonatomic) UIButton *freeDataButton; // @synthesize freeDataButton=_freeDataButton;
@property(retain, nonatomic) UILabel *tipsPlayLabel; // @synthesize tipsPlayLabel=_tipsPlayLabel;
@property(retain, nonatomic) UIButton *tipsPlayButton; // @synthesize tipsPlayButton=_tipsPlayButton;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (_Bool)shouldShowVideoFeedCardNewRatio;
- (long long)mobileDataPlayButtonPressedTimesInHistory;
- (void)recordMobileDataPlayButtonPressed;
- (_Bool)hasPressedMobileDataPlayButtonOverTimesInHistory;
- (void)pressMobileDataPlayButton;
- (_Bool)hasPressedMobileDataPlayButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

