//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class MMMessageBoxCellAdpativeValue, UIImageView, WBBadgeView, WBContentImageView;

@interface WBMessageBoxCell : WBTableViewCell
{
    WBContentImageView *avatarView;
    UIImageView *arrowImageView;
    WBBadgeView *badgeView;
    UIImageView *dotView;
    UIImageView *_seperatorView;
    MMMessageBoxCellAdpativeValue *adpativeValue;
}

- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setConversation:(id)arg1;
- (_Bool)useDefaultBackgroundColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

