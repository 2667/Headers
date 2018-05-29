//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton, UIImageView, UILabel, UIView;

@interface WBMusicVplusAlertCard : UIControl
{
    UIButton *_cancelBtn;
    UIView *_backCard;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *backCard; // @synthesize backCard=_backCard;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
- (void).cxx_destruct;
- (void)removeCard:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)reloadDataWithText:(id)arg1 picUrl:(id)arg2;
- (void)showInView:(id)arg1;
- (void)createSubViews;
- (void)layoutSubviews;
- (id)init;

@end

