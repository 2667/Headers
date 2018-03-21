//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, TBFavoriteCategoryModel, UIButton, UIImageView, UILabel;
@protocol TBFavoriteCategoryCollectionViewSummaryCellDelegate;

@interface TBFavoriteCategoryCollectionViewSummaryCell : UICollectionViewCell <UITextFieldDelegate>
{
    _Bool _aboutToShowAnimation;
    _Bool _isEditing;
    TBFavoriteCategoryModel *_category;
    id <TBFavoriteCategoryCollectionViewSummaryCellDelegate> _delegate;
    UIImageView *_avatarImageView;
    UILabel *_userNickLabel;
    UIImageView *_backgroundImageView;
    NSString *_categoryNewName;
    UILabel *_categoryNameLabel;
    UIButton *_editButton;
    UILabel *_introLabel;
    UILabel *_footerLabel;
    UILabel *_categoryTypeLabel;
    UIButton *_donationButton;
}

+ (struct CGSize)cellSizeForCategory:(id)arg1;
@property(retain, nonatomic) UIButton *donationButton; // @synthesize donationButton=_donationButton;
@property(retain, nonatomic) UILabel *categoryTypeLabel; // @synthesize categoryTypeLabel=_categoryTypeLabel;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UILabel *categoryNameLabel; // @synthesize categoryNameLabel=_categoryNameLabel;
@property(retain, nonatomic) NSString *categoryNewName; // @synthesize categoryNewName=_categoryNewName;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UILabel *userNickLabel; // @synthesize userNickLabel=_userNickLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak id <TBFavoriteCategoryCollectionViewSummaryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBFavoriteCategoryModel *category; // @synthesize category=_category;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) _Bool aboutToShowAnimation; // @synthesize aboutToShowAnimation=_aboutToShowAnimation;
- (void).cxx_destruct;
- (void)donationButtonClicked:(id)arg1;
- (void)editButtonClicked:(id)arg1;
- (_Bool)hasIntroText;
- (void)saveScreenButtonClicked:(id)arg1;
- (void)exitDeletingMode;
- (void)enterDeletingMode;
- (void)prepareForReuse;
- (void)refreshSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
