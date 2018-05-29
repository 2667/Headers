//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel, WBContentImageView;

@interface WBOfflineVideoTipsView : UIView
{
    NSString *_coverImgUrl;
    UIView *_seperateLine;
    UIImageView *_shadowImgView;
    WBContentImageView *_iconView;
    UIImageView *_playIconView;
    UILabel *_detailLabel;
    UIButton *_accessoryButton;
}

@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIImageView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) WBContentImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *shadowImgView; // @synthesize shadowImgView=_shadowImgView;
@property(retain, nonatomic) UIView *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(copy, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

