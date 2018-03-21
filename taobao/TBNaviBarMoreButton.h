//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, NSTimer, TBNaviBarMoreButtonItemView;

@interface TBNaviBarMoreButton : UIView
{
    _Bool _isShowBadge;
    _Bool _isMsgButton;
    _Bool _isDisableHighlight;
    UIView *_backgroundView;
    double _iconFontSize;
    NSString *_accessibilityTitle;
    TBNaviBarMoreButtonItemView *_topItemView;
    TBNaviBarMoreButtonItemView *_norItemView;
    UIView *_badgeView;
    NSTimer *_timer;
    NSArray *_normalImages;
    NSArray *_messageImages;
    struct UIEdgeInsets _hotEdgeInsets;
    struct CGRect _hitFrame;
}

@property(nonatomic) struct CGRect hitFrame; // @synthesize hitFrame=_hitFrame;
@property(retain, nonatomic) NSArray *messageImages; // @synthesize messageImages=_messageImages;
@property(retain, nonatomic) NSArray *normalImages; // @synthesize normalImages=_normalImages;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) TBNaviBarMoreButtonItemView *norItemView; // @synthesize norItemView=_norItemView;
@property(retain, nonatomic) TBNaviBarMoreButtonItemView *topItemView; // @synthesize topItemView=_topItemView;
@property(copy, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle=_accessibilityTitle;
@property(nonatomic) double iconFontSize; // @synthesize iconFontSize=_iconFontSize;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct UIEdgeInsets hotEdgeInsets; // @synthesize hotEdgeInsets=_hotEdgeInsets;
@property(nonatomic) _Bool isDisableHighlight; // @synthesize isDisableHighlight=_isDisableHighlight;
@property(nonatomic) _Bool isMsgButton; // @synthesize isMsgButton=_isMsgButton;
@property(nonatomic) _Bool isShowBadge; // @synthesize isShowBadge=_isShowBadge;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)timerFired:(id)arg1;
- (void)showNormalMessageTypeBadge:(long long)arg1 animationed:(_Bool)arg2;
- (void)showWangWangTypeBadge:(long long)arg1 animationed:(_Bool)arg2;
- (void)setWangIconFontImageColorN:(id)arg1 colorH:(id)arg2;
- (void)setMsgIconFontImageColorN:(id)arg1 colorH:(id)arg2;
- (void)setBadgeNumberOrigin:(struct CGPoint)arg1 badgePointOrigin:(struct CGPoint)arg2;
- (void)resetButtonStatus;
- (void)updateBadgeCount:(long long)arg1 messagetype:(long long)arg2 animation:(_Bool)arg3;
- (void)setBadgeBackColor:(id)arg1 textColor:(id)arg2 badgeBorderColor:(id)arg3;
- (void)setBadgeBackColor:(id)arg1 textColor:(id)arg2 badgeBorderWidth:(double)arg3 badgeBorderColor:(id)arg4;
- (void)setBadgeBackColor:(id)arg1 textColor:(id)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)layoutSubviews;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets;
- (id)initWithFrame:(struct CGRect)arg1 normalItemImages:(id)arg2 messageItemsImages:(id)arg3;

@end
