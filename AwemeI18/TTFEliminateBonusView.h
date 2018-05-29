//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTFEmbedShareView, TTFantasyButton, TTFantasyImageView, TTFantasyLabel;
@protocol TTFEliminateBonusViewDelegate;

@interface TTFEliminateBonusView : UIView
{
    id <TTFEliminateBonusViewDelegate> _delegate;
    UIView *_backgroundMaskView;
    UIView *_containerView;
    TTFantasyImageView *_imageView;
    TTFantasyButton *_closeButton;
    TTFantasyLabel *_titleLabel;
    TTFantasyLabel *_leftSubTitleLabel;
    TTFantasyLabel *_bonusLabel;
    TTFantasyLabel *_bonusUnitLabel;
    TTFantasyButton *_shareButton;
    TTFEmbedShareView *_embedShareView;
    long long _myBonus;
    long long _totalBonus;
    long long _questionIndex;
}

@property(nonatomic) long long questionIndex; // @synthesize questionIndex=_questionIndex;
@property(nonatomic) long long totalBonus; // @synthesize totalBonus=_totalBonus;
@property(nonatomic) long long myBonus; // @synthesize myBonus=_myBonus;
@property(retain, nonatomic) TTFEmbedShareView *embedShareView; // @synthesize embedShareView=_embedShareView;
@property(retain, nonatomic) TTFantasyButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TTFantasyLabel *bonusUnitLabel; // @synthesize bonusUnitLabel=_bonusUnitLabel;
@property(retain, nonatomic) TTFantasyLabel *bonusLabel; // @synthesize bonusLabel=_bonusLabel;
@property(retain, nonatomic) TTFantasyLabel *leftSubTitleLabel; // @synthesize leftSubTitleLabel=_leftSubTitleLabel;
@property(retain, nonatomic) TTFantasyLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTFantasyButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) TTFantasyImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(nonatomic) __weak id <TTFEliminateBonusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showBonusAnimation;
- (void)inviteFriends:(id)arg1;
- (void)hide;
- (void)showWithMyBonus:(long long)arg1 totalBonus:(long long)arg2 questionIndex:(long long)arg3 inView:(id)arg4 currency:(id)arg5;
- (void)initComponents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

