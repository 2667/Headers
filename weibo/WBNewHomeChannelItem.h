//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSegmentChannelItem.h"

@class UIImageView, UILabel, UIView;

@interface WBNewHomeChannelItem : WBSegmentChannelItem
{
    UIImageView *unreadDot;
    _Bool hasUnread;
    UIView *bgView;
    UILabel *textlabel;
    UIImageView *arrowImageView;
}

- (void).cxx_destruct;
- (id)createImageWithColor:(id)arg1;
- (void)itemClick:(id)arg1;
- (void)arrowBgViewBeTap:(id)arg1;
- (void)layoutSubviews;
- (void)switchToStateMustShowEditing;
- (void)switchToStateMustShowNormal;
- (void)switchToStateUnused;
- (void)switchToStateCurrentEditing;
- (void)switchToStateCurrentNormal;
- (void)setChannelModel:(id)arg1;
- (void)setHasUnread:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

