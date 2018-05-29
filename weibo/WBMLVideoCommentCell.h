//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLVideoCommentCellBase.h"

@class UIButton, UILabel, WBMLVideoAvatarView;

@interface WBMLVideoCommentCell : WBMLVideoCommentCellBase
{
    WBMLVideoAvatarView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_contentLabel;
    UIButton *_likeCommentBtn;
}

+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2;
@property(retain, nonatomic) UIButton *likeCommentBtn; // @synthesize likeCommentBtn=_likeCommentBtn;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WBMLVideoAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)onPressed:(id)arg1;
- (void)onCellTaped:(id)arg1;
- (void)layoutSubviews;
- (void)setCellTheme:(unsigned long long)arg1;
- (void)updateCellData;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

