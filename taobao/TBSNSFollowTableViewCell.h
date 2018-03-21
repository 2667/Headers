//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSTableViewCell.h"

@class TBSNSFollowBaseModel, UIView;

@interface TBSNSFollowTableViewCell : TBSNSTableViewCell
{
    _Bool _showTopSeperatorView;
    _Bool _showBottomSeperatorView;
    UIView *_topSeperatorView;
    UIView *_bottomSeperatorView;
    TBSNSFollowBaseModel *_model;
}

@property(retain, nonatomic) TBSNSFollowBaseModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool showBottomSeperatorView; // @synthesize showBottomSeperatorView=_showBottomSeperatorView;
@property(nonatomic) _Bool showTopSeperatorView; // @synthesize showTopSeperatorView=_showTopSeperatorView;
@property(retain, nonatomic) UIView *bottomSeperatorView; // @synthesize bottomSeperatorView=_bottomSeperatorView;
@property(retain, nonatomic) UIView *topSeperatorView; // @synthesize topSeperatorView=_topSeperatorView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end
