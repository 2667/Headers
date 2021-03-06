//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AWEUserDetailNavView : UIView
{
    _Bool _isCurrentUser;
    _Bool _homepage;
    UIView *_containerView;
    UIButton *_backBtn;
    UILabel *_titleLabel;
    UIButton *_relationBtn;
}

@property(nonatomic) _Bool homepage; // @synthesize homepage=_homepage;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(retain, nonatomic) UIButton *relationBtn; // @synthesize relationBtn=_relationBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)updateRelationBtnWithFollowStatus:(long long)arg1 useImg:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_setupUI;
- (id)initWithIsCurrentUser:(_Bool)arg1 homepage:(_Bool)arg2;
- (id)initWithIsCurrentUser:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

