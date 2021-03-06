//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface InviteListViewCell : SSThemedTableViewCell
{
    UIImageView *inviteIcon;
    UILabel *inviteText;
    UIImageView *arrowView;
    UIView *_bottomLineView;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView;
@property(retain, nonatomic) UILabel *inviteText; // @synthesize inviteText;
@property(retain, nonatomic) UIImageView *inviteIcon; // @synthesize inviteIcon;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)_bottomLineViewFrame;
- (void)refreshUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

