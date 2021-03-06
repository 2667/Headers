//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TTFUserStruct, UIImageView, UILabel;

@interface TTFClearanceWinnerCell : UICollectionViewCell
{
    TTFUserStruct *_user;
    long long _prizeInCents;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_prizeInCentsLabel;
}

@property(retain, nonatomic) UILabel *prizeInCentsLabel; // @synthesize prizeInCentsLabel=_prizeInCentsLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) long long prizeInCents; // @synthesize prizeInCents=_prizeInCents;
@property(retain, nonatomic) TTFUserStruct *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)refreshWithUser:(id)arg1 prizeInCents:(long long)arg2 position:(long long)arg3;
- (void)prepareForReuse;
- (void)initComponents;
- (id)initWithFrame:(struct CGRect)arg1;

@end

