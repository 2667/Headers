//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSAvatarView, SSThemedLabel, SSThemedView, TTFollowThemeButton;
@protocol TTContactsAddFriendsTableViewCellDelegate;

@interface TTContactsAddFriendsTableViewCell : SSThemedTableViewCell
{
    id <TTContactsAddFriendsTableViewCellDelegate> _delegate;
    SSAvatarView *_avatarView;
    SSThemedLabel *_nameLabel;
    SSThemedLabel *_descLabel;
    TTFollowThemeButton *_followButton;
    SSThemedView *_bottomLineView;
}

@property(retain, nonatomic) SSThemedView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) TTFollowThemeButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) SSThemedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) SSAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak id <TTContactsAddFriendsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configWithFriendModel:(id)arg1;
- (void)followAction:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
