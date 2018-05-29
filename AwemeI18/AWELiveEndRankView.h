//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWELiveRoomTopUser, UIImageView, UILabel;

@interface AWELiveEndRankView : UIView
{
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_totalCoinsLabel;
    AWELiveRoomTopUser *_topUserModel;
}

@property(retain, nonatomic) AWELiveRoomTopUser *topUserModel; // @synthesize topUserModel=_topUserModel;
@property(retain, nonatomic) UILabel *totalCoinsLabel; // @synthesize totalCoinsLabel=_totalCoinsLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)userTapped:(id)arg1;
- (void)_layoutSubview:(long long)arg1;
- (void)_setAvatarView:(id)arg1 WithRank:(long long)arg2;
- (void)configWithData:(id)arg1 WithRank:(long long)arg2;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

