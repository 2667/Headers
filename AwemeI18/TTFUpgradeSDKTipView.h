//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTFantasyButton, TTFantasyImageView, TTFantasyLabel;

@interface TTFUpgradeSDKTipView : UIView
{
    _Bool _clickUpgrade;
    unsigned long long _tipType;
    UIView *_backgroundMaskView;
    UIView *_containerView;
    TTFantasyImageView *_imageView;
    TTFantasyButton *_closeButton;
    TTFantasyLabel *_titleLabel;
    TTFantasyLabel *_subTitleLabel;
    TTFantasyButton *_shareButton;
    unsigned long long _bgTask;
}

+ (void)setShowedTimeInterval:(double)arg1;
+ (double)showedTimeInterval;
+ (void)setHasShown:(_Bool)arg1;
+ (_Bool)hasShown;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(nonatomic) _Bool clickUpgrade; // @synthesize clickUpgrade=_clickUpgrade;
@property(retain, nonatomic) TTFantasyButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TTFantasyLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) TTFantasyLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTFantasyButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) TTFantasyImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(nonatomic) unsigned long long tipType; // @synthesize tipType=_tipType;
- (void).cxx_destruct;
- (id)butttonText;
- (id)subTitle;
- (id)title;
- (void)didEnterBackground:(id)arg1;
- (void)openAppStore;
- (void)hide;
- (void)showInView:(id)arg1;
- (id)getSubTitleAttributedString;
- (void)initComponents;
- (id)initWithFrame:(struct CGRect)arg1 tipType:(unsigned long long)arg2;
- (void)dealloc;

@end

