//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBAccessoryLabelItem.h"

@class WBContentImageView, WBUIImageViewItem, WBUser;

@interface WBUserScreenNameLabelItem : WBAccessoryLabelItem
{
    WBUser *user;
    WBUIImageViewItem *genderIconImageView;
    WBUIImageViewItem *membershipIconImageView;
    WBUIImageViewItem *taobaoIconImageView;
    WBContentImageView *eventIconImageView;
    unsigned long long option;
    _Bool isShowUserRemarkName;
    long long _genderIconStyle;
}

@property(nonatomic) long long genderIconStyle; // @synthesize genderIconStyle=_genderIconStyle;
@property(nonatomic) _Bool isShowUserRemarkName; // @synthesize isShowUserRemarkName;
@property(nonatomic) unsigned long long option; // @synthesize option;
@property(retain, nonatomic) WBUser *user; // @synthesize user;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubitems;
- (id)initWithOption:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 option:(unsigned long long)arg2;

@end

