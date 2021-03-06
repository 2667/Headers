//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStatusFwdCmtLikeBaseCell.h"

@class UIImageView, UILabel, WBContactAvatarView, WBContentUserScreenNameLabel, WBStatus, WBTimelineAttributedTextView, WBUser, WBUserScreenNameLabelControl;
@protocol WBRepostListTableViewCellDelegate;

@interface WBRepostListTableViewCell : WBStatusFwdCmtLikeBaseCell
{
    WBContactAvatarView *avatarView;
    WBUserScreenNameLabelControl *screenNameLabel;
    UILabel *timeLabel;
    WBTimelineAttributedTextView *contentTextView;
    WBUser *user;
    UILabel *repostLabel;
    UIImageView *repostLineImageView;
    id <WBRepostListTableViewCellDelegate> delegate;
    _Bool frameChanged;
    _Bool _shouldHighlighted;
    WBStatus *_status;
    WBContentUserScreenNameLabel *_asyncScreenNameLabel;
}

+ (double)rowHeightOfStatus:(id)arg1;
+ (id)contentOfStatus:(id)arg1;
@property(retain, nonatomic) WBContentUserScreenNameLabel *asyncScreenNameLabel; // @synthesize asyncScreenNameLabel=_asyncScreenNameLabel;
@property(nonatomic) _Bool shouldHighlighted; // @synthesize shouldHighlighted=_shouldHighlighted;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
@property(nonatomic) _Bool frameChanged; // @synthesize frameChanged;
@property(retain, nonatomic) WBUser *user; // @synthesize user;
@property(nonatomic) __weak id <WBRepostListTableViewCellDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)screenNameLabelPressed:(id)arg1;
- (void)screenNameLabelIconPressed:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)avatarViewPressed:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

