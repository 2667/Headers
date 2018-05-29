//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, WBTimelineLikeButton, WBVideoStatusInfoContentView;

@protocol WBVideoStatusInfoContentViewDelegate <NSObject>
- (void)videoStatusInfoContentView:(WBVideoStatusInfoContentView *)arg1 repostButtonPressed:(UIButton *)arg2;
- (void)videoStatusInfoContentView:(WBVideoStatusInfoContentView *)arg1 textPlaceHolderButtonPressed:(UIButton *)arg2;
- (void)videoStatusInfoContentView:(WBVideoStatusInfoContentView *)arg1 likeButtonPressed:(WBTimelineLikeButton *)arg2;
- (void)videoStatusInfoContentView:(WBVideoStatusInfoContentView *)arg1 shareButtonPressed:(UIButton *)arg2;
- (void)videoStatusInfoContentView:(WBVideoStatusInfoContentView *)arg1 commentButtonPressed:(UIButton *)arg2;
- (void)videoStatusInfoContentView:(WBVideoStatusInfoContentView *)arg1 avatarViewPressed:(id)arg2;

@optional
- (void)videoStatusInfoContentViewPressed:(WBVideoStatusInfoContentView *)arg1;
@end

