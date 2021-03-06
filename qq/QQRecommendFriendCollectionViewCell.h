//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, QQAvatarView, QQRecommendedFriend, UIButton, UILabel, UIView;

@interface QQRecommendFriendCollectionViewCell : UICollectionViewCell
{
    QQRecommendedFriend *_friend;
    QQAvatarView *_headerImageView;
    UIButton *_removeButton;
    UIView *_addButton;
    UILabel *_nameLabel;
    UILabel *_mutualFriendLabel;
    NSString *_addButtonTitle;
}

@property(retain, nonatomic) QQRecommendedFriend *friend; // @synthesize friend=_friend;
- (void).cxx_destruct;
- (void)headerImageViewTaped:(id)arg1;
- (void)addButtonTaped:(id)arg1;
- (void)removeButtonTaped:(id)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)createAddButtonWithTitle:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

