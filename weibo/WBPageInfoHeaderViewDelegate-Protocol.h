//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBPageInfoHeaderView;

@protocol WBPageInfoHeaderViewDelegate <NSObject>

@optional
- (void)pageInfoViewDidPressBackground:(WBPageInfoHeaderView *)arg1;
- (void)pageInfoViewDidPressLike:(WBPageInfoHeaderView *)arg1;
- (void)pageInfoViewDidPressVerificationView:(WBPageInfoHeaderView *)arg1;
- (void)pageInfoViewDidPressAvatarView:(WBPageInfoHeaderView *)arg1;
@end

