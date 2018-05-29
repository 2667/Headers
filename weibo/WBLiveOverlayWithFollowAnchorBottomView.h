//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBLiveBaseOverlayWithBottomWhiteView.h"

@class CAGradientLayer, WBLiveFollowButton;

@interface WBLiveOverlayWithFollowAnchorBottomView : WBLiveBaseOverlayWithBottomWhiteView
{
    CAGradientLayer *_shadowLayer;
    WBLiveFollowButton *_followStatusButton;
}

@property(retain, nonatomic) WBLiveFollowButton *followStatusButton; // @synthesize followStatusButton=_followStatusButton;
@property(retain, nonatomic) CAGradientLayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
- (void).cxx_destruct;
- (void)updateFollowStatus:(_Bool)arg1;
- (_Bool)isFollowAnchor;
- (void)clickFollowStatusButton:(id)arg1;
- (void)layoutSubviews;
- (void)configViewWithUser:(id)arg1 andCurrentUser:(id)arg2;
- (void)setupUI;

@end

